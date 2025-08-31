/* Generated code for Python module 'requests.packages.charade.latin1prober'
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

/* The "module_requests$packages$charade$latin1prober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$packages$charade$latin1prober;
PyDictObject *moduledict_requests$packages$charade$latin1prober;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[75];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[75];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("requests.packages.charade.latin1prober"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 75; i++) {
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
void checkModuleConstants_requests$packages$charade$latin1prober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 75; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0e29f124e109d125a49fee640b168bd5;
static PyCodeObject *codeobj_1ab478cd81ff90785e614f87c945a85d;
static PyCodeObject *codeobj_70b8e1cc8f2aa4ea46b623c1f96044a6;
static PyCodeObject *codeobj_307c1f98784533fa04118bf29fe731c3;
static PyCodeObject *codeobj_7e4b9cb903c5d00ac6b192fa185283c5;
static PyCodeObject *codeobj_8e0d7ca2548475008d21562335f05645;
static PyCodeObject *codeobj_94fd395bb10a0c91622bb9df44555845;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[68]); CHECK_OBJECT(module_filename_obj);
    codeobj_0e29f124e109d125a49fee640b168bd5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[69], mod_consts[69], NULL, NULL, 0, 0, 0);
    codeobj_1ab478cd81ff90785e614f87c945a85d = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[70], NULL, 0, 0, 0);
    codeobj_70b8e1cc8f2aa4ea46b623c1f96044a6 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[71], NULL, 1, 0, 0);
    codeobj_307c1f98784533fa04118bf29fe731c3 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[72], NULL, 2, 0, 0);
    codeobj_7e4b9cb903c5d00ac6b192fa185283c5 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[71], NULL, 1, 0, 0);
    codeobj_8e0d7ca2548475008d21562335f05645 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[73], NULL, 1, 0, 0);
    codeobj_94fd395bb10a0c91622bb9df44555845 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[71], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__1___init__();


static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__2_reset();


static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__3_get_charset_name();


static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__4_feed();


static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__5_get_confidence();


// The module function definitions.
static PyObject *impl_requests$packages$charade$latin1prober$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_70b8e1cc8f2aa4ea46b623c1f96044a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6)) {
        Py_XDECREF(cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6 = MAKE_FUNCTION_FRAME(codeobj_70b8e1cc8f2aa4ea46b623c1f96044a6, module_requests$packages$charade$latin1prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6->m_type_description == NULL);
    frame_70b8e1cc8f2aa4ea46b623c1f96044a6 = cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70b8e1cc8f2aa4ea46b623c1f96044a6);
    assert(Py_REFCNT(frame_70b8e1cc8f2aa4ea46b623c1f96044a6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_70b8e1cc8f2aa4ea46b623c1f96044a6->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_70b8e1cc8f2aa4ea46b623c1f96044a6->m_frame.f_lineno = 100;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70b8e1cc8f2aa4ea46b623c1f96044a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70b8e1cc8f2aa4ea46b623c1f96044a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70b8e1cc8f2aa4ea46b623c1f96044a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70b8e1cc8f2aa4ea46b623c1f96044a6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_70b8e1cc8f2aa4ea46b623c1f96044a6 == cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6);
        cache_frame_70b8e1cc8f2aa4ea46b623c1f96044a6 = NULL;
    }

    assertFrameObject(frame_70b8e1cc8f2aa4ea46b623c1f96044a6);

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


static PyObject *impl_requests$packages$charade$latin1prober$$$function__2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_94fd395bb10a0c91622bb9df44555845;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_94fd395bb10a0c91622bb9df44555845 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94fd395bb10a0c91622bb9df44555845)) {
        Py_XDECREF(cache_frame_94fd395bb10a0c91622bb9df44555845);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94fd395bb10a0c91622bb9df44555845 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94fd395bb10a0c91622bb9df44555845 = MAKE_FUNCTION_FRAME(codeobj_94fd395bb10a0c91622bb9df44555845, module_requests$packages$charade$latin1prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94fd395bb10a0c91622bb9df44555845->m_type_description == NULL);
    frame_94fd395bb10a0c91622bb9df44555845 = cache_frame_94fd395bb10a0c91622bb9df44555845;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94fd395bb10a0c91622bb9df44555845);
    assert(Py_REFCNT(frame_94fd395bb10a0c91622bb9df44555845) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_value_1 == NULL)) {
            tmp_assattr_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_assattr_target_2;
        tmp_mult_expr_left_1 = MAKE_LIST1(mod_consts[5]);
        tmp_mult_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_mult_expr_right_1 == NULL)) {
            tmp_mult_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_94fd395bb10a0c91622bb9df44555845->m_frame.f_lineno = 105;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_94fd395bb10a0c91622bb9df44555845, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94fd395bb10a0c91622bb9df44555845->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94fd395bb10a0c91622bb9df44555845, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94fd395bb10a0c91622bb9df44555845,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_94fd395bb10a0c91622bb9df44555845 == cache_frame_94fd395bb10a0c91622bb9df44555845) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94fd395bb10a0c91622bb9df44555845);
        cache_frame_94fd395bb10a0c91622bb9df44555845 = NULL;
    }

    assertFrameObject(frame_94fd395bb10a0c91622bb9df44555845);

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


static PyObject *impl_requests$packages$charade$latin1prober$$$function__4_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_aBuf = python_pars[1];
    PyObject *var_c = NULL;
    PyObject *var_charClass = NULL;
    PyObject *var_freq = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_307c1f98784533fa04118bf29fe731c3;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_307c1f98784533fa04118bf29fe731c3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_307c1f98784533fa04118bf29fe731c3)) {
        Py_XDECREF(cache_frame_307c1f98784533fa04118bf29fe731c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_307c1f98784533fa04118bf29fe731c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_307c1f98784533fa04118bf29fe731c3 = MAKE_FUNCTION_FRAME(codeobj_307c1f98784533fa04118bf29fe731c3, module_requests$packages$charade$latin1prober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_307c1f98784533fa04118bf29fe731c3->m_type_description == NULL);
    frame_307c1f98784533fa04118bf29fe731c3 = cache_frame_307c1f98784533fa04118bf29fe731c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_307c1f98784533fa04118bf29fe731c3);
    assert(Py_REFCNT(frame_307c1f98784533fa04118bf29fe731c3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_aBuf);
        tmp_args_element_value_1 = par_aBuf;
        frame_307c1f98784533fa04118bf29fe731c3->m_frame.f_lineno = 111;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_aBuf;
            assert(old != NULL);
            par_aBuf = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_aBuf);
        tmp_iter_arg_1 = par_aBuf;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
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
                exception_lineno = 112;
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
            PyObject *old = var_c;
            var_c = tmp_assign_source_4;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c);
        tmp_args_element_value_2 = var_c;
        frame_307c1f98784533fa04118bf29fe731c3->m_frame.f_lineno = 113;
        tmp_subscript_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_charClass;
            var_charClass = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_mult_expr_right_1 == NULL)) {
            tmp_mult_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_charClass);
        tmp_add_expr_right_1 = var_charClass;
        tmp_subscript_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_freq;
            var_freq = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_freq);
        tmp_cmp_expr_left_1 = var_freq;
        tmp_cmp_expr_right_1 = mod_consts[5];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_value_1 == NULL)) {
            tmp_assattr_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_freq);
        tmp_assign_source_8 = var_freq;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_8;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_5 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_iadd_expr_right_1 = mod_consts[16];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_10;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_charClass);
        tmp_assattr_value_2 = var_charClass;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 112;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        frame_307c1f98784533fa04118bf29fe731c3->m_frame.f_lineno = 122;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_307c1f98784533fa04118bf29fe731c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_307c1f98784533fa04118bf29fe731c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_307c1f98784533fa04118bf29fe731c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_307c1f98784533fa04118bf29fe731c3,
        type_description_1,
        par_self,
        par_aBuf,
        var_c,
        var_charClass,
        var_freq
    );


    // Release cached frame if used for exception.
    if (frame_307c1f98784533fa04118bf29fe731c3 == cache_frame_307c1f98784533fa04118bf29fe731c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_307c1f98784533fa04118bf29fe731c3);
        cache_frame_307c1f98784533fa04118bf29fe731c3 = NULL;
    }

    assertFrameObject(frame_307c1f98784533fa04118bf29fe731c3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_aBuf);
    Py_DECREF(par_aBuf);
    par_aBuf = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_charClass);
    var_charClass = NULL;
    Py_XDECREF(var_freq);
    var_freq = NULL;
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

    Py_XDECREF(par_aBuf);
    par_aBuf = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_charClass);
    var_charClass = NULL;
    Py_XDECREF(var_freq);
    var_freq = NULL;
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


static PyObject *impl_requests$packages$charade$latin1prober$$$function__5_get_confidence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_total = NULL;
    PyObject *var_confidence = NULL;
    struct Nuitka_FrameObject *frame_8e0d7ca2548475008d21562335f05645;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e0d7ca2548475008d21562335f05645 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8e0d7ca2548475008d21562335f05645)) {
        Py_XDECREF(cache_frame_8e0d7ca2548475008d21562335f05645);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e0d7ca2548475008d21562335f05645 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e0d7ca2548475008d21562335f05645 = MAKE_FUNCTION_FRAME(codeobj_8e0d7ca2548475008d21562335f05645, module_requests$packages$charade$latin1prober, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e0d7ca2548475008d21562335f05645->m_type_description == NULL);
    frame_8e0d7ca2548475008d21562335f05645 = cache_frame_8e0d7ca2548475008d21562335f05645;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e0d7ca2548475008d21562335f05645);
    assert(Py_REFCNT(frame_8e0d7ca2548475008d21562335f05645) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8e0d7ca2548475008d21562335f05645->m_frame.f_lineno = 125;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[18];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_sum_sequence_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_sum_sequence_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_total == NULL);
        var_total = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_total);
        tmp_cmp_expr_left_2 = var_total;
        tmp_cmp_expr_right_2 = mod_consts[18];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[19];
        assert(var_confidence == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_confidence = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[20];
        tmp_float_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 3);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_total);
        tmp_truediv_expr_right_1 = var_total;
        tmp_sub_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[16];
        tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[21];
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_total);
        tmp_truediv_expr_right_2 = var_total;
        tmp_sub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_confidence == NULL);
        var_confidence = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_confidence);
        tmp_cmp_expr_left_3 = var_confidence;
        tmp_cmp_expr_right_3 = mod_consts[19];
        tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[19];
        {
            PyObject *old = var_confidence;
            assert(old != NULL);
            var_confidence = tmp_assign_source_4;
            Py_INCREF(var_confidence);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_confidence);
        tmp_mult_expr_left_2 = var_confidence;
        tmp_mult_expr_right_2 = mod_consts[22];
        tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_confidence;
            assert(old != NULL);
            var_confidence = tmp_assign_source_5;
            Py_DECREF(old);
        }

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
        exception_tb = MAKE_TRACEBACK(frame_8e0d7ca2548475008d21562335f05645, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e0d7ca2548475008d21562335f05645->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e0d7ca2548475008d21562335f05645, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e0d7ca2548475008d21562335f05645,
        type_description_1,
        par_self,
        var_total,
        var_confidence
    );


    // Release cached frame if used for exception.
    if (frame_8e0d7ca2548475008d21562335f05645 == cache_frame_8e0d7ca2548475008d21562335f05645) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e0d7ca2548475008d21562335f05645);
        cache_frame_8e0d7ca2548475008d21562335f05645 = NULL;
    }

    assertFrameObject(frame_8e0d7ca2548475008d21562335f05645);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_confidence);
    tmp_return_value = var_confidence;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_total);
    var_total = NULL;
    Py_XDECREF(var_confidence);
    var_confidence = NULL;
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

    Py_XDECREF(var_total);
    var_total = NULL;
    Py_XDECREF(var_confidence);
    var_confidence = NULL;
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



static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$charade$latin1prober$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_70b8e1cc8f2aa4ea46b623c1f96044a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$charade$latin1prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$charade$latin1prober$$$function__2_reset,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_94fd395bb10a0c91622bb9df44555845,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$charade$latin1prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__3_get_charset_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_7e4b9cb903c5d00ac6b192fa185283c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$charade$latin1prober,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[60]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__4_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$charade$latin1prober$$$function__4_feed,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_307c1f98784533fa04118bf29fe731c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$charade$latin1prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__5_get_confidence() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$packages$charade$latin1prober$$$function__5_get_confidence,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_8e0d7ca2548475008d21562335f05645,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$packages$charade$latin1prober,
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

function_impl_code functable_requests$packages$charade$latin1prober[] = {
    impl_requests$packages$charade$latin1prober$$$function__1___init__,
    impl_requests$packages$charade$latin1prober$$$function__2_reset,
    NULL,
    impl_requests$packages$charade$latin1prober$$$function__4_feed,
    impl_requests$packages$charade$latin1prober$$$function__5_get_confidence,
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

    function_impl_code *current = functable_requests$packages$charade$latin1prober;
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

    if (offset > sizeof(functable_requests$packages$charade$latin1prober) || offset < 0) {
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
        functable_requests$packages$charade$latin1prober[offset],
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
        module_requests$packages$charade$latin1prober,
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
PyObject *modulecode_requests$packages$charade$latin1prober(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests.packages.charade.latin1prober");

    // Store the module for future use.
    module_requests$packages$charade$latin1prober = module;

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
        PRINT_STRING("requests.packages.charade.latin1prober: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests.packages.charade.latin1prober: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests.packages.charade.latin1prober: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrequests$packages$charade$latin1prober\n");

    moduledict_requests$packages$charade$latin1prober = MODULE_DICT(module_requests$packages$charade$latin1prober);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_requests$packages$charade$latin1prober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$packages$charade$latin1prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[74]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$packages$charade$latin1prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$packages$charade$latin1prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$packages$charade$latin1prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$packages$charade$latin1prober);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_requests$packages$charade$latin1prober);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_0e29f124e109d125a49fee640b168bd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1ab478cd81ff90785e614f87c945a85d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_2);
    }
    frame_0e29f124e109d125a49fee640b168bd5 = MAKE_MODULE_FRAME(codeobj_0e29f124e109d125a49fee640b168bd5, module_requests$packages$charade$latin1prober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e29f124e109d125a49fee640b168bd5);
    assert(Py_REFCNT(frame_0e29f124e109d125a49fee640b168bd5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[27], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$packages$charade$latin1prober;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[30];
        tmp_level_value_1 = mod_consts[16];
        frame_0e29f124e109d125a49fee640b168bd5->m_frame.f_lineno = 29;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_requests$packages$charade$latin1prober,
                mod_consts[0],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[31];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$packages$charade$latin1prober;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[32];
        tmp_level_value_2 = mod_consts[16];
        frame_0e29f124e109d125a49fee640b168bd5->m_frame.f_lineno = 30;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$packages$charade$latin1prober,
                mod_consts[14],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[33];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$packages$charade$latin1prober;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[34];
        tmp_level_value_3 = mod_consts[16];
        frame_0e29f124e109d125a49fee640b168bd5->m_frame.f_lineno = 31;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$packages$charade$latin1prober,
                mod_consts[10],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(256);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 4, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 5, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 6, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 7, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 8, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 9, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 10, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 11, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 12, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 13, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 14, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 15, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 16, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 17, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 18, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 19, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 20, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 21, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 22, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 23, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 24, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 25, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 26, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 27, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 28, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 29, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 30, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 31, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 32, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 33, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 34, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 35, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 36, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 37, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 38, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 39, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 40, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 41, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 42, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 43, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 44, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 45, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 46, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 47, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 48, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 49, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 50, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 51, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 52, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 53, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 54, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 55, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 56, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 57, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 58, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 59, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 60, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 61, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 62, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 63, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 64, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 65, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 66, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 67, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 68, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 69, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 70, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 71, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 72, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 73, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 74, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 75, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 76, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 77, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 78, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 79, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 80, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 81, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 82, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 83, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 84, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 85, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 86, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 87, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 88, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 89, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 90, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 91, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 92, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 93, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 94, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 95, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 96, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 97, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 98, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 99, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 100, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 101, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 102, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 103, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 104, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 105, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 106, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 107, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 108, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 109, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 110, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 111, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 112, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 113, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 114, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 115, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 116, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 117, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 118, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 119, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 120, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 121, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 122, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 123, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 124, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 125, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 126, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 127, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 128, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 129, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 130, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 131, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 132, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 133, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 134, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 135, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 136, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 137, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 138, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 139, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 140, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 141, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 142, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 143, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 144, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 145, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 146, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 147, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 148, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 149, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 150, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 151, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 152, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 153, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 154, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 155, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 156, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 157, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 158, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 159, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 160, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 161, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 162, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 163, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 164, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 165, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 166, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 167, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 168, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 169, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 170, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 171, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 172, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 173, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 174, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 175, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 176, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 177, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 178, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 179, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 180, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 181, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 182, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 183, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 184, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 185, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 186, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 187, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 188, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 189, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 190, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 191, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 192, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 193, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 194, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 195, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 196, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 197, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 198, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 199, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 200, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 201, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 202, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 203, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 204, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 205, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 206, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 207, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 208, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 209, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 210, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 211, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 212, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 213, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 214, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 215, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 216, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 217, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 218, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 219, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 220, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 221, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 222, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 223, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 224, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 225, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 226, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 227, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 228, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 229, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 230, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 231, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 232, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 233, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 234, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 235, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 236, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 237, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 238, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 239, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 240, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 241, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 242, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 243, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 244, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 245, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 246, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 247, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 248, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 249, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 250, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 251, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 252, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 253, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 254, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_17, 255, tmp_tuple_element_1);
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_18);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_2);
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


            exception_lineno = 97;

            goto try_except_handler_1;
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
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
        tmp_subscript_value_1 = mod_consts[5];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
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


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[49]);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = mod_consts[50];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_0e29f124e109d125a49fee640b168bd5->m_frame.f_lineno = 97;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[51]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[52];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[53];
        tmp_getattr_default_1 = mod_consts[54];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[53]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 97;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
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
            locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_3;
        }
        frame_1ab478cd81ff90785e614f87c945a85d_2 = MAKE_CLASS_FRAME(codeobj_1ab478cd81ff90785e614f87c945a85d, module_requests$packages$charade$latin1prober, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1ab478cd81ff90785e614f87c945a85d_2);
        assert(Py_REFCNT(frame_1ab478cd81ff90785e614f87c945a85d_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__2_reset();

        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__3_get_charset_name();

        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__4_feed();

        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$packages$charade$latin1prober$$$function__5_get_confidence();

        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[65], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1ab478cd81ff90785e614f87c945a85d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1ab478cd81ff90785e614f87c945a85d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1ab478cd81ff90785e614f87c945a85d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1ab478cd81ff90785e614f87c945a85d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_1ab478cd81ff90785e614f87c945a85d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[50];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_0e29f124e109d125a49fee640b168bd5->m_frame.f_lineno = 97;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97);
        locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97 = NULL;
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

        Py_DECREF(locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97);
        locals_requests$packages$charade$latin1prober$$$class__1_Latin1Prober_97 = NULL;
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
        exception_lineno = 97;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_25);
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e29f124e109d125a49fee640b168bd5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e29f124e109d125a49fee640b168bd5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e29f124e109d125a49fee640b168bd5, exception_lineno);
    }



    assertFrameObject(frame_0e29f124e109d125a49fee640b168bd5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests.packages.charade.latin1prober", false);

    Py_INCREF(module_requests$packages$charade$latin1prober);
    return module_requests$packages$charade$latin1prober;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$packages$charade$latin1prober, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$packages$charade$latin1prober", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
