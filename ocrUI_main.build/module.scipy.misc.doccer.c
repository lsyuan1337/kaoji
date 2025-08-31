/* Generated code for Python module 'scipy.misc.doccer'
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

/* The "module_scipy$misc$doccer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$misc$doccer;
PyDictObject *moduledict_scipy$misc$doccer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[47];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[47];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.misc.doccer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 47; i++) {
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
void checkModuleConstants_scipy$misc$doccer(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 47; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_51d4298409e9251493eed42073b1120f;
static PyCodeObject *codeobj_ded073be3adc64ff4b8aac3cc6cc7505;
static PyCodeObject *codeobj_3a7d36d5dd9be04f2033bcd723253589;
static PyCodeObject *codeobj_724b758086ef65787c85372e1e68a289;
static PyCodeObject *codeobj_2fe8134fa2fdfb3f97735cbd0800c564;
static PyCodeObject *codeobj_4dff0f28cc3a4b574eddb8debc0353b7;
static PyCodeObject *codeobj_d585a7125097dbb2e43716162efe9867;
static PyCodeObject *codeobj_1c7074ddb58baaa29d074c1563bfb488;
static PyCodeObject *codeobj_024967fb46a7839b54aeffc454f1dced;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[37]); CHECK_OBJECT(module_filename_obj);
    codeobj_51d4298409e9251493eed42073b1120f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[38], mod_consts[38], NULL, NULL, 0, 0, 0);
    codeobj_ded073be3adc64ff4b8aac3cc6cc7505 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[39], NULL, 2, 0, 0);
    codeobj_3a7d36d5dd9be04f2033bcd723253589 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[40], NULL, 2, 0, 0);
    codeobj_724b758086ef65787c85372e1e68a289 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[41], NULL, 2, 0, 0);
    codeobj_2fe8134fa2fdfb3f97735cbd0800c564 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[42], NULL, 1, 0, 0);
    codeobj_4dff0f28cc3a4b574eddb8debc0353b7 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[43], NULL, 1, 0, 0);
    codeobj_d585a7125097dbb2e43716162efe9867 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[40], NULL, 2, 0, 0);
    codeobj_1c7074ddb58baaa29d074c1563bfb488 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[44], NULL, 1, 0, 0);
    codeobj_024967fb46a7839b54aeffc454f1dced = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[45], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__1_docformat(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__2_inherit_docstring_from();


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__3_extend_notes_in_docstring();


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__4_replace_notes_in_docstring();


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__5_indentcount_lines();


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__6_filldoc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__7_unindent_dict();


static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__8_unindent_string();


// The module function definitions.
static PyObject *impl_scipy$misc$doccer$$$function__1_docformat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docstring = python_pars[0];
    PyObject *par_docdict = python_pars[1];
    struct Nuitka_FrameObject *frame_ded073be3adc64ff4b8aac3cc6cc7505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ded073be3adc64ff4b8aac3cc6cc7505 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ded073be3adc64ff4b8aac3cc6cc7505)) {
        Py_XDECREF(cache_frame_ded073be3adc64ff4b8aac3cc6cc7505);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ded073be3adc64ff4b8aac3cc6cc7505 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ded073be3adc64ff4b8aac3cc6cc7505 = MAKE_FUNCTION_FRAME(codeobj_ded073be3adc64ff4b8aac3cc6cc7505, module_scipy$misc$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ded073be3adc64ff4b8aac3cc6cc7505->m_type_description == NULL);
    frame_ded073be3adc64ff4b8aac3cc6cc7505 = cache_frame_ded073be3adc64ff4b8aac3cc6cc7505;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ded073be3adc64ff4b8aac3cc6cc7505);
    assert(Py_REFCNT(frame_ded073be3adc64ff4b8aac3cc6cc7505) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_docstring);
        tmp_args_element_value_1 = par_docstring;
        CHECK_OBJECT(par_docdict);
        tmp_args_element_value_2 = par_docdict;
        frame_ded073be3adc64ff4b8aac3cc6cc7505->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
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
        exception_tb = MAKE_TRACEBACK(frame_ded073be3adc64ff4b8aac3cc6cc7505, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ded073be3adc64ff4b8aac3cc6cc7505->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ded073be3adc64ff4b8aac3cc6cc7505, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ded073be3adc64ff4b8aac3cc6cc7505,
        type_description_1,
        par_docstring,
        par_docdict
    );


    // Release cached frame if used for exception.
    if (frame_ded073be3adc64ff4b8aac3cc6cc7505 == cache_frame_ded073be3adc64ff4b8aac3cc6cc7505) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ded073be3adc64ff4b8aac3cc6cc7505);
        cache_frame_ded073be3adc64ff4b8aac3cc6cc7505 = NULL;
    }

    assertFrameObject(frame_ded073be3adc64ff4b8aac3cc6cc7505);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_docstring);
    Py_DECREF(par_docstring);
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_docstring);
    Py_DECREF(par_docstring);
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__2_inherit_docstring_from(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_4dff0f28cc3a4b574eddb8debc0353b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4dff0f28cc3a4b574eddb8debc0353b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4dff0f28cc3a4b574eddb8debc0353b7)) {
        Py_XDECREF(cache_frame_4dff0f28cc3a4b574eddb8debc0353b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4dff0f28cc3a4b574eddb8debc0353b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4dff0f28cc3a4b574eddb8debc0353b7 = MAKE_FUNCTION_FRAME(codeobj_4dff0f28cc3a4b574eddb8debc0353b7, module_scipy$misc$doccer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4dff0f28cc3a4b574eddb8debc0353b7->m_type_description == NULL);
    frame_4dff0f28cc3a4b574eddb8debc0353b7 = cache_frame_4dff0f28cc3a4b574eddb8debc0353b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4dff0f28cc3a4b574eddb8debc0353b7);
    assert(Py_REFCNT(frame_4dff0f28cc3a4b574eddb8debc0353b7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        frame_4dff0f28cc3a4b574eddb8debc0353b7->m_frame.f_lineno = 18;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
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
        exception_tb = MAKE_TRACEBACK(frame_4dff0f28cc3a4b574eddb8debc0353b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4dff0f28cc3a4b574eddb8debc0353b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4dff0f28cc3a4b574eddb8debc0353b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4dff0f28cc3a4b574eddb8debc0353b7,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_4dff0f28cc3a4b574eddb8debc0353b7 == cache_frame_4dff0f28cc3a4b574eddb8debc0353b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4dff0f28cc3a4b574eddb8debc0353b7);
        cache_frame_4dff0f28cc3a4b574eddb8debc0353b7 = NULL;
    }

    assertFrameObject(frame_4dff0f28cc3a4b574eddb8debc0353b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__3_extend_notes_in_docstring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_notes = python_pars[1];
    struct Nuitka_FrameObject *frame_3a7d36d5dd9be04f2033bcd723253589;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a7d36d5dd9be04f2033bcd723253589 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a7d36d5dd9be04f2033bcd723253589)) {
        Py_XDECREF(cache_frame_3a7d36d5dd9be04f2033bcd723253589);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a7d36d5dd9be04f2033bcd723253589 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a7d36d5dd9be04f2033bcd723253589 = MAKE_FUNCTION_FRAME(codeobj_3a7d36d5dd9be04f2033bcd723253589, module_scipy$misc$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a7d36d5dd9be04f2033bcd723253589->m_type_description == NULL);
    frame_3a7d36d5dd9be04f2033bcd723253589 = cache_frame_3a7d36d5dd9be04f2033bcd723253589;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a7d36d5dd9be04f2033bcd723253589);
    assert(Py_REFCNT(frame_3a7d36d5dd9be04f2033bcd723253589) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_notes);
        tmp_args_element_value_2 = par_notes;
        frame_3a7d36d5dd9be04f2033bcd723253589->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
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
        exception_tb = MAKE_TRACEBACK(frame_3a7d36d5dd9be04f2033bcd723253589, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a7d36d5dd9be04f2033bcd723253589->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a7d36d5dd9be04f2033bcd723253589, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a7d36d5dd9be04f2033bcd723253589,
        type_description_1,
        par_cls,
        par_notes
    );


    // Release cached frame if used for exception.
    if (frame_3a7d36d5dd9be04f2033bcd723253589 == cache_frame_3a7d36d5dd9be04f2033bcd723253589) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a7d36d5dd9be04f2033bcd723253589);
        cache_frame_3a7d36d5dd9be04f2033bcd723253589 = NULL;
    }

    assertFrameObject(frame_3a7d36d5dd9be04f2033bcd723253589);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_notes);
    Py_DECREF(par_notes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_notes);
    Py_DECREF(par_notes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__4_replace_notes_in_docstring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_notes = python_pars[1];
    struct Nuitka_FrameObject *frame_d585a7125097dbb2e43716162efe9867;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d585a7125097dbb2e43716162efe9867 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d585a7125097dbb2e43716162efe9867)) {
        Py_XDECREF(cache_frame_d585a7125097dbb2e43716162efe9867);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d585a7125097dbb2e43716162efe9867 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d585a7125097dbb2e43716162efe9867 = MAKE_FUNCTION_FRAME(codeobj_d585a7125097dbb2e43716162efe9867, module_scipy$misc$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d585a7125097dbb2e43716162efe9867->m_type_description == NULL);
    frame_d585a7125097dbb2e43716162efe9867 = cache_frame_d585a7125097dbb2e43716162efe9867;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d585a7125097dbb2e43716162efe9867);
    assert(Py_REFCNT(frame_d585a7125097dbb2e43716162efe9867) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_notes);
        tmp_args_element_value_2 = par_notes;
        frame_d585a7125097dbb2e43716162efe9867->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
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
        exception_tb = MAKE_TRACEBACK(frame_d585a7125097dbb2e43716162efe9867, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d585a7125097dbb2e43716162efe9867->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d585a7125097dbb2e43716162efe9867, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d585a7125097dbb2e43716162efe9867,
        type_description_1,
        par_cls,
        par_notes
    );


    // Release cached frame if used for exception.
    if (frame_d585a7125097dbb2e43716162efe9867 == cache_frame_d585a7125097dbb2e43716162efe9867) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d585a7125097dbb2e43716162efe9867);
        cache_frame_d585a7125097dbb2e43716162efe9867 = NULL;
    }

    assertFrameObject(frame_d585a7125097dbb2e43716162efe9867);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_notes);
    Py_DECREF(par_notes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_notes);
    Py_DECREF(par_notes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__5_indentcount_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    struct Nuitka_FrameObject *frame_2fe8134fa2fdfb3f97735cbd0800c564;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fe8134fa2fdfb3f97735cbd0800c564 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fe8134fa2fdfb3f97735cbd0800c564)) {
        Py_XDECREF(cache_frame_2fe8134fa2fdfb3f97735cbd0800c564);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fe8134fa2fdfb3f97735cbd0800c564 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fe8134fa2fdfb3f97735cbd0800c564 = MAKE_FUNCTION_FRAME(codeobj_2fe8134fa2fdfb3f97735cbd0800c564, module_scipy$misc$doccer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fe8134fa2fdfb3f97735cbd0800c564->m_type_description == NULL);
    frame_2fe8134fa2fdfb3f97735cbd0800c564 = cache_frame_2fe8134fa2fdfb3f97735cbd0800c564;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2fe8134fa2fdfb3f97735cbd0800c564);
    assert(Py_REFCNT(frame_2fe8134fa2fdfb3f97735cbd0800c564) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lines);
        tmp_args_element_value_1 = par_lines;
        frame_2fe8134fa2fdfb3f97735cbd0800c564->m_frame.f_lineno = 36;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_2fe8134fa2fdfb3f97735cbd0800c564, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fe8134fa2fdfb3f97735cbd0800c564->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fe8134fa2fdfb3f97735cbd0800c564, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fe8134fa2fdfb3f97735cbd0800c564,
        type_description_1,
        par_lines
    );


    // Release cached frame if used for exception.
    if (frame_2fe8134fa2fdfb3f97735cbd0800c564 == cache_frame_2fe8134fa2fdfb3f97735cbd0800c564) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fe8134fa2fdfb3f97735cbd0800c564);
        cache_frame_2fe8134fa2fdfb3f97735cbd0800c564 = NULL;
    }

    assertFrameObject(frame_2fe8134fa2fdfb3f97735cbd0800c564);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__6_filldoc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docdict = python_pars[0];
    PyObject *par_unindent_params = python_pars[1];
    struct Nuitka_FrameObject *frame_724b758086ef65787c85372e1e68a289;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_724b758086ef65787c85372e1e68a289 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_724b758086ef65787c85372e1e68a289)) {
        Py_XDECREF(cache_frame_724b758086ef65787c85372e1e68a289);

#if _DEBUG_REFCOUNTS
        if (cache_frame_724b758086ef65787c85372e1e68a289 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_724b758086ef65787c85372e1e68a289 = MAKE_FUNCTION_FRAME(codeobj_724b758086ef65787c85372e1e68a289, module_scipy$misc$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_724b758086ef65787c85372e1e68a289->m_type_description == NULL);
    frame_724b758086ef65787c85372e1e68a289 = cache_frame_724b758086ef65787c85372e1e68a289;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_724b758086ef65787c85372e1e68a289);
    assert(Py_REFCNT(frame_724b758086ef65787c85372e1e68a289) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_docdict);
        tmp_args_element_value_1 = par_docdict;
        CHECK_OBJECT(par_unindent_params);
        tmp_args_element_value_2 = par_unindent_params;
        frame_724b758086ef65787c85372e1e68a289->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_724b758086ef65787c85372e1e68a289, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_724b758086ef65787c85372e1e68a289->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_724b758086ef65787c85372e1e68a289, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_724b758086ef65787c85372e1e68a289,
        type_description_1,
        par_docdict,
        par_unindent_params
    );


    // Release cached frame if used for exception.
    if (frame_724b758086ef65787c85372e1e68a289 == cache_frame_724b758086ef65787c85372e1e68a289) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_724b758086ef65787c85372e1e68a289);
        cache_frame_724b758086ef65787c85372e1e68a289 = NULL;
    }

    assertFrameObject(frame_724b758086ef65787c85372e1e68a289);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);
    CHECK_OBJECT(par_unindent_params);
    Py_DECREF(par_unindent_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);
    CHECK_OBJECT(par_unindent_params);
    Py_DECREF(par_unindent_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__7_unindent_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docdict = python_pars[0];
    struct Nuitka_FrameObject *frame_1c7074ddb58baaa29d074c1563bfb488;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c7074ddb58baaa29d074c1563bfb488 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c7074ddb58baaa29d074c1563bfb488)) {
        Py_XDECREF(cache_frame_1c7074ddb58baaa29d074c1563bfb488);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c7074ddb58baaa29d074c1563bfb488 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c7074ddb58baaa29d074c1563bfb488 = MAKE_FUNCTION_FRAME(codeobj_1c7074ddb58baaa29d074c1563bfb488, module_scipy$misc$doccer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c7074ddb58baaa29d074c1563bfb488->m_type_description == NULL);
    frame_1c7074ddb58baaa29d074c1563bfb488 = cache_frame_1c7074ddb58baaa29d074c1563bfb488;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c7074ddb58baaa29d074c1563bfb488);
    assert(Py_REFCNT(frame_1c7074ddb58baaa29d074c1563bfb488) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_docdict);
        tmp_args_element_value_1 = par_docdict;
        frame_1c7074ddb58baaa29d074c1563bfb488->m_frame.f_lineno = 46;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[7], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_1c7074ddb58baaa29d074c1563bfb488, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c7074ddb58baaa29d074c1563bfb488->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c7074ddb58baaa29d074c1563bfb488, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c7074ddb58baaa29d074c1563bfb488,
        type_description_1,
        par_docdict
    );


    // Release cached frame if used for exception.
    if (frame_1c7074ddb58baaa29d074c1563bfb488 == cache_frame_1c7074ddb58baaa29d074c1563bfb488) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c7074ddb58baaa29d074c1563bfb488);
        cache_frame_1c7074ddb58baaa29d074c1563bfb488 = NULL;
    }

    assertFrameObject(frame_1c7074ddb58baaa29d074c1563bfb488);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$misc$doccer$$$function__8_unindent_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docstring = python_pars[0];
    struct Nuitka_FrameObject *frame_024967fb46a7839b54aeffc454f1dced;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_024967fb46a7839b54aeffc454f1dced = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_024967fb46a7839b54aeffc454f1dced)) {
        Py_XDECREF(cache_frame_024967fb46a7839b54aeffc454f1dced);

#if _DEBUG_REFCOUNTS
        if (cache_frame_024967fb46a7839b54aeffc454f1dced == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_024967fb46a7839b54aeffc454f1dced = MAKE_FUNCTION_FRAME(codeobj_024967fb46a7839b54aeffc454f1dced, module_scipy$misc$doccer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_024967fb46a7839b54aeffc454f1dced->m_type_description == NULL);
    frame_024967fb46a7839b54aeffc454f1dced = cache_frame_024967fb46a7839b54aeffc454f1dced;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_024967fb46a7839b54aeffc454f1dced);
    assert(Py_REFCNT(frame_024967fb46a7839b54aeffc454f1dced) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_docstring);
        tmp_args_element_value_1 = par_docstring;
        frame_024967fb46a7839b54aeffc454f1dced->m_frame.f_lineno = 51;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_024967fb46a7839b54aeffc454f1dced, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_024967fb46a7839b54aeffc454f1dced->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_024967fb46a7839b54aeffc454f1dced, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_024967fb46a7839b54aeffc454f1dced,
        type_description_1,
        par_docstring
    );


    // Release cached frame if used for exception.
    if (frame_024967fb46a7839b54aeffc454f1dced == cache_frame_024967fb46a7839b54aeffc454f1dced) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_024967fb46a7839b54aeffc454f1dced);
        cache_frame_024967fb46a7839b54aeffc454f1dced = NULL;
    }

    assertFrameObject(frame_024967fb46a7839b54aeffc454f1dced);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_docstring);
    Py_DECREF(par_docstring);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_docstring);
    Py_DECREF(par_docstring);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__1_docformat(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__1_docformat,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ded073be3adc64ff4b8aac3cc6cc7505,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__2_inherit_docstring_from() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__2_inherit_docstring_from,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4dff0f28cc3a4b574eddb8debc0353b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__3_extend_notes_in_docstring() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__3_extend_notes_in_docstring,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a7d36d5dd9be04f2033bcd723253589,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__4_replace_notes_in_docstring() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__4_replace_notes_in_docstring,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d585a7125097dbb2e43716162efe9867,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__5_indentcount_lines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__5_indentcount_lines,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2fe8134fa2fdfb3f97735cbd0800c564,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__6_filldoc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__6_filldoc,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_724b758086ef65787c85372e1e68a289,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__7_unindent_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__7_unindent_dict,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c7074ddb58baaa29d074c1563bfb488,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$misc$doccer$$$function__8_unindent_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$misc$doccer$$$function__8_unindent_string,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_024967fb46a7839b54aeffc454f1dced,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$misc$doccer,
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

function_impl_code functable_scipy$misc$doccer[] = {
    impl_scipy$misc$doccer$$$function__1_docformat,
    impl_scipy$misc$doccer$$$function__2_inherit_docstring_from,
    impl_scipy$misc$doccer$$$function__3_extend_notes_in_docstring,
    impl_scipy$misc$doccer$$$function__4_replace_notes_in_docstring,
    impl_scipy$misc$doccer$$$function__5_indentcount_lines,
    impl_scipy$misc$doccer$$$function__6_filldoc,
    impl_scipy$misc$doccer$$$function__7_unindent_dict,
    impl_scipy$misc$doccer$$$function__8_unindent_string,
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

    function_impl_code *current = functable_scipy$misc$doccer;
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

    if (offset > sizeof(functable_scipy$misc$doccer) || offset < 0) {
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
        functable_scipy$misc$doccer[offset],
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
        module_scipy$misc$doccer,
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
PyObject *modulecode_scipy$misc$doccer(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.misc.doccer");

    // Store the module for future use.
    module_scipy$misc$doccer = module;

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
        PRINT_STRING("scipy.misc.doccer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.misc.doccer: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.misc.doccer: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$misc$doccer\n");

    moduledict_scipy$misc$doccer = MODULE_DICT(module_scipy$misc$doccer);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$misc$doccer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$misc$doccer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[46]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$misc$doccer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$misc$doccer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$misc$doccer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$misc$doccer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$misc$doccer);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_51d4298409e9251493eed42073b1120f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_2);
    }
    frame_51d4298409e9251493eed42073b1120f = MAKE_MODULE_FRAME(codeobj_51d4298409e9251493eed42073b1120f, module_scipy$misc$doccer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51d4298409e9251493eed42073b1120f);
    assert(Py_REFCNT(frame_51d4298409e9251493eed42073b1120f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[16];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$misc$doccer;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[17];
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[19];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$misc$doccer;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[20];
        tmp_level_value_2 = mod_consts[21];
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$misc$doccer,
                mod_consts[22],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST6(mod_consts[23]);
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 10;
        tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[26], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[28];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_scipy$misc$doccer$$$function__1_docformat(tmp_defaults_1);

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 10;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 15;
        tmp_called_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[29], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_scipy$misc$doccer$$$function__2_inherit_docstring_from();

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 15;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 21;
        tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[30], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_3 = MAKE_FUNCTION_scipy$misc$doccer$$$function__3_extend_notes_in_docstring();

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 21;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 27;
        tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[31], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_4 = MAKE_FUNCTION_scipy$misc$doccer$$$function__4_replace_notes_in_docstring();

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 27;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 33;
        tmp_called_value_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[32], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_scipy$misc$doccer$$$function__5_indentcount_lines();

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 33;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[25]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 39;
        tmp_called_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[33], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[34];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_6 = MAKE_FUNCTION_scipy$misc$doccer$$$function__6_filldoc(tmp_defaults_2);

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 39;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 44;
        tmp_called_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_7 = MAKE_FUNCTION_scipy$misc$doccer$$$function__7_unindent_dict();

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 44;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 49;
        tmp_called_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_8 = MAKE_FUNCTION_scipy$misc$doccer$$$function__8_unindent_string();

        frame_51d4298409e9251493eed42073b1120f->m_frame.f_lineno = 49;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_14);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51d4298409e9251493eed42073b1120f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51d4298409e9251493eed42073b1120f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51d4298409e9251493eed42073b1120f, exception_lineno);
    }



    assertFrameObject(frame_51d4298409e9251493eed42073b1120f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.misc.doccer", false);

    Py_INCREF(module_scipy$misc$doccer);
    return module_scipy$misc$doccer;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$misc$doccer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$misc$doccer", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
