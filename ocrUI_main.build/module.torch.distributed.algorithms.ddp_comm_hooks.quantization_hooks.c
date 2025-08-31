/* Generated code for Python module 'torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks'
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

/* The "module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;
PyDictObject *moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[104];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 104; i++) {
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
void checkModuleConstants_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 104; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1d9380666245826b03342ef72f7cdee6;
static PyCodeObject *codeobj_098b0efda1c7b4b8b6fbb2b85fc395e7;
static PyCodeObject *codeobj_ed76614b6f2326008e43f28e0d75bea4;
static PyCodeObject *codeobj_9ede308c6387d97bd89f19cba15d76a3;
static PyCodeObject *codeobj_261755ea1c1019476c3a61c47cfea6f2;
static PyCodeObject *codeobj_1077c272bd36b4862ab003056f3236f9;
static PyCodeObject *codeobj_d950118d8918fbce2988b149197655d6;
static PyCodeObject *codeobj_43f5fdaeb19097925a8f674200a7f904;
static PyCodeObject *codeobj_b4b93dadafdcf722c5c055613e3bbf94;
static PyCodeObject *codeobj_c5cd47d4c5a0c2abcaf8a777cae98a21;
static PyCodeObject *codeobj_4f772c7434b6f7c4eb487941013fd1b1;
static PyCodeObject *codeobj_055d3f47c7c7b8a628eca5e73f2f9afc;
static PyCodeObject *codeobj_5f19be9bee701b0eff44fedece16afec;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[86]); CHECK_OBJECT(module_filename_obj);
    codeobj_1d9380666245826b03342ef72f7cdee6 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[88], NULL, 1, 0, 0);
    codeobj_098b0efda1c7b4b8b6fbb2b85fc395e7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[89], mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_ed76614b6f2326008e43f28e0d75bea4 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[90], NULL, 3, 0, 0);
    codeobj_9ede308c6387d97bd89f19cba15d76a3 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[91], NULL, 3, 0, 0);
    codeobj_261755ea1c1019476c3a61c47cfea6f2 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[92], NULL, 2, 0, 0);
    codeobj_1077c272bd36b4862ab003056f3236f9 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[93], NULL, 3, 0, 0);
    codeobj_d950118d8918fbce2988b149197655d6 = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[94], NULL, 3, 0, 0);
    codeobj_43f5fdaeb19097925a8f674200a7f904 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[95], mod_consts[96], 1, 0, 0);
    codeobj_b4b93dadafdcf722c5c055613e3bbf94 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[95], mod_consts[96], 1, 0, 0);
    codeobj_c5cd47d4c5a0c2abcaf8a777cae98a21 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[97], NULL, 3, 0, 0);
    codeobj_4f772c7434b6f7c4eb487941013fd1b1 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[98], NULL, 2, 0, 0);
    codeobj_055d3f47c7c7b8a628eca5e73f2f9afc = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[36], mod_consts[36], mod_consts[99], mod_consts[100], 1, 0, 0);
    codeobj_5f19be9bee701b0eff44fedece16afec = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[36], mod_consts[36], mod_consts[101], mod_consts[102], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__1__quantize_per_tensor_cuda();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__2__dequantize_per_tensor_cuda();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__3__quantize_per_channel_cuda();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__4__dequantize_per_channel_cuda();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__5__get_allgather_out_list();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__1_quantize_and_allgather(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__2_dequantize_and_aggregate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__1_quantize_and_allgather(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__2_dequantize_and_aggregate(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__1__quantize_per_tensor_cuda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_scale = python_pars[1];
    PyObject *par_zero_point = python_pars[2];
    PyObject *var_y = NULL;
    struct Nuitka_FrameObject *frame_d950118d8918fbce2988b149197655d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d950118d8918fbce2988b149197655d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d950118d8918fbce2988b149197655d6)) {
        Py_XDECREF(cache_frame_d950118d8918fbce2988b149197655d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d950118d8918fbce2988b149197655d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d950118d8918fbce2988b149197655d6 = MAKE_FUNCTION_FRAME(codeobj_d950118d8918fbce2988b149197655d6, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d950118d8918fbce2988b149197655d6->m_type_description == NULL);
    frame_d950118d8918fbce2988b149197655d6 = cache_frame_d950118d8918fbce2988b149197655d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d950118d8918fbce2988b149197655d6);
    assert(Py_REFCNT(frame_d950118d8918fbce2988b149197655d6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_truediv_expr_left_1 = par_x;
        CHECK_OBJECT(par_scale);
        tmp_truediv_expr_right_1 = par_scale;
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d950118d8918fbce2988b149197655d6->m_frame.f_lineno = 7;
        tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_zero_point);
        tmp_add_expr_right_1 = par_zero_point;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y);
        tmp_args_element_value_2 = var_y;
        tmp_args_element_value_3 = mod_consts[3];
        tmp_args_element_value_4 = mod_consts[4];
        frame_d950118d8918fbce2988b149197655d6->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[2],
                call_args
            );
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d950118d8918fbce2988b149197655d6->m_frame.f_lineno = 8;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            assert(old != NULL);
            var_y = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d950118d8918fbce2988b149197655d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d950118d8918fbce2988b149197655d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d950118d8918fbce2988b149197655d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d950118d8918fbce2988b149197655d6,
        type_description_1,
        par_x,
        par_scale,
        par_zero_point,
        var_y
    );


    // Release cached frame if used for exception.
    if (frame_d950118d8918fbce2988b149197655d6 == cache_frame_d950118d8918fbce2988b149197655d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d950118d8918fbce2988b149197655d6);
        cache_frame_d950118d8918fbce2988b149197655d6 = NULL;
    }

    assertFrameObject(frame_d950118d8918fbce2988b149197655d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_y);
    tmp_return_value = var_y;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
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

    Py_XDECREF(var_y);
    var_y = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__2__dequantize_per_tensor_cuda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[0];
    PyObject *par_scale = python_pars[1];
    PyObject *par_zero_point = python_pars[2];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_9ede308c6387d97bd89f19cba15d76a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ede308c6387d97bd89f19cba15d76a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9ede308c6387d97bd89f19cba15d76a3)) {
        Py_XDECREF(cache_frame_9ede308c6387d97bd89f19cba15d76a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ede308c6387d97bd89f19cba15d76a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ede308c6387d97bd89f19cba15d76a3 = MAKE_FUNCTION_FRAME(codeobj_9ede308c6387d97bd89f19cba15d76a3, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ede308c6387d97bd89f19cba15d76a3->m_type_description == NULL);
    frame_9ede308c6387d97bd89f19cba15d76a3 = cache_frame_9ede308c6387d97bd89f19cba15d76a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ede308c6387d97bd89f19cba15d76a3);
    assert(Py_REFCNT(frame_9ede308c6387d97bd89f19cba15d76a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_scale);
        tmp_mult_expr_left_1 = par_scale;
        CHECK_OBJECT(par_y);
        tmp_expression_value_1 = par_y;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_9ede308c6387d97bd89f19cba15d76a3->m_frame.f_lineno = 13;
        tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_zero_point);
        tmp_sub_expr_right_1 = par_zero_point;
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ede308c6387d97bd89f19cba15d76a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ede308c6387d97bd89f19cba15d76a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ede308c6387d97bd89f19cba15d76a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ede308c6387d97bd89f19cba15d76a3,
        type_description_1,
        par_y,
        par_scale,
        par_zero_point,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_9ede308c6387d97bd89f19cba15d76a3 == cache_frame_9ede308c6387d97bd89f19cba15d76a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ede308c6387d97bd89f19cba15d76a3);
        cache_frame_9ede308c6387d97bd89f19cba15d76a3 = NULL;
    }

    assertFrameObject(frame_9ede308c6387d97bd89f19cba15d76a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_x);
    tmp_return_value = var_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
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
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__3__quantize_per_channel_cuda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_scale = python_pars[1];
    PyObject *par_zero_point = python_pars[2];
    PyObject *var_y = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1077c272bd36b4862ab003056f3236f9;
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
    static struct Nuitka_FrameObject *cache_frame_1077c272bd36b4862ab003056f3236f9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1077c272bd36b4862ab003056f3236f9)) {
        Py_XDECREF(cache_frame_1077c272bd36b4862ab003056f3236f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1077c272bd36b4862ab003056f3236f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1077c272bd36b4862ab003056f3236f9 = MAKE_FUNCTION_FRAME(codeobj_1077c272bd36b4862ab003056f3236f9, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1077c272bd36b4862ab003056f3236f9->m_type_description == NULL);
    frame_1077c272bd36b4862ab003056f3236f9 = cache_frame_1077c272bd36b4862ab003056f3236f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1077c272bd36b4862ab003056f3236f9);
    assert(Py_REFCNT(frame_1077c272bd36b4862ab003056f3236f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_1077c272bd36b4862ab003056f3236f9->m_frame.f_lineno = 18;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1077c272bd36b4862ab003056f3236f9->m_frame.f_lineno = 18;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_2 = par_x;
        frame_1077c272bd36b4862ab003056f3236f9->m_frame.f_lineno = 19;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
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
                exception_lineno = 19;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_x);
        tmp_expression_value_5 = par_x;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_1 = var_i;
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_6 = par_scale;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_1077c272bd36b4862ab003056f3236f9->m_frame.f_lineno = 20;
        tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_zero_point);
        tmp_expression_value_7 = par_zero_point;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (var_y == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_y;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_2 = var_i;
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_2);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 19;
        type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_y == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_y;
        tmp_args_element_value_3 = mod_consts[3];
        tmp_args_element_value_4 = mod_consts[4];
        frame_1077c272bd36b4862ab003056f3236f9->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[5]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[6]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1077c272bd36b4862ab003056f3236f9->m_frame.f_lineno = 21;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1077c272bd36b4862ab003056f3236f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1077c272bd36b4862ab003056f3236f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1077c272bd36b4862ab003056f3236f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1077c272bd36b4862ab003056f3236f9,
        type_description_1,
        par_x,
        par_scale,
        par_zero_point,
        var_y,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_1077c272bd36b4862ab003056f3236f9 == cache_frame_1077c272bd36b4862ab003056f3236f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1077c272bd36b4862ab003056f3236f9);
        cache_frame_1077c272bd36b4862ab003056f3236f9 = NULL;
    }

    assertFrameObject(frame_1077c272bd36b4862ab003056f3236f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_y);
    tmp_return_value = var_y;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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

    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__4__dequantize_per_channel_cuda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[0];
    PyObject *par_scale = python_pars[1];
    PyObject *par_zero_point = python_pars[2];
    PyObject *var_x = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ed76614b6f2326008e43f28e0d75bea4;
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
    static struct Nuitka_FrameObject *cache_frame_ed76614b6f2326008e43f28e0d75bea4 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ed76614b6f2326008e43f28e0d75bea4)) {
        Py_XDECREF(cache_frame_ed76614b6f2326008e43f28e0d75bea4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed76614b6f2326008e43f28e0d75bea4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed76614b6f2326008e43f28e0d75bea4 = MAKE_FUNCTION_FRAME(codeobj_ed76614b6f2326008e43f28e0d75bea4, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed76614b6f2326008e43f28e0d75bea4->m_type_description == NULL);
    frame_ed76614b6f2326008e43f28e0d75bea4 = cache_frame_ed76614b6f2326008e43f28e0d75bea4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ed76614b6f2326008e43f28e0d75bea4);
    assert(Py_REFCNT(frame_ed76614b6f2326008e43f28e0d75bea4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_y);
        tmp_expression_value_2 = par_y;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ed76614b6f2326008e43f28e0d75bea4->m_frame.f_lineno = 26;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_expression_value_4 = par_y;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ed76614b6f2326008e43f28e0d75bea4->m_frame.f_lineno = 26;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert(old != NULL);
            par_y = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_kw_call_arg_value_0_1 = par_y;
        CHECK_OBJECT(par_y);
        tmp_expression_value_6 = par_y;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ed76614b6f2326008e43f28e0d75bea4->m_frame.f_lineno = 27;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_x);
        tmp_called_instance_1 = var_x;
        frame_ed76614b6f2326008e43f28e0d75bea4->m_frame.f_lineno = 28;
        tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
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
                exception_lineno = 28;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_5;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_scale);
        tmp_expression_value_8 = par_scale;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_y);
        tmp_expression_value_9 = par_y;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_1 = var_i;
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_1);
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_zero_point);
        tmp_expression_value_10 = par_zero_point;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_x;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_2 = var_i;
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_2);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 28;
        type_description_1 = "ooooo";
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
    if (var_x == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 30;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_x;
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
        exception_tb = MAKE_TRACEBACK(frame_ed76614b6f2326008e43f28e0d75bea4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed76614b6f2326008e43f28e0d75bea4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed76614b6f2326008e43f28e0d75bea4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed76614b6f2326008e43f28e0d75bea4,
        type_description_1,
        par_y,
        par_scale,
        par_zero_point,
        var_x,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_ed76614b6f2326008e43f28e0d75bea4 == cache_frame_ed76614b6f2326008e43f28e0d75bea4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed76614b6f2326008e43f28e0d75bea4);
        cache_frame_ed76614b6f2326008e43f28e0d75bea4 = NULL;
    }

    assertFrameObject(frame_ed76614b6f2326008e43f28e0d75bea4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    par_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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

    Py_XDECREF(par_y);
    par_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__5__get_allgather_out_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_all_gather_in_list = python_pars[0];
    PyObject *par_world_size = python_pars[1];
    PyObject *var_out_list = NULL;
    PyObject *outline_0_var__ = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_261755ea1c1019476c3a61c47cfea6f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1d9380666245826b03342ef72f7cdee6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1d9380666245826b03342ef72f7cdee6_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_261755ea1c1019476c3a61c47cfea6f2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_261755ea1c1019476c3a61c47cfea6f2)) {
        Py_XDECREF(cache_frame_261755ea1c1019476c3a61c47cfea6f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_261755ea1c1019476c3a61c47cfea6f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_261755ea1c1019476c3a61c47cfea6f2 = MAKE_FUNCTION_FRAME(codeobj_261755ea1c1019476c3a61c47cfea6f2, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_261755ea1c1019476c3a61c47cfea6f2->m_type_description == NULL);
    frame_261755ea1c1019476c3a61c47cfea6f2 = cache_frame_261755ea1c1019476c3a61c47cfea6f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_261755ea1c1019476c3a61c47cfea6f2);
    assert(Py_REFCNT(frame_261755ea1c1019476c3a61c47cfea6f2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT(par_world_size);
            tmp_xrange_low_1 = par_world_size;
            tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "ooo";
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
        if (isFrameUnusable(cache_frame_1d9380666245826b03342ef72f7cdee6_2)) {
            Py_XDECREF(cache_frame_1d9380666245826b03342ef72f7cdee6_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1d9380666245826b03342ef72f7cdee6_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1d9380666245826b03342ef72f7cdee6_2 = MAKE_FUNCTION_FRAME(codeobj_1d9380666245826b03342ef72f7cdee6, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_1d9380666245826b03342ef72f7cdee6_2->m_type_description == NULL);
        frame_1d9380666245826b03342ef72f7cdee6_2 = cache_frame_1d9380666245826b03342ef72f7cdee6_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1d9380666245826b03342ef72f7cdee6_2);
        assert(Py_REFCNT(frame_1d9380666245826b03342ef72f7cdee6_2) == 2);

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
                    exception_lineno = 35;
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
                PyObject *old = outline_0_var__;
                outline_0_var__ = tmp_assign_source_5;
                Py_INCREF(outline_0_var__);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            if (par_all_gather_in_list == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 36;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_kw_call_arg_value_0_1 = par_all_gather_in_list;
            if (par_all_gather_in_list == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 37;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_expression_value_2 = par_all_gather_in_list;
            tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 37;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            if (par_all_gather_in_list == NULL) {
                Py_DECREF(tmp_called_value_1);
                Py_DECREF(tmp_kw_call_dict_value_0_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_expression_value_3 = par_all_gather_in_list;
            tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
            if (tmp_kw_call_dict_value_1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);
                Py_DECREF(tmp_kw_call_dict_value_0_1);

                exception_lineno = 38;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_1d9380666245826b03342ef72f7cdee6_2->m_frame.f_lineno = 35;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[19]);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
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
            exception_tb = MAKE_TRACEBACK(frame_1d9380666245826b03342ef72f7cdee6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1d9380666245826b03342ef72f7cdee6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d9380666245826b03342ef72f7cdee6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1d9380666245826b03342ef72f7cdee6_2,
            type_description_2,
            outline_0_var__,
            par_all_gather_in_list
        );


        // Release cached frame if used for exception.
        if (frame_1d9380666245826b03342ef72f7cdee6_2 == cache_frame_1d9380666245826b03342ef72f7cdee6_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1d9380666245826b03342ef72f7cdee6_2);
            cache_frame_1d9380666245826b03342ef72f7cdee6_2 = NULL;
        }

        assertFrameObject(frame_1d9380666245826b03342ef72f7cdee6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
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

        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
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
        exception_lineno = 35;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_out_list == NULL);
        var_out_list = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_261755ea1c1019476c3a61c47cfea6f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_261755ea1c1019476c3a61c47cfea6f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_261755ea1c1019476c3a61c47cfea6f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_261755ea1c1019476c3a61c47cfea6f2,
        type_description_1,
        par_all_gather_in_list,
        par_world_size,
        var_out_list
    );


    // Release cached frame if used for exception.
    if (frame_261755ea1c1019476c3a61c47cfea6f2 == cache_frame_261755ea1c1019476c3a61c47cfea6f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_261755ea1c1019476c3a61c47cfea6f2);
        cache_frame_261755ea1c1019476c3a61c47cfea6f2 = NULL;
    }

    assertFrameObject(frame_261755ea1c1019476c3a61c47cfea6f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_out_list);
    tmp_return_value = var_out_list;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out_list);
    Py_DECREF(var_out_list);
    var_out_list = NULL;
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
    CHECK_OBJECT(par_all_gather_in_list);
    Py_DECREF(par_all_gather_in_list);
    CHECK_OBJECT(par_world_size);
    Py_DECREF(par_world_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_all_gather_in_list);
    Py_DECREF(par_all_gather_in_list);
    CHECK_OBJECT(par_world_size);
    Py_DECREF(par_world_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_process_group = python_pars[0];
    PyObject *par_bucket = python_pars[1];
    struct Nuitka_CellObject *var_group_to_use = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_rank = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_world_size = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_tensor = Nuitka_Cell_Empty();
    PyObject *var_myObserver = NULL;
    PyObject *var_s = NULL;
    PyObject *var_z = NULL;
    PyObject *var_s_and_z = NULL;
    struct Nuitka_CellObject *var_all_ranks_s_and_z = Nuitka_Cell_Empty();
    PyObject *var_fut = NULL;
    PyObject *var_quantize_and_allgather = NULL;
    PyObject *var_dequantize_and_aggregate = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4f772c7434b6f7c4eb487941013fd1b1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f772c7434b6f7c4eb487941013fd1b1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f772c7434b6f7c4eb487941013fd1b1)) {
        Py_XDECREF(cache_frame_4f772c7434b6f7c4eb487941013fd1b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f772c7434b6f7c4eb487941013fd1b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f772c7434b6f7c4eb487941013fd1b1 = MAKE_FUNCTION_FRAME(codeobj_4f772c7434b6f7c4eb487941013fd1b1, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f772c7434b6f7c4eb487941013fd1b1->m_type_description == NULL);
    frame_4f772c7434b6f7c4eb487941013fd1b1 = cache_frame_4f772c7434b6f7c4eb487941013fd1b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f772c7434b6f7c4eb487941013fd1b1);
    assert(Py_REFCNT(frame_4f772c7434b6f7c4eb487941013fd1b1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_process_group);
        tmp_cmp_expr_left_1 = par_process_group;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_process_group);
        tmp_assign_source_1 = par_process_group;
        Py_INCREF(tmp_assign_source_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(Nuitka_Cell_GET(var_group_to_use) == NULL);
        PyCell_SET(var_group_to_use, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_process_group);
        tmp_cmp_expr_left_2 = par_process_group;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(par_process_group);
        tmp_called_instance_1 = par_process_group;
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 65;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[23]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 65;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[24]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        assert(Nuitka_Cell_GET(var_rank) == NULL);
        PyCell_SET(var_rank, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (Nuitka_Cell_GET(var_group_to_use) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(var_group_to_use);
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 66;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[9]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_world_size) == NULL);
        PyCell_SET(var_world_size, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_bucket);
        tmp_called_instance_4 = par_bucket;
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 68;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[26]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_tensor) == NULL);
        PyCell_SET(var_tensor, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[27]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 70;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[28]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_expression_value_5 = Nuitka_Cell_GET(var_tensor);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 70;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 70;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_myObserver == NULL);
        var_myObserver = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_myObserver);
        tmp_called_value_2 = var_myObserver;
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_args_element_value_2 = Nuitka_Cell_GET(var_tensor);
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_myObserver);
        tmp_called_instance_6 = var_myObserver;
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 73;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[29]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooccccoooocooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooccccoooocooo";
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


            type_description_1 = "ooccccoooocooo";
            exception_lineno = 73;
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


            type_description_1 = "ooccccoooocooo";
            exception_lineno = 73;
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

                    type_description_1 = "ooccccoooocooo";
                    exception_lineno = 73;
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

            type_description_1 = "ooccccoooocooo";
            exception_lineno = 73;
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
        assert(var_s == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_s = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_z == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_z = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s);
        tmp_list_element_1 = var_s;
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
        CHECK_OBJECT(var_z);
        tmp_list_element_1 = var_z;
        PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_1);
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 74;
        tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[31], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[14]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_expression_value_7 = Nuitka_Cell_GET(var_tensor);
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 74;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 74;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_s_and_z == NULL);
        var_s_and_z = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s_and_z);
        tmp_args_element_value_5 = var_s_and_z;
        CHECK_OBJECT(Nuitka_Cell_GET(var_world_size));
        tmp_args_element_value_6 = Nuitka_Cell_GET(var_world_size);
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_all_ranks_s_and_z) == NULL);
        PyCell_SET(var_all_ranks_s_and_z, tmp_assign_source_12);

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[33]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_all_ranks_s_and_z));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(var_all_ranks_s_and_z);
        CHECK_OBJECT(var_s_and_z);
        tmp_kw_call_arg_value_1_1 = var_s_and_z;
        if (Nuitka_Cell_GET(var_group_to_use) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(var_group_to_use);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 79;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 79;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[35]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = var_group_to_use;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_rank;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_tensor;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_world_size;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_14 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__1_quantize_and_allgather(tmp_closure_1);

        assert(var_quantize_and_allgather == NULL);
        var_quantize_and_allgather = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_2[3];

        tmp_closure_2[0] = var_all_ranks_s_and_z;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_tensor;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_world_size;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_15 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__2_dequantize_and_aggregate(tmp_closure_2);

        assert(var_dequantize_and_aggregate == NULL);
        var_dequantize_and_aggregate = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_10 = var_fut;
        CHECK_OBJECT(var_quantize_and_allgather);
        tmp_args_element_value_7 = var_quantize_and_allgather;
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 115;
        tmp_called_instance_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[40], tmp_args_element_value_7);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dequantize_and_aggregate);
        tmp_args_element_value_8 = var_dequantize_and_aggregate;
        frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame.f_lineno = 115;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[40], tmp_args_element_value_8);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooccccoooocooo";
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
        exception_tb = MAKE_TRACEBACK(frame_4f772c7434b6f7c4eb487941013fd1b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f772c7434b6f7c4eb487941013fd1b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f772c7434b6f7c4eb487941013fd1b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f772c7434b6f7c4eb487941013fd1b1,
        type_description_1,
        par_process_group,
        par_bucket,
        var_group_to_use,
        var_rank,
        var_world_size,
        var_tensor,
        var_myObserver,
        var_s,
        var_z,
        var_s_and_z,
        var_all_ranks_s_and_z,
        var_fut,
        var_quantize_and_allgather,
        var_dequantize_and_aggregate
    );


    // Release cached frame if used for exception.
    if (frame_4f772c7434b6f7c4eb487941013fd1b1 == cache_frame_4f772c7434b6f7c4eb487941013fd1b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f772c7434b6f7c4eb487941013fd1b1);
        cache_frame_4f772c7434b6f7c4eb487941013fd1b1 = NULL;
    }

    assertFrameObject(frame_4f772c7434b6f7c4eb487941013fd1b1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_rank);
    Py_DECREF(var_rank);
    var_rank = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
    CHECK_OBJECT(var_myObserver);
    Py_DECREF(var_myObserver);
    var_myObserver = NULL;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    CHECK_OBJECT(var_s_and_z);
    Py_DECREF(var_s_and_z);
    var_s_and_z = NULL;
    CHECK_OBJECT(var_all_ranks_s_and_z);
    Py_DECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    CHECK_OBJECT(var_fut);
    Py_DECREF(var_fut);
    var_fut = NULL;
    CHECK_OBJECT(var_quantize_and_allgather);
    Py_DECREF(var_quantize_and_allgather);
    var_quantize_and_allgather = NULL;
    CHECK_OBJECT(var_dequantize_and_aggregate);
    Py_DECREF(var_dequantize_and_aggregate);
    var_dequantize_and_aggregate = NULL;
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

    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_rank);
    Py_DECREF(var_rank);
    var_rank = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_myObserver);
    var_myObserver = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_s_and_z);
    var_s_and_z = NULL;
    CHECK_OBJECT(var_all_ranks_s_and_z);
    Py_DECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    Py_XDECREF(var_fut);
    var_fut = NULL;
    Py_XDECREF(var_quantize_and_allgather);
    var_quantize_and_allgather = NULL;
    Py_XDECREF(var_dequantize_and_aggregate);
    var_dequantize_and_aggregate = NULL;
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
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__1_quantize_and_allgather(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_all_ranks_s_and_z = NULL;
    PyObject *var_quantized_tensor = NULL;
    struct Nuitka_FrameObject *frame_055d3f47c7c7b8a628eca5e73f2f9afc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc)) {
        Py_XDECREF(cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc = MAKE_FUNCTION_FRAME(codeobj_055d3f47c7c7b8a628eca5e73f2f9afc, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_type_description == NULL);
    frame_055d3f47c7c7b8a628eca5e73f2f9afc = cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_055d3f47c7c7b8a628eca5e73f2f9afc);
    assert(Py_REFCNT(frame_055d3f47c7c7b8a628eca5e73f2f9afc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame.f_lineno = 85;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_all_ranks_s_and_z == NULL);
        var_all_ranks_s_and_z = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_all_ranks_s_and_z);
        tmp_expression_value_3 = var_all_ranks_s_and_z;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[3];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_all_ranks_s_and_z);
        tmp_expression_value_5 = var_all_ranks_s_and_z;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[45];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_5, 1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 88;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_quantized_tensor == NULL);
        var_quantized_tensor = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 92;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_quantized_tensor);
        tmp_args_element_value_4 = var_quantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 92;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_quantized_tensor);
        tmp_kw_call_arg_value_1_1 = var_quantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame.f_lineno = 91;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame.f_lineno = 91;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[35]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fut;
            assert(old != NULL);
            par_fut = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_3 = par_fut;
        frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame.f_lineno = 98;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooocccc";
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
        exception_tb = MAKE_TRACEBACK(frame_055d3f47c7c7b8a628eca5e73f2f9afc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_055d3f47c7c7b8a628eca5e73f2f9afc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_055d3f47c7c7b8a628eca5e73f2f9afc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_055d3f47c7c7b8a628eca5e73f2f9afc,
        type_description_1,
        par_fut,
        var_all_ranks_s_and_z,
        var_quantized_tensor,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_055d3f47c7c7b8a628eca5e73f2f9afc == cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc);
        cache_frame_055d3f47c7c7b8a628eca5e73f2f9afc = NULL;
    }

    assertFrameObject(frame_055d3f47c7c7b8a628eca5e73f2f9afc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    par_fut = NULL;
    CHECK_OBJECT(var_all_ranks_s_and_z);
    Py_DECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    CHECK_OBJECT(var_quantized_tensor);
    Py_DECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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

    Py_XDECREF(par_fut);
    par_fut = NULL;
    Py_XDECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    Py_XDECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__2_dequantize_and_aggregate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_all_ranks_quantized_tensor = NULL;
    PyObject *var_aggregated_dequantized_tensor = NULL;
    PyObject *var_r = NULL;
    PyObject *var_quantized_tensor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_43f5fdaeb19097925a8f674200a7f904;
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
    static struct Nuitka_FrameObject *cache_frame_43f5fdaeb19097925a8f674200a7f904 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_43f5fdaeb19097925a8f674200a7f904)) {
        Py_XDECREF(cache_frame_43f5fdaeb19097925a8f674200a7f904);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43f5fdaeb19097925a8f674200a7f904 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43f5fdaeb19097925a8f674200a7f904 = MAKE_FUNCTION_FRAME(codeobj_43f5fdaeb19097925a8f674200a7f904, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43f5fdaeb19097925a8f674200a7f904->m_type_description == NULL);
    frame_43f5fdaeb19097925a8f674200a7f904 = cache_frame_43f5fdaeb19097925a8f674200a7f904;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43f5fdaeb19097925a8f674200a7f904);
    assert(Py_REFCNT(frame_43f5fdaeb19097925a8f674200a7f904) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_43f5fdaeb19097925a8f674200a7f904->m_frame.f_lineno = 101;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_all_ranks_quantized_tensor == NULL);
        var_all_ranks_quantized_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_all_ranks_quantized_tensor);
        tmp_expression_value_3 = var_all_ranks_quantized_tensor;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 104;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 104;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 104;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 104;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_43f5fdaeb19097925a8f674200a7f904->m_frame.f_lineno = 103;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_aggregated_dequantized_tensor == NULL);
        var_aggregated_dequantized_tensor = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_all_ranks_quantized_tensor);
        tmp_args_element_value_1 = var_all_ranks_quantized_tensor;
        frame_43f5fdaeb19097925a8f674200a7f904->m_frame.f_lineno = 108;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooccc";
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
                type_description_1 = "oooooccc";
                exception_lineno = 108;
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


            exception_lineno = 108;
            type_description_1 = "oooooccc";
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


            type_description_1 = "oooooccc";
            exception_lineno = 108;
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


            type_description_1 = "oooooccc";
            exception_lineno = 108;
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

                    type_description_1 = "oooooccc";
                    exception_lineno = 108;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooccc";
            exception_lineno = 108;
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
            PyObject *old = var_r;
            var_r = tmp_assign_source_8;
            Py_INCREF(var_r);
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
            PyObject *old = var_quantized_tensor;
            var_quantized_tensor = tmp_assign_source_9;
            Py_INCREF(var_quantized_tensor);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        if (var_aggregated_dequantized_tensor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_aggregated_dequantized_tensor;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_quantized_tensor);
        tmp_args_element_value_2 = var_quantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_r);
        tmp_subscript_value_3 = var_r;
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[3];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_r);
        tmp_subscript_value_5 = var_r;
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 110;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_6 = mod_consts[45];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_6, 1);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 110;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        frame_43f5fdaeb19097925a8f674200a7f904->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_1;
        var_aggregated_dequantized_tensor = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 108;
        type_description_1 = "oooooccc";
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
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (var_aggregated_dequantized_tensor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_1 = var_aggregated_dequantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_43f5fdaeb19097925a8f674200a7f904, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43f5fdaeb19097925a8f674200a7f904->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43f5fdaeb19097925a8f674200a7f904, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43f5fdaeb19097925a8f674200a7f904,
        type_description_1,
        par_fut,
        var_all_ranks_quantized_tensor,
        var_aggregated_dequantized_tensor,
        var_r,
        var_quantized_tensor,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_43f5fdaeb19097925a8f674200a7f904 == cache_frame_43f5fdaeb19097925a8f674200a7f904) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43f5fdaeb19097925a8f674200a7f904);
        cache_frame_43f5fdaeb19097925a8f674200a7f904 = NULL;
    }

    assertFrameObject(frame_43f5fdaeb19097925a8f674200a7f904);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_all_ranks_quantized_tensor);
    Py_DECREF(var_all_ranks_quantized_tensor);
    var_all_ranks_quantized_tensor = NULL;
    Py_XDECREF(var_aggregated_dequantized_tensor);
    var_aggregated_dequantized_tensor = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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

    Py_XDECREF(var_all_ranks_quantized_tensor);
    var_all_ranks_quantized_tensor = NULL;
    Py_XDECREF(var_aggregated_dequantized_tensor);
    var_aggregated_dequantized_tensor = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_process_group = python_pars[0];
    PyObject *par_bucket = python_pars[1];
    PyObject *par_bucket_size = python_pars[2];
    struct Nuitka_CellObject *var_group_to_use = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_rank = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_world_size = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_tensor = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_tensor_in_channels = Nuitka_Cell_Empty();
    PyObject *var_myPerChannelObserver = NULL;
    PyObject *var_s_ch = NULL;
    PyObject *var_z_ch = NULL;
    PyObject *var_s_and_z = NULL;
    struct Nuitka_CellObject *var_all_ranks_s_and_z = Nuitka_Cell_Empty();
    PyObject *var_fut = NULL;
    PyObject *var_quantize_and_allgather = NULL;
    PyObject *var_dequantize_and_aggregate = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c5cd47d4c5a0c2abcaf8a777cae98a21;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21)) {
        Py_XDECREF(cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21 = MAKE_FUNCTION_FRAME(codeobj_c5cd47d4c5a0c2abcaf8a777cae98a21, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_type_description == NULL);
    frame_c5cd47d4c5a0c2abcaf8a777cae98a21 = cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5cd47d4c5a0c2abcaf8a777cae98a21);
    assert(Py_REFCNT(frame_c5cd47d4c5a0c2abcaf8a777cae98a21) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_process_group);
        tmp_cmp_expr_left_1 = par_process_group;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_process_group);
        tmp_assign_source_1 = par_process_group;
        Py_INCREF(tmp_assign_source_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(Nuitka_Cell_GET(var_group_to_use) == NULL);
        PyCell_SET(var_group_to_use, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_process_group);
        tmp_cmp_expr_left_2 = par_process_group;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(par_process_group);
        tmp_called_instance_1 = par_process_group;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 144;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[23]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 144;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[24]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        assert(Nuitka_Cell_GET(var_rank) == NULL);
        PyCell_SET(var_rank, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (Nuitka_Cell_GET(var_group_to_use) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(var_group_to_use);
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 145;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[9]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_world_size) == NULL);
        PyCell_SET(var_world_size, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_bucket);
        tmp_called_instance_4 = par_bucket;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 147;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[26]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_tensor) == NULL);
        PyCell_SET(var_tensor, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[51]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(var_tensor);
        tmp_tuple_element_1 = mod_consts[3];
        tmp_kw_call_value_1_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            PyObject *tmp_len_arg_1;
            PyTuple_SET_ITEM0(tmp_kw_call_value_1_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_bucket_size);
            tmp_sub_expr_left_1 = par_bucket_size;
            CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
            tmp_len_arg_1 = Nuitka_Cell_GET(var_tensor);
            tmp_mod_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_mod_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooocccccoooocooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_bucket_size);
            tmp_mod_expr_right_1 = par_bucket_size;
            tmp_sub_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_LONG_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_left_1);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooocccccoooocooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooocccccoooocooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_value_2_1 = mod_consts[53];
        tmp_kw_call_value_3_1 = mod_consts[3];
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 150;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_called_instance_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[56];
        CHECK_OBJECT(par_bucket_size);
        tmp_args_element_value_2 = par_bucket_size;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[55],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_5);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_expression_value_6 = Nuitka_Cell_GET(var_tensor);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 157;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 150;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_tensor_in_channels) == NULL);
        PyCell_SET(var_tensor_in_channels, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[27]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 160;
        tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[57]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[14]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_expression_value_9 = Nuitka_Cell_GET(var_tensor);
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 161;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 160;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_myPerChannelObserver == NULL);
        var_myPerChannelObserver = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_myPerChannelObserver);
        tmp_called_value_4 = var_myPerChannelObserver;
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor_in_channels));
        tmp_args_element_value_5 = Nuitka_Cell_GET(var_tensor_in_channels);
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 163;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_myPerChannelObserver);
        tmp_called_instance_7 = var_myPerChannelObserver;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 165;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[29]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooocccccoooocooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooocccccoooocooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocccccoooocooo";
            exception_lineno = 165;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooocccccoooocooo";
            exception_lineno = 165;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooocccccoooocooo";
                    exception_lineno = 165;
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

            type_description_1 = "ooocccccoooocooo";
            exception_lineno = 165;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        assert(var_s_ch == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_s_ch = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert(var_z_ch == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_z_ch = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_11;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s_ch);
        tmp_tuple_element_2 = var_s_ch;
        tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_z_ch);
        tmp_tuple_element_2 = var_z_ch;
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 166;
        tmp_expression_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[58], tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[14]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_tensor));
        tmp_expression_value_11 = Nuitka_Cell_GET(var_tensor);
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[10]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 166;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 166;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_s_and_z == NULL);
        var_s_and_z = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s_and_z);
        tmp_args_element_value_8 = var_s_and_z;
        CHECK_OBJECT(Nuitka_Cell_GET(var_world_size));
        tmp_args_element_value_9 = Nuitka_Cell_GET(var_world_size);
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_all_ranks_s_and_z) == NULL);
        PyCell_SET(var_all_ranks_s_and_z, tmp_assign_source_13);

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_all_ranks_s_and_z));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(var_all_ranks_s_and_z);
        CHECK_OBJECT(var_s_and_z);
        tmp_kw_call_arg_value_1_1 = var_s_and_z;
        if (Nuitka_Cell_GET(var_group_to_use) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(var_group_to_use);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 170;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_9 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 170;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[35]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = var_group_to_use;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_rank;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_tensor_in_channels;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_world_size;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_15 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__1_quantize_and_allgather(tmp_closure_1);

        assert(var_quantize_and_allgather == NULL);
        var_quantize_and_allgather = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        struct Nuitka_CellObject *tmp_closure_2[3];

        tmp_closure_2[0] = var_all_ranks_s_and_z;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_tensor;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_world_size;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_16 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__2_dequantize_and_aggregate(tmp_closure_2);

        assert(var_dequantize_and_aggregate == NULL);
        var_dequantize_and_aggregate = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_11 = var_fut;
        CHECK_OBJECT(var_quantize_and_allgather);
        tmp_args_element_value_10 = var_quantize_and_allgather;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 213;
        tmp_called_instance_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[40], tmp_args_element_value_10);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooocccccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dequantize_and_aggregate);
        tmp_args_element_value_11 = var_dequantize_and_aggregate;
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame.f_lineno = 213;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[40], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooocccccoooocooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c5cd47d4c5a0c2abcaf8a777cae98a21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5cd47d4c5a0c2abcaf8a777cae98a21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5cd47d4c5a0c2abcaf8a777cae98a21, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5cd47d4c5a0c2abcaf8a777cae98a21,
        type_description_1,
        par_process_group,
        par_bucket,
        par_bucket_size,
        var_group_to_use,
        var_rank,
        var_world_size,
        var_tensor,
        var_tensor_in_channels,
        var_myPerChannelObserver,
        var_s_ch,
        var_z_ch,
        var_s_and_z,
        var_all_ranks_s_and_z,
        var_fut,
        var_quantize_and_allgather,
        var_dequantize_and_aggregate
    );


    // Release cached frame if used for exception.
    if (frame_c5cd47d4c5a0c2abcaf8a777cae98a21 == cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21);
        cache_frame_c5cd47d4c5a0c2abcaf8a777cae98a21 = NULL;
    }

    assertFrameObject(frame_c5cd47d4c5a0c2abcaf8a777cae98a21);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_rank);
    Py_DECREF(var_rank);
    var_rank = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
    CHECK_OBJECT(var_tensor_in_channels);
    Py_DECREF(var_tensor_in_channels);
    var_tensor_in_channels = NULL;
    CHECK_OBJECT(var_myPerChannelObserver);
    Py_DECREF(var_myPerChannelObserver);
    var_myPerChannelObserver = NULL;
    CHECK_OBJECT(var_s_ch);
    Py_DECREF(var_s_ch);
    var_s_ch = NULL;
    CHECK_OBJECT(var_z_ch);
    Py_DECREF(var_z_ch);
    var_z_ch = NULL;
    CHECK_OBJECT(var_s_and_z);
    Py_DECREF(var_s_and_z);
    var_s_and_z = NULL;
    CHECK_OBJECT(var_all_ranks_s_and_z);
    Py_DECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    CHECK_OBJECT(var_fut);
    Py_DECREF(var_fut);
    var_fut = NULL;
    CHECK_OBJECT(var_quantize_and_allgather);
    Py_DECREF(var_quantize_and_allgather);
    var_quantize_and_allgather = NULL;
    CHECK_OBJECT(var_dequantize_and_aggregate);
    Py_DECREF(var_dequantize_and_aggregate);
    var_dequantize_and_aggregate = NULL;
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

    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_rank);
    Py_DECREF(var_rank);
    var_rank = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
    CHECK_OBJECT(var_tensor_in_channels);
    Py_DECREF(var_tensor_in_channels);
    var_tensor_in_channels = NULL;
    Py_XDECREF(var_myPerChannelObserver);
    var_myPerChannelObserver = NULL;
    Py_XDECREF(var_s_ch);
    var_s_ch = NULL;
    Py_XDECREF(var_z_ch);
    var_z_ch = NULL;
    Py_XDECREF(var_s_and_z);
    var_s_and_z = NULL;
    CHECK_OBJECT(var_all_ranks_s_and_z);
    Py_DECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    Py_XDECREF(var_fut);
    var_fut = NULL;
    Py_XDECREF(var_quantize_and_allgather);
    var_quantize_and_allgather = NULL;
    Py_XDECREF(var_dequantize_and_aggregate);
    var_dequantize_and_aggregate = NULL;
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
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    CHECK_OBJECT(par_bucket_size);
    Py_DECREF(par_bucket_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    CHECK_OBJECT(par_bucket_size);
    Py_DECREF(par_bucket_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__1_quantize_and_allgather(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_all_ranks_s_and_z = NULL;
    PyObject *var_quantized_tensor = NULL;
    struct Nuitka_FrameObject *frame_5f19be9bee701b0eff44fedece16afec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5f19be9bee701b0eff44fedece16afec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5f19be9bee701b0eff44fedece16afec)) {
        Py_XDECREF(cache_frame_5f19be9bee701b0eff44fedece16afec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f19be9bee701b0eff44fedece16afec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f19be9bee701b0eff44fedece16afec = MAKE_FUNCTION_FRAME(codeobj_5f19be9bee701b0eff44fedece16afec, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f19be9bee701b0eff44fedece16afec->m_type_description == NULL);
    frame_5f19be9bee701b0eff44fedece16afec = cache_frame_5f19be9bee701b0eff44fedece16afec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f19be9bee701b0eff44fedece16afec);
    assert(Py_REFCNT(frame_5f19be9bee701b0eff44fedece16afec) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_5f19be9bee701b0eff44fedece16afec->m_frame.f_lineno = 176;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_all_ranks_s_and_z == NULL);
        var_all_ranks_s_and_z = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_all_ranks_s_and_z);
        tmp_expression_value_2 = var_all_ranks_s_and_z;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[3];
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_1);
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_all_ranks_s_and_z);
        tmp_expression_value_3 = var_all_ranks_s_and_z;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[45];
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 2, tmp_tuple_element_2);
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 181;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        frame_5f19be9bee701b0eff44fedece16afec->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_quantized_tensor == NULL);
        var_quantized_tensor = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 185;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_quantized_tensor);
        tmp_args_element_value_4 = var_quantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_5f19be9bee701b0eff44fedece16afec->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 185;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_quantized_tensor);
        tmp_kw_call_arg_value_1_1 = var_quantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_5f19be9bee701b0eff44fedece16afec->m_frame.f_lineno = 184;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        frame_5f19be9bee701b0eff44fedece16afec->m_frame.f_lineno = 184;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[35]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fut;
            assert(old != NULL);
            par_fut = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_3 = par_fut;
        frame_5f19be9bee701b0eff44fedece16afec->m_frame.f_lineno = 191;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooocccc";
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
        exception_tb = MAKE_TRACEBACK(frame_5f19be9bee701b0eff44fedece16afec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f19be9bee701b0eff44fedece16afec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f19be9bee701b0eff44fedece16afec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f19be9bee701b0eff44fedece16afec,
        type_description_1,
        par_fut,
        var_all_ranks_s_and_z,
        var_quantized_tensor,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5f19be9bee701b0eff44fedece16afec == cache_frame_5f19be9bee701b0eff44fedece16afec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f19be9bee701b0eff44fedece16afec);
        cache_frame_5f19be9bee701b0eff44fedece16afec = NULL;
    }

    assertFrameObject(frame_5f19be9bee701b0eff44fedece16afec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    par_fut = NULL;
    CHECK_OBJECT(var_all_ranks_s_and_z);
    Py_DECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    CHECK_OBJECT(var_quantized_tensor);
    Py_DECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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

    Py_XDECREF(par_fut);
    par_fut = NULL;
    Py_XDECREF(var_all_ranks_s_and_z);
    var_all_ranks_s_and_z = NULL;
    Py_XDECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__2_dequantize_and_aggregate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_all_ranks_quantized_tensor = NULL;
    PyObject *var_aggregated_dequantized_tensor = NULL;
    PyObject *var_r = NULL;
    PyObject *var_quantized_tensor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b4b93dadafdcf722c5c055613e3bbf94;
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
    static struct Nuitka_FrameObject *cache_frame_b4b93dadafdcf722c5c055613e3bbf94 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b4b93dadafdcf722c5c055613e3bbf94)) {
        Py_XDECREF(cache_frame_b4b93dadafdcf722c5c055613e3bbf94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4b93dadafdcf722c5c055613e3bbf94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4b93dadafdcf722c5c055613e3bbf94 = MAKE_FUNCTION_FRAME(codeobj_b4b93dadafdcf722c5c055613e3bbf94, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4b93dadafdcf722c5c055613e3bbf94->m_type_description == NULL);
    frame_b4b93dadafdcf722c5c055613e3bbf94 = cache_frame_b4b93dadafdcf722c5c055613e3bbf94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4b93dadafdcf722c5c055613e3bbf94);
    assert(Py_REFCNT(frame_b4b93dadafdcf722c5c055613e3bbf94) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 194;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_all_ranks_quantized_tensor == NULL);
        var_all_ranks_quantized_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_all_ranks_quantized_tensor);
        tmp_expression_value_3 = var_all_ranks_quantized_tensor;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 196;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_aggregated_dequantized_tensor == NULL);
        var_aggregated_dequantized_tensor = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_all_ranks_quantized_tensor);
        tmp_args_element_value_1 = var_all_ranks_quantized_tensor;
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 201;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooccc";
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
                type_description_1 = "oooooccc";
                exception_lineno = 201;
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


            exception_lineno = 201;
            type_description_1 = "oooooccc";
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


            type_description_1 = "oooooccc";
            exception_lineno = 201;
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


            type_description_1 = "oooooccc";
            exception_lineno = 201;
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

                    type_description_1 = "oooooccc";
                    exception_lineno = 201;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooccc";
            exception_lineno = 201;
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
            PyObject *old = var_r;
            var_r = tmp_assign_source_8;
            Py_INCREF(var_r);
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
            PyObject *old = var_quantized_tensor;
            var_quantized_tensor = tmp_assign_source_9;
            Py_INCREF(var_quantized_tensor);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        if (var_aggregated_dequantized_tensor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_aggregated_dequantized_tensor;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_quantized_tensor);
        tmp_args_element_value_2 = var_quantized_tensor;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_r);
        tmp_subscript_value_3 = var_r;
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[3];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_r);
        tmp_subscript_value_5 = var_r;
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 203;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_6 = mod_consts[45];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_6, 1);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 203;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_1;
        var_aggregated_dequantized_tensor = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 201;
        type_description_1 = "oooooccc";
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
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[65]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (var_aggregated_dequantized_tensor == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_aggregated_dequantized_tensor;
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 207;
        tmp_expression_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[14]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[10]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 207;
        tmp_expression_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_expression_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame.f_lineno = 208;
        tmp_expression_value_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_10);

            exception_lineno = 208;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[3];
        tmp_stop_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_10);

            exception_lineno = 208;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_7 == NULL));
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_10);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_b4b93dadafdcf722c5c055613e3bbf94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4b93dadafdcf722c5c055613e3bbf94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4b93dadafdcf722c5c055613e3bbf94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4b93dadafdcf722c5c055613e3bbf94,
        type_description_1,
        par_fut,
        var_all_ranks_quantized_tensor,
        var_aggregated_dequantized_tensor,
        var_r,
        var_quantized_tensor,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_b4b93dadafdcf722c5c055613e3bbf94 == cache_frame_b4b93dadafdcf722c5c055613e3bbf94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4b93dadafdcf722c5c055613e3bbf94);
        cache_frame_b4b93dadafdcf722c5c055613e3bbf94 = NULL;
    }

    assertFrameObject(frame_b4b93dadafdcf722c5c055613e3bbf94);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_all_ranks_quantized_tensor);
    Py_DECREF(var_all_ranks_quantized_tensor);
    var_all_ranks_quantized_tensor = NULL;
    Py_XDECREF(var_aggregated_dequantized_tensor);
    var_aggregated_dequantized_tensor = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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

    Py_XDECREF(var_all_ranks_quantized_tensor);
    var_all_ranks_quantized_tensor = NULL;
    Py_XDECREF(var_aggregated_dequantized_tensor);
    var_aggregated_dequantized_tensor = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_quantized_tensor);
    var_quantized_tensor = NULL;
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
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__1__quantize_per_tensor_cuda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__1__quantize_per_tensor_cuda,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d950118d8918fbce2988b149197655d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__2__dequantize_per_tensor_cuda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__2__dequantize_per_tensor_cuda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ede308c6387d97bd89f19cba15d76a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__3__quantize_per_channel_cuda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__3__quantize_per_channel_cuda,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1077c272bd36b4862ab003056f3236f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__4__dequantize_per_channel_cuda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__4__dequantize_per_channel_cuda,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed76614b6f2326008e43f28e0d75bea4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__5__get_allgather_out_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__5__get_allgather_out_list,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_261755ea1c1019476c3a61c47cfea6f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f772c7434b6f7c4eb487941013fd1b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__1_quantize_and_allgather(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__1_quantize_and_allgather,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_055d3f47c7c7b8a628eca5e73f2f9afc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__2_dequantize_and_aggregate(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__2_dequantize_and_aggregate,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_43f5fdaeb19097925a8f674200a7f904,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5cd47d4c5a0c2abcaf8a777cae98a21,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__1_quantize_and_allgather(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__1_quantize_and_allgather,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_5f19be9bee701b0eff44fedece16afec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__2_dequantize_and_aggregate(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__2_dequantize_and_aggregate,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_b4b93dadafdcf722c5c055613e3bbf94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
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

function_impl_code functable_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks[] = {
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__1_quantize_and_allgather,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook$$$function__2_dequantize_and_aggregate,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__1_quantize_and_allgather,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook$$$function__2_dequantize_and_aggregate,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__1__quantize_per_tensor_cuda,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__2__dequantize_per_tensor_cuda,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__3__quantize_per_channel_cuda,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__4__dequantize_per_channel_cuda,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__5__get_allgather_out_list,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook,
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

    function_impl_code *current = functable_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;
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

    if (offset > sizeof(functable_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks) || offset < 0) {
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
        functable_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks[offset],
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
        module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
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
PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks");

    // Store the module for future use.
    module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks = module;

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
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributed$algorithms$ddp_comm_hooks$quantization_hooks\n");

    moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks = MODULE_DICT(module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[103]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_098b0efda1c7b4b8b6fbb2b85fc395e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_2);
    }
    frame_098b0efda1c7b4b8b6fbb2b85fc395e7 = MAKE_MODULE_FRAME(codeobj_098b0efda1c7b4b8b6fbb2b85fc395e7, module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_098b0efda1c7b4b8b6fbb2b85fc395e7);
    assert(Py_REFCNT(frame_098b0efda1c7b4b8b6fbb2b85fc395e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[70], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_098b0efda1c7b4b8b6fbb2b85fc395e7->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[72];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[3];
        frame_098b0efda1c7b4b8b6fbb2b85fc395e7->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
                mod_consts[73],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[0];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[74];
        tmp_level_value_3 = mod_consts[3];
        frame_098b0efda1c7b4b8b6fbb2b85fc395e7->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks,
                mod_consts[50],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__1__quantize_per_tensor_cuda();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__2__dequantize_per_tensor_cuda();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__3__quantize_per_channel_cuda();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__4__dequantize_per_channel_cuda();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__5__get_allgather_out_list();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[75];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[76]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_6;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[80]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[81]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[82]);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_3);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_12 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__6_quantization_pertensor_hook(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_7;
        tmp_defaults_1 = mod_consts[84];
        tmp_dict_key_2 = mod_consts[75];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[76]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_12;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[77];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[78]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[79];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_2;
            }
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[80]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_2;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[81]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_2;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_9);

                exception_lineno = 120;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[82]);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_9);

                exception_lineno = 120;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_13 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks$$$function__7_quantization_perchannel_hook(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_098b0efda1c7b4b8b6fbb2b85fc395e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_098b0efda1c7b4b8b6fbb2b85fc395e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_098b0efda1c7b4b8b6fbb2b85fc395e7, exception_lineno);
    }



    assertFrameObject(frame_098b0efda1c7b4b8b6fbb2b85fc395e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks", false);

    Py_INCREF(module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks);
    return module_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
