/* Generated code for Python module 'torch.autograd'
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

/* The "module_torch$autograd" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$autograd;
PyDictObject *moduledict_torch$autograd;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[181];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[181];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.autograd"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 181; i++) {
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
void checkModuleConstants_torch$autograd(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 181; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ad85931ae5347dd3ba54772dcb372603;
static PyCodeObject *codeobj_f2bb39f8996316151b24eada024033f4;
static PyCodeObject *codeobj_367d6a359201edfb9ccd832a87ba2eb3;
static PyCodeObject *codeobj_5e5b8413426c24f87e89257173f7b28c;
static PyCodeObject *codeobj_32115b1a46de86c723f0e98285dedcda;
static PyCodeObject *codeobj_8335f49c1a3504fcde95eae89e9e3802;
static PyCodeObject *codeobj_b5b6e91496ec9280e42e17b9b7986529;
static PyCodeObject *codeobj_9f8fa9f554e47f5d0d385d551c35bc50;
static PyCodeObject *codeobj_554ea5946ae758a0f87188a08964818f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[171]); CHECK_OBJECT(module_filename_obj);
    codeobj_ad85931ae5347dd3ba54772dcb372603 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[172], mod_consts[172], NULL, NULL, 0, 0, 0);
    codeobj_f2bb39f8996316151b24eada024033f4 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_367d6a359201edfb9ccd832a87ba2eb3 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[173], NULL, 3, 0, 0);
    codeobj_5e5b8413426c24f87e89257173f7b28c = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[174], NULL, 2, 0, 0);
    codeobj_32115b1a46de86c723f0e98285dedcda = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[175], NULL, 2, 0, 0);
    codeobj_8335f49c1a3504fcde95eae89e9e3802 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[176], NULL, 6, 0, 0);
    codeobj_b5b6e91496ec9280e42e17b9b7986529 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[177], NULL, 8, 0, 0);
    codeobj_9f8fa9f554e47f5d0d385d551c35bc50 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[178], NULL, 0, 0, 0);
    codeobj_554ea5946ae758a0f87188a08964818f = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[179], mod_consts[180], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__1__make_grads(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__2__tensor_or_tensors_to_tuple(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__3_backward(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__4_grad(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__4_grad$$$function__1_vjp(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__5__is_checkpoint_valid();


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__6_variable();


static PyObject *MAKE_FUNCTION_torch$autograd$$$function__7__register_py_tensor_class_for_device();


// The module function definitions.
static PyObject *impl_torch$autograd$$$function__1__make_grads(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_outputs = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_is_grads_batched = python_pars[2];
    PyObject *var_new_grads = NULL;
    PyObject *var_out = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_grad_shape = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_367d6a359201edfb9ccd832a87ba2eb3;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_367d6a359201edfb9ccd832a87ba2eb3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_new_grads == NULL);
        var_new_grads = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_367d6a359201edfb9ccd832a87ba2eb3)) {
        Py_XDECREF(cache_frame_367d6a359201edfb9ccd832a87ba2eb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_367d6a359201edfb9ccd832a87ba2eb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_367d6a359201edfb9ccd832a87ba2eb3 = MAKE_FUNCTION_FRAME(codeobj_367d6a359201edfb9ccd832a87ba2eb3, module_torch$autograd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_367d6a359201edfb9ccd832a87ba2eb3->m_type_description == NULL);
    frame_367d6a359201edfb9ccd832a87ba2eb3 = cache_frame_367d6a359201edfb9ccd832a87ba2eb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_367d6a359201edfb9ccd832a87ba2eb3);
    assert(Py_REFCNT(frame_367d6a359201edfb9ccd832a87ba2eb3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_outputs);
        tmp_args_element_value_1 = par_outputs;
        CHECK_OBJECT(par_grads);
        tmp_args_element_value_2 = par_grads;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 33;
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


            exception_lineno = 33;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 33;
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


            type_description_1 = "ooooooo";
            exception_lineno = 33;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 33;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 33;
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
            PyObject *old = var_out;
            var_out = tmp_assign_source_7;
            Py_INCREF(var_out);
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
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_INCREF(var_grad);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_grad);
        tmp_isinstance_inst_1 = var_grad;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
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
    {
        PyObject *tmp_assign_source_9;
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_is_grads_batched);
        tmp_operand_value_1 = par_is_grads_batched;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_2 = var_grad;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_4 = var_grad;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_grad_shape;
            var_grad_shape = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_out);
        tmp_expression_value_5 = var_out;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad_shape);
        tmp_cmp_expr_right_1 = var_grad_shape;
        tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
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
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_grads_batched);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_grads_batched);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_expression_value_9;
        tmp_add_expr_left_8 = mod_consts[5];
        CHECK_OBJECT(par_grads);
        tmp_expression_value_6 = par_grads;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = var_grad;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 43;
        tmp_unicode_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_8 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_7 = mod_consts[8];
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_add_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_grad;
        tmp_unicode_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_6 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_add_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_5 = mod_consts[9];
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_outputs);
        tmp_expression_value_8 = par_outputs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_args_element_value_4 = var_out;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 45;
        tmp_unicode_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_unicode_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_4 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
        Py_DECREF(tmp_unicode_arg_3);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_3 = mod_consts[8];
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_9 = var_out;
        tmp_unicode_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[3]);
        if (tmp_unicode_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
        Py_DECREF(tmp_unicode_arg_4);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_1 = mod_consts[10];
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 38;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_unicode_arg_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_unicode_arg_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_unicode_arg_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_unicode_arg_8;
        PyObject *tmp_expression_value_13;
        tmp_add_expr_left_16 = mod_consts[11];
        CHECK_OBJECT(par_grads);
        tmp_expression_value_10 = par_grads;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = var_grad;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 51;
        tmp_unicode_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        if (tmp_unicode_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_16 = BUILTIN_UNICODE1(tmp_unicode_arg_5);
        Py_DECREF(tmp_unicode_arg_5);
        if (tmp_add_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_add_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_15 = mod_consts[8];
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_add_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = var_grad;
        tmp_unicode_arg_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[3]);
        if (tmp_unicode_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_14 = BUILTIN_UNICODE1(tmp_unicode_arg_6);
        Py_DECREF(tmp_unicode_arg_6);
        if (tmp_add_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_13 = mod_consts[9];
        tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        if (tmp_add_expr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_outputs);
        tmp_expression_value_12 = par_outputs;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[6]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_args_element_value_6 = var_out;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 53;
        tmp_unicode_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        if (tmp_unicode_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_12 = BUILTIN_UNICODE1(tmp_unicode_arg_7);
        Py_DECREF(tmp_unicode_arg_7);
        if (tmp_add_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_11 = mod_consts[8];
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_13 = var_out;
        tmp_unicode_arg_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[3]);
        if (tmp_unicode_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_10 = BUILTIN_UNICODE1(tmp_unicode_arg_8);
        Py_DECREF(tmp_unicode_arg_8);
        if (tmp_add_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_9 = mod_consts[12];
        tmp_make_exception_arg_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 50;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 50;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    branch_end_3:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_out);
        tmp_expression_value_15 = var_out;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[13]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[14]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = var_grad;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[13]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[14]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        PyObject *tmp_unicode_arg_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_unicode_arg_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_unicode_arg_11;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_unicode_arg_12;
        PyObject *tmp_expression_value_21;
        tmp_add_expr_left_24 = mod_consts[15];
        CHECK_OBJECT(par_grads);
        tmp_expression_value_18 = par_grads;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[6]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = var_grad;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 59;
        tmp_unicode_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        if (tmp_unicode_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_24 = BUILTIN_UNICODE1(tmp_unicode_arg_9);
        Py_DECREF(tmp_unicode_arg_9);
        if (tmp_add_expr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
        Py_DECREF(tmp_add_expr_right_24);
        if (tmp_add_expr_left_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_23 = mod_consts[16];
        tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_23, tmp_add_expr_right_23);
        Py_DECREF(tmp_add_expr_left_23);
        if (tmp_add_expr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_add_expr_left_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_19 = var_grad;
        tmp_unicode_arg_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[13]);
        if (tmp_unicode_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_22 = BUILTIN_UNICODE1(tmp_unicode_arg_10);
        Py_DECREF(tmp_unicode_arg_10);
        if (tmp_add_expr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
        Py_DECREF(tmp_add_expr_left_22);
        Py_DECREF(tmp_add_expr_right_22);
        if (tmp_add_expr_left_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_21 = mod_consts[9];
        tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_21, tmp_add_expr_right_21);
        Py_DECREF(tmp_add_expr_left_21);
        if (tmp_add_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_outputs);
        tmp_expression_value_20 = par_outputs;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[6]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_args_element_value_8 = var_out;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 61;
        tmp_unicode_arg_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        if (tmp_unicode_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_20 = BUILTIN_UNICODE1(tmp_unicode_arg_11);
        Py_DECREF(tmp_unicode_arg_11);
        if (tmp_add_expr_right_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        Py_DECREF(tmp_add_expr_left_20);
        Py_DECREF(tmp_add_expr_right_20);
        if (tmp_add_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_19 = mod_consts[16];
        tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        if (tmp_add_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_expression_value_21 = var_out;
        tmp_unicode_arg_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[13]);
        if (tmp_unicode_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_18 = BUILTIN_UNICODE1(tmp_unicode_arg_12);
        Py_DECREF(tmp_unicode_arg_12);
        if (tmp_add_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        Py_DECREF(tmp_add_expr_left_18);
        Py_DECREF(tmp_add_expr_right_18);
        if (tmp_add_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_17 = mod_consts[12];
        tmp_make_exception_arg_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 56;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_9;
        if (var_new_grads == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_22 = var_new_grads;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[18]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = var_grad;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 63;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_grad);
        tmp_cmp_expr_left_3 = var_grad;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_out);
        tmp_expression_value_23 = var_out;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[19]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_out);
        tmp_called_instance_1 = var_out;
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 66;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[20]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_4 = mod_consts[21];
        tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[22];
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 67;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 67;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    branch_no_7:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_26;
        if (var_new_grads == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_24 = var_new_grads;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[18]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[23]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_out);
        tmp_kw_call_arg_value_0_1 = var_out;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[24]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 68;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[25]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 68;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_3;
        if (var_new_grads == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_27 = var_new_grads;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[18]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 70;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[26]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_type_arg_1;
        tmp_add_expr_left_25 = mod_consts[27];
        CHECK_OBJECT(var_grad);
        tmp_type_arg_1 = var_grad;
        tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_28 == NULL));
        tmp_add_expr_right_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[28]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_add_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_make_exception_arg_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
        Py_DECREF(tmp_add_expr_right_25);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame.f_lineno = 72;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 72;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    branch_end_5:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 33;
        type_description_1 = "ooooooo";
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
        PyObject *tmp_tuple_arg_1;
        if (var_new_grads == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_1 = var_new_grads;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_367d6a359201edfb9ccd832a87ba2eb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_367d6a359201edfb9ccd832a87ba2eb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_367d6a359201edfb9ccd832a87ba2eb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_367d6a359201edfb9ccd832a87ba2eb3,
        type_description_1,
        par_outputs,
        par_grads,
        par_is_grads_batched,
        var_new_grads,
        var_out,
        var_grad,
        var_grad_shape
    );


    // Release cached frame if used for exception.
    if (frame_367d6a359201edfb9ccd832a87ba2eb3 == cache_frame_367d6a359201edfb9ccd832a87ba2eb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_367d6a359201edfb9ccd832a87ba2eb3);
        cache_frame_367d6a359201edfb9ccd832a87ba2eb3 = NULL;
    }

    assertFrameObject(frame_367d6a359201edfb9ccd832a87ba2eb3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_new_grads);
    var_new_grads = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_grad_shape);
    var_grad_shape = NULL;
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

    Py_XDECREF(var_new_grads);
    var_new_grads = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_grad_shape);
    var_grad_shape = NULL;
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
    CHECK_OBJECT(par_outputs);
    Py_DECREF(par_outputs);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_is_grads_batched);
    Py_DECREF(par_is_grads_batched);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_outputs);
    Py_DECREF(par_outputs);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_is_grads_batched);
    Py_DECREF(par_is_grads_batched);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$autograd$$$function__2__tensor_or_tensors_to_tuple(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensors = python_pars[0];
    PyObject *par_length = python_pars[1];
    struct Nuitka_FrameObject *frame_32115b1a46de86c723f0e98285dedcda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_32115b1a46de86c723f0e98285dedcda = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32115b1a46de86c723f0e98285dedcda)) {
        Py_XDECREF(cache_frame_32115b1a46de86c723f0e98285dedcda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32115b1a46de86c723f0e98285dedcda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32115b1a46de86c723f0e98285dedcda = MAKE_FUNCTION_FRAME(codeobj_32115b1a46de86c723f0e98285dedcda, module_torch$autograd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32115b1a46de86c723f0e98285dedcda->m_type_description == NULL);
    frame_32115b1a46de86c723f0e98285dedcda = cache_frame_32115b1a46de86c723f0e98285dedcda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32115b1a46de86c723f0e98285dedcda);
    assert(Py_REFCNT(frame_32115b1a46de86c723f0e98285dedcda) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_tensors);
        tmp_cmp_expr_left_1 = par_tensors;
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
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[26];
        CHECK_OBJECT(par_length);
        tmp_mult_expr_right_1 = par_length;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_tensors);
        tmp_isinstance_inst_1 = par_tensors;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_tensors);
        tmp_tuple_element_1 = par_tensors;
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_tensors);
        tmp_tuple_arg_1 = par_tensors;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_32115b1a46de86c723f0e98285dedcda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32115b1a46de86c723f0e98285dedcda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32115b1a46de86c723f0e98285dedcda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32115b1a46de86c723f0e98285dedcda,
        type_description_1,
        par_tensors,
        par_length
    );


    // Release cached frame if used for exception.
    if (frame_32115b1a46de86c723f0e98285dedcda == cache_frame_32115b1a46de86c723f0e98285dedcda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32115b1a46de86c723f0e98285dedcda);
        cache_frame_32115b1a46de86c723f0e98285dedcda = NULL;
    }

    assertFrameObject(frame_32115b1a46de86c723f0e98285dedcda);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$autograd$$$function__3_backward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensors = python_pars[0];
    PyObject *par_grad_tensors = python_pars[1];
    PyObject *par_retain_graph = python_pars[2];
    PyObject *par_create_graph = python_pars[3];
    PyObject *par_grad_variables = python_pars[4];
    PyObject *par_inputs = python_pars[5];
    PyObject *var_grad_tensors_ = NULL;
    struct Nuitka_FrameObject *frame_8335f49c1a3504fcde95eae89e9e3802;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8335f49c1a3504fcde95eae89e9e3802 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8335f49c1a3504fcde95eae89e9e3802)) {
        Py_XDECREF(cache_frame_8335f49c1a3504fcde95eae89e9e3802);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8335f49c1a3504fcde95eae89e9e3802 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8335f49c1a3504fcde95eae89e9e3802 = MAKE_FUNCTION_FRAME(codeobj_8335f49c1a3504fcde95eae89e9e3802, module_torch$autograd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8335f49c1a3504fcde95eae89e9e3802->m_type_description == NULL);
    frame_8335f49c1a3504fcde95eae89e9e3802 = cache_frame_8335f49c1a3504fcde95eae89e9e3802;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8335f49c1a3504fcde95eae89e9e3802);
    assert(Py_REFCNT(frame_8335f49c1a3504fcde95eae89e9e3802) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_grad_variables);
        tmp_cmp_expr_left_1 = par_grad_variables;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8335f49c1a3504fcde95eae89e9e3802->m_frame.f_lineno = 151;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[30],
            PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_grad_tensors);
        tmp_cmp_expr_left_2 = par_grad_tensors;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_grad_variables);
        tmp_assign_source_1 = par_grad_variables;
        {
            PyObject *old = par_grad_tensors;
            assert(old != NULL);
            par_grad_tensors = tmp_assign_source_1;
            Py_INCREF(par_grad_tensors);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[32];
        frame_8335f49c1a3504fcde95eae89e9e3802->m_frame.f_lineno = 155;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 155;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_inputs);
        tmp_cmp_expr_left_3 = par_inputs;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_inputs);
        tmp_len_arg_1 = par_inputs;
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = 0;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[33];
        frame_8335f49c1a3504fcde95eae89e9e3802->m_frame.f_lineno = 159;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 159;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_tensors);
        tmp_isinstance_inst_1 = par_tensors;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_tensors);
        tmp_tuple_element_1 = par_tensors;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_tensors);
        tmp_tuple_arg_1 = par_tensors;
        tmp_assign_source_2 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = par_tensors;
            par_tensors = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_2;
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_tuple_arg_2;
        if (par_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_2 = par_inputs;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        if (par_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_inputs;
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_2);
        goto condexpr_end_2;
        condexpr_false_2:;
        if (par_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_5 = par_inputs;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        if (par_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_2 = par_inputs;
        tmp_assign_source_3 = PySequence_Tuple(tmp_tuple_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_3 = mod_consts[35];
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_3:;
        condexpr_end_2:;
        {
            PyObject *old = par_inputs;
            par_inputs = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_len_arg_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grad_tensors);
        tmp_args_element_value_1 = par_grad_tensors;
        CHECK_OBJECT(par_tensors);
        tmp_len_arg_2 = par_tensors;
        tmp_args_element_value_2 = BUILTIN_LEN(tmp_len_arg_2);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_8335f49c1a3504fcde95eae89e9e3802->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grad_tensors_ == NULL);
        var_grad_tensors_ = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensors);
        tmp_tuple_element_3 = par_tensors;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_grad_tensors_);
        tmp_tuple_element_3 = var_grad_tensors_;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[38]);
        frame_8335f49c1a3504fcde95eae89e9e3802->m_frame.f_lineno = 166;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_grad_tensors_;
            assert(old != NULL);
            var_grad_tensors_ = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_retain_graph);
        tmp_cmp_expr_left_6 = par_retain_graph;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(par_create_graph);
        tmp_assign_source_6 = par_create_graph;
        {
            PyObject *old = par_retain_graph;
            assert(old != NULL);
            par_retain_graph = tmp_assign_source_6;
            Py_INCREF(par_retain_graph);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[40]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensors);
        tmp_tuple_element_4 = par_tensors;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_grad_tensors_);
        tmp_tuple_element_4 = var_grad_tensors_;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
        CHECK_OBJECT(par_retain_graph);
        tmp_tuple_element_4 = par_retain_graph;
        PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
        if (par_create_graph == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_4 = par_create_graph;
        PyTuple_SET_ITEM0(tmp_args_value_2, 3, tmp_tuple_element_4);
        CHECK_OBJECT(par_inputs);
        tmp_tuple_element_4 = par_inputs;
        PyTuple_SET_ITEM0(tmp_args_value_2, 4, tmp_tuple_element_4);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[43]);
        frame_8335f49c1a3504fcde95eae89e9e3802->m_frame.f_lineno = 173;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8335f49c1a3504fcde95eae89e9e3802, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8335f49c1a3504fcde95eae89e9e3802->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8335f49c1a3504fcde95eae89e9e3802, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8335f49c1a3504fcde95eae89e9e3802,
        type_description_1,
        par_tensors,
        par_grad_tensors,
        par_retain_graph,
        par_create_graph,
        par_grad_variables,
        par_inputs,
        var_grad_tensors_
    );


    // Release cached frame if used for exception.
    if (frame_8335f49c1a3504fcde95eae89e9e3802 == cache_frame_8335f49c1a3504fcde95eae89e9e3802) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8335f49c1a3504fcde95eae89e9e3802);
        cache_frame_8335f49c1a3504fcde95eae89e9e3802 = NULL;
    }

    assertFrameObject(frame_8335f49c1a3504fcde95eae89e9e3802);

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
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    par_tensors = NULL;
    CHECK_OBJECT(par_grad_tensors);
    Py_DECREF(par_grad_tensors);
    par_grad_tensors = NULL;
    CHECK_OBJECT(par_retain_graph);
    Py_DECREF(par_retain_graph);
    par_retain_graph = NULL;
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);
    par_inputs = NULL;
    CHECK_OBJECT(var_grad_tensors_);
    Py_DECREF(var_grad_tensors_);
    var_grad_tensors_ = NULL;
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

    Py_XDECREF(par_tensors);
    par_tensors = NULL;
    Py_XDECREF(par_grad_tensors);
    par_grad_tensors = NULL;
    Py_XDECREF(par_retain_graph);
    par_retain_graph = NULL;
    Py_XDECREF(par_inputs);
    par_inputs = NULL;
    Py_XDECREF(var_grad_tensors_);
    var_grad_tensors_ = NULL;
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
    CHECK_OBJECT(par_create_graph);
    Py_DECREF(par_create_graph);
    CHECK_OBJECT(par_grad_variables);
    Py_DECREF(par_grad_variables);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_create_graph);
    Py_DECREF(par_create_graph);
    CHECK_OBJECT(par_grad_variables);
    Py_DECREF(par_grad_variables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$autograd$$$function__4_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_outputs = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_inputs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_grad_outputs = python_pars[2];
    struct Nuitka_CellObject *par_retain_graph = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_create_graph = Nuitka_Cell_New1(python_pars[4]);
    PyObject *par_only_inputs = python_pars[5];
    struct Nuitka_CellObject *par_allow_unused = Nuitka_Cell_New1(python_pars[6]);
    PyObject *par_is_grads_batched = python_pars[7];
    PyObject *var_overridable_args = NULL;
    PyObject *var_grad_outputs_ = NULL;
    PyObject *var_vjp = NULL;
    struct Nuitka_FrameObject *frame_b5b6e91496ec9280e42e17b9b7986529;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b5b6e91496ec9280e42e17b9b7986529 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5b6e91496ec9280e42e17b9b7986529)) {
        Py_XDECREF(cache_frame_b5b6e91496ec9280e42e17b9b7986529);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5b6e91496ec9280e42e17b9b7986529 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5b6e91496ec9280e42e17b9b7986529 = MAKE_FUNCTION_FRAME(codeobj_b5b6e91496ec9280e42e17b9b7986529, module_torch$autograd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5b6e91496ec9280e42e17b9b7986529->m_type_description == NULL);
    frame_b5b6e91496ec9280e42e17b9b7986529 = cache_frame_b5b6e91496ec9280e42e17b9b7986529;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5b6e91496ec9280e42e17b9b7986529);
    assert(Py_REFCNT(frame_b5b6e91496ec9280e42e17b9b7986529) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_outputs);
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_tuple_element_1 = Nuitka_Cell_GET(par_outputs);
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_tuple_arg_1 = Nuitka_Cell_GET(par_outputs);
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = Nuitka_Cell_GET(par_outputs);
            PyCell_SET(par_outputs, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_arg_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_inputs));
        tmp_isinstance_inst_2 = Nuitka_Cell_GET(par_inputs);
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_inputs));
        tmp_tuple_element_2 = Nuitka_Cell_GET(par_inputs);
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_2);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_inputs));
        tmp_tuple_arg_2 = Nuitka_Cell_GET(par_inputs);
        tmp_assign_source_2 = PySequence_Tuple(tmp_tuple_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        {
            PyObject *old = Nuitka_Cell_GET(par_inputs);
            PyCell_SET(par_inputs, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_add_expr_left_1 = Nuitka_Cell_GET(par_outputs);
        CHECK_OBJECT(Nuitka_Cell_GET(par_inputs));
        tmp_add_expr_right_1 = Nuitka_Cell_GET(par_inputs);
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_overridable_args == NULL);
        var_overridable_args = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_overridable_args);
        tmp_args_element_value_1 = var_overridable_args;
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 241;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 241;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_overridable_args);
        tmp_kw_call_arg_value_1_1 = var_overridable_args;
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_kw_call_arg_value_2_1 = Nuitka_Cell_GET(par_outputs);
        CHECK_OBJECT(Nuitka_Cell_GET(par_inputs));
        tmp_kw_call_arg_value_3_1 = Nuitka_Cell_GET(par_inputs);
        CHECK_OBJECT(par_grad_outputs);
        tmp_kw_call_dict_value_0_1 = par_grad_outputs;
        CHECK_OBJECT(Nuitka_Cell_GET(par_retain_graph));
        tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(par_retain_graph);
        CHECK_OBJECT(Nuitka_Cell_GET(par_create_graph));
        tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(par_create_graph);
        CHECK_OBJECT(par_only_inputs);
        tmp_kw_call_dict_value_3_1 = par_only_inputs;
        CHECK_OBJECT(Nuitka_Cell_GET(par_allow_unused));
        tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(par_allow_unused);
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 242;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[47]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_only_inputs);
        tmp_operand_value_1 = par_only_inputs;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 255;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[30],
            PyTuple_GET_ITEM(mod_consts[48], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_len_arg_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grad_outputs);
        tmp_args_element_value_2 = par_grad_outputs;
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_len_arg_1 = Nuitka_Cell_GET(par_outputs);
        tmp_args_element_value_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_grad_outputs_ == NULL);
        var_grad_outputs_ = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(par_outputs);
        CHECK_OBJECT(var_grad_outputs_);
        tmp_kw_call_arg_value_1_2 = var_grad_outputs_;
        CHECK_OBJECT(par_is_grads_batched);
        tmp_kw_call_dict_value_0_2 = par_is_grads_batched;
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 260;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[49]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_grad_outputs_;
            assert(old != NULL);
            var_grad_outputs_ = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_retain_graph));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_retain_graph);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_create_graph));
        tmp_assign_source_6 = Nuitka_Cell_GET(par_create_graph);
        {
            PyObject *old = Nuitka_Cell_GET(par_retain_graph);
            PyCell_SET(par_retain_graph, tmp_assign_source_6);
            Py_INCREF(tmp_assign_source_6);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_is_grads_batched);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_is_grads_batched);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = par_allow_unused;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_create_graph;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_inputs;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_outputs;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_retain_graph;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_7 = MAKE_FUNCTION_torch$autograd$$$function__4_grad$$$function__1_vjp(tmp_closure_1);

        assert(var_vjp == NULL);
        var_vjp = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[53]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vjp);
        tmp_tuple_element_3 = var_vjp;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[54];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[54];
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[55]);
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 273;
        tmp_called_value_5 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grad_outputs);
        tmp_args_element_value_4 = par_grad_outputs;
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 273;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_outputs));
        tmp_tuple_element_4 = Nuitka_Cell_GET(par_outputs);
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_grad_outputs_);
        tmp_tuple_element_4 = var_grad_outputs_;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
        if (Nuitka_Cell_GET(par_retain_graph) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "ccoccocoooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_4 = Nuitka_Cell_GET(par_retain_graph);
        PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
        CHECK_OBJECT(Nuitka_Cell_GET(par_create_graph));
        tmp_tuple_element_4 = Nuitka_Cell_GET(par_create_graph);
        PyTuple_SET_ITEM0(tmp_args_value_2, 3, tmp_tuple_element_4);
        CHECK_OBJECT(Nuitka_Cell_GET(par_inputs));
        tmp_tuple_element_4 = Nuitka_Cell_GET(par_inputs);
        PyTuple_SET_ITEM0(tmp_args_value_2, 4, tmp_tuple_element_4);
        CHECK_OBJECT(Nuitka_Cell_GET(par_allow_unused));
        tmp_tuple_element_4 = Nuitka_Cell_GET(par_allow_unused);
        PyTuple_SET_ITEM0(tmp_args_value_2, 5, tmp_tuple_element_4);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[57]);
        frame_b5b6e91496ec9280e42e17b9b7986529->m_frame.f_lineno = 275;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ccoccocoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5b6e91496ec9280e42e17b9b7986529, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5b6e91496ec9280e42e17b9b7986529->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5b6e91496ec9280e42e17b9b7986529, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5b6e91496ec9280e42e17b9b7986529,
        type_description_1,
        par_outputs,
        par_inputs,
        par_grad_outputs,
        par_retain_graph,
        par_create_graph,
        par_only_inputs,
        par_allow_unused,
        par_is_grads_batched,
        var_overridable_args,
        var_grad_outputs_,
        var_vjp
    );


    // Release cached frame if used for exception.
    if (frame_b5b6e91496ec9280e42e17b9b7986529 == cache_frame_b5b6e91496ec9280e42e17b9b7986529) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5b6e91496ec9280e42e17b9b7986529);
        cache_frame_b5b6e91496ec9280e42e17b9b7986529 = NULL;
    }

    assertFrameObject(frame_b5b6e91496ec9280e42e17b9b7986529);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_outputs);
    Py_DECREF(par_outputs);
    par_outputs = NULL;
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);
    par_inputs = NULL;
    CHECK_OBJECT(par_retain_graph);
    Py_DECREF(par_retain_graph);
    par_retain_graph = NULL;
    CHECK_OBJECT(var_overridable_args);
    Py_DECREF(var_overridable_args);
    var_overridable_args = NULL;
    Py_XDECREF(var_grad_outputs_);
    var_grad_outputs_ = NULL;
    Py_XDECREF(var_vjp);
    var_vjp = NULL;
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

    CHECK_OBJECT(par_outputs);
    Py_DECREF(par_outputs);
    par_outputs = NULL;
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);
    par_inputs = NULL;
    CHECK_OBJECT(par_retain_graph);
    Py_DECREF(par_retain_graph);
    par_retain_graph = NULL;
    Py_XDECREF(var_overridable_args);
    var_overridable_args = NULL;
    Py_XDECREF(var_grad_outputs_);
    var_grad_outputs_ = NULL;
    Py_XDECREF(var_vjp);
    var_vjp = NULL;
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
    CHECK_OBJECT(par_grad_outputs);
    Py_DECREF(par_grad_outputs);
    CHECK_OBJECT(par_create_graph);
    Py_DECREF(par_create_graph);
    CHECK_OBJECT(par_only_inputs);
    Py_DECREF(par_only_inputs);
    CHECK_OBJECT(par_allow_unused);
    Py_DECREF(par_allow_unused);
    CHECK_OBJECT(par_is_grads_batched);
    Py_DECREF(par_is_grads_batched);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_grad_outputs);
    Py_DECREF(par_grad_outputs);
    CHECK_OBJECT(par_create_graph);
    Py_DECREF(par_create_graph);
    CHECK_OBJECT(par_only_inputs);
    Py_DECREF(par_only_inputs);
    CHECK_OBJECT(par_allow_unused);
    Py_DECREF(par_allow_unused);
    CHECK_OBJECT(par_is_grads_batched);
    Py_DECREF(par_is_grads_batched);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$autograd$$$function__4_grad$$$function__1_vjp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_gO = python_pars[0];
    struct Nuitka_FrameObject *frame_554ea5946ae758a0f87188a08964818f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_554ea5946ae758a0f87188a08964818f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_554ea5946ae758a0f87188a08964818f)) {
        Py_XDECREF(cache_frame_554ea5946ae758a0f87188a08964818f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_554ea5946ae758a0f87188a08964818f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_554ea5946ae758a0f87188a08964818f = MAKE_FUNCTION_FRAME(codeobj_554ea5946ae758a0f87188a08964818f, module_torch$autograd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_554ea5946ae758a0f87188a08964818f->m_type_description == NULL);
    frame_554ea5946ae758a0f87188a08964818f = cache_frame_554ea5946ae758a0f87188a08964818f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_554ea5946ae758a0f87188a08964818f);
    assert(Py_REFCNT(frame_554ea5946ae758a0f87188a08964818f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_gO);
        tmp_tuple_element_1 = par_gO;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "occccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[4]);
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "occccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "occccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[2]);
        PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "occccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        PyTuple_SET_ITEM0(tmp_args_value_1, 5, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[57]);
        frame_554ea5946ae758a0f87188a08964818f->m_frame.f_lineno = 270;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "occccc";
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
        exception_tb = MAKE_TRACEBACK(frame_554ea5946ae758a0f87188a08964818f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_554ea5946ae758a0f87188a08964818f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_554ea5946ae758a0f87188a08964818f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_554ea5946ae758a0f87188a08964818f,
        type_description_1,
        par_gO,
        self->m_closure[3],
        self->m_closure[4],
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_554ea5946ae758a0f87188a08964818f == cache_frame_554ea5946ae758a0f87188a08964818f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_554ea5946ae758a0f87188a08964818f);
        cache_frame_554ea5946ae758a0f87188a08964818f = NULL;
    }

    assertFrameObject(frame_554ea5946ae758a0f87188a08964818f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_gO);
    Py_DECREF(par_gO);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_gO);
    Py_DECREF(par_gO);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$autograd$$$function__5__is_checkpoint_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f2bb39f8996316151b24eada024033f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2bb39f8996316151b24eada024033f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2bb39f8996316151b24eada024033f4)) {
        Py_XDECREF(cache_frame_f2bb39f8996316151b24eada024033f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2bb39f8996316151b24eada024033f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2bb39f8996316151b24eada024033f4 = MAKE_FUNCTION_FRAME(codeobj_f2bb39f8996316151b24eada024033f4, module_torch$autograd, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2bb39f8996316151b24eada024033f4->m_type_description == NULL);
    frame_f2bb39f8996316151b24eada024033f4 = cache_frame_f2bb39f8996316151b24eada024033f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f2bb39f8996316151b24eada024033f4);
    assert(Py_REFCNT(frame_f2bb39f8996316151b24eada024033f4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_f2bb39f8996316151b24eada024033f4->m_frame.f_lineno = 294;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[61]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

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
        exception_tb = MAKE_TRACEBACK(frame_f2bb39f8996316151b24eada024033f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2bb39f8996316151b24eada024033f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2bb39f8996316151b24eada024033f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2bb39f8996316151b24eada024033f4,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f2bb39f8996316151b24eada024033f4 == cache_frame_f2bb39f8996316151b24eada024033f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2bb39f8996316151b24eada024033f4);
        cache_frame_f2bb39f8996316151b24eada024033f4 = NULL;
    }

    assertFrameObject(frame_f2bb39f8996316151b24eada024033f4);

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


static PyObject *impl_torch$autograd$$$function__6_variable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_9f8fa9f554e47f5d0d385d551c35bc50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9f8fa9f554e47f5d0d385d551c35bc50 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f8fa9f554e47f5d0d385d551c35bc50)) {
        Py_XDECREF(cache_frame_9f8fa9f554e47f5d0d385d551c35bc50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f8fa9f554e47f5d0d385d551c35bc50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f8fa9f554e47f5d0d385d551c35bc50 = MAKE_FUNCTION_FRAME(codeobj_9f8fa9f554e47f5d0d385d551c35bc50, module_torch$autograd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f8fa9f554e47f5d0d385d551c35bc50->m_type_description == NULL);
    frame_9f8fa9f554e47f5d0d385d551c35bc50 = cache_frame_9f8fa9f554e47f5d0d385d551c35bc50;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f8fa9f554e47f5d0d385d551c35bc50);
    assert(Py_REFCNT(frame_9f8fa9f554e47f5d0d385d551c35bc50) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f8fa9f554e47f5d0d385d551c35bc50->m_frame.f_lineno = 298;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[30],
            PyTuple_GET_ITEM(mod_consts[62], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
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
        exception_tb = MAKE_TRACEBACK(frame_9f8fa9f554e47f5d0d385d551c35bc50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f8fa9f554e47f5d0d385d551c35bc50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f8fa9f554e47f5d0d385d551c35bc50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f8fa9f554e47f5d0d385d551c35bc50,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_9f8fa9f554e47f5d0d385d551c35bc50 == cache_frame_9f8fa9f554e47f5d0d385d551c35bc50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f8fa9f554e47f5d0d385d551c35bc50);
        cache_frame_9f8fa9f554e47f5d0d385d551c35bc50 = NULL;
    }

    assertFrameObject(frame_9f8fa9f554e47f5d0d385d551c35bc50);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$autograd$$$function__7__register_py_tensor_class_for_device(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    PyObject *par_cls = python_pars[1];
    struct Nuitka_FrameObject *frame_5e5b8413426c24f87e89257173f7b28c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5e5b8413426c24f87e89257173f7b28c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e5b8413426c24f87e89257173f7b28c)) {
        Py_XDECREF(cache_frame_5e5b8413426c24f87e89257173f7b28c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e5b8413426c24f87e89257173f7b28c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e5b8413426c24f87e89257173f7b28c = MAKE_FUNCTION_FRAME(codeobj_5e5b8413426c24f87e89257173f7b28c, module_torch$autograd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e5b8413426c24f87e89257173f7b28c->m_type_description == NULL);
    frame_5e5b8413426c24f87e89257173f7b28c = cache_frame_5e5b8413426c24f87e89257173f7b28c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5e5b8413426c24f87e89257173f7b28c);
    assert(Py_REFCNT(frame_5e5b8413426c24f87e89257173f7b28c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_cls);
        tmp_isinstance_inst_1 = par_cls;
        tmp_isinstance_cls_1 = (PyObject *)&PyType_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[64];
        frame_5e5b8413426c24f87e89257173f7b28c->m_frame.f_lineno = 319;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 319;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_2 = par_cls;
        frame_5e5b8413426c24f87e89257173f7b28c->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[66],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e5b8413426c24f87e89257173f7b28c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e5b8413426c24f87e89257173f7b28c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e5b8413426c24f87e89257173f7b28c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e5b8413426c24f87e89257173f7b28c,
        type_description_1,
        par_device,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_5e5b8413426c24f87e89257173f7b28c == cache_frame_5e5b8413426c24f87e89257173f7b28c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e5b8413426c24f87e89257173f7b28c);
        cache_frame_5e5b8413426c24f87e89257173f7b28c = NULL;
    }

    assertFrameObject(frame_5e5b8413426c24f87e89257173f7b28c);

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
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__1__make_grads(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__1__make_grads,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_367d6a359201edfb9ccd832a87ba2eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$autograd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__2__tensor_or_tensors_to_tuple(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__2__tensor_or_tensors_to_tuple,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32115b1a46de86c723f0e98285dedcda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$autograd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__3_backward(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__3_backward,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8335f49c1a3504fcde95eae89e9e3802,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$autograd,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__4_grad(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__4_grad,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5b6e91496ec9280e42e17b9b7986529,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$autograd,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__4_grad$$$function__1_vjp(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__4_grad$$$function__1_vjp,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_554ea5946ae758a0f87188a08964818f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$autograd,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__5__is_checkpoint_valid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__5__is_checkpoint_valid,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f2bb39f8996316151b24eada024033f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$autograd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__6_variable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__6_variable,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f8fa9f554e47f5d0d385d551c35bc50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$autograd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$autograd$$$function__7__register_py_tensor_class_for_device() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$autograd$$$function__7__register_py_tensor_class_for_device,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e5b8413426c24f87e89257173f7b28c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$autograd,
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

function_impl_code functable_torch$autograd[] = {
    impl_torch$autograd$$$function__4_grad$$$function__1_vjp,
    impl_torch$autograd$$$function__1__make_grads,
    impl_torch$autograd$$$function__2__tensor_or_tensors_to_tuple,
    impl_torch$autograd$$$function__3_backward,
    impl_torch$autograd$$$function__4_grad,
    impl_torch$autograd$$$function__5__is_checkpoint_valid,
    impl_torch$autograd$$$function__6_variable,
    impl_torch$autograd$$$function__7__register_py_tensor_class_for_device,
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

    function_impl_code *current = functable_torch$autograd;
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

    if (offset > sizeof(functable_torch$autograd) || offset < 0) {
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
        functable_torch$autograd[offset],
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
        module_torch$autograd,
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
PyObject *modulecode_torch$autograd(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.autograd");

    // Store the module for future use.
    module_torch$autograd = module;

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
        PRINT_STRING("torch.autograd: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.autograd: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.autograd: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$autograd\n");

    moduledict_torch$autograd = MODULE_DICT(module_torch$autograd);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$autograd,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$autograd,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[116]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$autograd,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$autograd,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$autograd,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$autograd);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$autograd);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    struct Nuitka_FrameObject *frame_ad85931ae5347dd3ba54772dcb372603;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_2);
    }
    frame_ad85931ae5347dd3ba54772dcb372603 = MAKE_MODULE_FRAME(codeobj_ad85931ae5347dd3ba54772dcb372603, module_torch$autograd);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad85931ae5347dd3ba54772dcb372603);
    assert(Py_REFCNT(frame_ad85931ae5347dd3ba54772dcb372603) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[70]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[70]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[72]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[73]);
                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[74]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[75]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[76];
            frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[73]);
                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[74]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[77]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_subscript_value_1 = mod_consts[54];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[82], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[1];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[54];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 9;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[29];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[54];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 10;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[84];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[85];
        tmp_level_value_3 = mod_consts[54];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[86],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_8 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[87],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[87]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[88],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[88]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[89],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[89]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[90],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[90]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[91],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[91]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[92],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[92]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[93],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[93]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_15);
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
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[94];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[95];
        tmp_level_value_4 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 15;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[39],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[96];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[97];
        tmp_level_value_5 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 16;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[98],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[98]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[99],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[99]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_19);
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
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[100];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[101];
        tmp_level_value_6 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 17;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[100],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[100]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[102],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[102]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_22);
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
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[103];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[104];
        tmp_level_value_7 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 18;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[105],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[105]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[106],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[106]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[107],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[107]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[108],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[108]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_27);
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[109];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[110];
        tmp_level_value_8 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 19;
        tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[111],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[111]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[112],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[112]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_30);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[113];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[114];
        tmp_level_value_9 = mod_consts[115];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 20;
        tmp_assign_source_31 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_20 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[45],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[45]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_21 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[46],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[46]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_33);
    }
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[116];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[117];
        tmp_level_value_10 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 21;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[118],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[116];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[119];
        tmp_level_value_11 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 22;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[120],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[120]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[116];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[121];
        tmp_level_value_12 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 23;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[122],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[116];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[123];
        tmp_level_value_13 = mod_consts[115];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 24;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[52],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_LIST4(mod_consts[124]);
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_9;
        tmp_dict_key_1 = mod_consts[59];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_1;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[127];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_subscript_value_4 == NULL)) {
                tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_subscript_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[128];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[129];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_Ellipsis;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_1);
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

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


        tmp_assign_source_40 = MAKE_FUNCTION_torch$autograd$$$function__1__make_grads(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        tmp_dict_key_2 = mod_consts[130];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_subscript_value_6 == NULL)) {
            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_subscript_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_2;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[131];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[129];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_Ellipsis;
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_2);
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

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


        tmp_assign_source_41 = MAKE_FUNCTION_torch$autograd$$$function__2__tensor_or_tensors_to_tuple(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_defaults_1 = mod_consts[132];
        tmp_dict_key_3 = mod_consts[130];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_11;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[133];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[56];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_9 = (PyObject *)&PyBool_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_9);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[42];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[134];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_subscript_value_10 == NULL)) {
                tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_subscript_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_10);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[34];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_subscript_value_11 == NULL)) {
                tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_11);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[129];
            tmp_dict_value_3 = Py_None;
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
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_42 = MAKE_FUNCTION_torch$autograd$$$function__3_backward(tmp_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_defaults_2 = mod_consts[136];
        tmp_dict_key_4 = mod_consts[59];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_21;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[34];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[137];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_subscript_value_12 == NULL)) {
                tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_12);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[56];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_13);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[42];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[138];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[60];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[128];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[129];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_4;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[2]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_Ellipsis;
            PyTuple_SET_ITEM0(tmp_subscript_value_14, 1, tmp_tuple_element_3);
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_14);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_43 = MAKE_FUNCTION_torch$autograd$$$function__4_grad(tmp_defaults_2, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_torch$autograd$$$function__5__is_checkpoint_valid();

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_torch$autograd$$$function__6_variable();

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_45);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[65]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 301;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[140]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

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
        tmp_make_exception_arg_1 = mod_consts[141];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 302;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 302;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[142];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[143];
        tmp_level_value_14 = mod_consts[54];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 305;
        tmp_assign_source_46 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_26 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[144],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[144]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_27 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[145],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[145]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_28 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[146],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[146]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_29 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[147],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[147]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_30 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[148],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[148]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_31 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[149],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[149]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_32 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[150],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[150]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_33 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[151],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[151]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_34 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[152],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[152]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_35 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[153],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[153]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_36 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[154],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[154]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_37 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[155],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[155]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_38 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[156],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[156]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_39 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[157],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[157]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_40 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[158],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[158]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_41 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[159],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[159]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_42 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[160],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[160]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_43 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[161],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[161]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_64);
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[142];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[162];
        tmp_level_value_15 = mod_consts[54];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 312;
        tmp_assign_source_65 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_65;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_44 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[163],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[163]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_45 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[164],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[164]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_46 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[165],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[165]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_47 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[166],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[166]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_48 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[167],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[167]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_70);
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[116];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_torch$autograd;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[168];
        tmp_level_value_16 = mod_consts[21];
        frame_ad85931ae5347dd3ba54772dcb372603->m_frame.f_lineno = 315;
        tmp_import_name_from_49 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_torch$autograd,
                mod_consts[169],
                mod_consts[54]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_71);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad85931ae5347dd3ba54772dcb372603, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad85931ae5347dd3ba54772dcb372603->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad85931ae5347dd3ba54772dcb372603, exception_lineno);
    }



    assertFrameObject(frame_ad85931ae5347dd3ba54772dcb372603);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_torch$autograd$$$function__7__register_py_tensor_class_for_device();

        UPDATE_STRING_DICT1(moduledict_torch$autograd, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_72);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.autograd", false);

    Py_INCREF(module_torch$autograd);
    return module_torch$autograd;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$autograd, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$autograd", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
