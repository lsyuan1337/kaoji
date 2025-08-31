/* Generated code for Python module 'sqlalchemy.sql._typing'
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

/* The "module_sqlalchemy$sql$_typing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$sql$_typing;
PyDictObject *moduledict_sqlalchemy$sql$_typing;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[190];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[190];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.sql._typing"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 190; i++) {
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
void checkModuleConstants_sqlalchemy$sql$_typing(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 190; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_018ead9a5a862196c90a2182b7a2b31a;
static PyCodeObject *codeobj_905beafbaf56b9447c3060a7ac9f643f;
static PyCodeObject *codeobj_bbf55a9bc2a6f93b315c90e5d0fc99ad;
static PyCodeObject *codeobj_9e914fa0f1ed96bae9a2663c6a9ab94e;
static PyCodeObject *codeobj_3261e17f9aac2d33450a968fe2d23f2d;
static PyCodeObject *codeobj_d23f82078e6739daafc9cb73ded62db8;
static PyCodeObject *codeobj_26960d01765023b073d5896347cf21f8;
static PyCodeObject *codeobj_24f3472e1f0feee77280a73c7bcf721b;
static PyCodeObject *codeobj_76c60191a00ca750525f8648d9edeccf;
static PyCodeObject *codeobj_06744351aab84ddba5e75d159e7b825f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[182]); CHECK_OBJECT(module_filename_obj);
    codeobj_018ead9a5a862196c90a2182b7a2b31a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[183], mod_consts[183], NULL, NULL, 0, 0, 0);
    codeobj_905beafbaf56b9447c3060a7ac9f643f = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[64], mod_consts[64], mod_consts[184], NULL, 0, 0, 0);
    codeobj_bbf55a9bc2a6f93b315c90e5d0fc99ad = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[52], mod_consts[52], mod_consts[184], NULL, 0, 0, 0);
    codeobj_9e914fa0f1ed96bae9a2663c6a9ab94e = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[67], mod_consts[67], mod_consts[185], NULL, 2, 0, 0);
    codeobj_3261e17f9aac2d33450a968fe2d23f2d = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[2], mod_consts[2], mod_consts[186], NULL, 1, 0, 0);
    codeobj_d23f82078e6739daafc9cb73ded62db8 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[181], mod_consts[181], NULL, NULL, 0, 0, 0);
    codeobj_26960d01765023b073d5896347cf21f8 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[173], mod_consts[173], mod_consts[187], NULL, 1, 0, 0);
    codeobj_24f3472e1f0feee77280a73c7bcf721b = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[177], mod_consts[177], mod_consts[188], NULL, 1, 0, 0);
    codeobj_76c60191a00ca750525f8648d9edeccf = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[179], mod_consts[179], mod_consts[189], NULL, 1, 0, 0);
    codeobj_06744351aab84ddba5e75d159e7b825f = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[175], mod_consts[175], mod_consts[188], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__18_has_schema_attr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__19_is_quoted_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__1___clause_element__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__20_is_has_clause_element(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__21_is_insert_update(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__22__no_kw(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__2___call__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$sql$_typing$$$function__18_has_schema_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_26960d01765023b073d5896347cf21f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_26960d01765023b073d5896347cf21f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_26960d01765023b073d5896347cf21f8)) {
        Py_XDECREF(cache_frame_26960d01765023b073d5896347cf21f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26960d01765023b073d5896347cf21f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26960d01765023b073d5896347cf21f8 = MAKE_FUNCTION_FRAME(codeobj_26960d01765023b073d5896347cf21f8, module_sqlalchemy$sql$_typing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26960d01765023b073d5896347cf21f8->m_type_description == NULL);
    frame_26960d01765023b073d5896347cf21f8 = cache_frame_26960d01765023b073d5896347cf21f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26960d01765023b073d5896347cf21f8);
    assert(Py_REFCNT(frame_26960d01765023b073d5896347cf21f8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_attribute_value_1 = mod_consts[0];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_26960d01765023b073d5896347cf21f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26960d01765023b073d5896347cf21f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26960d01765023b073d5896347cf21f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26960d01765023b073d5896347cf21f8,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_26960d01765023b073d5896347cf21f8 == cache_frame_26960d01765023b073d5896347cf21f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26960d01765023b073d5896347cf21f8);
        cache_frame_26960d01765023b073d5896347cf21f8 = NULL;
    }

    assertFrameObject(frame_26960d01765023b073d5896347cf21f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_typing$$$function__19_is_quoted_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_06744351aab84ddba5e75d159e7b825f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06744351aab84ddba5e75d159e7b825f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_06744351aab84ddba5e75d159e7b825f)) {
        Py_XDECREF(cache_frame_06744351aab84ddba5e75d159e7b825f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06744351aab84ddba5e75d159e7b825f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06744351aab84ddba5e75d159e7b825f = MAKE_FUNCTION_FRAME(codeobj_06744351aab84ddba5e75d159e7b825f, module_sqlalchemy$sql$_typing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06744351aab84ddba5e75d159e7b825f->m_type_description == NULL);
    frame_06744351aab84ddba5e75d159e7b825f = cache_frame_06744351aab84ddba5e75d159e7b825f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_06744351aab84ddba5e75d159e7b825f);
    assert(Py_REFCNT(frame_06744351aab84ddba5e75d159e7b825f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_attribute_value_1 = mod_consts[1];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_06744351aab84ddba5e75d159e7b825f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06744351aab84ddba5e75d159e7b825f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06744351aab84ddba5e75d159e7b825f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06744351aab84ddba5e75d159e7b825f,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_06744351aab84ddba5e75d159e7b825f == cache_frame_06744351aab84ddba5e75d159e7b825f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06744351aab84ddba5e75d159e7b825f);
        cache_frame_06744351aab84ddba5e75d159e7b825f = NULL;
    }

    assertFrameObject(frame_06744351aab84ddba5e75d159e7b825f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_typing$$$function__20_is_has_clause_element(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_24f3472e1f0feee77280a73c7bcf721b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24f3472e1f0feee77280a73c7bcf721b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_24f3472e1f0feee77280a73c7bcf721b)) {
        Py_XDECREF(cache_frame_24f3472e1f0feee77280a73c7bcf721b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24f3472e1f0feee77280a73c7bcf721b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24f3472e1f0feee77280a73c7bcf721b = MAKE_FUNCTION_FRAME(codeobj_24f3472e1f0feee77280a73c7bcf721b, module_sqlalchemy$sql$_typing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24f3472e1f0feee77280a73c7bcf721b->m_type_description == NULL);
    frame_24f3472e1f0feee77280a73c7bcf721b = cache_frame_24f3472e1f0feee77280a73c7bcf721b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24f3472e1f0feee77280a73c7bcf721b);
    assert(Py_REFCNT(frame_24f3472e1f0feee77280a73c7bcf721b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_attribute_value_1 = mod_consts[2];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_24f3472e1f0feee77280a73c7bcf721b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24f3472e1f0feee77280a73c7bcf721b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24f3472e1f0feee77280a73c7bcf721b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24f3472e1f0feee77280a73c7bcf721b,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_24f3472e1f0feee77280a73c7bcf721b == cache_frame_24f3472e1f0feee77280a73c7bcf721b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24f3472e1f0feee77280a73c7bcf721b);
        cache_frame_24f3472e1f0feee77280a73c7bcf721b = NULL;
    }

    assertFrameObject(frame_24f3472e1f0feee77280a73c7bcf721b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_typing$$$function__21_is_insert_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    struct Nuitka_FrameObject *frame_76c60191a00ca750525f8648d9edeccf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76c60191a00ca750525f8648d9edeccf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76c60191a00ca750525f8648d9edeccf)) {
        Py_XDECREF(cache_frame_76c60191a00ca750525f8648d9edeccf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76c60191a00ca750525f8648d9edeccf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76c60191a00ca750525f8648d9edeccf = MAKE_FUNCTION_FRAME(codeobj_76c60191a00ca750525f8648d9edeccf, module_sqlalchemy$sql$_typing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76c60191a00ca750525f8648d9edeccf->m_type_description == NULL);
    frame_76c60191a00ca750525f8648d9edeccf = cache_frame_76c60191a00ca750525f8648d9edeccf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76c60191a00ca750525f8648d9edeccf);
    assert(Py_REFCNT(frame_76c60191a00ca750525f8648d9edeccf) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_c);
        tmp_expression_value_1 = par_c;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_c);
        tmp_expression_value_2 = par_c;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 359;
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
        CHECK_OBJECT(par_c);
        tmp_expression_value_3 = par_c;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_76c60191a00ca750525f8648d9edeccf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76c60191a00ca750525f8648d9edeccf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76c60191a00ca750525f8648d9edeccf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76c60191a00ca750525f8648d9edeccf,
        type_description_1,
        par_c
    );


    // Release cached frame if used for exception.
    if (frame_76c60191a00ca750525f8648d9edeccf == cache_frame_76c60191a00ca750525f8648d9edeccf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76c60191a00ca750525f8648d9edeccf);
        cache_frame_76c60191a00ca750525f8648d9edeccf = NULL;
    }

    assertFrameObject(frame_76c60191a00ca750525f8648d9edeccf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_typing$$$function__22__no_kw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d23f82078e6739daafc9cb73ded62db8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d23f82078e6739daafc9cb73ded62db8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d23f82078e6739daafc9cb73ded62db8)) {
        Py_XDECREF(cache_frame_d23f82078e6739daafc9cb73ded62db8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d23f82078e6739daafc9cb73ded62db8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d23f82078e6739daafc9cb73ded62db8 = MAKE_FUNCTION_FRAME(codeobj_d23f82078e6739daafc9cb73ded62db8, module_sqlalchemy$sql$_typing, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d23f82078e6739daafc9cb73ded62db8->m_type_description == NULL);
    frame_d23f82078e6739daafc9cb73ded62db8 = cache_frame_d23f82078e6739daafc9cb73ded62db8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d23f82078e6739daafc9cb73ded62db8);
    assert(Py_REFCNT(frame_d23f82078e6739daafc9cb73ded62db8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        frame_d23f82078e6739daafc9cb73ded62db8->m_frame.f_lineno = 363;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[7],
            PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

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
        exception_tb = MAKE_TRACEBACK(frame_d23f82078e6739daafc9cb73ded62db8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d23f82078e6739daafc9cb73ded62db8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d23f82078e6739daafc9cb73ded62db8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d23f82078e6739daafc9cb73ded62db8,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d23f82078e6739daafc9cb73ded62db8 == cache_frame_d23f82078e6739daafc9cb73ded62db8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d23f82078e6739daafc9cb73ded62db8);
        cache_frame_d23f82078e6739daafc9cb73ded62db8 = NULL;
    }

    assertFrameObject(frame_d23f82078e6739daafc9cb73ded62db8);

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



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__18_has_schema_attr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_typing$$$function__18_has_schema_attr,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26960d01765023b073d5896347cf21f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__19_is_quoted_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_typing$$$function__19_is_quoted_name,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_06744351aab84ddba5e75d159e7b825f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__1___clause_element__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_3261e17f9aac2d33450a968fe2d23f2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__20_is_has_clause_element(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_typing$$$function__20_is_has_clause_element,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_24f3472e1f0feee77280a73c7bcf721b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__21_is_insert_update(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_typing$$$function__21_is_insert_update,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76c60191a00ca750525f8648d9edeccf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__22__no_kw(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_typing$$$function__22__no_kw,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d23f82078e6739daafc9cb73ded62db8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__2___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_9e914fa0f1ed96bae9a2663c6a9ab94e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_typing,
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

function_impl_code functable_sqlalchemy$sql$_typing[] = {
    NULL,
    NULL,
    impl_sqlalchemy$sql$_typing$$$function__18_has_schema_attr,
    impl_sqlalchemy$sql$_typing$$$function__19_is_quoted_name,
    impl_sqlalchemy$sql$_typing$$$function__20_is_has_clause_element,
    impl_sqlalchemy$sql$_typing$$$function__21_is_insert_update,
    impl_sqlalchemy$sql$_typing$$$function__22__no_kw,
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

    function_impl_code *current = functable_sqlalchemy$sql$_typing;
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

    if (offset > sizeof(functable_sqlalchemy$sql$_typing) || offset < 0) {
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
        functable_sqlalchemy$sql$_typing[offset],
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
        module_sqlalchemy$sql$_typing,
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
PyObject *modulecode_sqlalchemy$sql$_typing(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.sql._typing");

    // Store the module for future use.
    module_sqlalchemy$sql$_typing = module;

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
        PRINT_STRING("sqlalchemy.sql._typing: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql._typing: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql._typing: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$sql$_typing\n");

    moduledict_sqlalchemy$sql$_typing = MODULE_DICT(module_sqlalchemy$sql$_typing);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$sql$_typing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$_typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[28]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$_typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$_typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$_typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$sql$_typing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$sql$_typing);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_018ead9a5a862196c90a2182b7a2b31a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2;
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
    PyObject *locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84 = NULL;
    struct Nuitka_FrameObject *frame_905beafbaf56b9447c3060a7ac9f643f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    frame_018ead9a5a862196c90a2182b7a2b31a = MAKE_MODULE_FRAME(codeobj_018ead9a5a862196c90a2182b7a2b31a, module_sqlalchemy$sql$_typing);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_018ead9a5a862196c90a2182b7a2b31a);
    assert(Py_REFCNT(frame_018ead9a5a862196c90a2182b7a2b31a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[15]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[16];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[17];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 10;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[18],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[18]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[19],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[19]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[20],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[20]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[21],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[21]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[22],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[22]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[23],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[23]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[24],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[24]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[26],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[26]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[27],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[27]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[28];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[29];
        tmp_level_value_2 = mod_consts[30];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 22;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[31],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[28];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[32];
        tmp_level_value_3 = mod_consts[33];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[6],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[28];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[34];
        tmp_level_value_4 = mod_consts[33];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[35],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[36];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[37];
        tmp_level_value_5 = mod_consts[33];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[38],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[39];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[40];
        tmp_level_value_6 = mod_consts[33];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[41],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[39];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$sql$_typing;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[42];
        tmp_level_value_7 = mod_consts[33];
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$sql$_typing,
                mod_consts[43],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 69;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[44], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 72;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[47], 0), mod_consts[45]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 74;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[49], 0), mod_consts[45]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_24);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 77;

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
        tmp_subscript_value_1 = mod_consts[17];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[51]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[52];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 77;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[53]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[54];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[55];
        tmp_getattr_default_1 = mod_consts[56];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[55]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 77;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 77;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77, mod_consts[9], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_3;
        }
        frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2 = MAKE_CLASS_FRAME(codeobj_bbf55a9bc2a6f93b315c90e5d0fc99ad, module_sqlalchemy$sql$_typing, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2);
        assert(Py_REFCNT(frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[61]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__1___clause_element__(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bbf55a9bc2a6f93b315c90e5d0fc99ad_2);

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


                exception_lineno = 77;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[52];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 77;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_31 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77);
        locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77);
        locals_sqlalchemy$sql$_typing$$$class__1__HasClauseElement_77 = NULL;
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
        exception_lineno = 77;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_31);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_34 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[17];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[51]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[51]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[64];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 84;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[53]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[54];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[55];
        tmp_getattr_default_2 = mod_consts[56];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[55]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 84;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84, mod_consts[9], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        frame_905beafbaf56b9447c3060a7ac9f643f_3 = MAKE_CLASS_FRAME(codeobj_905beafbaf56b9447c3060a7ac9f643f, module_sqlalchemy$sql$_typing, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_905beafbaf56b9447c3060a7ac9f643f_3);
        assert(Py_REFCNT(frame_905beafbaf56b9447c3060a7ac9f643f_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[66]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__2___call__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_905beafbaf56b9447c3060a7ac9f643f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_905beafbaf56b9447c3060a7ac9f643f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_905beafbaf56b9447c3060a7ac9f643f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_905beafbaf56b9447c3060a7ac9f643f_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_905beafbaf56b9447c3060a7ac9f643f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[64];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 84;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_39 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84);
        locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF(locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84);
        locals_sqlalchemy$sql$_typing$$$class__2__CoreAdapterProto_84 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 84;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_39);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 92;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS10(tmp_called_value_8, mod_consts[69]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[71];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[72]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[73];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_subscript_value_4 == NULL)) {
            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_subscript_value_5 == NULL)) {
            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_9;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[74];
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 2, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 3, tmp_tuple_element_9);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_3;
            }
            tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[76]);
            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_16);

                exception_lineno = 126;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_6, 4, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[78]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_subscript_value_9 == NULL)) {
            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_19);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_12;
            PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_10);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[72]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[79];
            PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_10);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_10 = mod_consts[73];
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_10);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_8, 3, tmp_tuple_element_10);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_11 == NULL)) {
                tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_11);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_8, 4, tmp_tuple_element_10);
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_subscript_value_12 == NULL)) {
                tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_12);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_8, 5, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_8, 6, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_14;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[78]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_subscript_value_14 == NULL)) {
            tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_subscript_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_26);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_16;
            PyTuple_SET_ITEM(tmp_subscript_value_13, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[79];
            PyTuple_SET_ITEM0(tmp_subscript_value_13, 1, tmp_tuple_element_11);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_5;
            }
            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[76]);
            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_5;
            }
            tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_15 == NULL)) {
                tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_28);

                exception_lineno = 151;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 2, tmp_tuple_element_11);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_5;
            }
            tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_16 == NULL)) {
                tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_16);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 3, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_tuple_element_12;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_17, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = Py_Ellipsis;
        PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_12);
        tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 155;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_10, mod_consts[82], kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_0_3;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 157;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_11, mod_consts[84], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_value_0_4;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 158;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_12, mod_consts[86], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_0_5;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 159;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_13, mod_consts[88], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_0_6;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 160;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_14, mod_consts[90], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_7;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_7 == NULL)) {
            tmp_kw_call_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 161;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_15, mod_consts[92], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_16;
        PyObject *tmp_kw_call_value_0_8;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_8 == NULL)) {
            tmp_kw_call_value_0_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 162;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_16, mod_consts[94], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_9;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_9 == NULL)) {
            tmp_kw_call_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_17, mod_consts[96], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_18;
        PyObject *tmp_kw_call_value_0_10;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_10 == NULL)) {
            tmp_kw_call_value_0_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 164;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_18, mod_consts[98], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_19;
        PyObject *tmp_kw_call_value_0_11;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_11 == NULL)) {
            tmp_kw_call_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 165;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_19, mod_consts[100], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_20;
        PyObject *tmp_kw_call_value_0_12;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_12 == NULL)) {
            tmp_kw_call_value_0_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 166;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_12};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_20, mod_consts[102], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_tuple_element_13;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_13 = mod_consts[75];
        tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_20;
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[79];
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 2, tmp_tuple_element_13);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_6;
            }
            tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[76]);
            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_19 == NULL)) {
                tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_33);

                exception_lineno = 173;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_18, 3, tmp_tuple_element_13);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_20 = DEEP_COPY_TUPLE_GUIDED(mod_consts[104], "li");
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_20);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_18, 4, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 5, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_tuple_element_14;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_22;
            PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_14);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            assert(!(tmp_expression_value_37 == NULL));
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_22);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_tuple_element_15;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_24;
            PyTuple_SET_ITEM0(tmp_subscript_value_23, 0, tmp_tuple_element_15);
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_subscript_value_24 == NULL)) {
                tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_subscript_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_24);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assign_source_59 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_23);
        Py_DECREF(tmp_subscript_value_23);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_tuple_element_16;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_16);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_assign_source_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[110]);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_28;
            PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_17);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_subscript_value_27 == NULL)) {
                tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_subscript_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_27);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_17);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_28);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_26, 2, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_26, 3, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_subscript_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_assign_source_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_26);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_tuple_element_18;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        assert(!(tmp_tuple_element_18 == NULL));
        tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyTuple_SET_ITEM0(tmp_subscript_value_29, 0, tmp_tuple_element_18);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[112]);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_value_29);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_assign_source_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_31;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_subscript_value_31 == NULL)) {
            tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_subscript_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_31);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyTuple_SET_ITEM(tmp_subscript_value_30, 0, tmp_tuple_element_19);
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[114]);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_30, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_subscript_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assign_source_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_tuple_element_20;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_20 = mod_consts[116];
        tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_51;
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_20);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_13;
            }
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[117]);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_subscript_value_32);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_assign_source_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_32);
        Py_DECREF(tmp_subscript_value_32);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_tuple_element_21;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_21 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_53;
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 1, tmp_tuple_element_21);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_14;
            }
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[119]);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_33, 2, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[120];
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 3, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_subscript_value_33);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_assign_source_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_33);
        Py_DECREF(tmp_subscript_value_33);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_value_0_13;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_kw_call_value_0_13 == NULL)) {
            tmp_kw_call_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        assert(!(tmp_kw_call_value_0_13 == NULL));
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 243;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_21, mod_consts[122], kw_values, mod_consts[45]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_tuple_element_22;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        assert(!(tmp_tuple_element_22 == NULL));
        tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_22);
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto tuple_build_exception_15;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_34, 1, tmp_tuple_element_22);
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_subscript_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_34);
        Py_DECREF(tmp_subscript_value_34);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_tuple_element_23;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_56;
            PyTuple_SET_ITEM0(tmp_subscript_value_35, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[125];
            PyTuple_SET_ITEM0(tmp_subscript_value_35, 1, tmp_tuple_element_23);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_16;
            }
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[126]);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_35, 2, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_subscript_value_35);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_assign_source_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_35);
        Py_DECREF(tmp_subscript_value_35);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_tuple_element_24;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_24 = mod_consts[128];
        tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_38;
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[129];
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[130];
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 2, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[131];
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 3, tmp_tuple_element_24);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_17;
            }
            tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_subscript_value_37 == NULL)) {
                tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_subscript_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_17;
            }
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_37);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_36, 4, tmp_tuple_element_24);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_17;
            }
            tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_subscript_value_38 == NULL)) {
                tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_subscript_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_17;
            }
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_38);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_36, 5, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 6, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_subscript_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_assign_source_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_36);
        Py_DECREF(tmp_subscript_value_36);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_tuple_element_25;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[133]);
        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_25 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_25);
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto tuple_build_exception_18;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_39, 1, tmp_tuple_element_25);
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_expression_value_60);
        Py_DECREF(tmp_subscript_value_39);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_assign_source_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_60);
        Py_DECREF(tmp_subscript_value_39);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_41;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_41 = mod_consts[135];
        tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_41);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_40, 0, tmp_tuple_element_26);
        tmp_tuple_element_26 = mod_consts[135];
        PyTuple_SET_ITEM0(tmp_subscript_value_40, 1, tmp_tuple_element_26);
        tmp_assign_source_71 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_40);
        Py_DECREF(tmp_subscript_value_40);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_tuple_element_27;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = mod_consts[137];
        tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_43;
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_27);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto tuple_build_exception_19;
            }
            tmp_subscript_value_43 = mod_consts[137];
            tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_43);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_subscript_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_assign_source_72 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_42);
        Py_DECREF(tmp_subscript_value_42);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_tuple_element_28;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = (PyObject *)&PyLong_Type;
        tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_45;
            PyTuple_SET_ITEM0(tmp_subscript_value_44, 0, tmp_tuple_element_28);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto tuple_build_exception_20;
            }
            tmp_subscript_value_45 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_45);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_44, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_44, 2, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_subscript_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_assign_source_73 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_44);
        Py_DECREF(tmp_subscript_value_44);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_tuple_element_29;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_29 = (PyObject *)&PyBool_Type;
        tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_47;
            PyTuple_SET_ITEM0(tmp_subscript_value_46, 0, tmp_tuple_element_29);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_21;
            }
            tmp_subscript_value_47 = mod_consts[140];
            tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_47);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_46, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_subscript_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_assign_source_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_46);
        Py_DECREF(tmp_subscript_value_46);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 329;
        tmp_assign_source_75 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[143], 0)
        );

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 330;
        tmp_assign_source_76 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[145], 0)
        );

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 331;
        tmp_assign_source_77 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[147], 0)
        );

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 332;
        tmp_assign_source_78 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[149], 0)
        );

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 333;
        tmp_assign_source_79 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 334;
        tmp_assign_source_80 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[153], 0)
        );

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 335;
        tmp_assign_source_81 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[155], 0)
        );

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 336;
        tmp_assign_source_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[157], 0)
        );

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 337;
        tmp_assign_source_83 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[159], 0)
        );

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 338;
        tmp_assign_source_84 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[161], 0)
        );

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 339;
        tmp_assign_source_85 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[163], 0)
        );

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 340;
        tmp_assign_source_86 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[165], 0)
        );

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 341;
        tmp_assign_source_87 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[167], 0)
        );

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 342;
        tmp_assign_source_88 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[169], 0)
        );

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        frame_018ead9a5a862196c90a2182b7a2b31a->m_frame.f_lineno = 343;
        tmp_assign_source_89 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[142],
            PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_89);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_018ead9a5a862196c90a2182b7a2b31a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_018ead9a5a862196c90a2182b7a2b31a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_018ead9a5a862196c90a2182b7a2b31a, exception_lineno);
    }



    assertFrameObject(frame_018ead9a5a862196c90a2182b7a2b31a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[172]);


        tmp_assign_source_90 = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__18_has_schema_attr(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[174]);


        tmp_assign_source_91 = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__19_is_quoted_name(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[176]);


        tmp_assign_source_92 = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__20_is_has_clause_element(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_annotations_6;
        tmp_annotations_6 = DICT_COPY(mod_consts[178]);


        tmp_assign_source_93 = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__21_is_insert_update(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_annotations_7;
        tmp_annotations_7 = DICT_COPY(mod_consts[180]);


        tmp_assign_source_94 = MAKE_FUNCTION_sqlalchemy$sql$_typing$$$function__22__no_kw(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_94);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.sql._typing", false);

    Py_INCREF(module_sqlalchemy$sql$_typing);
    return module_sqlalchemy$sql$_typing;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_typing, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$sql$_typing", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
