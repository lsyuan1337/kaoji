/* Generated code for Python module 'scipy.fft._realtransforms'
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

/* The "module_scipy$fft$_realtransforms" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$fft$_realtransforms;
PyDictObject *moduledict_scipy$fft$_realtransforms;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[42];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[42];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.fft._realtransforms"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 42; i++) {
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
void checkModuleConstants_scipy$fft$_realtransforms(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 42; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a415bcc97c36771a2dc13115bbb29b08;
static PyCodeObject *codeobj_2817c1a0582066f7fe1624e3b8d4d745;
static PyCodeObject *codeobj_3a36a278c52036553356fe2eb77bc74c;
static PyCodeObject *codeobj_41c594600e16e942384dc80b4e2947f3;
static PyCodeObject *codeobj_9e0ebfa65132af78c184111be70701d8;
static PyCodeObject *codeobj_da62eee3b4595b496fbd8bf302182924;
static PyCodeObject *codeobj_9fdb0bb771d77c032265e69d6bef8b77;
static PyCodeObject *codeobj_3817ad0a2802d5a2ea531b1b59dde718;
static PyCodeObject *codeobj_6376b7c686f4d5099d6777bd5fb88af5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[37]); CHECK_OBJECT(module_filename_obj);
    codeobj_a415bcc97c36771a2dc13115bbb29b08 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[38], mod_consts[38], NULL, NULL, 0, 0, 0);
    codeobj_2817c1a0582066f7fe1624e3b8d4d745 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[39], NULL, 7, 0, 0);
    codeobj_3a36a278c52036553356fe2eb77bc74c = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[40], NULL, 7, 0, 0);
    codeobj_41c594600e16e942384dc80b4e2947f3 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[39], NULL, 7, 0, 0);
    codeobj_9e0ebfa65132af78c184111be70701d8 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[40], NULL, 7, 0, 0);
    codeobj_da62eee3b4595b496fbd8bf302182924 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[39], NULL, 7, 0, 0);
    codeobj_9fdb0bb771d77c032265e69d6bef8b77 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[40], NULL, 7, 0, 0);
    codeobj_3817ad0a2802d5a2ea531b1b59dde718 = MAKE_CODE_OBJECT(module_filename_obj, 577, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[39], NULL, 7, 0, 0);
    codeobj_6376b7c686f4d5099d6777bd5fb88af5 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[40], NULL, 7, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__1_dctn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__2_idctn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__3_dstn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__4_idstn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__5_dct(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__6_idct(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__7_dst(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__8_idst(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$fft$_realtransforms$$$function__1_dctn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_s = python_pars[2];
    PyObject *par_axes = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_3a36a278c52036553356fe2eb77bc74c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a36a278c52036553356fe2eb77bc74c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a36a278c52036553356fe2eb77bc74c)) {
        Py_XDECREF(cache_frame_3a36a278c52036553356fe2eb77bc74c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a36a278c52036553356fe2eb77bc74c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a36a278c52036553356fe2eb77bc74c = MAKE_FUNCTION_FRAME(codeobj_3a36a278c52036553356fe2eb77bc74c, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a36a278c52036553356fe2eb77bc74c->m_type_description == NULL);
    frame_3a36a278c52036553356fe2eb77bc74c = cache_frame_3a36a278c52036553356fe2eb77bc74c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a36a278c52036553356fe2eb77bc74c);
    assert(Py_REFCNT(frame_3a36a278c52036553356fe2eb77bc74c) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3a36a278c52036553356fe2eb77bc74c->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_3a36a278c52036553356fe2eb77bc74c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a36a278c52036553356fe2eb77bc74c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a36a278c52036553356fe2eb77bc74c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a36a278c52036553356fe2eb77bc74c,
        type_description_1,
        par_x,
        par_type,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_3a36a278c52036553356fe2eb77bc74c == cache_frame_3a36a278c52036553356fe2eb77bc74c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a36a278c52036553356fe2eb77bc74c);
        cache_frame_3a36a278c52036553356fe2eb77bc74c = NULL;
    }

    assertFrameObject(frame_3a36a278c52036553356fe2eb77bc74c);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__2_idctn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_s = python_pars[2];
    PyObject *par_axes = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_9fdb0bb771d77c032265e69d6bef8b77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fdb0bb771d77c032265e69d6bef8b77 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fdb0bb771d77c032265e69d6bef8b77)) {
        Py_XDECREF(cache_frame_9fdb0bb771d77c032265e69d6bef8b77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fdb0bb771d77c032265e69d6bef8b77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fdb0bb771d77c032265e69d6bef8b77 = MAKE_FUNCTION_FRAME(codeobj_9fdb0bb771d77c032265e69d6bef8b77, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fdb0bb771d77c032265e69d6bef8b77->m_type_description == NULL);
    frame_9fdb0bb771d77c032265e69d6bef8b77 = cache_frame_9fdb0bb771d77c032265e69d6bef8b77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fdb0bb771d77c032265e69d6bef8b77);
    assert(Py_REFCNT(frame_9fdb0bb771d77c032265e69d6bef8b77) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_9fdb0bb771d77c032265e69d6bef8b77->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_9fdb0bb771d77c032265e69d6bef8b77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fdb0bb771d77c032265e69d6bef8b77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fdb0bb771d77c032265e69d6bef8b77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fdb0bb771d77c032265e69d6bef8b77,
        type_description_1,
        par_x,
        par_type,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_9fdb0bb771d77c032265e69d6bef8b77 == cache_frame_9fdb0bb771d77c032265e69d6bef8b77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fdb0bb771d77c032265e69d6bef8b77);
        cache_frame_9fdb0bb771d77c032265e69d6bef8b77 = NULL;
    }

    assertFrameObject(frame_9fdb0bb771d77c032265e69d6bef8b77);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__3_dstn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_s = python_pars[2];
    PyObject *par_axes = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_9e0ebfa65132af78c184111be70701d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e0ebfa65132af78c184111be70701d8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e0ebfa65132af78c184111be70701d8)) {
        Py_XDECREF(cache_frame_9e0ebfa65132af78c184111be70701d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e0ebfa65132af78c184111be70701d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e0ebfa65132af78c184111be70701d8 = MAKE_FUNCTION_FRAME(codeobj_9e0ebfa65132af78c184111be70701d8, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e0ebfa65132af78c184111be70701d8->m_type_description == NULL);
    frame_9e0ebfa65132af78c184111be70701d8 = cache_frame_9e0ebfa65132af78c184111be70701d8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e0ebfa65132af78c184111be70701d8);
    assert(Py_REFCNT(frame_9e0ebfa65132af78c184111be70701d8) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_9e0ebfa65132af78c184111be70701d8->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_9e0ebfa65132af78c184111be70701d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e0ebfa65132af78c184111be70701d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e0ebfa65132af78c184111be70701d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e0ebfa65132af78c184111be70701d8,
        type_description_1,
        par_x,
        par_type,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_9e0ebfa65132af78c184111be70701d8 == cache_frame_9e0ebfa65132af78c184111be70701d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e0ebfa65132af78c184111be70701d8);
        cache_frame_9e0ebfa65132af78c184111be70701d8 = NULL;
    }

    assertFrameObject(frame_9e0ebfa65132af78c184111be70701d8);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__4_idstn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_s = python_pars[2];
    PyObject *par_axes = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_6376b7c686f4d5099d6777bd5fb88af5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6376b7c686f4d5099d6777bd5fb88af5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6376b7c686f4d5099d6777bd5fb88af5)) {
        Py_XDECREF(cache_frame_6376b7c686f4d5099d6777bd5fb88af5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6376b7c686f4d5099d6777bd5fb88af5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6376b7c686f4d5099d6777bd5fb88af5 = MAKE_FUNCTION_FRAME(codeobj_6376b7c686f4d5099d6777bd5fb88af5, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6376b7c686f4d5099d6777bd5fb88af5->m_type_description == NULL);
    frame_6376b7c686f4d5099d6777bd5fb88af5 = cache_frame_6376b7c686f4d5099d6777bd5fb88af5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6376b7c686f4d5099d6777bd5fb88af5);
    assert(Py_REFCNT(frame_6376b7c686f4d5099d6777bd5fb88af5) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6376b7c686f4d5099d6777bd5fb88af5->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_6376b7c686f4d5099d6777bd5fb88af5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6376b7c686f4d5099d6777bd5fb88af5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6376b7c686f4d5099d6777bd5fb88af5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6376b7c686f4d5099d6777bd5fb88af5,
        type_description_1,
        par_x,
        par_type,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_6376b7c686f4d5099d6777bd5fb88af5 == cache_frame_6376b7c686f4d5099d6777bd5fb88af5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6376b7c686f4d5099d6777bd5fb88af5);
        cache_frame_6376b7c686f4d5099d6777bd5fb88af5 = NULL;
    }

    assertFrameObject(frame_6376b7c686f4d5099d6777bd5fb88af5);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__5_dct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_2817c1a0582066f7fe1624e3b8d4d745;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2817c1a0582066f7fe1624e3b8d4d745 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2817c1a0582066f7fe1624e3b8d4d745)) {
        Py_XDECREF(cache_frame_2817c1a0582066f7fe1624e3b8d4d745);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2817c1a0582066f7fe1624e3b8d4d745 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2817c1a0582066f7fe1624e3b8d4d745 = MAKE_FUNCTION_FRAME(codeobj_2817c1a0582066f7fe1624e3b8d4d745, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2817c1a0582066f7fe1624e3b8d4d745->m_type_description == NULL);
    frame_2817c1a0582066f7fe1624e3b8d4d745 = cache_frame_2817c1a0582066f7fe1624e3b8d4d745;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2817c1a0582066f7fe1624e3b8d4d745);
    assert(Py_REFCNT(frame_2817c1a0582066f7fe1624e3b8d4d745) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_2817c1a0582066f7fe1624e3b8d4d745->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_2817c1a0582066f7fe1624e3b8d4d745, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2817c1a0582066f7fe1624e3b8d4d745->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2817c1a0582066f7fe1624e3b8d4d745, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2817c1a0582066f7fe1624e3b8d4d745,
        type_description_1,
        par_x,
        par_type,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_2817c1a0582066f7fe1624e3b8d4d745 == cache_frame_2817c1a0582066f7fe1624e3b8d4d745) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2817c1a0582066f7fe1624e3b8d4d745);
        cache_frame_2817c1a0582066f7fe1624e3b8d4d745 = NULL;
    }

    assertFrameObject(frame_2817c1a0582066f7fe1624e3b8d4d745);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__6_idct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_da62eee3b4595b496fbd8bf302182924;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da62eee3b4595b496fbd8bf302182924 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da62eee3b4595b496fbd8bf302182924)) {
        Py_XDECREF(cache_frame_da62eee3b4595b496fbd8bf302182924);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da62eee3b4595b496fbd8bf302182924 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da62eee3b4595b496fbd8bf302182924 = MAKE_FUNCTION_FRAME(codeobj_da62eee3b4595b496fbd8bf302182924, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da62eee3b4595b496fbd8bf302182924->m_type_description == NULL);
    frame_da62eee3b4595b496fbd8bf302182924 = cache_frame_da62eee3b4595b496fbd8bf302182924;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da62eee3b4595b496fbd8bf302182924);
    assert(Py_REFCNT(frame_da62eee3b4595b496fbd8bf302182924) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_da62eee3b4595b496fbd8bf302182924->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_da62eee3b4595b496fbd8bf302182924, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da62eee3b4595b496fbd8bf302182924->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da62eee3b4595b496fbd8bf302182924, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da62eee3b4595b496fbd8bf302182924,
        type_description_1,
        par_x,
        par_type,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_da62eee3b4595b496fbd8bf302182924 == cache_frame_da62eee3b4595b496fbd8bf302182924) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da62eee3b4595b496fbd8bf302182924);
        cache_frame_da62eee3b4595b496fbd8bf302182924 = NULL;
    }

    assertFrameObject(frame_da62eee3b4595b496fbd8bf302182924);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__7_dst(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_41c594600e16e942384dc80b4e2947f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41c594600e16e942384dc80b4e2947f3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41c594600e16e942384dc80b4e2947f3)) {
        Py_XDECREF(cache_frame_41c594600e16e942384dc80b4e2947f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41c594600e16e942384dc80b4e2947f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41c594600e16e942384dc80b4e2947f3 = MAKE_FUNCTION_FRAME(codeobj_41c594600e16e942384dc80b4e2947f3, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41c594600e16e942384dc80b4e2947f3->m_type_description == NULL);
    frame_41c594600e16e942384dc80b4e2947f3 = cache_frame_41c594600e16e942384dc80b4e2947f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41c594600e16e942384dc80b4e2947f3);
    assert(Py_REFCNT(frame_41c594600e16e942384dc80b4e2947f3) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_41c594600e16e942384dc80b4e2947f3->m_frame.f_lineno = 574;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_41c594600e16e942384dc80b4e2947f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41c594600e16e942384dc80b4e2947f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41c594600e16e942384dc80b4e2947f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41c594600e16e942384dc80b4e2947f3,
        type_description_1,
        par_x,
        par_type,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_41c594600e16e942384dc80b4e2947f3 == cache_frame_41c594600e16e942384dc80b4e2947f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41c594600e16e942384dc80b4e2947f3);
        cache_frame_41c594600e16e942384dc80b4e2947f3 = NULL;
    }

    assertFrameObject(frame_41c594600e16e942384dc80b4e2947f3);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_realtransforms$$$function__8_idst(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_norm = python_pars[4];
    PyObject *par_overwrite_x = python_pars[5];
    PyObject *par_workers = python_pars[6];
    struct Nuitka_FrameObject *frame_3817ad0a2802d5a2ea531b1b59dde718;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3817ad0a2802d5a2ea531b1b59dde718 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3817ad0a2802d5a2ea531b1b59dde718)) {
        Py_XDECREF(cache_frame_3817ad0a2802d5a2ea531b1b59dde718);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3817ad0a2802d5a2ea531b1b59dde718 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3817ad0a2802d5a2ea531b1b59dde718 = MAKE_FUNCTION_FRAME(codeobj_3817ad0a2802d5a2ea531b1b59dde718, module_scipy$fft$_realtransforms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3817ad0a2802d5a2ea531b1b59dde718->m_type_description == NULL);
    frame_3817ad0a2802d5a2ea531b1b59dde718 = cache_frame_3817ad0a2802d5a2ea531b1b59dde718;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3817ad0a2802d5a2ea531b1b59dde718);
    assert(Py_REFCNT(frame_3817ad0a2802d5a2ea531b1b59dde718) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3817ad0a2802d5a2ea531b1b59dde718->m_frame.f_lineno = 624;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_3817ad0a2802d5a2ea531b1b59dde718, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3817ad0a2802d5a2ea531b1b59dde718->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3817ad0a2802d5a2ea531b1b59dde718, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3817ad0a2802d5a2ea531b1b59dde718,
        type_description_1,
        par_x,
        par_type,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers
    );


    // Release cached frame if used for exception.
    if (frame_3817ad0a2802d5a2ea531b1b59dde718 == cache_frame_3817ad0a2802d5a2ea531b1b59dde718) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3817ad0a2802d5a2ea531b1b59dde718);
        cache_frame_3817ad0a2802d5a2ea531b1b59dde718 = NULL;
    }

    assertFrameObject(frame_3817ad0a2802d5a2ea531b1b59dde718);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__1_dctn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__1_dctn,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a36a278c52036553356fe2eb77bc74c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__2_idctn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__2_idctn,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fdb0bb771d77c032265e69d6bef8b77,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__3_dstn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__3_dstn,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e0ebfa65132af78c184111be70701d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__4_idstn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__4_idstn,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6376b7c686f4d5099d6777bd5fb88af5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__5_dct(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__5_dct,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2817c1a0582066f7fe1624e3b8d4d745,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__6_idct(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__6_idct,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da62eee3b4595b496fbd8bf302182924,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__7_dst(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__7_dst,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41c594600e16e942384dc80b4e2947f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__8_idst(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_realtransforms$$$function__8_idst,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3817ad0a2802d5a2ea531b1b59dde718,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_realtransforms,
        mod_consts[10],
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

function_impl_code functable_scipy$fft$_realtransforms[] = {
    impl_scipy$fft$_realtransforms$$$function__1_dctn,
    impl_scipy$fft$_realtransforms$$$function__2_idctn,
    impl_scipy$fft$_realtransforms$$$function__3_dstn,
    impl_scipy$fft$_realtransforms$$$function__4_idstn,
    impl_scipy$fft$_realtransforms$$$function__5_dct,
    impl_scipy$fft$_realtransforms$$$function__6_idct,
    impl_scipy$fft$_realtransforms$$$function__7_dst,
    impl_scipy$fft$_realtransforms$$$function__8_idst,
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

    function_impl_code *current = functable_scipy$fft$_realtransforms;
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

    if (offset > sizeof(functable_scipy$fft$_realtransforms) || offset < 0) {
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
        functable_scipy$fft$_realtransforms[offset],
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
        module_scipy$fft$_realtransforms,
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
PyObject *modulecode_scipy$fft$_realtransforms(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.fft._realtransforms");

    // Store the module for future use.
    module_scipy$fft$_realtransforms = module;

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
        PRINT_STRING("scipy.fft._realtransforms: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.fft._realtransforms: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.fft._realtransforms: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$fft$_realtransforms\n");

    moduledict_scipy$fft$_realtransforms = MODULE_DICT(module_scipy$fft$_realtransforms);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$fft$_realtransforms,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$fft$_realtransforms,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[41]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$fft$_realtransforms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$fft$_realtransforms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$fft$_realtransforms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$fft$_realtransforms);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$fft$_realtransforms);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a415bcc97c36771a2dc13115bbb29b08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_2);
    }
    frame_a415bcc97c36771a2dc13115bbb29b08 = MAKE_MODULE_FRAME(codeobj_a415bcc97c36771a2dc13115bbb29b08, module_scipy$fft$_realtransforms);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a415bcc97c36771a2dc13115bbb29b08);
    assert(Py_REFCNT(frame_a415bcc97c36771a2dc13115bbb29b08) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$fft$_realtransforms;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[18];
        tmp_level_value_1 = mod_consts[19];
        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$fft$_realtransforms,
                mod_consts[20],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[22];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$fft$_realtransforms;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[23];
        tmp_level_value_2 = mod_consts[21];
        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$fft$_realtransforms,
                mod_consts[0],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$fft$_realtransforms;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[21];
        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST8(mod_consts[25]);
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[27];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__1_dctn(tmp_defaults_1);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 8;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[27];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_2 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__2_idctn(tmp_defaults_2);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 67;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_defaults_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[27];
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_3 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__3_dstn(tmp_defaults_3);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 126;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[27];
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_value_4 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__4_idstn(tmp_defaults_4);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 185;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = mod_consts[32];
        Py_INCREF(tmp_defaults_5);


        tmp_args_element_value_5 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__5_dct(tmp_defaults_5);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 244;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = mod_consts[32];
        Py_INCREF(tmp_defaults_6);


        tmp_args_element_value_6 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__6_idct(tmp_defaults_6);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 396;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_defaults_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = mod_consts[32];
        Py_INCREF(tmp_defaults_7);


        tmp_args_element_value_7 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__7_dst(tmp_defaults_7);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 460;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_defaults_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        tmp_defaults_8 = mod_consts[32];
        Py_INCREF(tmp_defaults_8);


        tmp_args_element_value_8 = MAKE_FUNCTION_scipy$fft$_realtransforms$$$function__8_idst(tmp_defaults_8);

        frame_a415bcc97c36771a2dc13115bbb29b08->m_frame.f_lineno = 577;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a415bcc97c36771a2dc13115bbb29b08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a415bcc97c36771a2dc13115bbb29b08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a415bcc97c36771a2dc13115bbb29b08, exception_lineno);
    }



    assertFrameObject(frame_a415bcc97c36771a2dc13115bbb29b08);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.fft._realtransforms", false);

    Py_INCREF(module_scipy$fft$_realtransforms);
    return module_scipy$fft$_realtransforms;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_realtransforms, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$fft$_realtransforms", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
