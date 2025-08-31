/* Generated code for Python module 'torch.distributed.algorithms.ddp_comm_hooks.default_hooks'
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

/* The "module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks;
PyDictObject *moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[74];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[74];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributed.algorithms.ddp_comm_hooks.default_hooks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 74; i++) {
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
void checkModuleConstants_torch$distributed$algorithms$ddp_comm_hooks$default_hooks(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 74; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_036368105e021eec7aebd521a822bad2;
static PyCodeObject *codeobj_970023c943200c84bad1194a0185d82c;
static PyCodeObject *codeobj_7274dd7f936cc0c3243d14fb6510b2e5;
static PyCodeObject *codeobj_ca12fd88f88d6e8fb8a367a889adbd30;
static PyCodeObject *codeobj_f80fc82fa7d8dc0c26cea223c7926129;
static PyCodeObject *codeobj_18e911f3b5b03553e6369306f56b0b45;
static PyCodeObject *codeobj_bc00d85dc8e69a1eca19335f61aa7440;
static PyCodeObject *codeobj_b9a0838deba21754d3ae64cf73714ed6;
static PyCodeObject *codeobj_2c2d3b7fa23de4d8f16d7bd8af2772c6;
static PyCodeObject *codeobj_f06699b1c2410d6ead985fdb70cc861f;
static PyCodeObject *codeobj_4fd7469eb29dc13bc02b7f244b534137;
static PyCodeObject *codeobj_c6117a1975c98c518411251922c1d87d;
static PyCodeObject *codeobj_6768dbe79e19c9240307dd1aa8f975a1;
static PyCodeObject *codeobj_9c1df908deb469b5b5ddf8c22be111c6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[61]); CHECK_OBJECT(module_filename_obj);
    codeobj_036368105e021eec7aebd521a822bad2 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[62], NULL, 1, 0, 0);
    codeobj_970023c943200c84bad1194a0185d82c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[63], mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_7274dd7f936cc0c3243d14fb6510b2e5 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[64], NULL, 2, 0, 0);
    codeobj_ca12fd88f88d6e8fb8a367a889adbd30 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[65], NULL, 2, 0, 0);
    codeobj_f80fc82fa7d8dc0c26cea223c7926129 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[66], NULL, 2, 0, 0);
    codeobj_18e911f3b5b03553e6369306f56b0b45 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[67], NULL, 1, 0, 0);
    codeobj_bc00d85dc8e69a1eca19335f61aa7440 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[39], mod_consts[68], mod_consts[69], 2, 0, 0);
    codeobj_b9a0838deba21754d3ae64cf73714ed6 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[70], mod_consts[71], 1, 0, 0);
    codeobj_2c2d3b7fa23de4d8f16d7bd8af2772c6 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[70], mod_consts[71], 1, 0, 0);
    codeobj_f06699b1c2410d6ead985fdb70cc861f = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[70], mod_consts[71], 1, 0, 0);
    codeobj_4fd7469eb29dc13bc02b7f244b534137 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[70], mod_consts[71], 1, 0, 0);
    codeobj_c6117a1975c98c518411251922c1d87d = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[66], NULL, 2, 0, 0);
    codeobj_6768dbe79e19c9240307dd1aa8f975a1 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[72], NULL, 1, 0, 0);
    codeobj_9c1df908deb469b5b5ddf8c22be111c6 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[33], mod_consts[68], mod_consts[69], 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__2_allreduce_hook(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook$$$function__1_decompress(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook$$$function__1_decompress(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook$$$function__1_decompress(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook$$$function__1_decompress(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_process_group = python_pars[0];
    PyObject *par_tensor = python_pars[1];
    PyObject *var_group_to_use = NULL;
    struct Nuitka_FrameObject *frame_7274dd7f936cc0c3243d14fb6510b2e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7274dd7f936cc0c3243d14fb6510b2e5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7274dd7f936cc0c3243d14fb6510b2e5)) {
        Py_XDECREF(cache_frame_7274dd7f936cc0c3243d14fb6510b2e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7274dd7f936cc0c3243d14fb6510b2e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7274dd7f936cc0c3243d14fb6510b2e5 = MAKE_FUNCTION_FRAME(codeobj_7274dd7f936cc0c3243d14fb6510b2e5, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7274dd7f936cc0c3243d14fb6510b2e5->m_type_description == NULL);
    frame_7274dd7f936cc0c3243d14fb6510b2e5 = cache_frame_7274dd7f936cc0c3243d14fb6510b2e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7274dd7f936cc0c3243d14fb6510b2e5);
    assert(Py_REFCNT(frame_7274dd7f936cc0c3243d14fb6510b2e5) == 2);

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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_group_to_use == NULL);
        var_group_to_use = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_tensor);
        tmp_expression_value_3 = par_tensor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_group_to_use);
        tmp_called_instance_1 = var_group_to_use;
        frame_7274dd7f936cc0c3243d14fb6510b2e5->m_frame.f_lineno = 14;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7274dd7f936cc0c3243d14fb6510b2e5->m_frame.f_lineno = 14;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor);
        tmp_kw_call_arg_value_0_1 = par_tensor;
        CHECK_OBJECT(var_group_to_use);
        tmp_kw_call_dict_value_0_1 = var_group_to_use;
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_7274dd7f936cc0c3243d14fb6510b2e5->m_frame.f_lineno = 17;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[6]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7274dd7f936cc0c3243d14fb6510b2e5->m_frame.f_lineno = 17;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[7]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut$$$function__1_lambda();

        frame_7274dd7f936cc0c3243d14fb6510b2e5->m_frame.f_lineno = 17;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[8], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
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
        exception_tb = MAKE_TRACEBACK(frame_7274dd7f936cc0c3243d14fb6510b2e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7274dd7f936cc0c3243d14fb6510b2e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7274dd7f936cc0c3243d14fb6510b2e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7274dd7f936cc0c3243d14fb6510b2e5,
        type_description_1,
        par_process_group,
        par_tensor,
        var_group_to_use
    );


    // Release cached frame if used for exception.
    if (frame_7274dd7f936cc0c3243d14fb6510b2e5 == cache_frame_7274dd7f936cc0c3243d14fb6510b2e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7274dd7f936cc0c3243d14fb6510b2e5);
        cache_frame_7274dd7f936cc0c3243d14fb6510b2e5 = NULL;
    }

    assertFrameObject(frame_7274dd7f936cc0c3243d14fb6510b2e5);

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

    Py_XDECREF(var_group_to_use);
    var_group_to_use = NULL;
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
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    struct Nuitka_FrameObject *frame_036368105e021eec7aebd521a822bad2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_036368105e021eec7aebd521a822bad2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_036368105e021eec7aebd521a822bad2)) {
        Py_XDECREF(cache_frame_036368105e021eec7aebd521a822bad2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_036368105e021eec7aebd521a822bad2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_036368105e021eec7aebd521a822bad2 = MAKE_FUNCTION_FRAME(codeobj_036368105e021eec7aebd521a822bad2, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_036368105e021eec7aebd521a822bad2->m_type_description == NULL);
    frame_036368105e021eec7aebd521a822bad2 = cache_frame_036368105e021eec7aebd521a822bad2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_036368105e021eec7aebd521a822bad2);
    assert(Py_REFCNT(frame_036368105e021eec7aebd521a822bad2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_036368105e021eec7aebd521a822bad2->m_frame.f_lineno = 19;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[13];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
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
        exception_tb = MAKE_TRACEBACK(frame_036368105e021eec7aebd521a822bad2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_036368105e021eec7aebd521a822bad2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_036368105e021eec7aebd521a822bad2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_036368105e021eec7aebd521a822bad2,
        type_description_1,
        par_fut
    );


    // Release cached frame if used for exception.
    if (frame_036368105e021eec7aebd521a822bad2 == cache_frame_036368105e021eec7aebd521a822bad2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_036368105e021eec7aebd521a822bad2);
        cache_frame_036368105e021eec7aebd521a822bad2 = NULL;
    }

    assertFrameObject(frame_036368105e021eec7aebd521a822bad2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__2_allreduce_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_process_group = python_pars[0];
    PyObject *par_bucket = python_pars[1];
    struct Nuitka_FrameObject *frame_ca12fd88f88d6e8fb8a367a889adbd30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca12fd88f88d6e8fb8a367a889adbd30 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca12fd88f88d6e8fb8a367a889adbd30)) {
        Py_XDECREF(cache_frame_ca12fd88f88d6e8fb8a367a889adbd30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca12fd88f88d6e8fb8a367a889adbd30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca12fd88f88d6e8fb8a367a889adbd30 = MAKE_FUNCTION_FRAME(codeobj_ca12fd88f88d6e8fb8a367a889adbd30, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca12fd88f88d6e8fb8a367a889adbd30->m_type_description == NULL);
    frame_ca12fd88f88d6e8fb8a367a889adbd30 = cache_frame_ca12fd88f88d6e8fb8a367a889adbd30;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca12fd88f88d6e8fb8a367a889adbd30);
    assert(Py_REFCNT(frame_ca12fd88f88d6e8fb8a367a889adbd30) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_process_group);
        tmp_args_element_value_1 = par_process_group;
        CHECK_OBJECT(par_bucket);
        tmp_called_instance_1 = par_bucket;
        frame_ca12fd88f88d6e8fb8a367a889adbd30->m_frame.f_lineno = 38;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ca12fd88f88d6e8fb8a367a889adbd30->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_ca12fd88f88d6e8fb8a367a889adbd30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca12fd88f88d6e8fb8a367a889adbd30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca12fd88f88d6e8fb8a367a889adbd30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca12fd88f88d6e8fb8a367a889adbd30,
        type_description_1,
        par_process_group,
        par_bucket
    );


    // Release cached frame if used for exception.
    if (frame_ca12fd88f88d6e8fb8a367a889adbd30 == cache_frame_ca12fd88f88d6e8fb8a367a889adbd30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca12fd88f88d6e8fb8a367a889adbd30);
        cache_frame_ca12fd88f88d6e8fb8a367a889adbd30 = NULL;
    }

    assertFrameObject(frame_ca12fd88f88d6e8fb8a367a889adbd30);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_process_group = python_pars[0];
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_group_to_use = NULL;
    PyObject *var_world_size = NULL;
    PyObject *var_compressed_tensor = NULL;
    PyObject *var_fut = NULL;
    PyObject *var_decompress = NULL;
    struct Nuitka_FrameObject *frame_c6117a1975c98c518411251922c1d87d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c6117a1975c98c518411251922c1d87d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c6117a1975c98c518411251922c1d87d)) {
        Py_XDECREF(cache_frame_c6117a1975c98c518411251922c1d87d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6117a1975c98c518411251922c1d87d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6117a1975c98c518411251922c1d87d = MAKE_FUNCTION_FRAME(codeobj_c6117a1975c98c518411251922c1d87d, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6117a1975c98c518411251922c1d87d->m_type_description == NULL);
    frame_c6117a1975c98c518411251922c1d87d = cache_frame_c6117a1975c98c518411251922c1d87d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c6117a1975c98c518411251922c1d87d);
    assert(Py_REFCNT(frame_c6117a1975c98c518411251922c1d87d) == 2);

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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_group_to_use == NULL);
        var_group_to_use = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_group_to_use);
        tmp_called_instance_1 = var_group_to_use;
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 55;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_world_size == NULL);
        var_world_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(par_bucket) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(par_bucket);
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 57;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[15]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 57;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_world_size);
        tmp_args_element_value_2 = var_world_size;
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 57;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[3], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_compressed_tensor == NULL);
        var_compressed_tensor = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_compressed_tensor);
        tmp_kw_call_arg_value_0_1 = var_compressed_tensor;
        CHECK_OBJECT(var_group_to_use);
        tmp_kw_call_dict_value_0_1 = var_group_to_use;
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 59;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[6]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 59;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[7]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_bucket;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook$$$function__1_decompress(tmp_closure_1);

        assert(var_decompress == NULL);
        var_decompress = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_5 = var_fut;
        CHECK_OBJECT(var_decompress);
        tmp_args_element_value_3 = var_decompress;
        frame_c6117a1975c98c518411251922c1d87d->m_frame.f_lineno = 70;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[8], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ocooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c6117a1975c98c518411251922c1d87d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6117a1975c98c518411251922c1d87d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6117a1975c98c518411251922c1d87d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6117a1975c98c518411251922c1d87d,
        type_description_1,
        par_process_group,
        par_bucket,
        var_group_to_use,
        var_world_size,
        var_compressed_tensor,
        var_fut,
        var_decompress
    );


    // Release cached frame if used for exception.
    if (frame_c6117a1975c98c518411251922c1d87d == cache_frame_c6117a1975c98c518411251922c1d87d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6117a1975c98c518411251922c1d87d);
        cache_frame_c6117a1975c98c518411251922c1d87d = NULL;
    }

    assertFrameObject(frame_c6117a1975c98c518411251922c1d87d);

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
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_compressed_tensor);
    Py_DECREF(var_compressed_tensor);
    var_compressed_tensor = NULL;
    CHECK_OBJECT(var_fut);
    Py_DECREF(var_fut);
    var_fut = NULL;
    CHECK_OBJECT(var_decompress);
    Py_DECREF(var_decompress);
    var_decompress = NULL;
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

    Py_XDECREF(var_group_to_use);
    var_group_to_use = NULL;
    Py_XDECREF(var_world_size);
    var_world_size = NULL;
    Py_XDECREF(var_compressed_tensor);
    var_compressed_tensor = NULL;
    Py_XDECREF(var_fut);
    var_fut = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook$$$function__1_decompress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_decompressed_tensor = NULL;
    struct Nuitka_FrameObject *frame_b9a0838deba21754d3ae64cf73714ed6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b9a0838deba21754d3ae64cf73714ed6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b9a0838deba21754d3ae64cf73714ed6)) {
        Py_XDECREF(cache_frame_b9a0838deba21754d3ae64cf73714ed6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9a0838deba21754d3ae64cf73714ed6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9a0838deba21754d3ae64cf73714ed6 = MAKE_FUNCTION_FRAME(codeobj_b9a0838deba21754d3ae64cf73714ed6, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9a0838deba21754d3ae64cf73714ed6->m_type_description == NULL);
    frame_b9a0838deba21754d3ae64cf73714ed6 = cache_frame_b9a0838deba21754d3ae64cf73714ed6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9a0838deba21754d3ae64cf73714ed6);
    assert(Py_REFCNT(frame_b9a0838deba21754d3ae64cf73714ed6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b9a0838deba21754d3ae64cf73714ed6->m_frame.f_lineno = 64;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_decompressed_tensor == NULL);
        var_decompressed_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_decompressed_tensor);
        tmp_expression_value_1 = var_decompressed_tensor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fut);
        tmp_called_instance_2 = par_fut;
        frame_b9a0838deba21754d3ae64cf73714ed6->m_frame.f_lineno = 67;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_b9a0838deba21754d3ae64cf73714ed6->m_frame.f_lineno = 67;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9a0838deba21754d3ae64cf73714ed6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9a0838deba21754d3ae64cf73714ed6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9a0838deba21754d3ae64cf73714ed6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9a0838deba21754d3ae64cf73714ed6,
        type_description_1,
        par_fut,
        var_decompressed_tensor,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b9a0838deba21754d3ae64cf73714ed6 == cache_frame_b9a0838deba21754d3ae64cf73714ed6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9a0838deba21754d3ae64cf73714ed6);
        cache_frame_b9a0838deba21754d3ae64cf73714ed6 = NULL;
    }

    assertFrameObject(frame_b9a0838deba21754d3ae64cf73714ed6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    tmp_return_value = var_decompressed_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    Py_DECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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

    Py_XDECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_process_group = python_pars[0];
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_group_to_use = NULL;
    PyObject *var_world_size = NULL;
    PyObject *var_compressed_tensor = NULL;
    PyObject *var_fut = NULL;
    PyObject *var_decompress = NULL;
    struct Nuitka_FrameObject *frame_f80fc82fa7d8dc0c26cea223c7926129;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f80fc82fa7d8dc0c26cea223c7926129 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f80fc82fa7d8dc0c26cea223c7926129)) {
        Py_XDECREF(cache_frame_f80fc82fa7d8dc0c26cea223c7926129);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f80fc82fa7d8dc0c26cea223c7926129 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f80fc82fa7d8dc0c26cea223c7926129 = MAKE_FUNCTION_FRAME(codeobj_f80fc82fa7d8dc0c26cea223c7926129, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f80fc82fa7d8dc0c26cea223c7926129->m_type_description == NULL);
    frame_f80fc82fa7d8dc0c26cea223c7926129 = cache_frame_f80fc82fa7d8dc0c26cea223c7926129;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f80fc82fa7d8dc0c26cea223c7926129);
    assert(Py_REFCNT(frame_f80fc82fa7d8dc0c26cea223c7926129) == 2);

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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_group_to_use == NULL);
        var_group_to_use = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_group_to_use);
        tmp_called_instance_1 = var_group_to_use;
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 90;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_world_size == NULL);
        var_world_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(par_bucket) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(par_bucket);
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 92;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[15]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 92;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_world_size);
        tmp_args_element_value_2 = var_world_size;
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 92;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[3], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_compressed_tensor == NULL);
        var_compressed_tensor = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_compressed_tensor);
        tmp_kw_call_arg_value_0_1 = var_compressed_tensor;
        CHECK_OBJECT(var_group_to_use);
        tmp_kw_call_dict_value_0_1 = var_group_to_use;
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[6]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 94;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[7]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_bucket;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook$$$function__1_decompress(tmp_closure_1);

        assert(var_decompress == NULL);
        var_decompress = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_5 = var_fut;
        CHECK_OBJECT(var_decompress);
        tmp_args_element_value_3 = var_decompress;
        frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame.f_lineno = 105;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[8], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ocooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_f80fc82fa7d8dc0c26cea223c7926129, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f80fc82fa7d8dc0c26cea223c7926129->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f80fc82fa7d8dc0c26cea223c7926129, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f80fc82fa7d8dc0c26cea223c7926129,
        type_description_1,
        par_process_group,
        par_bucket,
        var_group_to_use,
        var_world_size,
        var_compressed_tensor,
        var_fut,
        var_decompress
    );


    // Release cached frame if used for exception.
    if (frame_f80fc82fa7d8dc0c26cea223c7926129 == cache_frame_f80fc82fa7d8dc0c26cea223c7926129) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f80fc82fa7d8dc0c26cea223c7926129);
        cache_frame_f80fc82fa7d8dc0c26cea223c7926129 = NULL;
    }

    assertFrameObject(frame_f80fc82fa7d8dc0c26cea223c7926129);

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
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_compressed_tensor);
    Py_DECREF(var_compressed_tensor);
    var_compressed_tensor = NULL;
    CHECK_OBJECT(var_fut);
    Py_DECREF(var_fut);
    var_fut = NULL;
    CHECK_OBJECT(var_decompress);
    Py_DECREF(var_decompress);
    var_decompress = NULL;
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

    Py_XDECREF(var_group_to_use);
    var_group_to_use = NULL;
    Py_XDECREF(var_world_size);
    var_world_size = NULL;
    Py_XDECREF(var_compressed_tensor);
    var_compressed_tensor = NULL;
    Py_XDECREF(var_fut);
    var_fut = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook$$$function__1_decompress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_decompressed_tensor = NULL;
    struct Nuitka_FrameObject *frame_2c2d3b7fa23de4d8f16d7bd8af2772c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6)) {
        Py_XDECREF(cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6 = MAKE_FUNCTION_FRAME(codeobj_2c2d3b7fa23de4d8f16d7bd8af2772c6, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6->m_type_description == NULL);
    frame_2c2d3b7fa23de4d8f16d7bd8af2772c6 = cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c2d3b7fa23de4d8f16d7bd8af2772c6);
    assert(Py_REFCNT(frame_2c2d3b7fa23de4d8f16d7bd8af2772c6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_2c2d3b7fa23de4d8f16d7bd8af2772c6->m_frame.f_lineno = 99;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_decompressed_tensor == NULL);
        var_decompressed_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_decompressed_tensor);
        tmp_expression_value_1 = var_decompressed_tensor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fut);
        tmp_called_instance_2 = par_fut;
        frame_2c2d3b7fa23de4d8f16d7bd8af2772c6->m_frame.f_lineno = 102;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 102;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 102;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_2c2d3b7fa23de4d8f16d7bd8af2772c6->m_frame.f_lineno = 102;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c2d3b7fa23de4d8f16d7bd8af2772c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c2d3b7fa23de4d8f16d7bd8af2772c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c2d3b7fa23de4d8f16d7bd8af2772c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c2d3b7fa23de4d8f16d7bd8af2772c6,
        type_description_1,
        par_fut,
        var_decompressed_tensor,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2c2d3b7fa23de4d8f16d7bd8af2772c6 == cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6);
        cache_frame_2c2d3b7fa23de4d8f16d7bd8af2772c6 = NULL;
    }

    assertFrameObject(frame_2c2d3b7fa23de4d8f16d7bd8af2772c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    tmp_return_value = var_decompressed_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    Py_DECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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

    Py_XDECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_hook = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_fp16_compress_wrapper_hook = NULL;
    struct Nuitka_FrameObject *frame_6768dbe79e19c9240307dd1aa8f975a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6768dbe79e19c9240307dd1aa8f975a1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6768dbe79e19c9240307dd1aa8f975a1)) {
        Py_XDECREF(cache_frame_6768dbe79e19c9240307dd1aa8f975a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6768dbe79e19c9240307dd1aa8f975a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6768dbe79e19c9240307dd1aa8f975a1 = MAKE_FUNCTION_FRAME(codeobj_6768dbe79e19c9240307dd1aa8f975a1, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6768dbe79e19c9240307dd1aa8f975a1->m_type_description == NULL);
    frame_6768dbe79e19c9240307dd1aa8f975a1 = cache_frame_6768dbe79e19c9240307dd1aa8f975a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6768dbe79e19c9240307dd1aa8f975a1);
    assert(Py_REFCNT(frame_6768dbe79e19c9240307dd1aa8f975a1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_dict_key_1 = mod_consts[17];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 125;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 125;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "co";
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

        tmp_closure_1[0] = par_hook;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook(tmp_annotations_1, tmp_closure_1);

        assert(var_fp16_compress_wrapper_hook == NULL);
        var_fp16_compress_wrapper_hook = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6768dbe79e19c9240307dd1aa8f975a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6768dbe79e19c9240307dd1aa8f975a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6768dbe79e19c9240307dd1aa8f975a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6768dbe79e19c9240307dd1aa8f975a1,
        type_description_1,
        par_hook,
        var_fp16_compress_wrapper_hook
    );


    // Release cached frame if used for exception.
    if (frame_6768dbe79e19c9240307dd1aa8f975a1 == cache_frame_6768dbe79e19c9240307dd1aa8f975a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6768dbe79e19c9240307dd1aa8f975a1);
        cache_frame_6768dbe79e19c9240307dd1aa8f975a1 = NULL;
    }

    assertFrameObject(frame_6768dbe79e19c9240307dd1aa8f975a1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_fp16_compress_wrapper_hook);
    tmp_return_value = var_fp16_compress_wrapper_hook;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fp16_compress_wrapper_hook);
    Py_DECREF(var_fp16_compress_wrapper_hook);
    var_fp16_compress_wrapper_hook = NULL;
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
    CHECK_OBJECT(par_hook);
    Py_DECREF(par_hook);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hook);
    Py_DECREF(par_hook);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hook_state = python_pars[0];
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_fut = NULL;
    PyObject *var_decompress = NULL;
    struct Nuitka_FrameObject *frame_9c1df908deb469b5b5ddf8c22be111c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9c1df908deb469b5b5ddf8c22be111c6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9c1df908deb469b5b5ddf8c22be111c6)) {
        Py_XDECREF(cache_frame_9c1df908deb469b5b5ddf8c22be111c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c1df908deb469b5b5ddf8c22be111c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c1df908deb469b5b5ddf8c22be111c6 = MAKE_FUNCTION_FRAME(codeobj_9c1df908deb469b5b5ddf8c22be111c6, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c1df908deb469b5b5ddf8c22be111c6->m_type_description == NULL);
    frame_9c1df908deb469b5b5ddf8c22be111c6 = cache_frame_9c1df908deb469b5b5ddf8c22be111c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c1df908deb469b5b5ddf8c22be111c6);
    assert(Py_REFCNT(frame_9c1df908deb469b5b5ddf8c22be111c6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_bucket);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_called_instance_1 = Nuitka_Cell_GET(par_bucket);
        frame_9c1df908deb469b5b5ddf8c22be111c6->m_frame.f_lineno = 127;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        frame_9c1df908deb469b5b5ddf8c22be111c6->m_frame.f_lineno = 127;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        frame_9c1df908deb469b5b5ddf8c22be111c6->m_frame.f_lineno = 127;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_hook_state);
        tmp_args_element_value_3 = par_hook_state;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_bucket);
        frame_9c1df908deb469b5b5ddf8c22be111c6->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_bucket;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook$$$function__1_decompress(tmp_closure_1);

        assert(var_decompress == NULL);
        var_decompress = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_2 = var_fut;
        CHECK_OBJECT(var_decompress);
        tmp_args_element_value_5 = var_decompress;
        frame_9c1df908deb469b5b5ddf8c22be111c6->m_frame.f_lineno = 139;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[8], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ocooc";
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
        exception_tb = MAKE_TRACEBACK(frame_9c1df908deb469b5b5ddf8c22be111c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c1df908deb469b5b5ddf8c22be111c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c1df908deb469b5b5ddf8c22be111c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c1df908deb469b5b5ddf8c22be111c6,
        type_description_1,
        par_hook_state,
        par_bucket,
        var_fut,
        var_decompress,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9c1df908deb469b5b5ddf8c22be111c6 == cache_frame_9c1df908deb469b5b5ddf8c22be111c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c1df908deb469b5b5ddf8c22be111c6);
        cache_frame_9c1df908deb469b5b5ddf8c22be111c6 = NULL;
    }

    assertFrameObject(frame_9c1df908deb469b5b5ddf8c22be111c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fut);
    Py_DECREF(var_fut);
    var_fut = NULL;
    CHECK_OBJECT(var_decompress);
    Py_DECREF(var_decompress);
    var_decompress = NULL;
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

    Py_XDECREF(var_fut);
    var_fut = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
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
    CHECK_OBJECT(par_hook_state);
    Py_DECREF(par_hook_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hook_state);
    Py_DECREF(par_hook_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook$$$function__1_decompress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_decompressed_tensor = NULL;
    struct Nuitka_FrameObject *frame_f06699b1c2410d6ead985fdb70cc861f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f06699b1c2410d6ead985fdb70cc861f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f06699b1c2410d6ead985fdb70cc861f)) {
        Py_XDECREF(cache_frame_f06699b1c2410d6ead985fdb70cc861f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f06699b1c2410d6ead985fdb70cc861f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f06699b1c2410d6ead985fdb70cc861f = MAKE_FUNCTION_FRAME(codeobj_f06699b1c2410d6ead985fdb70cc861f, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f06699b1c2410d6ead985fdb70cc861f->m_type_description == NULL);
    frame_f06699b1c2410d6ead985fdb70cc861f = cache_frame_f06699b1c2410d6ead985fdb70cc861f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f06699b1c2410d6ead985fdb70cc861f);
    assert(Py_REFCNT(frame_f06699b1c2410d6ead985fdb70cc861f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_f06699b1c2410d6ead985fdb70cc861f->m_frame.f_lineno = 132;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_decompressed_tensor == NULL);
        var_decompressed_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_decompressed_tensor);
        tmp_expression_value_1 = var_decompressed_tensor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fut);
        tmp_called_instance_2 = par_fut;
        frame_f06699b1c2410d6ead985fdb70cc861f->m_frame.f_lineno = 135;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 135;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_f06699b1c2410d6ead985fdb70cc861f->m_frame.f_lineno = 135;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f06699b1c2410d6ead985fdb70cc861f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f06699b1c2410d6ead985fdb70cc861f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f06699b1c2410d6ead985fdb70cc861f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f06699b1c2410d6ead985fdb70cc861f,
        type_description_1,
        par_fut,
        var_decompressed_tensor,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f06699b1c2410d6ead985fdb70cc861f == cache_frame_f06699b1c2410d6ead985fdb70cc861f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f06699b1c2410d6ead985fdb70cc861f);
        cache_frame_f06699b1c2410d6ead985fdb70cc861f = NULL;
    }

    assertFrameObject(frame_f06699b1c2410d6ead985fdb70cc861f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    tmp_return_value = var_decompressed_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    Py_DECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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

    Py_XDECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_hook = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_bf16_compress_wrapper_hook = NULL;
    struct Nuitka_FrameObject *frame_18e911f3b5b03553e6369306f56b0b45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_18e911f3b5b03553e6369306f56b0b45 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18e911f3b5b03553e6369306f56b0b45)) {
        Py_XDECREF(cache_frame_18e911f3b5b03553e6369306f56b0b45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18e911f3b5b03553e6369306f56b0b45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18e911f3b5b03553e6369306f56b0b45 = MAKE_FUNCTION_FRAME(codeobj_18e911f3b5b03553e6369306f56b0b45, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18e911f3b5b03553e6369306f56b0b45->m_type_description == NULL);
    frame_18e911f3b5b03553e6369306f56b0b45 = cache_frame_18e911f3b5b03553e6369306f56b0b45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18e911f3b5b03553e6369306f56b0b45);
    assert(Py_REFCNT(frame_18e911f3b5b03553e6369306f56b0b45) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_dict_key_1 = mod_consts[17];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 162;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 162;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "co";
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

        tmp_closure_1[0] = par_hook;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook(tmp_annotations_1, tmp_closure_1);

        assert(var_bf16_compress_wrapper_hook == NULL);
        var_bf16_compress_wrapper_hook = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18e911f3b5b03553e6369306f56b0b45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18e911f3b5b03553e6369306f56b0b45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18e911f3b5b03553e6369306f56b0b45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18e911f3b5b03553e6369306f56b0b45,
        type_description_1,
        par_hook,
        var_bf16_compress_wrapper_hook
    );


    // Release cached frame if used for exception.
    if (frame_18e911f3b5b03553e6369306f56b0b45 == cache_frame_18e911f3b5b03553e6369306f56b0b45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18e911f3b5b03553e6369306f56b0b45);
        cache_frame_18e911f3b5b03553e6369306f56b0b45 = NULL;
    }

    assertFrameObject(frame_18e911f3b5b03553e6369306f56b0b45);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_bf16_compress_wrapper_hook);
    tmp_return_value = var_bf16_compress_wrapper_hook;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_bf16_compress_wrapper_hook);
    Py_DECREF(var_bf16_compress_wrapper_hook);
    var_bf16_compress_wrapper_hook = NULL;
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
    CHECK_OBJECT(par_hook);
    Py_DECREF(par_hook);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hook);
    Py_DECREF(par_hook);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hook_state = python_pars[0];
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_fut = NULL;
    PyObject *var_decompress = NULL;
    struct Nuitka_FrameObject *frame_bc00d85dc8e69a1eca19335f61aa7440;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bc00d85dc8e69a1eca19335f61aa7440 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bc00d85dc8e69a1eca19335f61aa7440)) {
        Py_XDECREF(cache_frame_bc00d85dc8e69a1eca19335f61aa7440);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc00d85dc8e69a1eca19335f61aa7440 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc00d85dc8e69a1eca19335f61aa7440 = MAKE_FUNCTION_FRAME(codeobj_bc00d85dc8e69a1eca19335f61aa7440, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc00d85dc8e69a1eca19335f61aa7440->m_type_description == NULL);
    frame_bc00d85dc8e69a1eca19335f61aa7440 = cache_frame_bc00d85dc8e69a1eca19335f61aa7440;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc00d85dc8e69a1eca19335f61aa7440);
    assert(Py_REFCNT(frame_bc00d85dc8e69a1eca19335f61aa7440) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_bucket);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_called_instance_1 = Nuitka_Cell_GET(par_bucket);
        frame_bc00d85dc8e69a1eca19335f61aa7440->m_frame.f_lineno = 164;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        frame_bc00d85dc8e69a1eca19335f61aa7440->m_frame.f_lineno = 164;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        frame_bc00d85dc8e69a1eca19335f61aa7440->m_frame.f_lineno = 164;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_hook_state);
        tmp_args_element_value_3 = par_hook_state;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_bucket);
        frame_bc00d85dc8e69a1eca19335f61aa7440->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_bucket;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook$$$function__1_decompress(tmp_closure_1);

        assert(var_decompress == NULL);
        var_decompress = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_2 = var_fut;
        CHECK_OBJECT(var_decompress);
        tmp_args_element_value_5 = var_decompress;
        frame_bc00d85dc8e69a1eca19335f61aa7440->m_frame.f_lineno = 176;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[8], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ocooc";
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
        exception_tb = MAKE_TRACEBACK(frame_bc00d85dc8e69a1eca19335f61aa7440, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc00d85dc8e69a1eca19335f61aa7440->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc00d85dc8e69a1eca19335f61aa7440, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc00d85dc8e69a1eca19335f61aa7440,
        type_description_1,
        par_hook_state,
        par_bucket,
        var_fut,
        var_decompress,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bc00d85dc8e69a1eca19335f61aa7440 == cache_frame_bc00d85dc8e69a1eca19335f61aa7440) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc00d85dc8e69a1eca19335f61aa7440);
        cache_frame_bc00d85dc8e69a1eca19335f61aa7440 = NULL;
    }

    assertFrameObject(frame_bc00d85dc8e69a1eca19335f61aa7440);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fut);
    Py_DECREF(var_fut);
    var_fut = NULL;
    CHECK_OBJECT(var_decompress);
    Py_DECREF(var_decompress);
    var_decompress = NULL;
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

    Py_XDECREF(var_fut);
    var_fut = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
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
    CHECK_OBJECT(par_hook_state);
    Py_DECREF(par_hook_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hook_state);
    Py_DECREF(par_hook_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook$$$function__1_decompress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_decompressed_tensor = NULL;
    struct Nuitka_FrameObject *frame_4fd7469eb29dc13bc02b7f244b534137;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4fd7469eb29dc13bc02b7f244b534137 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4fd7469eb29dc13bc02b7f244b534137)) {
        Py_XDECREF(cache_frame_4fd7469eb29dc13bc02b7f244b534137);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fd7469eb29dc13bc02b7f244b534137 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fd7469eb29dc13bc02b7f244b534137 = MAKE_FUNCTION_FRAME(codeobj_4fd7469eb29dc13bc02b7f244b534137, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4fd7469eb29dc13bc02b7f244b534137->m_type_description == NULL);
    frame_4fd7469eb29dc13bc02b7f244b534137 = cache_frame_4fd7469eb29dc13bc02b7f244b534137;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4fd7469eb29dc13bc02b7f244b534137);
    assert(Py_REFCNT(frame_4fd7469eb29dc13bc02b7f244b534137) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_4fd7469eb29dc13bc02b7f244b534137->m_frame.f_lineno = 169;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_decompressed_tensor == NULL);
        var_decompressed_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_decompressed_tensor);
        tmp_expression_value_1 = var_decompressed_tensor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fut);
        tmp_called_instance_2 = par_fut;
        frame_4fd7469eb29dc13bc02b7f244b534137->m_frame.f_lineno = 172;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 172;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_4fd7469eb29dc13bc02b7f244b534137->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4fd7469eb29dc13bc02b7f244b534137, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fd7469eb29dc13bc02b7f244b534137->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fd7469eb29dc13bc02b7f244b534137, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fd7469eb29dc13bc02b7f244b534137,
        type_description_1,
        par_fut,
        var_decompressed_tensor,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4fd7469eb29dc13bc02b7f244b534137 == cache_frame_4fd7469eb29dc13bc02b7f244b534137) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4fd7469eb29dc13bc02b7f244b534137);
        cache_frame_4fd7469eb29dc13bc02b7f244b534137 = NULL;
    }

    assertFrameObject(frame_4fd7469eb29dc13bc02b7f244b534137);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    tmp_return_value = var_decompressed_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decompressed_tensor);
    Py_DECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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

    Py_XDECREF(var_decompressed_tensor);
    var_decompressed_tensor = NULL;
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



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7274dd7f936cc0c3243d14fb6510b2e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut$$$function__1_lambda,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[10],
#endif
        codeobj_036368105e021eec7aebd521a822bad2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__2_allreduce_hook(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__2_allreduce_hook,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca12fd88f88d6e8fb8a367a889adbd30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6117a1975c98c518411251922c1d87d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook$$$function__1_decompress(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook$$$function__1_decompress,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_b9a0838deba21754d3ae64cf73714ed6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f80fc82fa7d8dc0c26cea223c7926129,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook$$$function__1_decompress(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook$$$function__1_decompress,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_2c2d3b7fa23de4d8f16d7bd8af2772c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6768dbe79e19c9240307dd1aa8f975a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_9c1df908deb469b5b5ddf8c22be111c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook$$$function__1_decompress(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook$$$function__1_decompress,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_f06699b1c2410d6ead985fdb70cc861f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18e911f3b5b03553e6369306f56b0b45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_bc00d85dc8e69a1eca19335f61aa7440,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook$$$function__1_decompress(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook$$$function__1_decompress,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_4fd7469eb29dc13bc02b7f244b534137,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        NULL,
        closure,
        1
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

function_impl_code functable_torch$distributed$algorithms$ddp_comm_hooks$default_hooks[] = {
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut$$$function__1_lambda,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook$$$function__1_decompress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook$$$function__1_decompress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper$$$function__1_fp16_compress_wrapper_hook$$$function__1_decompress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper$$$function__1_bf16_compress_wrapper_hook$$$function__1_decompress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__2_allreduce_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper,
    impl_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper,
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

    function_impl_code *current = functable_torch$distributed$algorithms$ddp_comm_hooks$default_hooks;
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

    if (offset > sizeof(functable_torch$distributed$algorithms$ddp_comm_hooks$default_hooks) || offset < 0) {
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
        functable_torch$distributed$algorithms$ddp_comm_hooks$default_hooks[offset],
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
        module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
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
PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$default_hooks(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributed.algorithms.ddp_comm_hooks.default_hooks");

    // Store the module for future use.
    module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks = module;

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
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.default_hooks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.default_hooks: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.default_hooks: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributed$algorithms$ddp_comm_hooks$default_hooks\n");

    moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks = MODULE_DICT(module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[73]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_970023c943200c84bad1194a0185d82c;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_2);
    }
    frame_970023c943200c84bad1194a0185d82c = MAKE_MODULE_FRAME(codeobj_970023c943200c84bad1194a0185d82c, module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_970023c943200c84bad1194a0185d82c);
    assert(Py_REFCNT(frame_970023c943200c84bad1194a0185d82c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
                mod_consts[49],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[49]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
                mod_consts[50],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[50]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[19];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[13];
        frame_970023c943200c84bad1194a0185d82c->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[51];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[13];
        frame_970023c943200c84bad1194a0185d82c->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks,
                mod_consts[52],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[53];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

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
            tmp_dict_key_1 = mod_consts[55];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 9;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 9;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_3);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

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


        tmp_assign_source_9 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__1__allreduce_fut(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_7;
        tmp_dict_key_2 = mod_consts[53];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[54]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

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
            tmp_dict_key_2 = mod_consts[17];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[28]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[29];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_2;
            }
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[30]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_2;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[31]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_2;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_9);

                exception_lineno = 25;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[32]);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_9);

                exception_lineno = 25;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

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


        tmp_assign_source_10 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__2_allreduce_hook(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_13;
        tmp_dict_key_3 = mod_consts[53];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[54]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_18;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[17];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[28]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[29];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_3;
            }
            tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[30]);
            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_3;
            }
            tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[31]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_3;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_15);

                exception_lineno = 43;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[32]);
            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_15);

                exception_lineno = 43;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_15);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__3_fp16_compress_hook(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_19;
        tmp_dict_key_4 = mod_consts[53];
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[54]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_24;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[17];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[29];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_4;
            }
            tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[30]);
            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_4;
            }
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[31]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_4;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_21);

                exception_lineno = 75;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[32]);
            if (tmp_subscript_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_21);

                exception_lineno = 75;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

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


        tmp_assign_source_12 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__4_bf16_compress_hook(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        tmp_dict_key_5 = mod_consts[37];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyList_SET_ITEM0(tmp_tuple_element_1, 0, tmp_list_element_1);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[28]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_tuple_element_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_30;
            PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_1);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[30]);
            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[31]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_27);

                exception_lineno = 109;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[32]);
            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_27);

                exception_lineno = 109;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_list_element_2;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[29];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_5;
            }
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_2 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_32;
                PyList_SET_ITEM0(tmp_tuple_element_2, 0, tmp_list_element_2);
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto list_build_exception_2;
                }
                tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[28]);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_tuple_element_2, 1, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_tuple_element_2);
            goto dict_build_exception_5;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_33;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_36;
                PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_2);
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto tuple_build_exception_2;
                }
                tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[30]);
                if (tmp_expression_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto tuple_build_exception_2;
                }
                tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[31]);
                Py_DECREF(tmp_expression_value_34);
                if (tmp_expression_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto tuple_build_exception_2;
                }
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                }

                if (tmp_expression_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_33);

                    exception_lineno = 110;

                    goto tuple_build_exception_2;
                }
                tmp_subscript_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[32]);
                if (tmp_subscript_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_33);

                    exception_lineno = 110;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_7);
            goto dict_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_13 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__5_fp16_compress_wrapper(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_list_element_3;
        tmp_dict_key_6 = mod_consts[37];
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyList_SET_ITEM0(tmp_tuple_element_3, 0, tmp_list_element_3);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto list_build_exception_3;
            }
            tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[28]);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_tuple_element_3, 1, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_tuple_element_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_42;
            PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_3);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_3;
            }
            tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[30]);
            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_3;
            }
            tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[31]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_3;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_39);

                exception_lineno = 144;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[32]);
            if (tmp_subscript_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_39);

                exception_lineno = 144;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_list_element_4;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[29];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_4 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_44;
                PyList_SET_ITEM0(tmp_tuple_element_4, 0, tmp_list_element_4);
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_value_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto list_build_exception_4;
                }
                tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[28]);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_tuple_element_4, 1, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_tuple_element_4);
            goto dict_build_exception_6;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_45;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_48;
                PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_4);
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                }

                if (tmp_expression_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto tuple_build_exception_4;
                }
                tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[30]);
                if (tmp_expression_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto tuple_build_exception_4;
                }
                tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[31]);
                Py_DECREF(tmp_expression_value_46);
                if (tmp_expression_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto tuple_build_exception_4;
                }
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                }

                if (tmp_expression_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_45);

                    exception_lineno = 145;

                    goto tuple_build_exception_4;
                }
                tmp_subscript_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[32]);
                if (tmp_subscript_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_45);

                    exception_lineno = 145;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_11);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_14 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$default_hooks$$$function__6_bf16_compress_wrapper(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_14);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_970023c943200c84bad1194a0185d82c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_970023c943200c84bad1194a0185d82c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_970023c943200c84bad1194a0185d82c, exception_lineno);
    }



    assertFrameObject(frame_970023c943200c84bad1194a0185d82c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributed.algorithms.ddp_comm_hooks.default_hooks", false);

    Py_INCREF(module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks);
    return module_torch$distributed$algorithms$ddp_comm_hooks$default_hooks;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributed$algorithms$ddp_comm_hooks$default_hooks", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
