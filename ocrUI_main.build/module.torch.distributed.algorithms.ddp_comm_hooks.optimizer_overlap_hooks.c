/* Generated code for Python module 'torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks'
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

/* The "module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks;
PyDictObject *moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[72];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[72];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 72; i++) {
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
void checkModuleConstants_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 72; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7addc4c6bf04c5f153a8f1ecfef68bf;
static PyCodeObject *codeobj_dc79243c101d9a64d0d4deea3cbdb014;
static PyCodeObject *codeobj_843e2e0844def2db1a3e7e3529c9895b;
static PyCodeObject *codeobj_60afdf07e439906edb14bec2b6493322;
static PyCodeObject *codeobj_12e9435d72f8b1322d888cb5fe796493;
static PyCodeObject *codeobj_2c60f1578d20f73dc9c6666105ea605d;
static PyCodeObject *codeobj_5850efa59c9cff62991e17fedaad5c7a;
static PyCodeObject *codeobj_e1f500274115fbef69a541f978a06679;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[61]); CHECK_OBJECT(module_filename_obj);
    codeobj_b7addc4c6bf04c5f153a8f1ecfef68bf = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[62], mod_consts[62], NULL, NULL, 0, 0, 0);
    codeobj_dc79243c101d9a64d0d4deea3cbdb014 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[63], NULL, 0, 0, 0);
    codeobj_843e2e0844def2db1a3e7e3529c9895b = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[64], NULL, 3, 0, 0);
    codeobj_60afdf07e439906edb14bec2b6493322 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[65], NULL, 1, 0, 0);
    codeobj_12e9435d72f8b1322d888cb5fe796493 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[66], NULL, 2, 0, 0);
    codeobj_2c60f1578d20f73dc9c6666105ea605d = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[67], NULL, 2, 0, 0);
    codeobj_5850efa59c9cff62991e17fedaad5c7a = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[68], mod_consts[69], 2, 0, 0);
    codeobj_e1f500274115fbef69a541f978a06679 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[70], mod_consts[71], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__2__set_params_to_optimize();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__3__check_valid_functional_optim();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper$$$function__1_optimizer_step(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_functional_optim = python_pars[1];
    PyObject *par_params = python_pars[2];
    struct Nuitka_FrameObject *frame_843e2e0844def2db1a3e7e3529c9895b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_843e2e0844def2db1a3e7e3529c9895b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_843e2e0844def2db1a3e7e3529c9895b)) {
        Py_XDECREF(cache_frame_843e2e0844def2db1a3e7e3529c9895b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_843e2e0844def2db1a3e7e3529c9895b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_843e2e0844def2db1a3e7e3529c9895b = MAKE_FUNCTION_FRAME(codeobj_843e2e0844def2db1a3e7e3529c9895b, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_843e2e0844def2db1a3e7e3529c9895b->m_type_description == NULL);
    frame_843e2e0844def2db1a3e7e3529c9895b = cache_frame_843e2e0844def2db1a3e7e3529c9895b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_843e2e0844def2db1a3e7e3529c9895b);
    assert(Py_REFCNT(frame_843e2e0844def2db1a3e7e3529c9895b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_functional_optim);
        tmp_assattr_value_1 = par_functional_optim;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_843e2e0844def2db1a3e7e3529c9895b->m_frame.f_lineno = 18;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_843e2e0844def2db1a3e7e3529c9895b->m_frame.f_lineno = 19;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[2], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_843e2e0844def2db1a3e7e3529c9895b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_843e2e0844def2db1a3e7e3529c9895b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_843e2e0844def2db1a3e7e3529c9895b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_843e2e0844def2db1a3e7e3529c9895b,
        type_description_1,
        par_self,
        par_functional_optim,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_843e2e0844def2db1a3e7e3529c9895b == cache_frame_843e2e0844def2db1a3e7e3529c9895b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_843e2e0844def2db1a3e7e3529c9895b);
        cache_frame_843e2e0844def2db1a3e7e3529c9895b = NULL;
    }

    assertFrameObject(frame_843e2e0844def2db1a3e7e3529c9895b);

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
    CHECK_OBJECT(par_functional_optim);
    Py_DECREF(par_functional_optim);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_functional_optim);
    Py_DECREF(par_functional_optim);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__2__set_params_to_optimize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_2c60f1578d20f73dc9c6666105ea605d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2c60f1578d20f73dc9c6666105ea605d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c60f1578d20f73dc9c6666105ea605d)) {
        Py_XDECREF(cache_frame_2c60f1578d20f73dc9c6666105ea605d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c60f1578d20f73dc9c6666105ea605d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c60f1578d20f73dc9c6666105ea605d = MAKE_FUNCTION_FRAME(codeobj_2c60f1578d20f73dc9c6666105ea605d, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c60f1578d20f73dc9c6666105ea605d->m_type_description == NULL);
    frame_2c60f1578d20f73dc9c6666105ea605d = cache_frame_2c60f1578d20f73dc9c6666105ea605d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c60f1578d20f73dc9c6666105ea605d);
    assert(Py_REFCNT(frame_2c60f1578d20f73dc9c6666105ea605d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_params);
        tmp_cmp_expr_left_1 = par_params;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_params);
        tmp_set_arg_1 = par_params;
        tmp_assattr_value_1 = PySet_New(tmp_set_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
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
        exception_tb = MAKE_TRACEBACK(frame_2c60f1578d20f73dc9c6666105ea605d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c60f1578d20f73dc9c6666105ea605d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c60f1578d20f73dc9c6666105ea605d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c60f1578d20f73dc9c6666105ea605d,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_2c60f1578d20f73dc9c6666105ea605d == cache_frame_2c60f1578d20f73dc9c6666105ea605d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c60f1578d20f73dc9c6666105ea605d);
        cache_frame_2c60f1578d20f73dc9c6666105ea605d = NULL;
    }

    assertFrameObject(frame_2c60f1578d20f73dc9c6666105ea605d);

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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__3__check_valid_functional_optim(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_60afdf07e439906edb14bec2b6493322;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_60afdf07e439906edb14bec2b6493322 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60afdf07e439906edb14bec2b6493322)) {
        Py_XDECREF(cache_frame_60afdf07e439906edb14bec2b6493322);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60afdf07e439906edb14bec2b6493322 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60afdf07e439906edb14bec2b6493322 = MAKE_FUNCTION_FRAME(codeobj_60afdf07e439906edb14bec2b6493322, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_60afdf07e439906edb14bec2b6493322->m_type_description == NULL);
    frame_60afdf07e439906edb14bec2b6493322 = cache_frame_60afdf07e439906edb14bec2b6493322;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_60afdf07e439906edb14bec2b6493322);
    assert(Py_REFCNT(frame_60afdf07e439906edb14bec2b6493322) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_attribute_value_1 == NULL)) {
            tmp_attribute_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[5];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
            if (tmp_type_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            Py_DECREF(tmp_type_arg_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[6];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_format_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_format_value_2 == NULL)) {
                tmp_format_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[6];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[6], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_60afdf07e439906edb14bec2b6493322->m_frame.f_lineno = 27;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 27;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60afdf07e439906edb14bec2b6493322, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60afdf07e439906edb14bec2b6493322->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60afdf07e439906edb14bec2b6493322, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60afdf07e439906edb14bec2b6493322,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_60afdf07e439906edb14bec2b6493322 == cache_frame_60afdf07e439906edb14bec2b6493322) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_60afdf07e439906edb14bec2b6493322);
        cache_frame_60afdf07e439906edb14bec2b6493322 = NULL;
    }

    assertFrameObject(frame_60afdf07e439906edb14bec2b6493322);

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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_hook = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_optimizer_state = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_has_set_params = Nuitka_Cell_Empty();
    PyObject *var_hook_then_optimizer_wrapper = NULL;
    struct Nuitka_FrameObject *frame_12e9435d72f8b1322d888cb5fe796493;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12e9435d72f8b1322d888cb5fe796493 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_12e9435d72f8b1322d888cb5fe796493)) {
        Py_XDECREF(cache_frame_12e9435d72f8b1322d888cb5fe796493);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12e9435d72f8b1322d888cb5fe796493 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12e9435d72f8b1322d888cb5fe796493 = MAKE_FUNCTION_FRAME(codeobj_12e9435d72f8b1322d888cb5fe796493, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12e9435d72f8b1322d888cb5fe796493->m_type_description == NULL);
    frame_12e9435d72f8b1322d888cb5fe796493 = cache_frame_12e9435d72f8b1322d888cb5fe796493;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12e9435d72f8b1322d888cb5fe796493);
    assert(Py_REFCNT(frame_12e9435d72f8b1322d888cb5fe796493) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_optimizer_state));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_optimizer_state);
        tmp_attribute_value_1 = mod_consts[3];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_optimizer_state));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_optimizer_state);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_assign_source_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_1 = tmp_and_left_value_1;
        and_end_1:;
        assert(Nuitka_Cell_GET(var_has_set_params) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(var_has_set_params, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_dict_key_1 = mod_consts[9];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "ccco";
                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[14]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "ccco";
                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "ccco";
                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 51;
                type_description_1 = "ccco";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[16]);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 51;
                type_description_1 = "ccco";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_4);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "ccco";
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

        tmp_closure_1[0] = var_has_set_params;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_hook;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_optimizer_state;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper(tmp_annotations_1, tmp_closure_1);

        assert(var_hook_then_optimizer_wrapper == NULL);
        var_hook_then_optimizer_wrapper = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12e9435d72f8b1322d888cb5fe796493, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12e9435d72f8b1322d888cb5fe796493->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12e9435d72f8b1322d888cb5fe796493, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12e9435d72f8b1322d888cb5fe796493,
        type_description_1,
        par_hook,
        par_optimizer_state,
        var_has_set_params,
        var_hook_then_optimizer_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_12e9435d72f8b1322d888cb5fe796493 == cache_frame_12e9435d72f8b1322d888cb5fe796493) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12e9435d72f8b1322d888cb5fe796493);
        cache_frame_12e9435d72f8b1322d888cb5fe796493 = NULL;
    }

    assertFrameObject(frame_12e9435d72f8b1322d888cb5fe796493);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_hook_then_optimizer_wrapper);
    tmp_return_value = var_hook_then_optimizer_wrapper;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_has_set_params);
    Py_DECREF(var_has_set_params);
    var_has_set_params = NULL;
    CHECK_OBJECT(var_hook_then_optimizer_wrapper);
    Py_DECREF(var_hook_then_optimizer_wrapper);
    var_hook_then_optimizer_wrapper = NULL;
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

    CHECK_OBJECT(var_has_set_params);
    Py_DECREF(var_has_set_params);
    var_has_set_params = NULL;
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
    CHECK_OBJECT(par_optimizer_state);
    Py_DECREF(par_optimizer_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hook);
    Py_DECREF(par_hook);
    CHECK_OBJECT(par_optimizer_state);
    Py_DECREF(par_optimizer_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hook_state = python_pars[0];
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_fut = NULL;
    PyObject *var_optimizer_step = NULL;
    struct Nuitka_FrameObject *frame_5850efa59c9cff62991e17fedaad5c7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5850efa59c9cff62991e17fedaad5c7a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5850efa59c9cff62991e17fedaad5c7a)) {
        Py_XDECREF(cache_frame_5850efa59c9cff62991e17fedaad5c7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5850efa59c9cff62991e17fedaad5c7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5850efa59c9cff62991e17fedaad5c7a = MAKE_FUNCTION_FRAME(codeobj_5850efa59c9cff62991e17fedaad5c7a, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5850efa59c9cff62991e17fedaad5c7a->m_type_description == NULL);
    frame_5850efa59c9cff62991e17fedaad5c7a = cache_frame_5850efa59c9cff62991e17fedaad5c7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5850efa59c9cff62991e17fedaad5c7a);
    assert(Py_REFCNT(frame_5850efa59c9cff62991e17fedaad5c7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_hook_state);
        tmp_args_element_value_1 = par_hook_state;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_2 = Nuitka_Cell_GET(par_bucket);
        frame_5850efa59c9cff62991e17fedaad5c7a->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        assert(var_fut == NULL);
        var_fut = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_bucket;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[2];
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper$$$function__1_optimizer_step(tmp_closure_1);

        assert(var_optimizer_step == NULL);
        var_optimizer_step = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_fut);
        tmp_called_instance_1 = var_fut;
        CHECK_OBJECT(var_optimizer_step);
        tmp_args_element_value_3 = var_optimizer_step;
        frame_5850efa59c9cff62991e17fedaad5c7a->m_frame.f_lineno = 66;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_5850efa59c9cff62991e17fedaad5c7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5850efa59c9cff62991e17fedaad5c7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5850efa59c9cff62991e17fedaad5c7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5850efa59c9cff62991e17fedaad5c7a,
        type_description_1,
        par_hook_state,
        par_bucket,
        var_fut,
        var_optimizer_step,
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_5850efa59c9cff62991e17fedaad5c7a == cache_frame_5850efa59c9cff62991e17fedaad5c7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5850efa59c9cff62991e17fedaad5c7a);
        cache_frame_5850efa59c9cff62991e17fedaad5c7a = NULL;
    }

    assertFrameObject(frame_5850efa59c9cff62991e17fedaad5c7a);

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
    CHECK_OBJECT(var_optimizer_step);
    Py_DECREF(var_optimizer_step);
    var_optimizer_step = NULL;
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
    Py_XDECREF(var_optimizer_step);
    var_optimizer_step = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper$$$function__1_optimizer_step(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_gradient_tensors = NULL;
    PyObject *var_model_params = NULL;
    PyObject *var_grad_tensor = NULL;
    PyObject *var_model_param = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e1f500274115fbef69a541f978a06679;
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
    static struct Nuitka_FrameObject *cache_frame_e1f500274115fbef69a541f978a06679 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e1f500274115fbef69a541f978a06679)) {
        Py_XDECREF(cache_frame_e1f500274115fbef69a541f978a06679);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1f500274115fbef69a541f978a06679 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1f500274115fbef69a541f978a06679 = MAKE_FUNCTION_FRAME(codeobj_e1f500274115fbef69a541f978a06679, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1f500274115fbef69a541f978a06679->m_type_description == NULL);
    frame_e1f500274115fbef69a541f978a06679 = cache_frame_e1f500274115fbef69a541f978a06679;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e1f500274115fbef69a541f978a06679);
    assert(Py_REFCNT(frame_e1f500274115fbef69a541f978a06679) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e1f500274115fbef69a541f978a06679->m_frame.f_lineno = 56;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_gradient_tensors == NULL);
        var_gradient_tensors = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e1f500274115fbef69a541f978a06679->m_frame.f_lineno = 57;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[25]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_model_params == NULL);
        var_model_params = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_gradient_tensors);
        tmp_args_element_value_1 = var_gradient_tensors;
        CHECK_OBJECT(var_model_params);
        tmp_args_element_value_2 = var_model_params;
        frame_e1f500274115fbef69a541f978a06679->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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
                exception_lineno = 58;
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


            exception_lineno = 58;
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
            exception_lineno = 58;
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
            exception_lineno = 58;
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
                    exception_lineno = 58;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[26];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooccc";
            exception_lineno = 58;
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
            PyObject *old = var_grad_tensor;
            var_grad_tensor = tmp_assign_source_8;
            Py_INCREF(var_grad_tensor);
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
            PyObject *old = var_model_param;
            var_model_param = tmp_assign_source_9;
            Py_INCREF(var_model_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_model_param);
        tmp_cmp_expr_left_1 = var_model_param;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_model_param);
        tmp_args_element_value_3 = var_model_param;
        CHECK_OBJECT(var_grad_tensor);
        tmp_args_element_value_4 = var_grad_tensor;
        frame_e1f500274115fbef69a541f978a06679->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[29],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;
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
        PyObject *tmp_called_instance_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e1f500274115fbef69a541f978a06679->m_frame.f_lineno = 64;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_e1f500274115fbef69a541f978a06679, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1f500274115fbef69a541f978a06679->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1f500274115fbef69a541f978a06679, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1f500274115fbef69a541f978a06679,
        type_description_1,
        par_fut,
        var_gradient_tensors,
        var_model_params,
        var_grad_tensor,
        var_model_param,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_e1f500274115fbef69a541f978a06679 == cache_frame_e1f500274115fbef69a541f978a06679) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1f500274115fbef69a541f978a06679);
        cache_frame_e1f500274115fbef69a541f978a06679 = NULL;
    }

    assertFrameObject(frame_e1f500274115fbef69a541f978a06679);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_gradient_tensors);
    Py_DECREF(var_gradient_tensors);
    var_gradient_tensors = NULL;
    CHECK_OBJECT(var_model_params);
    Py_DECREF(var_model_params);
    var_model_params = NULL;
    Py_XDECREF(var_grad_tensor);
    var_grad_tensor = NULL;
    Py_XDECREF(var_model_param);
    var_model_param = NULL;
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

    Py_XDECREF(var_gradient_tensors);
    var_gradient_tensors = NULL;
    Py_XDECREF(var_model_params);
    var_model_params = NULL;
    Py_XDECREF(var_grad_tensor);
    var_grad_tensor = NULL;
    Py_XDECREF(var_model_param);
    var_model_param = NULL;
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



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__1___init__,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_843e2e0844def2db1a3e7e3529c9895b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__2__set_params_to_optimize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__2__set_params_to_optimize,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_2c60f1578d20f73dc9c6666105ea605d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__3__check_valid_functional_optim() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__3__check_valid_functional_optim,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_60afdf07e439906edb14bec2b6493322,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12e9435d72f8b1322d888cb5fe796493,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[18],
#endif
        codeobj_5850efa59c9cff62991e17fedaad5c7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper$$$function__1_optimizer_step(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper$$$function__1_optimizer_step,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_e1f500274115fbef69a541f978a06679,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
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

function_impl_code functable_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks[] = {
    impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper,
    impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer$$$function__1_hook_then_optimizer_wrapper$$$function__1_optimizer_step,
    impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__1___init__,
    impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__2__set_params_to_optimize,
    impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__3__check_valid_functional_optim,
    impl_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer,
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

    function_impl_code *current = functable_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks;
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

    if (offset > sizeof(functable_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks) || offset < 0) {
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
        functable_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks[offset],
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
        module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
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
PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks");

    // Store the module for future use.
    module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks = module;

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
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks\n");

    moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks = MODULE_DICT(module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[6]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b7addc4c6bf04c5f153a8f1ecfef68bf;
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
    PyObject *locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_dc79243c101d9a64d0d4deea3cbdb014_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_2);
    }
    frame_b7addc4c6bf04c5f153a8f1ecfef68bf = MAKE_MODULE_FRAME(codeobj_b7addc4c6bf04c5f153a8f1ecfef68bf, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7addc4c6bf04c5f153a8f1ecfef68bf);
    assert(Py_REFCNT(frame_b7addc4c6bf04c5f153a8f1ecfef68bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[35], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_3);
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
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
                mod_consts[37],
                mod_consts[38]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[37]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
                mod_consts[39],
                mod_consts[38]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[39]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_6);
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
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[38];
        frame_b7addc4c6bf04c5f153a8f1ecfef68bf->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[40];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[38];
        frame_b7addc4c6bf04c5f153a8f1ecfef68bf->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks,
                mod_consts[41],
                mod_consts[38]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[42];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 8;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[38];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[43]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[44];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_b7addc4c6bf04c5f153a8f1ecfef68bf->m_frame.f_lineno = 8;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[45]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[46];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[47];
        tmp_getattr_default_1 = mod_consts[48];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 8;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        frame_dc79243c101d9a64d0d4deea3cbdb014_2 = MAKE_CLASS_FRAME(codeobj_dc79243c101d9a64d0d4deea3cbdb014, module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_dc79243c101d9a64d0d4deea3cbdb014_2);
        assert(Py_REFCNT(frame_dc79243c101d9a64d0d4deea3cbdb014_2) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[0],mod_consts[3]);
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[54];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__2__set_params_to_optimize();

        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__3__check_valid_functional_optim();

        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc79243c101d9a64d0d4deea3cbdb014_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc79243c101d9a64d0d4deea3cbdb014_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc79243c101d9a64d0d4deea3cbdb014_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc79243c101d9a64d0d4deea3cbdb014_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_dc79243c101d9a64d0d4deea3cbdb014_2);

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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[42];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[44];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_b7addc4c6bf04c5f153a8f1ecfef68bf->m_frame.f_lineno = 8;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8);
        locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8 = NULL;
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

        Py_DECREF(locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8);
        locals_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$class__1__OptimizerHookState_8 = NULL;
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
        exception_lineno = 8;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_15);
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
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_list_element_1;
        tmp_dict_key_1 = mod_consts[20];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyList_SET_ITEM0(tmp_tuple_element_4, 0, tmp_list_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_tuple_element_4, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_tuple_element_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_4);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[14]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_8);

                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[16]);
            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_8);

                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_list_element_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[28];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_1;
            }
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_5 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_13;
                PyList_SET_ITEM0(tmp_tuple_element_5, 0, tmp_list_element_2);
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;

                    goto list_build_exception_2;
                }
                tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[11]);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;

                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_tuple_element_5, 1, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_tuple_element_5);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_17;
                PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_5);
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;

                    goto tuple_build_exception_3;
                }
                tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[14]);
                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;

                    goto tuple_build_exception_3;
                }
                tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[15]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;

                    goto tuple_build_exception_3;
                }
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_14);

                    exception_lineno = 37;

                    goto tuple_build_exception_3;
                }
                tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[16]);
                if (tmp_subscript_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_14);

                    exception_lineno = 37;

                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_4);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

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


        tmp_assign_source_17 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks$$$function__4__hook_then_optimizer(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_17);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7addc4c6bf04c5f153a8f1ecfef68bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7addc4c6bf04c5f153a8f1ecfef68bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7addc4c6bf04c5f153a8f1ecfef68bf, exception_lineno);
    }



    assertFrameObject(frame_b7addc4c6bf04c5f153a8f1ecfef68bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks", false);

    Py_INCREF(module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks);
    return module_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
