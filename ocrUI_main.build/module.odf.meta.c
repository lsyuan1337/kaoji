/* Generated code for Python module 'odf.meta'
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

/* The "module_odf$meta" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_odf$meta;
PyDictObject *moduledict_odf$meta;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[48];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[48];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("odf.meta"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 48; i++) {
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
void checkModuleConstants_odf$meta(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 48; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0d743f341a3b98168bf2f2f7b08f38f7;
static PyCodeObject *codeobj_ccb7a9bccb47e7dacbb3bfe7cd8eb43c;
static PyCodeObject *codeobj_29fefb8672adef8ac112f6f9c2c943e3;
static PyCodeObject *codeobj_a115d385dd794f053a83b41b48e243e8;
static PyCodeObject *codeobj_9afd6b769d6e1b462ca921ddcbba3971;
static PyCodeObject *codeobj_61f8fe01920c282244fc9aa58e37e762;
static PyCodeObject *codeobj_9029baee71c6cd89d7c050bacaad8281;
static PyCodeObject *codeobj_f61ca1b0f6f8c504fdc1014429bfefc5;
static PyCodeObject *codeobj_09d9ef1bf020d58930ad8de7ed2f66a2;
static PyCodeObject *codeobj_72429e3ae05d3e33bf4cb4cba58ee4cc;
static PyCodeObject *codeobj_0e880eb0c4608455418fc5d9854dcbd8;
static PyCodeObject *codeobj_51ee07339fee0eef7579934af412741f;
static PyCodeObject *codeobj_d0b11b0e8929fb26b2f582fda5f3f8d3;
static PyCodeObject *codeobj_65feffce1ca18c95f5d9ad0d8f0cc680;
static PyCodeObject *codeobj_314c2db6fca5c5f32ce4f8b50d8822b7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[44]); CHECK_OBJECT(module_filename_obj);
    codeobj_0d743f341a3b98168bf2f2f7b08f38f7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[45], mod_consts[45], NULL, NULL, 0, 0, 0);
    codeobj_ccb7a9bccb47e7dacbb3bfe7cd8eb43c = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[46], NULL, 0, 0, 0);
    codeobj_29fefb8672adef8ac112f6f9c2c943e3 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[46], NULL, 0, 0, 0);
    codeobj_a115d385dd794f053a83b41b48e243e8 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[46], NULL, 0, 0, 0);
    codeobj_9afd6b769d6e1b462ca921ddcbba3971 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[46], NULL, 0, 0, 0);
    codeobj_61f8fe01920c282244fc9aa58e37e762 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[46], NULL, 0, 0, 0);
    codeobj_9029baee71c6cd89d7c050bacaad8281 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[46], NULL, 0, 0, 0);
    codeobj_f61ca1b0f6f8c504fdc1014429bfefc5 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[46], NULL, 0, 0, 0);
    codeobj_09d9ef1bf020d58930ad8de7ed2f66a2 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[46], NULL, 0, 0, 0);
    codeobj_72429e3ae05d3e33bf4cb4cba58ee4cc = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[46], NULL, 0, 0, 0);
    codeobj_0e880eb0c4608455418fc5d9854dcbd8 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[46], NULL, 0, 0, 0);
    codeobj_51ee07339fee0eef7579934af412741f = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[46], NULL, 0, 0, 0);
    codeobj_d0b11b0e8929fb26b2f582fda5f3f8d3 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[46], NULL, 0, 0, 0);
    codeobj_65feffce1ca18c95f5d9ad0d8f0cc680 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[46], NULL, 0, 0, 0);
    codeobj_314c2db6fca5c5f32ce4f8b50d8822b7 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[46], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_odf$meta$$$function__10_Keyword();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__11_PrintDate();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__12_PrintedBy();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__13_Template();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__14_UserDefined();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__1_AutoReload();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__2_CreationDate();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__3_DateString();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__4_DocumentStatistic();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__5_EditingCycles();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__6_EditingDuration();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__7_Generator();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__8_HyperlinkBehaviour();


static PyObject *MAKE_FUNCTION_odf$meta$$$function__9_InitialCreator();


// The module function definitions.
static PyObject *impl_odf$meta$$$function__1_AutoReload(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c)) {
        Py_XDECREF(cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c = MAKE_FUNCTION_FRAME(codeobj_ccb7a9bccb47e7dacbb3bfe7cd8eb43c, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c->m_type_description == NULL);
    frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c = cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c);
    assert(Py_REFCNT(frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[3];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
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
        exception_tb = MAKE_TRACEBACK(frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c == cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c);
        cache_frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c = NULL;
    }

    assertFrameObject(frame_ccb7a9bccb47e7dacbb3bfe7cd8eb43c);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__2_CreationDate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_29fefb8672adef8ac112f6f9c2c943e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_29fefb8672adef8ac112f6f9c2c943e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29fefb8672adef8ac112f6f9c2c943e3)) {
        Py_XDECREF(cache_frame_29fefb8672adef8ac112f6f9c2c943e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29fefb8672adef8ac112f6f9c2c943e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29fefb8672adef8ac112f6f9c2c943e3 = MAKE_FUNCTION_FRAME(codeobj_29fefb8672adef8ac112f6f9c2c943e3, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29fefb8672adef8ac112f6f9c2c943e3->m_type_description == NULL);
    frame_29fefb8672adef8ac112f6f9c2c943e3 = cache_frame_29fefb8672adef8ac112f6f9c2c943e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_29fefb8672adef8ac112f6f9c2c943e3);
    assert(Py_REFCNT(frame_29fefb8672adef8ac112f6f9c2c943e3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[4];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_29fefb8672adef8ac112f6f9c2c943e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29fefb8672adef8ac112f6f9c2c943e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29fefb8672adef8ac112f6f9c2c943e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29fefb8672adef8ac112f6f9c2c943e3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_29fefb8672adef8ac112f6f9c2c943e3 == cache_frame_29fefb8672adef8ac112f6f9c2c943e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29fefb8672adef8ac112f6f9c2c943e3);
        cache_frame_29fefb8672adef8ac112f6f9c2c943e3 = NULL;
    }

    assertFrameObject(frame_29fefb8672adef8ac112f6f9c2c943e3);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__3_DateString(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a115d385dd794f053a83b41b48e243e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a115d385dd794f053a83b41b48e243e8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a115d385dd794f053a83b41b48e243e8)) {
        Py_XDECREF(cache_frame_a115d385dd794f053a83b41b48e243e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a115d385dd794f053a83b41b48e243e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a115d385dd794f053a83b41b48e243e8 = MAKE_FUNCTION_FRAME(codeobj_a115d385dd794f053a83b41b48e243e8, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a115d385dd794f053a83b41b48e243e8->m_type_description == NULL);
    frame_a115d385dd794f053a83b41b48e243e8 = cache_frame_a115d385dd794f053a83b41b48e243e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a115d385dd794f053a83b41b48e243e8);
    assert(Py_REFCNT(frame_a115d385dd794f053a83b41b48e243e8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[5];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
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
        exception_tb = MAKE_TRACEBACK(frame_a115d385dd794f053a83b41b48e243e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a115d385dd794f053a83b41b48e243e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a115d385dd794f053a83b41b48e243e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a115d385dd794f053a83b41b48e243e8,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a115d385dd794f053a83b41b48e243e8 == cache_frame_a115d385dd794f053a83b41b48e243e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a115d385dd794f053a83b41b48e243e8);
        cache_frame_a115d385dd794f053a83b41b48e243e8 = NULL;
    }

    assertFrameObject(frame_a115d385dd794f053a83b41b48e243e8);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__4_DocumentStatistic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9afd6b769d6e1b462ca921ddcbba3971;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9afd6b769d6e1b462ca921ddcbba3971 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9afd6b769d6e1b462ca921ddcbba3971)) {
        Py_XDECREF(cache_frame_9afd6b769d6e1b462ca921ddcbba3971);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9afd6b769d6e1b462ca921ddcbba3971 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9afd6b769d6e1b462ca921ddcbba3971 = MAKE_FUNCTION_FRAME(codeobj_9afd6b769d6e1b462ca921ddcbba3971, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9afd6b769d6e1b462ca921ddcbba3971->m_type_description == NULL);
    frame_9afd6b769d6e1b462ca921ddcbba3971 = cache_frame_9afd6b769d6e1b462ca921ddcbba3971;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9afd6b769d6e1b462ca921ddcbba3971);
    assert(Py_REFCNT(frame_9afd6b769d6e1b462ca921ddcbba3971) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[6];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
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
        exception_tb = MAKE_TRACEBACK(frame_9afd6b769d6e1b462ca921ddcbba3971, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9afd6b769d6e1b462ca921ddcbba3971->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9afd6b769d6e1b462ca921ddcbba3971, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9afd6b769d6e1b462ca921ddcbba3971,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9afd6b769d6e1b462ca921ddcbba3971 == cache_frame_9afd6b769d6e1b462ca921ddcbba3971) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9afd6b769d6e1b462ca921ddcbba3971);
        cache_frame_9afd6b769d6e1b462ca921ddcbba3971 = NULL;
    }

    assertFrameObject(frame_9afd6b769d6e1b462ca921ddcbba3971);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__5_EditingCycles(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_61f8fe01920c282244fc9aa58e37e762;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_61f8fe01920c282244fc9aa58e37e762 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61f8fe01920c282244fc9aa58e37e762)) {
        Py_XDECREF(cache_frame_61f8fe01920c282244fc9aa58e37e762);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61f8fe01920c282244fc9aa58e37e762 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61f8fe01920c282244fc9aa58e37e762 = MAKE_FUNCTION_FRAME(codeobj_61f8fe01920c282244fc9aa58e37e762, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61f8fe01920c282244fc9aa58e37e762->m_type_description == NULL);
    frame_61f8fe01920c282244fc9aa58e37e762 = cache_frame_61f8fe01920c282244fc9aa58e37e762;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61f8fe01920c282244fc9aa58e37e762);
    assert(Py_REFCNT(frame_61f8fe01920c282244fc9aa58e37e762) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[7];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_61f8fe01920c282244fc9aa58e37e762, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61f8fe01920c282244fc9aa58e37e762->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61f8fe01920c282244fc9aa58e37e762, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61f8fe01920c282244fc9aa58e37e762,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_61f8fe01920c282244fc9aa58e37e762 == cache_frame_61f8fe01920c282244fc9aa58e37e762) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61f8fe01920c282244fc9aa58e37e762);
        cache_frame_61f8fe01920c282244fc9aa58e37e762 = NULL;
    }

    assertFrameObject(frame_61f8fe01920c282244fc9aa58e37e762);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__6_EditingDuration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9029baee71c6cd89d7c050bacaad8281;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9029baee71c6cd89d7c050bacaad8281 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9029baee71c6cd89d7c050bacaad8281)) {
        Py_XDECREF(cache_frame_9029baee71c6cd89d7c050bacaad8281);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9029baee71c6cd89d7c050bacaad8281 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9029baee71c6cd89d7c050bacaad8281 = MAKE_FUNCTION_FRAME(codeobj_9029baee71c6cd89d7c050bacaad8281, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9029baee71c6cd89d7c050bacaad8281->m_type_description == NULL);
    frame_9029baee71c6cd89d7c050bacaad8281 = cache_frame_9029baee71c6cd89d7c050bacaad8281;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9029baee71c6cd89d7c050bacaad8281);
    assert(Py_REFCNT(frame_9029baee71c6cd89d7c050bacaad8281) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[8];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_9029baee71c6cd89d7c050bacaad8281, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9029baee71c6cd89d7c050bacaad8281->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9029baee71c6cd89d7c050bacaad8281, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9029baee71c6cd89d7c050bacaad8281,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9029baee71c6cd89d7c050bacaad8281 == cache_frame_9029baee71c6cd89d7c050bacaad8281) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9029baee71c6cd89d7c050bacaad8281);
        cache_frame_9029baee71c6cd89d7c050bacaad8281 = NULL;
    }

    assertFrameObject(frame_9029baee71c6cd89d7c050bacaad8281);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__7_Generator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_f61ca1b0f6f8c504fdc1014429bfefc5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5)) {
        Py_XDECREF(cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5 = MAKE_FUNCTION_FRAME(codeobj_f61ca1b0f6f8c504fdc1014429bfefc5, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5->m_type_description == NULL);
    frame_f61ca1b0f6f8c504fdc1014429bfefc5 = cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f61ca1b0f6f8c504fdc1014429bfefc5);
    assert(Py_REFCNT(frame_f61ca1b0f6f8c504fdc1014429bfefc5) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_f61ca1b0f6f8c504fdc1014429bfefc5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f61ca1b0f6f8c504fdc1014429bfefc5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f61ca1b0f6f8c504fdc1014429bfefc5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f61ca1b0f6f8c504fdc1014429bfefc5,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f61ca1b0f6f8c504fdc1014429bfefc5 == cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5);
        cache_frame_f61ca1b0f6f8c504fdc1014429bfefc5 = NULL;
    }

    assertFrameObject(frame_f61ca1b0f6f8c504fdc1014429bfefc5);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__8_HyperlinkBehaviour(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_09d9ef1bf020d58930ad8de7ed2f66a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2)) {
        Py_XDECREF(cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2 = MAKE_FUNCTION_FRAME(codeobj_09d9ef1bf020d58930ad8de7ed2f66a2, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2->m_type_description == NULL);
    frame_09d9ef1bf020d58930ad8de7ed2f66a2 = cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09d9ef1bf020d58930ad8de7ed2f66a2);
    assert(Py_REFCNT(frame_09d9ef1bf020d58930ad8de7ed2f66a2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_09d9ef1bf020d58930ad8de7ed2f66a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09d9ef1bf020d58930ad8de7ed2f66a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09d9ef1bf020d58930ad8de7ed2f66a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09d9ef1bf020d58930ad8de7ed2f66a2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_09d9ef1bf020d58930ad8de7ed2f66a2 == cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2);
        cache_frame_09d9ef1bf020d58930ad8de7ed2f66a2 = NULL;
    }

    assertFrameObject(frame_09d9ef1bf020d58930ad8de7ed2f66a2);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__9_InitialCreator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_72429e3ae05d3e33bf4cb4cba58ee4cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc)) {
        Py_XDECREF(cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc = MAKE_FUNCTION_FRAME(codeobj_72429e3ae05d3e33bf4cb4cba58ee4cc, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc->m_type_description == NULL);
    frame_72429e3ae05d3e33bf4cb4cba58ee4cc = cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72429e3ae05d3e33bf4cb4cba58ee4cc);
    assert(Py_REFCNT(frame_72429e3ae05d3e33bf4cb4cba58ee4cc) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[11];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_72429e3ae05d3e33bf4cb4cba58ee4cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72429e3ae05d3e33bf4cb4cba58ee4cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72429e3ae05d3e33bf4cb4cba58ee4cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72429e3ae05d3e33bf4cb4cba58ee4cc,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_72429e3ae05d3e33bf4cb4cba58ee4cc == cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc);
        cache_frame_72429e3ae05d3e33bf4cb4cba58ee4cc = NULL;
    }

    assertFrameObject(frame_72429e3ae05d3e33bf4cb4cba58ee4cc);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__10_Keyword(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_0e880eb0c4608455418fc5d9854dcbd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0e880eb0c4608455418fc5d9854dcbd8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e880eb0c4608455418fc5d9854dcbd8)) {
        Py_XDECREF(cache_frame_0e880eb0c4608455418fc5d9854dcbd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e880eb0c4608455418fc5d9854dcbd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e880eb0c4608455418fc5d9854dcbd8 = MAKE_FUNCTION_FRAME(codeobj_0e880eb0c4608455418fc5d9854dcbd8, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e880eb0c4608455418fc5d9854dcbd8->m_type_description == NULL);
    frame_0e880eb0c4608455418fc5d9854dcbd8 = cache_frame_0e880eb0c4608455418fc5d9854dcbd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e880eb0c4608455418fc5d9854dcbd8);
    assert(Py_REFCNT(frame_0e880eb0c4608455418fc5d9854dcbd8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_0e880eb0c4608455418fc5d9854dcbd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e880eb0c4608455418fc5d9854dcbd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e880eb0c4608455418fc5d9854dcbd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e880eb0c4608455418fc5d9854dcbd8,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_0e880eb0c4608455418fc5d9854dcbd8 == cache_frame_0e880eb0c4608455418fc5d9854dcbd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e880eb0c4608455418fc5d9854dcbd8);
        cache_frame_0e880eb0c4608455418fc5d9854dcbd8 = NULL;
    }

    assertFrameObject(frame_0e880eb0c4608455418fc5d9854dcbd8);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__11_PrintDate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_51ee07339fee0eef7579934af412741f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_51ee07339fee0eef7579934af412741f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51ee07339fee0eef7579934af412741f)) {
        Py_XDECREF(cache_frame_51ee07339fee0eef7579934af412741f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51ee07339fee0eef7579934af412741f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51ee07339fee0eef7579934af412741f = MAKE_FUNCTION_FRAME(codeobj_51ee07339fee0eef7579934af412741f, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51ee07339fee0eef7579934af412741f->m_type_description == NULL);
    frame_51ee07339fee0eef7579934af412741f = cache_frame_51ee07339fee0eef7579934af412741f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51ee07339fee0eef7579934af412741f);
    assert(Py_REFCNT(frame_51ee07339fee0eef7579934af412741f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[13];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
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
        exception_tb = MAKE_TRACEBACK(frame_51ee07339fee0eef7579934af412741f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51ee07339fee0eef7579934af412741f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51ee07339fee0eef7579934af412741f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51ee07339fee0eef7579934af412741f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_51ee07339fee0eef7579934af412741f == cache_frame_51ee07339fee0eef7579934af412741f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51ee07339fee0eef7579934af412741f);
        cache_frame_51ee07339fee0eef7579934af412741f = NULL;
    }

    assertFrameObject(frame_51ee07339fee0eef7579934af412741f);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__12_PrintedBy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d0b11b0e8929fb26b2f582fda5f3f8d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3)) {
        Py_XDECREF(cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3 = MAKE_FUNCTION_FRAME(codeobj_d0b11b0e8929fb26b2f582fda5f3f8d3, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3->m_type_description == NULL);
    frame_d0b11b0e8929fb26b2f582fda5f3f8d3 = cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0b11b0e8929fb26b2f582fda5f3f8d3);
    assert(Py_REFCNT(frame_d0b11b0e8929fb26b2f582fda5f3f8d3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_d0b11b0e8929fb26b2f582fda5f3f8d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0b11b0e8929fb26b2f582fda5f3f8d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0b11b0e8929fb26b2f582fda5f3f8d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0b11b0e8929fb26b2f582fda5f3f8d3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d0b11b0e8929fb26b2f582fda5f3f8d3 == cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3);
        cache_frame_d0b11b0e8929fb26b2f582fda5f3f8d3 = NULL;
    }

    assertFrameObject(frame_d0b11b0e8929fb26b2f582fda5f3f8d3);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__13_Template(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_65feffce1ca18c95f5d9ad0d8f0cc680;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680 = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[15];
        tmp_default_value_1 = mod_consts[16];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680)) {
        Py_XDECREF(cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680 = MAKE_FUNCTION_FRAME(codeobj_65feffce1ca18c95f5d9ad0d8f0cc680, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680->m_type_description == NULL);
    frame_65feffce1ca18c95f5d9ad0d8f0cc680 = cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_65feffce1ca18c95f5d9ad0d8f0cc680);
    assert(Py_REFCNT(frame_65feffce1ca18c95f5d9ad0d8f0cc680) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[17];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_65feffce1ca18c95f5d9ad0d8f0cc680, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65feffce1ca18c95f5d9ad0d8f0cc680->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65feffce1ca18c95f5d9ad0d8f0cc680, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65feffce1ca18c95f5d9ad0d8f0cc680,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_65feffce1ca18c95f5d9ad0d8f0cc680 == cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680);
        cache_frame_65feffce1ca18c95f5d9ad0d8f0cc680 = NULL;
    }

    assertFrameObject(frame_65feffce1ca18c95f5d9ad0d8f0cc680);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$meta$$$function__14_UserDefined(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_314c2db6fca5c5f32ce4f8b50d8822b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7)) {
        Py_XDECREF(cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7 = MAKE_FUNCTION_FRAME(codeobj_314c2db6fca5c5f32ce4f8b50d8822b7, module_odf$meta, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7->m_type_description == NULL);
    frame_314c2db6fca5c5f32ce4f8b50d8822b7 = cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_314c2db6fca5c5f32ce4f8b50d8822b7);
    assert(Py_REFCNT(frame_314c2db6fca5c5f32ce4f8b50d8822b7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[18];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_314c2db6fca5c5f32ce4f8b50d8822b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_314c2db6fca5c5f32ce4f8b50d8822b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_314c2db6fca5c5f32ce4f8b50d8822b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_314c2db6fca5c5f32ce4f8b50d8822b7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_314c2db6fca5c5f32ce4f8b50d8822b7 == cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7);
        cache_frame_314c2db6fca5c5f32ce4f8b50d8822b7 = NULL;
    }

    assertFrameObject(frame_314c2db6fca5c5f32ce4f8b50d8822b7);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__10_Keyword() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__10_Keyword,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e880eb0c4608455418fc5d9854dcbd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__11_PrintDate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__11_PrintDate,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51ee07339fee0eef7579934af412741f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__12_PrintedBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__12_PrintedBy,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0b11b0e8929fb26b2f582fda5f3f8d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__13_Template() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__13_Template,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65feffce1ca18c95f5d9ad0d8f0cc680,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__14_UserDefined() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__14_UserDefined,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_314c2db6fca5c5f32ce4f8b50d8822b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__1_AutoReload() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__1_AutoReload,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ccb7a9bccb47e7dacbb3bfe7cd8eb43c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__2_CreationDate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__2_CreationDate,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29fefb8672adef8ac112f6f9c2c943e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__3_DateString() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__3_DateString,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a115d385dd794f053a83b41b48e243e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__4_DocumentStatistic() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__4_DocumentStatistic,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9afd6b769d6e1b462ca921ddcbba3971,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__5_EditingCycles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__5_EditingCycles,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61f8fe01920c282244fc9aa58e37e762,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__6_EditingDuration() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__6_EditingDuration,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9029baee71c6cd89d7c050bacaad8281,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__7_Generator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__7_Generator,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f61ca1b0f6f8c504fdc1014429bfefc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__8_HyperlinkBehaviour() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__8_HyperlinkBehaviour,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_09d9ef1bf020d58930ad8de7ed2f66a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$meta$$$function__9_InitialCreator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$meta$$$function__9_InitialCreator,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_72429e3ae05d3e33bf4cb4cba58ee4cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$meta,
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

function_impl_code functable_odf$meta[] = {
    impl_odf$meta$$$function__1_AutoReload,
    impl_odf$meta$$$function__2_CreationDate,
    impl_odf$meta$$$function__3_DateString,
    impl_odf$meta$$$function__4_DocumentStatistic,
    impl_odf$meta$$$function__5_EditingCycles,
    impl_odf$meta$$$function__6_EditingDuration,
    impl_odf$meta$$$function__7_Generator,
    impl_odf$meta$$$function__8_HyperlinkBehaviour,
    impl_odf$meta$$$function__9_InitialCreator,
    impl_odf$meta$$$function__10_Keyword,
    impl_odf$meta$$$function__11_PrintDate,
    impl_odf$meta$$$function__12_PrintedBy,
    impl_odf$meta$$$function__13_Template,
    impl_odf$meta$$$function__14_UserDefined,
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

    function_impl_code *current = functable_odf$meta;
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

    if (offset > sizeof(functable_odf$meta) || offset < 0) {
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
        functable_odf$meta[offset],
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
        module_odf$meta,
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
PyObject *modulecode_odf$meta(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("odf.meta");

    // Store the module for future use.
    module_odf$meta = module;

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
        PRINT_STRING("odf.meta: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.meta: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.meta: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initodf$meta\n");

    moduledict_odf$meta = MODULE_DICT(module_odf$meta);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_odf$meta,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_odf$meta,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[47]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_odf$meta,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_odf$meta,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_odf$meta,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_odf$meta);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_odf$meta);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0d743f341a3b98168bf2f2f7b08f38f7;
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
        UPDATE_STRING_DICT0(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_2);
    }
    frame_0d743f341a3b98168bf2f2f7b08f38f7 = MAKE_MODULE_FRAME(codeobj_0d743f341a3b98168bf2f2f7b08f38f7, module_odf$meta);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d743f341a3b98168bf2f2f7b08f38f7);
    assert(Py_REFCNT(frame_0d743f341a3b98168bf2f2f7b08f38f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_odf$meta;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[26];
        tmp_level_value_1 = mod_consts[27];
        frame_0d743f341a3b98168bf2f2f7b08f38f7->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_odf$meta,
                mod_consts[2],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[28];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_odf$meta;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[29];
        tmp_level_value_2 = mod_consts[27];
        frame_0d743f341a3b98168bf2f2f7b08f38f7->m_frame.f_lineno = 22;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_odf$meta,
                mod_consts[0],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d743f341a3b98168bf2f2f7b08f38f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d743f341a3b98168bf2f2f7b08f38f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d743f341a3b98168bf2f2f7b08f38f7, exception_lineno);
    }



    assertFrameObject(frame_0d743f341a3b98168bf2f2f7b08f38f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_odf$meta$$$function__1_AutoReload();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_odf$meta$$$function__2_CreationDate();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_odf$meta$$$function__3_DateString();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_odf$meta$$$function__4_DocumentStatistic();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_odf$meta$$$function__5_EditingCycles();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_odf$meta$$$function__6_EditingDuration();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_odf$meta$$$function__7_Generator();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_odf$meta$$$function__8_HyperlinkBehaviour();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_odf$meta$$$function__9_InitialCreator();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_odf$meta$$$function__10_Keyword();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_odf$meta$$$function__11_PrintDate();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_odf$meta$$$function__12_PrintedBy();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_odf$meta$$$function__13_Template();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_odf$meta$$$function__14_UserDefined();

        UPDATE_STRING_DICT1(moduledict_odf$meta, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_19);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("odf.meta", false);

    Py_INCREF(module_odf$meta);
    return module_odf$meta;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$meta, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("odf$meta", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
