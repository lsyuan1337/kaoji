/* Generated code for Python module 'torch.distributed.rpc.internal'
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

/* The "module_torch$distributed$rpc$internal" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributed$rpc$internal;
PyDictObject *moduledict_torch$distributed$rpc$internal;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[159];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[159];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributed.rpc.internal"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 159; i++) {
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
void checkModuleConstants_torch$distributed$rpc$internal(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 159; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7e31023c70b82918825e874d2d02dd5;
static PyCodeObject *codeobj_8ce5420e6bd2a87964e03e4efe67640a;
static PyCodeObject *codeobj_ad3a27722c640bc5330485b59c253301;
static PyCodeObject *codeobj_b9b4b39f93bb44cf62618fd62e390c83;
static PyCodeObject *codeobj_b55e045adb9ea719c82508155a3a2e40;
static PyCodeObject *codeobj_7a21665e2f4563bc8e216130ad7d9823;
static PyCodeObject *codeobj_49b1442529f8cf17752a8db41753fda6;
static PyCodeObject *codeobj_9c366fe8d5d4c1dc99e0befbc9a63dc9;
static PyCodeObject *codeobj_2781b0b2d4a9e3eb9a8210c4548c2651;
static PyCodeObject *codeobj_486a238f89437017fbd1d2a7437aaba8;
static PyCodeObject *codeobj_af315f6afda29ea1420b0fe7d3e86139;
static PyCodeObject *codeobj_8b4f092346cb0284e42c23022b904691;
static PyCodeObject *codeobj_2ad72d3dbe4c4ff22bf9c17b7a91f999;
static PyCodeObject *codeobj_c84d19c2192d5fa338e672f2af3dbbfb;
static PyCodeObject *codeobj_3025389b4d14779df8e4843ad23b9d2e;
static PyCodeObject *codeobj_14d9e7e9978a819fe3aa15cba729fa11;
static PyCodeObject *codeobj_209573db2347245e395c5c25cc5ba407;
static PyCodeObject *codeobj_9ec95270d180206aa2d7f92970096e85;
static PyCodeObject *codeobj_4efea416ff282c4a5fb1e7152037d48a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[139]); CHECK_OBJECT(module_filename_obj);
    codeobj_b7e31023c70b82918825e874d2d02dd5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[140], mod_consts[140], NULL, NULL, 0, 0, 0);
    codeobj_8ce5420e6bd2a87964e03e4efe67640a = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[141], NULL, 0, 0, 0);
    codeobj_ad3a27722c640bc5330485b59c253301 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[142], NULL, 1, 0, 0);
    codeobj_b9b4b39f93bb44cf62618fd62e390c83 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[143], NULL, 4, 0, 0);
    codeobj_b55e045adb9ea719c82508155a3a2e40 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[144], NULL, 1, 0, 0);
    codeobj_7a21665e2f4563bc8e216130ad7d9823 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[145], NULL, 2, 0, 0);
    codeobj_49b1442529f8cf17752a8db41753fda6 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[146], NULL, 2, 0, 0);
    codeobj_9c366fe8d5d4c1dc99e0befbc9a63dc9 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[147], NULL, 3, 0, 0);
    codeobj_2781b0b2d4a9e3eb9a8210c4548c2651 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[148], NULL, 2, 0, 0);
    codeobj_486a238f89437017fbd1d2a7437aaba8 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[149], NULL, 1, 0, 0);
    codeobj_af315f6afda29ea1420b0fe7d3e86139 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[150], NULL, 2, 0, 0);
    codeobj_8b4f092346cb0284e42c23022b904691 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[151], NULL, 2, 0, 0);
    codeobj_2ad72d3dbe4c4ff22bf9c17b7a91f999 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[152], NULL, 4, 0, 0);
    codeobj_c84d19c2192d5fa338e672f2af3dbbfb = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[153], NULL, 2, 0, 0);
    codeobj_3025389b4d14779df8e4843ad23b9d2e = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[154], NULL, 2, 0, 0);
    codeobj_14d9e7e9978a819fe3aa15cba729fa11 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[155], NULL, 2, 0, 0);
    codeobj_209573db2347245e395c5c25cc5ba407 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[156], NULL, 3, 0, 0);
    codeobj_9ec95270d180206aa2d7f92970096e85 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[157], NULL, 1, 0, 0);
    codeobj_4efea416ff282c4a5fb1e7152037d48a = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[158], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__10_serialize();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__11_deserialize();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__12_serialize();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__13_deserialize();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__14__run_function();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__15__handle_exception();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__16__build_rpc_profiling_key();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__17__start_record_function();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__1___init__();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__2__register_reducer();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__3__tensor_receiver();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__4__tensor_reducer();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__5__py_rref_receiver();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__6__py_rref_reducer();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__7__rref_reducer();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__8__script_module_receiver();


static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__9__script_module_reducer();


// The module function definitions.
static PyObject *impl_torch$distributed$rpc$internal$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ad3a27722c640bc5330485b59c253301;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ad3a27722c640bc5330485b59c253301 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad3a27722c640bc5330485b59c253301)) {
        Py_XDECREF(cache_frame_ad3a27722c640bc5330485b59c253301);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad3a27722c640bc5330485b59c253301 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad3a27722c640bc5330485b59c253301 = MAKE_FUNCTION_FRAME(codeobj_ad3a27722c640bc5330485b59c253301, module_torch$distributed$rpc$internal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad3a27722c640bc5330485b59c253301->m_type_description == NULL);
    frame_ad3a27722c640bc5330485b59c253301 = cache_frame_ad3a27722c640bc5330485b59c253301;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad3a27722c640bc5330485b59c253301);
    assert(Py_REFCNT(frame_ad3a27722c640bc5330485b59c253301) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ad3a27722c640bc5330485b59c253301->m_frame.f_lineno = 42;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad3a27722c640bc5330485b59c253301, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad3a27722c640bc5330485b59c253301->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad3a27722c640bc5330485b59c253301, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad3a27722c640bc5330485b59c253301,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ad3a27722c640bc5330485b59c253301 == cache_frame_ad3a27722c640bc5330485b59c253301) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad3a27722c640bc5330485b59c253301);
        cache_frame_ad3a27722c640bc5330485b59c253301 = NULL;
    }

    assertFrameObject(frame_ad3a27722c640bc5330485b59c253301);

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


static PyObject *impl_torch$distributed$rpc$internal$$$function__2__register_reducer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj_class = python_pars[1];
    PyObject *par_reducer = python_pars[2];
    struct Nuitka_FrameObject *frame_9c366fe8d5d4c1dc99e0befbc9a63dc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9)) {
        Py_XDECREF(cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9 = MAKE_FUNCTION_FRAME(codeobj_9c366fe8d5d4c1dc99e0befbc9a63dc9, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9->m_type_description == NULL);
    frame_9c366fe8d5d4c1dc99e0befbc9a63dc9 = cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c366fe8d5d4c1dc99e0befbc9a63dc9);
    assert(Py_REFCNT(frame_9c366fe8d5d4c1dc99e0befbc9a63dc9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj_class);
        tmp_cmp_expr_left_1 = par_obj_class;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_reducer);
        tmp_ass_subvalue_1 = par_reducer;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj_class);
        tmp_ass_subscript_1 = par_obj_class;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c366fe8d5d4c1dc99e0befbc9a63dc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c366fe8d5d4c1dc99e0befbc9a63dc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c366fe8d5d4c1dc99e0befbc9a63dc9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c366fe8d5d4c1dc99e0befbc9a63dc9,
        type_description_1,
        par_self,
        par_obj_class,
        par_reducer
    );


    // Release cached frame if used for exception.
    if (frame_9c366fe8d5d4c1dc99e0befbc9a63dc9 == cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9);
        cache_frame_9c366fe8d5d4c1dc99e0befbc9a63dc9 = NULL;
    }

    assertFrameObject(frame_9c366fe8d5d4c1dc99e0befbc9a63dc9);

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
    CHECK_OBJECT(par_obj_class);
    Py_DECREF(par_obj_class);
    CHECK_OBJECT(par_reducer);
    Py_DECREF(par_reducer);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj_class);
    Py_DECREF(par_obj_class);
    CHECK_OBJECT(par_reducer);
    Py_DECREF(par_reducer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__3__tensor_receiver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_tensor_index = python_pars[1];
    struct Nuitka_FrameObject *frame_c84d19c2192d5fa338e672f2af3dbbfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c84d19c2192d5fa338e672f2af3dbbfb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c84d19c2192d5fa338e672f2af3dbbfb)) {
        Py_XDECREF(cache_frame_c84d19c2192d5fa338e672f2af3dbbfb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c84d19c2192d5fa338e672f2af3dbbfb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c84d19c2192d5fa338e672f2af3dbbfb = MAKE_FUNCTION_FRAME(codeobj_c84d19c2192d5fa338e672f2af3dbbfb, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c84d19c2192d5fa338e672f2af3dbbfb->m_type_description == NULL);
    frame_c84d19c2192d5fa338e672f2af3dbbfb = cache_frame_c84d19c2192d5fa338e672f2af3dbbfb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c84d19c2192d5fa338e672f2af3dbbfb);
    assert(Py_REFCNT(frame_c84d19c2192d5fa338e672f2af3dbbfb) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor_index);
        tmp_subscript_value_1 = par_tensor_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_c84d19c2192d5fa338e672f2af3dbbfb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c84d19c2192d5fa338e672f2af3dbbfb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c84d19c2192d5fa338e672f2af3dbbfb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c84d19c2192d5fa338e672f2af3dbbfb,
        type_description_1,
        par_cls,
        par_tensor_index
    );


    // Release cached frame if used for exception.
    if (frame_c84d19c2192d5fa338e672f2af3dbbfb == cache_frame_c84d19c2192d5fa338e672f2af3dbbfb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c84d19c2192d5fa338e672f2af3dbbfb);
        cache_frame_c84d19c2192d5fa338e672f2af3dbbfb = NULL;
    }

    assertFrameObject(frame_c84d19c2192d5fa338e672f2af3dbbfb);

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
    CHECK_OBJECT(par_tensor_index);
    Py_DECREF(par_tensor_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_tensor_index);
    Py_DECREF(par_tensor_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__4__tensor_reducer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_tensor = python_pars[1];
    PyObject *var_tensor_index = NULL;
    struct Nuitka_FrameObject *frame_3025389b4d14779df8e4843ad23b9d2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3025389b4d14779df8e4843ad23b9d2e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3025389b4d14779df8e4843ad23b9d2e)) {
        Py_XDECREF(cache_frame_3025389b4d14779df8e4843ad23b9d2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3025389b4d14779df8e4843ad23b9d2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3025389b4d14779df8e4843ad23b9d2e = MAKE_FUNCTION_FRAME(codeobj_3025389b4d14779df8e4843ad23b9d2e, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3025389b4d14779df8e4843ad23b9d2e->m_type_description == NULL);
    frame_3025389b4d14779df8e4843ad23b9d2e = cache_frame_3025389b4d14779df8e4843ad23b9d2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3025389b4d14779df8e4843ad23b9d2e);
    assert(Py_REFCNT(frame_3025389b4d14779df8e4843ad23b9d2e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor);
        tmp_args_element_value_1 = par_tensor;
        frame_3025389b4d14779df8e4843ad23b9d2e->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = 1;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_tensor_index == NULL);
        var_tensor_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_tensor_index);
            tmp_tuple_element_2 = var_tensor_index;
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_3025389b4d14779df8e4843ad23b9d2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3025389b4d14779df8e4843ad23b9d2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3025389b4d14779df8e4843ad23b9d2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3025389b4d14779df8e4843ad23b9d2e,
        type_description_1,
        par_self,
        par_tensor,
        var_tensor_index
    );


    // Release cached frame if used for exception.
    if (frame_3025389b4d14779df8e4843ad23b9d2e == cache_frame_3025389b4d14779df8e4843ad23b9d2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3025389b4d14779df8e4843ad23b9d2e);
        cache_frame_3025389b4d14779df8e4843ad23b9d2e = NULL;
    }

    assertFrameObject(frame_3025389b4d14779df8e4843ad23b9d2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_tensor_index);
    Py_DECREF(var_tensor_index);
    var_tensor_index = NULL;
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

    Py_XDECREF(var_tensor_index);
    var_tensor_index = NULL;
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
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__5__py_rref_receiver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_rref_fork_data = python_pars[1];
    struct Nuitka_FrameObject *frame_7a21665e2f4563bc8e216130ad7d9823;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a21665e2f4563bc8e216130ad7d9823 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a21665e2f4563bc8e216130ad7d9823)) {
        Py_XDECREF(cache_frame_7a21665e2f4563bc8e216130ad7d9823);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a21665e2f4563bc8e216130ad7d9823 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a21665e2f4563bc8e216130ad7d9823 = MAKE_FUNCTION_FRAME(codeobj_7a21665e2f4563bc8e216130ad7d9823, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a21665e2f4563bc8e216130ad7d9823->m_type_description == NULL);
    frame_7a21665e2f4563bc8e216130ad7d9823 = cache_frame_7a21665e2f4563bc8e216130ad7d9823;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a21665e2f4563bc8e216130ad7d9823);
    assert(Py_REFCNT(frame_7a21665e2f4563bc8e216130ad7d9823) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rref_fork_data);
        tmp_args_element_value_1 = par_rref_fork_data;
        frame_7a21665e2f4563bc8e216130ad7d9823->m_frame.f_lineno = 65;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_7a21665e2f4563bc8e216130ad7d9823, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a21665e2f4563bc8e216130ad7d9823->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a21665e2f4563bc8e216130ad7d9823, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a21665e2f4563bc8e216130ad7d9823,
        type_description_1,
        par_cls,
        par_rref_fork_data
    );


    // Release cached frame if used for exception.
    if (frame_7a21665e2f4563bc8e216130ad7d9823 == cache_frame_7a21665e2f4563bc8e216130ad7d9823) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a21665e2f4563bc8e216130ad7d9823);
        cache_frame_7a21665e2f4563bc8e216130ad7d9823 = NULL;
    }

    assertFrameObject(frame_7a21665e2f4563bc8e216130ad7d9823);

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
    CHECK_OBJECT(par_rref_fork_data);
    Py_DECREF(par_rref_fork_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_rref_fork_data);
    Py_DECREF(par_rref_fork_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__6__py_rref_reducer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_py_rref = python_pars[1];
    PyObject *var_rref_fork_data = NULL;
    struct Nuitka_FrameObject *frame_49b1442529f8cf17752a8db41753fda6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_49b1442529f8cf17752a8db41753fda6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49b1442529f8cf17752a8db41753fda6)) {
        Py_XDECREF(cache_frame_49b1442529f8cf17752a8db41753fda6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49b1442529f8cf17752a8db41753fda6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49b1442529f8cf17752a8db41753fda6 = MAKE_FUNCTION_FRAME(codeobj_49b1442529f8cf17752a8db41753fda6, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49b1442529f8cf17752a8db41753fda6->m_type_description == NULL);
    frame_49b1442529f8cf17752a8db41753fda6 = cache_frame_49b1442529f8cf17752a8db41753fda6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49b1442529f8cf17752a8db41753fda6);
    assert(Py_REFCNT(frame_49b1442529f8cf17752a8db41753fda6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_py_rref);
        tmp_called_instance_1 = par_py_rref;
        frame_49b1442529f8cf17752a8db41753fda6->m_frame.f_lineno = 68;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rref_fork_data == NULL);
        var_rref_fork_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_rref_fork_data);
            tmp_tuple_element_2 = var_rref_fork_data;
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_49b1442529f8cf17752a8db41753fda6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49b1442529f8cf17752a8db41753fda6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49b1442529f8cf17752a8db41753fda6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49b1442529f8cf17752a8db41753fda6,
        type_description_1,
        par_self,
        par_py_rref,
        var_rref_fork_data
    );


    // Release cached frame if used for exception.
    if (frame_49b1442529f8cf17752a8db41753fda6 == cache_frame_49b1442529f8cf17752a8db41753fda6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49b1442529f8cf17752a8db41753fda6);
        cache_frame_49b1442529f8cf17752a8db41753fda6 = NULL;
    }

    assertFrameObject(frame_49b1442529f8cf17752a8db41753fda6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rref_fork_data);
    Py_DECREF(var_rref_fork_data);
    var_rref_fork_data = NULL;
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

    Py_XDECREF(var_rref_fork_data);
    var_rref_fork_data = NULL;
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
    CHECK_OBJECT(par_py_rref);
    Py_DECREF(par_py_rref);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_py_rref);
    Py_DECREF(par_py_rref);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__7__rref_reducer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rref = python_pars[1];
    struct Nuitka_FrameObject *frame_2781b0b2d4a9e3eb9a8210c4548c2651;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651)) {
        Py_XDECREF(cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651 = MAKE_FUNCTION_FRAME(codeobj_2781b0b2d4a9e3eb9a8210c4548c2651, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651->m_type_description == NULL);
    frame_2781b0b2d4a9e3eb9a8210c4548c2651 = cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2781b0b2d4a9e3eb9a8210c4548c2651);
    assert(Py_REFCNT(frame_2781b0b2d4a9e3eb9a8210c4548c2651) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_rref);
        tmp_args_element_value_1 = par_rref;
        frame_2781b0b2d4a9e3eb9a8210c4548c2651->m_frame.f_lineno = 72;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_2781b0b2d4a9e3eb9a8210c4548c2651, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2781b0b2d4a9e3eb9a8210c4548c2651->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2781b0b2d4a9e3eb9a8210c4548c2651, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2781b0b2d4a9e3eb9a8210c4548c2651,
        type_description_1,
        par_self,
        par_rref
    );


    // Release cached frame if used for exception.
    if (frame_2781b0b2d4a9e3eb9a8210c4548c2651 == cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651);
        cache_frame_2781b0b2d4a9e3eb9a8210c4548c2651 = NULL;
    }

    assertFrameObject(frame_2781b0b2d4a9e3eb9a8210c4548c2651);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rref);
    Py_DECREF(par_rref);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rref);
    Py_DECREF(par_rref);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__8__script_module_receiver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_script_module_serialized = python_pars[1];
    PyObject *var_f = NULL;
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_af315f6afda29ea1420b0fe7d3e86139;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af315f6afda29ea1420b0fe7d3e86139 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_af315f6afda29ea1420b0fe7d3e86139)) {
        Py_XDECREF(cache_frame_af315f6afda29ea1420b0fe7d3e86139);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af315f6afda29ea1420b0fe7d3e86139 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af315f6afda29ea1420b0fe7d3e86139 = MAKE_FUNCTION_FRAME(codeobj_af315f6afda29ea1420b0fe7d3e86139, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af315f6afda29ea1420b0fe7d3e86139->m_type_description == NULL);
    frame_af315f6afda29ea1420b0fe7d3e86139 = cache_frame_af315f6afda29ea1420b0fe7d3e86139;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af315f6afda29ea1420b0fe7d3e86139);
    assert(Py_REFCNT(frame_af315f6afda29ea1420b0fe7d3e86139) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[21]);
        }
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_script_module_serialized);
        tmp_args_element_value_1 = par_script_module_serialized;
        frame_af315f6afda29ea1420b0fe7d3e86139->m_frame.f_lineno = 80;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_2 = var_f;
        frame_af315f6afda29ea1420b0fe7d3e86139->m_frame.f_lineno = 81;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af315f6afda29ea1420b0fe7d3e86139, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af315f6afda29ea1420b0fe7d3e86139->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af315f6afda29ea1420b0fe7d3e86139, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af315f6afda29ea1420b0fe7d3e86139,
        type_description_1,
        par_cls,
        par_script_module_serialized,
        var_f,
        var_m
    );


    // Release cached frame if used for exception.
    if (frame_af315f6afda29ea1420b0fe7d3e86139 == cache_frame_af315f6afda29ea1420b0fe7d3e86139) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af315f6afda29ea1420b0fe7d3e86139);
        cache_frame_af315f6afda29ea1420b0fe7d3e86139 = NULL;
    }

    assertFrameObject(frame_af315f6afda29ea1420b0fe7d3e86139);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_m);
    tmp_return_value = var_m;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_script_module_serialized);
    Py_DECREF(par_script_module_serialized);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_script_module_serialized);
    Py_DECREF(par_script_module_serialized);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__9__script_module_reducer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_script_module = python_pars[1];
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_8b4f092346cb0284e42c23022b904691;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8b4f092346cb0284e42c23022b904691 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b4f092346cb0284e42c23022b904691)) {
        Py_XDECREF(cache_frame_8b4f092346cb0284e42c23022b904691);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b4f092346cb0284e42c23022b904691 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b4f092346cb0284e42c23022b904691 = MAKE_FUNCTION_FRAME(codeobj_8b4f092346cb0284e42c23022b904691, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b4f092346cb0284e42c23022b904691->m_type_description == NULL);
    frame_8b4f092346cb0284e42c23022b904691 = cache_frame_8b4f092346cb0284e42c23022b904691;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b4f092346cb0284e42c23022b904691);
    assert(Py_REFCNT(frame_8b4f092346cb0284e42c23022b904691) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[21]);
        }
        assert(!(tmp_called_value_1 == NULL));
        frame_8b4f092346cb0284e42c23022b904691->m_frame.f_lineno = 88;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_script_module);
        tmp_args_element_value_1 = par_script_module;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_2 = var_f;
        frame_8b4f092346cb0284e42c23022b904691->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_f);
            tmp_called_instance_2 = var_f;
            frame_8b4f092346cb0284e42c23022b904691->m_frame.f_lineno = 90;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[27]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_8b4f092346cb0284e42c23022b904691, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b4f092346cb0284e42c23022b904691->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b4f092346cb0284e42c23022b904691, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b4f092346cb0284e42c23022b904691,
        type_description_1,
        par_self,
        par_script_module,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_8b4f092346cb0284e42c23022b904691 == cache_frame_8b4f092346cb0284e42c23022b904691) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b4f092346cb0284e42c23022b904691);
        cache_frame_8b4f092346cb0284e42c23022b904691 = NULL;
    }

    assertFrameObject(frame_8b4f092346cb0284e42c23022b904691);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_script_module);
    Py_DECREF(par_script_module);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_script_module);
    Py_DECREF(par_script_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__10_serialize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *var_f = NULL;
    PyObject *var_p = NULL;
    PyObject *var_class_name = NULL;
    PyObject *var_old_send_tables = NULL;
    PyObject *var_tensors = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4efea416ff282c4a5fb1e7152037d48a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4efea416ff282c4a5fb1e7152037d48a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4efea416ff282c4a5fb1e7152037d48a)) {
        Py_XDECREF(cache_frame_4efea416ff282c4a5fb1e7152037d48a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4efea416ff282c4a5fb1e7152037d48a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4efea416ff282c4a5fb1e7152037d48a = MAKE_FUNCTION_FRAME(codeobj_4efea416ff282c4a5fb1e7152037d48a, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4efea416ff282c4a5fb1e7152037d48a->m_type_description == NULL);
    frame_4efea416ff282c4a5fb1e7152037d48a = cache_frame_4efea416ff282c4a5fb1e7152037d48a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4efea416ff282c4a5fb1e7152037d48a);
    assert(Py_REFCNT(frame_4efea416ff282c4a5fb1e7152037d48a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[21]);
        }
        assert(!(tmp_called_value_1 == NULL));
        frame_4efea416ff282c4a5fb1e7152037d48a->m_frame.f_lineno = 97;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_1 = var_f;
        frame_4efea416ff282c4a5fb1e7152037d48a->m_frame.f_lineno = 98;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_p);
        tmp_assattr_target_1 = var_p;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_p);
        tmp_expression_value_3 = var_p;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[16]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_p);
        tmp_expression_value_7 = var_p;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[31]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[22]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[32]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_p);
        tmp_expression_value_13 = var_p;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[1]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_expression_value_14 = par_obj;
        tmp_ass_subscript_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_14);
        if (tmp_ass_subscript_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);

            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[7]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[34]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4efea416ff282c4a5fb1e7152037d48a->m_frame.f_lineno = 122;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 122;
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
            PyObject *old = var_class_name;
            var_class_name = tmp_assign_source_5;
            Py_INCREF(var_class_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_ass_subscript_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[7]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_class_name);
        tmp_subscript_value_1 = var_class_name;
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_19 = var_p;
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[1]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_class_name);
        tmp_ass_subscript_4 = var_class_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 122;
        type_description_1 = "ooooooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[10];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_20, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[10]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_send_tables == NULL);
        var_old_send_tables = tmp_assign_source_6;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_old_send_tables == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_old_send_tables = tmp_assign_source_7;
    }
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 131;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = var_p;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_obj == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_obj;
        frame_4efea416ff282c4a5fb1e7152037d48a->m_frame.f_lineno = 133;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[10]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensors == NULL);
        var_tensors = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_old_send_tables);
        tmp_cmp_expr_left_1 = var_old_send_tables;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_old_send_tables);
        tmp_assattr_value_3 = var_old_send_tables;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_attrdel_target_1;
        tmp_attrdel_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_attrdel_target_1 == NULL)) {
            tmp_attrdel_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_attrdel_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[10]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_f);
        tmp_called_instance_1 = var_f;
        frame_4efea416ff282c4a5fb1e7152037d48a->m_frame.f_lineno = 143;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[27]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_tensors);
        tmp_tuple_element_1 = var_tensors;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_4efea416ff282c4a5fb1e7152037d48a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4efea416ff282c4a5fb1e7152037d48a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4efea416ff282c4a5fb1e7152037d48a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4efea416ff282c4a5fb1e7152037d48a,
        type_description_1,
        par_self,
        par_obj,
        var_f,
        var_p,
        var_class_name,
        var_old_send_tables,
        var_tensors
    );


    // Release cached frame if used for exception.
    if (frame_4efea416ff282c4a5fb1e7152037d48a == cache_frame_4efea416ff282c4a5fb1e7152037d48a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4efea416ff282c4a5fb1e7152037d48a);
        cache_frame_4efea416ff282c4a5fb1e7152037d48a = NULL;
    }

    assertFrameObject(frame_4efea416ff282c4a5fb1e7152037d48a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_class_name);
    var_class_name = NULL;
    CHECK_OBJECT(var_old_send_tables);
    Py_DECREF(var_old_send_tables);
    var_old_send_tables = NULL;
    CHECK_OBJECT(var_tensors);
    Py_DECREF(var_tensors);
    var_tensors = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_class_name);
    var_class_name = NULL;
    Py_XDECREF(var_old_send_tables);
    var_old_send_tables = NULL;
    Py_XDECREF(var_tensors);
    var_tensors = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__11_deserialize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_binary_data = python_pars[1];
    PyObject *par_tensor_table = python_pars[2];
    PyObject *var_old_recv_tables = NULL;
    PyObject *var_unpickler = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_e = NULL;
    PyObject *var_except_str = NULL;
    struct Nuitka_FrameObject *frame_209573db2347245e395c5c25cc5ba407;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_209573db2347245e395c5c25cc5ba407 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_209573db2347245e395c5c25cc5ba407)) {
        Py_XDECREF(cache_frame_209573db2347245e395c5c25cc5ba407);

#if _DEBUG_REFCOUNTS
        if (cache_frame_209573db2347245e395c5c25cc5ba407 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_209573db2347245e395c5c25cc5ba407 = MAKE_FUNCTION_FRAME(codeobj_209573db2347245e395c5c25cc5ba407, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_209573db2347245e395c5c25cc5ba407->m_type_description == NULL);
    frame_209573db2347245e395c5c25cc5ba407 = cache_frame_209573db2347245e395c5c25cc5ba407;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_209573db2347245e395c5c25cc5ba407);
    assert(Py_REFCNT(frame_209573db2347245e395c5c25cc5ba407) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[9];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_recv_tables == NULL);
        var_old_recv_tables = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_old_recv_tables == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_old_recv_tables = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_tensor_table);
        tmp_assattr_value_1 = par_tensor_table;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[21]);
        }
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_binary_data);
        tmp_args_element_value_2 = par_binary_data;
        frame_209573db2347245e395c5c25cc5ba407->m_frame.f_lineno = 158;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_209573db2347245e395c5c25cc5ba407->m_frame.f_lineno = 158;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_unpickler == NULL);
        var_unpickler = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_unpickler);
        tmp_called_instance_1 = var_unpickler;
        frame_209573db2347245e395c5c25cc5ba407->m_frame.f_lineno = 159;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[23]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_4;
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_209573db2347245e395c5c25cc5ba407, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_209573db2347245e395c5c25cc5ba407, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_e = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(var_e);
        tmp_unicode_arg_1 = var_e;
        tmp_add_expr_left_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_add_expr_right_1 = mod_consts[41];
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        assert(var_except_str == NULL);
        var_except_str = tmp_assign_source_6;
    }
    goto try_end_2;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(var_except_str);
        tmp_make_exception_arg_1 = var_except_str;
        frame_209573db2347245e395c5c25cc5ba407->m_frame.f_lineno = 169;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_assign_source_7 == NULL));
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_7;
    }
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 157;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_209573db2347245e395c5c25cc5ba407->m_frame) frame_209573db2347245e395c5c25cc5ba407->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_3;
    branch_end_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_old_recv_tables);
        tmp_cmp_expr_left_2 = var_old_recv_tables;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_old_recv_tables);
        tmp_assattr_value_2 = var_old_recv_tables;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_attrdel_target_1;
        tmp_attrdel_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_attrdel_target_1 == NULL)) {
            tmp_attrdel_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_attrdel_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[9]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_209573db2347245e395c5c25cc5ba407, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_209573db2347245e395c5c25cc5ba407->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_209573db2347245e395c5c25cc5ba407, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_209573db2347245e395c5c25cc5ba407,
        type_description_1,
        par_self,
        par_binary_data,
        par_tensor_table,
        var_old_recv_tables,
        var_unpickler,
        var_ret,
        var_e,
        var_except_str
    );


    // Release cached frame if used for exception.
    if (frame_209573db2347245e395c5c25cc5ba407 == cache_frame_209573db2347245e395c5c25cc5ba407) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_209573db2347245e395c5c25cc5ba407);
        cache_frame_209573db2347245e395c5c25cc5ba407 = NULL;
    }

    assertFrameObject(frame_209573db2347245e395c5c25cc5ba407);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ret);
    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_old_recv_tables);
    Py_DECREF(var_old_recv_tables);
    var_old_recv_tables = NULL;
    Py_XDECREF(var_unpickler);
    var_unpickler = NULL;
    CHECK_OBJECT(var_ret);
    Py_DECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_except_str);
    var_except_str = NULL;
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

    Py_XDECREF(var_old_recv_tables);
    var_old_recv_tables = NULL;
    Py_XDECREF(var_unpickler);
    var_unpickler = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_except_str);
    var_except_str = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_binary_data);
    Py_DECREF(par_binary_data);
    CHECK_OBJECT(par_tensor_table);
    Py_DECREF(par_tensor_table);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_binary_data);
    Py_DECREF(par_binary_data);
    CHECK_OBJECT(par_tensor_table);
    Py_DECREF(par_tensor_table);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__12_serialize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_9ec95270d180206aa2d7f92970096e85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ec95270d180206aa2d7f92970096e85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ec95270d180206aa2d7f92970096e85)) {
        Py_XDECREF(cache_frame_9ec95270d180206aa2d7f92970096e85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ec95270d180206aa2d7f92970096e85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ec95270d180206aa2d7f92970096e85 = MAKE_FUNCTION_FRAME(codeobj_9ec95270d180206aa2d7f92970096e85, module_torch$distributed$rpc$internal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ec95270d180206aa2d7f92970096e85->m_type_description == NULL);
    frame_9ec95270d180206aa2d7f92970096e85 = cache_frame_9ec95270d180206aa2d7f92970096e85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ec95270d180206aa2d7f92970096e85);
    assert(Py_REFCNT(frame_9ec95270d180206aa2d7f92970096e85) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        frame_9ec95270d180206aa2d7f92970096e85->m_frame.f_lineno = 186;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[44], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_9ec95270d180206aa2d7f92970096e85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ec95270d180206aa2d7f92970096e85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ec95270d180206aa2d7f92970096e85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ec95270d180206aa2d7f92970096e85,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_9ec95270d180206aa2d7f92970096e85 == cache_frame_9ec95270d180206aa2d7f92970096e85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ec95270d180206aa2d7f92970096e85);
        cache_frame_9ec95270d180206aa2d7f92970096e85 = NULL;
    }

    assertFrameObject(frame_9ec95270d180206aa2d7f92970096e85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__13_deserialize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_binary_data = python_pars[0];
    PyObject *par_tensor_table = python_pars[1];
    struct Nuitka_FrameObject *frame_14d9e7e9978a819fe3aa15cba729fa11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14d9e7e9978a819fe3aa15cba729fa11 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14d9e7e9978a819fe3aa15cba729fa11)) {
        Py_XDECREF(cache_frame_14d9e7e9978a819fe3aa15cba729fa11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14d9e7e9978a819fe3aa15cba729fa11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14d9e7e9978a819fe3aa15cba729fa11 = MAKE_FUNCTION_FRAME(codeobj_14d9e7e9978a819fe3aa15cba729fa11, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14d9e7e9978a819fe3aa15cba729fa11->m_type_description == NULL);
    frame_14d9e7e9978a819fe3aa15cba729fa11 = cache_frame_14d9e7e9978a819fe3aa15cba729fa11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_14d9e7e9978a819fe3aa15cba729fa11);
    assert(Py_REFCNT(frame_14d9e7e9978a819fe3aa15cba729fa11) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_binary_data);
        tmp_args_element_value_1 = par_binary_data;
        CHECK_OBJECT(par_tensor_table);
        tmp_args_element_value_2 = par_tensor_table;
        frame_14d9e7e9978a819fe3aa15cba729fa11->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_14d9e7e9978a819fe3aa15cba729fa11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14d9e7e9978a819fe3aa15cba729fa11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14d9e7e9978a819fe3aa15cba729fa11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14d9e7e9978a819fe3aa15cba729fa11,
        type_description_1,
        par_binary_data,
        par_tensor_table
    );


    // Release cached frame if used for exception.
    if (frame_14d9e7e9978a819fe3aa15cba729fa11 == cache_frame_14d9e7e9978a819fe3aa15cba729fa11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14d9e7e9978a819fe3aa15cba729fa11);
        cache_frame_14d9e7e9978a819fe3aa15cba729fa11 = NULL;
    }

    assertFrameObject(frame_14d9e7e9978a819fe3aa15cba729fa11);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_binary_data);
    Py_DECREF(par_binary_data);
    CHECK_OBJECT(par_tensor_table);
    Py_DECREF(par_tensor_table);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_binary_data);
    Py_DECREF(par_binary_data);
    CHECK_OBJECT(par_tensor_table);
    Py_DECREF(par_tensor_table);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__14__run_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_python_udf = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var_e = NULL;
    PyObject *var_except_str = NULL;
    struct Nuitka_FrameObject *frame_486a238f89437017fbd1d2a7437aaba8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_486a238f89437017fbd1d2a7437aaba8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_486a238f89437017fbd1d2a7437aaba8)) {
        Py_XDECREF(cache_frame_486a238f89437017fbd1d2a7437aaba8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_486a238f89437017fbd1d2a7437aaba8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_486a238f89437017fbd1d2a7437aaba8 = MAKE_FUNCTION_FRAME(codeobj_486a238f89437017fbd1d2a7437aaba8, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_486a238f89437017fbd1d2a7437aaba8->m_type_description == NULL);
    frame_486a238f89437017fbd1d2a7437aaba8 = cache_frame_486a238f89437017fbd1d2a7437aaba8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_486a238f89437017fbd1d2a7437aaba8);
    assert(Py_REFCNT(frame_486a238f89437017fbd1d2a7437aaba8) == 2);

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_python_udf);
        tmp_isinstance_inst_1 = par_python_udf;
        tmp_isinstance_cls_1 = PyExc_AttributeError;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
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
        PyObject *tmp_raise_type_1;
        CHECK_OBJECT(par_python_udf);
        tmp_raise_type_1 = par_python_udf;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 203;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_python_udf);
        tmp_expression_value_1 = par_python_udf;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_python_udf);
        tmp_expression_value_2 = par_python_udf;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_python_udf);
        tmp_expression_value_3 = par_python_udf;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_486a238f89437017fbd1d2a7437aaba8, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_486a238f89437017fbd1d2a7437aaba8, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[49];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            frame_486a238f89437017fbd1d2a7437aaba8->m_frame.f_lineno = 208;
            tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            frame_486a238f89437017fbd1d2a7437aaba8->m_frame.f_lineno = 208;
            tmp_format_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[51]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[52];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_e);
            tmp_operand_value_1 = var_e;
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[52];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            frame_486a238f89437017fbd1d2a7437aaba8->m_frame.f_lineno = 208;
            tmp_format_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[56]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[52];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_3 = PyUnicode_Join(mod_consts[52], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_except_str == NULL);
        var_except_str = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[57]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(var_except_str);
        tmp_kw_call_arg_value_0_1 = var_except_str;
        tmp_kw_call_dict_value_0_1 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_kw_call_dict_value_0_1 == NULL));
        frame_486a238f89437017fbd1d2a7437aaba8->m_frame.f_lineno = 211;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[58]);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_type_arg_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_except_str);
        tmp_args_element_value_1 = var_except_str;
        CHECK_OBJECT(var_e);
        tmp_type_arg_1 = var_e;
        tmp_args_element_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_486a238f89437017fbd1d2a7437aaba8->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_4;
    }
    goto try_end_2;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 201;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_486a238f89437017fbd1d2a7437aaba8->m_frame) frame_486a238f89437017fbd1d2a7437aaba8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_486a238f89437017fbd1d2a7437aaba8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_486a238f89437017fbd1d2a7437aaba8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_486a238f89437017fbd1d2a7437aaba8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_486a238f89437017fbd1d2a7437aaba8,
        type_description_1,
        par_python_udf,
        var_result,
        var_e,
        var_except_str
    );


    // Release cached frame if used for exception.
    if (frame_486a238f89437017fbd1d2a7437aaba8 == cache_frame_486a238f89437017fbd1d2a7437aaba8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_486a238f89437017fbd1d2a7437aaba8);
        cache_frame_486a238f89437017fbd1d2a7437aaba8 = NULL;
    }

    assertFrameObject(frame_486a238f89437017fbd1d2a7437aaba8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_except_str);
    var_except_str = NULL;
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

    Py_XDECREF(var_except_str);
    var_except_str = NULL;
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
    CHECK_OBJECT(par_python_udf);
    Py_DECREF(par_python_udf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_python_udf);
    Py_DECREF(par_python_udf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__15__handle_exception(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_result = python_pars[0];
    struct Nuitka_FrameObject *frame_b55e045adb9ea719c82508155a3a2e40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b55e045adb9ea719c82508155a3a2e40 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b55e045adb9ea719c82508155a3a2e40)) {
        Py_XDECREF(cache_frame_b55e045adb9ea719c82508155a3a2e40);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b55e045adb9ea719c82508155a3a2e40 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b55e045adb9ea719c82508155a3a2e40 = MAKE_FUNCTION_FRAME(codeobj_b55e045adb9ea719c82508155a3a2e40, module_torch$distributed$rpc$internal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b55e045adb9ea719c82508155a3a2e40->m_type_description == NULL);
    frame_b55e045adb9ea719c82508155a3a2e40 = cache_frame_b55e045adb9ea719c82508155a3a2e40;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b55e045adb9ea719c82508155a3a2e40);
    assert(Py_REFCNT(frame_b55e045adb9ea719c82508155a3a2e40) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_result);
        tmp_isinstance_inst_1 = par_result;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_result);
        tmp_expression_value_1 = par_result;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_result);
        tmp_expression_value_4 = par_result;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[62]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b55e045adb9ea719c82508155a3a2e40->m_frame.f_lineno = 218;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[64]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b55e045adb9ea719c82508155a3a2e40->m_frame.f_lineno = 218;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[66]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b55e045adb9ea719c82508155a3a2e40->m_frame.f_lineno = 218;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_b55e045adb9ea719c82508155a3a2e40, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b55e045adb9ea719c82508155a3a2e40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b55e045adb9ea719c82508155a3a2e40, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b55e045adb9ea719c82508155a3a2e40,
        type_description_1,
        par_result
    );


    // Release cached frame if used for exception.
    if (frame_b55e045adb9ea719c82508155a3a2e40 == cache_frame_b55e045adb9ea719c82508155a3a2e40) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b55e045adb9ea719c82508155a3a2e40);
        cache_frame_b55e045adb9ea719c82508155a3a2e40 = NULL;
    }

    assertFrameObject(frame_b55e045adb9ea719c82508155a3a2e40);

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
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__16__build_rpc_profiling_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exec_type = python_pars[0];
    PyObject *par_func_name = python_pars[1];
    PyObject *par_current_worker_name = python_pars[2];
    PyObject *par_dst_worker_name = python_pars[3];
    PyObject *var_profile_key = NULL;
    struct Nuitka_FrameObject *frame_b9b4b39f93bb44cf62618fd62e390c83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9b4b39f93bb44cf62618fd62e390c83 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b9b4b39f93bb44cf62618fd62e390c83)) {
        Py_XDECREF(cache_frame_b9b4b39f93bb44cf62618fd62e390c83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9b4b39f93bb44cf62618fd62e390c83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9b4b39f93bb44cf62618fd62e390c83 = MAKE_FUNCTION_FRAME(codeobj_b9b4b39f93bb44cf62618fd62e390c83, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9b4b39f93bb44cf62618fd62e390c83->m_type_description == NULL);
    frame_b9b4b39f93bb44cf62618fd62e390c83 = cache_frame_b9b4b39f93bb44cf62618fd62e390c83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9b4b39f93bb44cf62618fd62e390c83);
    assert(Py_REFCNT(frame_b9b4b39f93bb44cf62618fd62e390c83) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[67];
        CHECK_OBJECT(par_exec_type);
        tmp_expression_value_1 = par_exec_type;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func_name);
        tmp_kw_call_dict_value_1_1 = par_func_name;
        CHECK_OBJECT(par_current_worker_name);
        tmp_kw_call_dict_value_2_1 = par_current_worker_name;
        CHECK_OBJECT(par_dst_worker_name);
        tmp_kw_call_dict_value_3_1 = par_dst_worker_name;
        frame_b9b4b39f93bb44cf62618fd62e390c83->m_frame.f_lineno = 237;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_profile_key == NULL);
        var_profile_key = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9b4b39f93bb44cf62618fd62e390c83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9b4b39f93bb44cf62618fd62e390c83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9b4b39f93bb44cf62618fd62e390c83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9b4b39f93bb44cf62618fd62e390c83,
        type_description_1,
        par_exec_type,
        par_func_name,
        par_current_worker_name,
        par_dst_worker_name,
        var_profile_key
    );


    // Release cached frame if used for exception.
    if (frame_b9b4b39f93bb44cf62618fd62e390c83 == cache_frame_b9b4b39f93bb44cf62618fd62e390c83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9b4b39f93bb44cf62618fd62e390c83);
        cache_frame_b9b4b39f93bb44cf62618fd62e390c83 = NULL;
    }

    assertFrameObject(frame_b9b4b39f93bb44cf62618fd62e390c83);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_profile_key);
    tmp_return_value = var_profile_key;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_profile_key);
    Py_DECREF(var_profile_key);
    var_profile_key = NULL;
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
    CHECK_OBJECT(par_exec_type);
    Py_DECREF(par_exec_type);
    CHECK_OBJECT(par_func_name);
    Py_DECREF(par_func_name);
    CHECK_OBJECT(par_current_worker_name);
    Py_DECREF(par_current_worker_name);
    CHECK_OBJECT(par_dst_worker_name);
    Py_DECREF(par_dst_worker_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_exec_type);
    Py_DECREF(par_exec_type);
    CHECK_OBJECT(par_func_name);
    Py_DECREF(par_func_name);
    CHECK_OBJECT(par_current_worker_name);
    Py_DECREF(par_current_worker_name);
    CHECK_OBJECT(par_dst_worker_name);
    Py_DECREF(par_dst_worker_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$rpc$internal$$$function__17__start_record_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exec_type = python_pars[0];
    PyObject *par_func_name = python_pars[1];
    PyObject *par_current_worker_name = python_pars[2];
    PyObject *par_dest_worker_name = python_pars[3];
    PyObject *var_profile_key = NULL;
    PyObject *var_rf = NULL;
    struct Nuitka_FrameObject *frame_2ad72d3dbe4c4ff22bf9c17b7a91f999;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999)) {
        Py_XDECREF(cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999 = MAKE_FUNCTION_FRAME(codeobj_2ad72d3dbe4c4ff22bf9c17b7a91f999, module_torch$distributed$rpc$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999->m_type_description == NULL);
    frame_2ad72d3dbe4c4ff22bf9c17b7a91f999 = cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ad72d3dbe4c4ff22bf9c17b7a91f999);
    assert(Py_REFCNT(frame_2ad72d3dbe4c4ff22bf9c17b7a91f999) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_2ad72d3dbe4c4ff22bf9c17b7a91f999->m_frame.f_lineno = 262;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[72]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[73];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 262;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[74];
        CHECK_OBJECT(par_exec_type);
        tmp_expression_value_2 = par_exec_type;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[68]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func_name);
        tmp_unicode_arg_1 = par_func_name;
        tmp_kw_call_arg_value_2_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_current_worker_name);
        tmp_kw_call_arg_value_3_1 = par_current_worker_name;
        CHECK_OBJECT(par_dest_worker_name);
        tmp_kw_call_arg_value_4_1 = par_dest_worker_name;
        frame_2ad72d3dbe4c4ff22bf9c17b7a91f999->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_profile_key == NULL);
        var_profile_key = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[71]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_2ad72d3dbe4c4ff22bf9c17b7a91f999->m_frame.f_lineno = 266;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[75]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rf == NULL);
        var_rf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[71]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rf);
        tmp_args_element_value_1 = var_rf;
        CHECK_OBJECT(var_profile_key);
        tmp_args_element_value_2 = var_profile_key;
        frame_2ad72d3dbe4c4ff22bf9c17b7a91f999->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[76],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ad72d3dbe4c4ff22bf9c17b7a91f999, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ad72d3dbe4c4ff22bf9c17b7a91f999->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ad72d3dbe4c4ff22bf9c17b7a91f999, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ad72d3dbe4c4ff22bf9c17b7a91f999,
        type_description_1,
        par_exec_type,
        par_func_name,
        par_current_worker_name,
        par_dest_worker_name,
        var_profile_key,
        var_rf
    );


    // Release cached frame if used for exception.
    if (frame_2ad72d3dbe4c4ff22bf9c17b7a91f999 == cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999);
        cache_frame_2ad72d3dbe4c4ff22bf9c17b7a91f999 = NULL;
    }

    assertFrameObject(frame_2ad72d3dbe4c4ff22bf9c17b7a91f999);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_rf);
    tmp_return_value = var_rf;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_profile_key);
    Py_DECREF(var_profile_key);
    var_profile_key = NULL;
    CHECK_OBJECT(var_rf);
    Py_DECREF(var_rf);
    var_rf = NULL;
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

    Py_XDECREF(var_profile_key);
    var_profile_key = NULL;
    Py_XDECREF(var_rf);
    var_rf = NULL;
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
    CHECK_OBJECT(par_exec_type);
    Py_DECREF(par_exec_type);
    CHECK_OBJECT(par_func_name);
    Py_DECREF(par_func_name);
    CHECK_OBJECT(par_current_worker_name);
    Py_DECREF(par_current_worker_name);
    CHECK_OBJECT(par_dest_worker_name);
    Py_DECREF(par_dest_worker_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_exec_type);
    Py_DECREF(par_exec_type);
    CHECK_OBJECT(par_func_name);
    Py_DECREF(par_func_name);
    CHECK_OBJECT(par_current_worker_name);
    Py_DECREF(par_current_worker_name);
    CHECK_OBJECT(par_dest_worker_name);
    Py_DECREF(par_dest_worker_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__10_serialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__10_serialize,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_4efea416ff282c4a5fb1e7152037d48a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__11_deserialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__11_deserialize,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_209573db2347245e395c5c25cc5ba407,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__12_serialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__12_serialize,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ec95270d180206aa2d7f92970096e85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__13_deserialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__13_deserialize,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14d9e7e9978a819fe3aa15cba729fa11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__14__run_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__14__run_function,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_486a238f89437017fbd1d2a7437aaba8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__15__handle_exception() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__15__handle_exception,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b55e045adb9ea719c82508155a3a2e40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__16__build_rpc_profiling_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__16__build_rpc_profiling_key,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9b4b39f93bb44cf62618fd62e390c83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__17__start_record_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__17__start_record_function,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ad72d3dbe4c4ff22bf9c17b7a91f999,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__1___init__,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_ad3a27722c640bc5330485b59c253301,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__2__register_reducer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__2__register_reducer,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_9c366fe8d5d4c1dc99e0befbc9a63dc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__3__tensor_receiver() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__3__tensor_receiver,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_c84d19c2192d5fa338e672f2af3dbbfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__4__tensor_reducer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__4__tensor_reducer,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_3025389b4d14779df8e4843ad23b9d2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__5__py_rref_receiver() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__5__py_rref_receiver,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_7a21665e2f4563bc8e216130ad7d9823,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__6__py_rref_reducer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__6__py_rref_reducer,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_49b1442529f8cf17752a8db41753fda6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__7__rref_reducer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__7__rref_reducer,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_2781b0b2d4a9e3eb9a8210c4548c2651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__8__script_module_receiver() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__8__script_module_receiver,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_af315f6afda29ea1420b0fe7d3e86139,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__9__script_module_reducer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$rpc$internal$$$function__9__script_module_reducer,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_8b4f092346cb0284e42c23022b904691,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$rpc$internal,
        mod_consts[28],
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

function_impl_code functable_torch$distributed$rpc$internal[] = {
    impl_torch$distributed$rpc$internal$$$function__1___init__,
    impl_torch$distributed$rpc$internal$$$function__2__register_reducer,
    impl_torch$distributed$rpc$internal$$$function__3__tensor_receiver,
    impl_torch$distributed$rpc$internal$$$function__4__tensor_reducer,
    impl_torch$distributed$rpc$internal$$$function__5__py_rref_receiver,
    impl_torch$distributed$rpc$internal$$$function__6__py_rref_reducer,
    impl_torch$distributed$rpc$internal$$$function__7__rref_reducer,
    impl_torch$distributed$rpc$internal$$$function__8__script_module_receiver,
    impl_torch$distributed$rpc$internal$$$function__9__script_module_reducer,
    impl_torch$distributed$rpc$internal$$$function__10_serialize,
    impl_torch$distributed$rpc$internal$$$function__11_deserialize,
    impl_torch$distributed$rpc$internal$$$function__12_serialize,
    impl_torch$distributed$rpc$internal$$$function__13_deserialize,
    impl_torch$distributed$rpc$internal$$$function__14__run_function,
    impl_torch$distributed$rpc$internal$$$function__15__handle_exception,
    impl_torch$distributed$rpc$internal$$$function__16__build_rpc_profiling_key,
    impl_torch$distributed$rpc$internal$$$function__17__start_record_function,
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

    function_impl_code *current = functable_torch$distributed$rpc$internal;
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

    if (offset > sizeof(functable_torch$distributed$rpc$internal) || offset < 0) {
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
        functable_torch$distributed$rpc$internal[offset],
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
        module_torch$distributed$rpc$internal,
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
PyObject *modulecode_torch$distributed$rpc$internal(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributed.rpc.internal");

    // Store the module for future use.
    module_torch$distributed$rpc$internal = module;

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
        PRINT_STRING("torch.distributed.rpc.internal: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.rpc.internal: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.rpc.internal: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributed$rpc$internal\n");

    moduledict_torch$distributed$rpc$internal = MODULE_DICT(module_torch$distributed$rpc$internal);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributed$rpc$internal,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$rpc$internal,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[52]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$rpc$internal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$rpc$internal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$rpc$internal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributed$rpc$internal);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributed$rpc$internal);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_b7e31023c70b82918825e874d2d02dd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8ce5420e6bd2a87964e03e4efe67640a_2;
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
    PyObject *locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_2);
    }
    frame_b7e31023c70b82918825e874d2d02dd5 = MAKE_MODULE_FRAME(codeobj_b7e31023c70b82918825e874d2d02dd5, module_torch$distributed$rpc$internal);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7e31023c70b82918825e874d2d02dd5);
    assert(Py_REFCNT(frame_b7e31023c70b82918825e874d2d02dd5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[81], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[82], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[84];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[87];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[89];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[55];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[90];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[91];
        tmp_level_value_6 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$distributed$rpc$internal,
                mod_consts[92],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[5];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 10;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[93];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$rpc$internal,
                mod_consts[94],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[95];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_torch$distributed$rpc$internal;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[96];
        tmp_level_value_9 = mod_consts[85];
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 12;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$distributed$rpc$internal,
                mod_consts[50],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 17;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[97]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[98]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[99]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

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
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[85];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[100]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[100]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[101];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 22;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[102]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

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
        tmp_mod_expr_left_1 = mod_consts[103];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[104];
        tmp_getattr_default_1 = mod_consts[105];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[104]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

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


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        frame_8ce5420e6bd2a87964e03e4efe67640a_2 = MAKE_CLASS_FRAME(codeobj_8ce5420e6bd2a87964e03e4efe67640a, module_torch$distributed$rpc$internal, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8ce5420e6bd2a87964e03e4efe67640a_2);
        assert(Py_REFCNT(frame_8ce5420e6bd2a87964e03e4efe67640a_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ce5420e6bd2a87964e03e4efe67640a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ce5420e6bd2a87964e03e4efe67640a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ce5420e6bd2a87964e03e4efe67640a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ce5420e6bd2a87964e03e4efe67640a_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8ce5420e6bd2a87964e03e4efe67640a_2);

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


                exception_lineno = 22;

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
        tmp_res = PyObject_SetItem(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[101];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 22;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22);
        locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22 = NULL;
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

        Py_DECREF(locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22);
        locals_torch$distributed$rpc$internal$$$class__1_RPCExecMode_22 = NULL;
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
        exception_lineno = 22;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_24);
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
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[107], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[78], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[12];
        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__2__register_reducer();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[121], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_classmethod_arg_1;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__3__tensor_receiver();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__4__tensor_reducer();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_classmethod_arg_2;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__5__py_rref_receiver();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__6__py_rref_reducer();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__7__rref_reducer();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[30], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_classmethod_arg_3;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__8__script_module_receiver();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__9__script_module_reducer();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[33], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__10_serialize();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__11_deserialize();

        tmp_res = PyDict_SetItem(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29, mod_consts[45], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[12];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[132];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 29;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_28 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29);
        locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29 = NULL;
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

        Py_DECREF(locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29);
        locals_torch$distributed$rpc$internal$$$class__2__InternalRPCPickler_29 = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_28);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_called_value_4 == NULL));
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 182;
        tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__12_serialize();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__13_deserialize();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__14__run_function();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__15__handle_exception();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__16__build_rpc_profiling_key();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_torch$distributed$rpc$internal$$$function__17__start_record_function();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[138];
        tmp_call_arg_element_2 = MAKE_LIST3(mod_consts[46],mod_consts[47],mod_consts[48]);
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_37 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[137],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = mod_consts[59];
        tmp_call_arg_element_4 = MAKE_LIST2(mod_consts[62],mod_consts[61]);
        frame_b7e31023c70b82918825e874d2d02dd5->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_assign_source_38 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[137],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_38);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7e31023c70b82918825e874d2d02dd5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7e31023c70b82918825e874d2d02dd5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7e31023c70b82918825e874d2d02dd5, exception_lineno);
    }



    assertFrameObject(frame_b7e31023c70b82918825e874d2d02dd5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributed.rpc.internal", false);

    Py_INCREF(module_torch$distributed$rpc$internal);
    return module_torch$distributed$rpc$internal;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$rpc$internal, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributed$rpc$internal", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
