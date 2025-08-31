/* Generated code for Python module 'h5py._hl.attrs'
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

/* The "module_h5py$_hl$attrs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h5py$_hl$attrs;
PyDictObject *moduledict_h5py$_hl$attrs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[158];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[158];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("h5py._hl.attrs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 158; i++) {
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
void checkModuleConstants_h5py$_hl$attrs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 158; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f9c7f1b9dba540ff32c05f9c68a3305b;
static PyCodeObject *codeobj_8e0bfb6d5d379d9b36353089f87b440f;
static PyCodeObject *codeobj_c3fef7ce5a69529cc4f23bca115b8f48;
static PyCodeObject *codeobj_a3108b63da14ba7cfe3f9515645ced1d;
static PyCodeObject *codeobj_a43c6606041b328c5e5469e73fac6720;
static PyCodeObject *codeobj_f56c9dfc779c21f2bd602efb77fc839c;
static PyCodeObject *codeobj_27fdfe84b7197a0686790d0d21ba95ec;
static PyCodeObject *codeobj_228e8011bb48d8c13b564a28b7ab8af9;
static PyCodeObject *codeobj_e0902327bc3f5a703f2ec0eef63ee465;
static PyCodeObject *codeobj_7e0bd5184f28ba96e0f39d5aa35b0c28;
static PyCodeObject *codeobj_c6aa27748508ad57cd43983e6ad41de9;
static PyCodeObject *codeobj_ea0c3951399dc533ab9131d446243597;
static PyCodeObject *codeobj_b32e43a9c290a3041719a09d0c697452;
static PyCodeObject *codeobj_7ceb05021d75666ed96c0c2dbab55f01;
static PyCodeObject *codeobj_b6af080cfa509a97476fc2a51a22c2ee;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[143]); CHECK_OBJECT(module_filename_obj);
    codeobj_f9c7f1b9dba540ff32c05f9c68a3305b = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[145], NULL, 1, 0, 0);
    codeobj_8e0bfb6d5d379d9b36353089f87b440f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    codeobj_c3fef7ce5a69529cc4f23bca115b8f48 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[147], NULL, 0, 0, 0);
    codeobj_a3108b63da14ba7cfe3f9515645ced1d = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[148], NULL, 2, 0, 0);
    codeobj_a43c6606041b328c5e5469e73fac6720 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[148], NULL, 2, 0, 0);
    codeobj_f56c9dfc779c21f2bd602efb77fc839c = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[149], NULL, 2, 0, 0);
    codeobj_27fdfe84b7197a0686790d0d21ba95ec = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[150], NULL, 2, 0, 0);
    codeobj_228e8011bb48d8c13b564a28b7ab8af9 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[151], NULL, 1, 0, 0);
    codeobj_e0902327bc3f5a703f2ec0eef63ee465 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[152], NULL, 1, 0, 0);
    codeobj_7e0bd5184f28ba96e0f39d5aa35b0c28 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[152], NULL, 1, 0, 0);
    codeobj_c6aa27748508ad57cd43983e6ad41de9 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[153], NULL, 3, 0, 0);
    codeobj_ea0c3951399dc533ab9131d446243597 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[154], NULL, 5, 0, 0);
    codeobj_b32e43a9c290a3041719a09d0c697452 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[148], NULL, 2, 0, 0);
    codeobj_7ceb05021d75666ed96c0c2dbab55f01 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[76], mod_consts[76], mod_consts[155], mod_consts[156], 1, 0, 0);
    codeobj_b6af080cfa509a97476fc2a51a22c2ee = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[157], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__10___contains__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__11___repr__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__1___init__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__2___getitem__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__3_get_id();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__4___setitem__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__5___delitem__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__6_create(PyObject *defaults);


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__7_modify();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__8___len__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__9___iter__();


static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__$$$function__1_iter_cb(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_h5py$_hl$attrs$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    struct Nuitka_FrameObject *frame_27fdfe84b7197a0686790d0d21ba95ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_27fdfe84b7197a0686790d0d21ba95ec = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27fdfe84b7197a0686790d0d21ba95ec)) {
        Py_XDECREF(cache_frame_27fdfe84b7197a0686790d0d21ba95ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27fdfe84b7197a0686790d0d21ba95ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27fdfe84b7197a0686790d0d21ba95ec = MAKE_FUNCTION_FRAME(codeobj_27fdfe84b7197a0686790d0d21ba95ec, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27fdfe84b7197a0686790d0d21ba95ec->m_type_description == NULL);
    frame_27fdfe84b7197a0686790d0d21ba95ec = cache_frame_27fdfe84b7197a0686790d0d21ba95ec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_27fdfe84b7197a0686790d0d21ba95ec);
    assert(Py_REFCNT(frame_27fdfe84b7197a0686790d0d21ba95ec) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_parent);
        tmp_expression_value_1 = par_parent;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27fdfe84b7197a0686790d0d21ba95ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27fdfe84b7197a0686790d0d21ba95ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27fdfe84b7197a0686790d0d21ba95ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27fdfe84b7197a0686790d0d21ba95ec,
        type_description_1,
        par_self,
        par_parent
    );


    // Release cached frame if used for exception.
    if (frame_27fdfe84b7197a0686790d0d21ba95ec == cache_frame_27fdfe84b7197a0686790d0d21ba95ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27fdfe84b7197a0686790d0d21ba95ec);
        cache_frame_27fdfe84b7197a0686790d0d21ba95ec = NULL;
    }

    assertFrameObject(frame_27fdfe84b7197a0686790d0d21ba95ec);

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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__2___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_attr = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_htype = NULL;
    PyObject *var_subdtype = NULL;
    PyObject *var_subshape = NULL;
    PyObject *var_arr = NULL;
    PyObject *var_string_info = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f56c9dfc779c21f2bd602efb77fc839c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_f9c7f1b9dba540ff32c05f9c68a3305b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f56c9dfc779c21f2bd602efb77fc839c = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f56c9dfc779c21f2bd602efb77fc839c)) {
        Py_XDECREF(cache_frame_f56c9dfc779c21f2bd602efb77fc839c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f56c9dfc779c21f2bd602efb77fc839c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f56c9dfc779c21f2bd602efb77fc839c = MAKE_FUNCTION_FRAME(codeobj_f56c9dfc779c21f2bd602efb77fc839c, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f56c9dfc779c21f2bd602efb77fc839c->m_type_description == NULL);
    frame_f56c9dfc779c21f2bd602efb77fc839c = cache_frame_f56c9dfc779c21f2bd602efb77fc839c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f56c9dfc779c21f2bd602efb77fc839c);
    assert(Py_REFCNT(frame_f56c9dfc779c21f2bd602efb77fc839c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 56;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_attr == NULL);
        var_attr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_attr);
        tmp_args_element_value_4 = var_attr;
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_attr);
        tmp_expression_value_3 = var_attr;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 59;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_attr);
        tmp_expression_value_4 = var_attr;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_attr);
        tmp_expression_value_5 = var_attr;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_shape == NULL);
        var_shape = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_args_element_value_6 = var_dtype;
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 66;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[11], tmp_args_element_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_htype == NULL);
        var_htype = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_dtype);
        tmp_expression_value_6 = var_dtype;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_dtype);
        tmp_expression_value_7 = var_dtype;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[12]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 72;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 72;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 72;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 72;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_subdtype == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_subdtype = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_subshape == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_subshape = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_attr);
        tmp_expression_value_8 = var_attr;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_subshape);
        tmp_add_expr_right_1 = var_subshape;
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_shape;
            assert(old != NULL);
            var_shape = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(var_subdtype);
        tmp_assign_source_11 = var_subdtype;
        {
            PyObject *old = var_dtype;
            assert(old != NULL);
            var_dtype = tmp_assign_source_11;
            Py_INCREF(var_dtype);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_shape);
        tmp_kw_call_arg_value_0_1 = var_shape;
        if (var_dtype == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = var_dtype;
        tmp_kw_call_dict_value_1_1 = mod_consts[16];
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 76;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(var_attr);
        tmp_expression_value_10 = var_attr;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[18]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_kw_call_arg_value_0_2 = var_arr;
        CHECK_OBJECT(var_htype);
        tmp_kw_call_dict_value_0_2 = var_htype;
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 77;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[20]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_dtype == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var_dtype;
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 79;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_string_info == NULL);
        var_string_info = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_string_info);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_string_info);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_string_info);
        tmp_expression_value_12 = var_string_info;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[21]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[22]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(var_arr);
            tmp_expression_value_15 = var_arr;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[23]);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2)) {
            Py_XDECREF(cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2 = MAKE_FUNCTION_FRAME(codeobj_f9c7f1b9dba540ff32c05f9c68a3305b, module_h5py$_hl$attrs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2->m_type_description == NULL);
        frame_f9c7f1b9dba540ff32c05f9c68a3305b_2 = cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f9c7f1b9dba540ff32c05f9c68a3305b_2);
        assert(Py_REFCNT(frame_f9c7f1b9dba540ff32c05f9c68a3305b_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 83;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_18;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_16;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_b);
            tmp_expression_value_16 = outline_0_var_b;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[24]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            frame_f9c7f1b9dba540ff32c05f9c68a3305b_2->m_frame.f_lineno = 83;
            tmp_append_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[25]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_kw_call_arg_value_0_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_kw_call_arg_value_0_3);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f9c7f1b9dba540ff32c05f9c68a3305b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f9c7f1b9dba540ff32c05f9c68a3305b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f9c7f1b9dba540ff32c05f9c68a3305b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f9c7f1b9dba540ff32c05f9c68a3305b_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame if used for exception.
        if (frame_f9c7f1b9dba540ff32c05f9c68a3305b_2 == cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2);
            cache_frame_f9c7f1b9dba540ff32c05f9c68a3305b_2 = NULL;
        }

        assertFrameObject(frame_f9c7f1b9dba540ff32c05f9c68a3305b_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 83;
        goto frame_exception_exit_1;
        outline_result_1:;
        if (var_dtype == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_3 = var_dtype;
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 82;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_expression_value_13 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[27]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_expression_value_17 = var_arr;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[9]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame.f_lineno = 82;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arr;
            assert(old != NULL);
            var_arr = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_18;
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_arr;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[9]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_1;
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = var_arr;
        tmp_subscript_value_1 = mod_consts[29];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    if (var_arr == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 88;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_arr;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f56c9dfc779c21f2bd602efb77fc839c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f56c9dfc779c21f2bd602efb77fc839c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f56c9dfc779c21f2bd602efb77fc839c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f56c9dfc779c21f2bd602efb77fc839c,
        type_description_1,
        par_self,
        par_name,
        var_attr,
        var_dtype,
        var_shape,
        var_htype,
        var_subdtype,
        var_subshape,
        var_arr,
        var_string_info
    );


    // Release cached frame if used for exception.
    if (frame_f56c9dfc779c21f2bd602efb77fc839c == cache_frame_f56c9dfc779c21f2bd602efb77fc839c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f56c9dfc779c21f2bd602efb77fc839c);
        cache_frame_f56c9dfc779c21f2bd602efb77fc839c = NULL;
    }

    assertFrameObject(frame_f56c9dfc779c21f2bd602efb77fc839c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attr);
    Py_DECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_htype);
    var_htype = NULL;
    Py_XDECREF(var_subdtype);
    var_subdtype = NULL;
    Py_XDECREF(var_subshape);
    var_subshape = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_string_info);
    var_string_info = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_htype);
    var_htype = NULL;
    Py_XDECREF(var_subdtype);
    var_subdtype = NULL;
    Py_XDECREF(var_subshape);
    var_subshape = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_string_info);
    var_string_info = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__3_get_id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_b32e43a9c290a3041719a09d0c697452;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b32e43a9c290a3041719a09d0c697452 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b32e43a9c290a3041719a09d0c697452)) {
        Py_XDECREF(cache_frame_b32e43a9c290a3041719a09d0c697452);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b32e43a9c290a3041719a09d0c697452 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b32e43a9c290a3041719a09d0c697452 = MAKE_FUNCTION_FRAME(codeobj_b32e43a9c290a3041719a09d0c697452, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b32e43a9c290a3041719a09d0c697452->m_type_description == NULL);
    frame_b32e43a9c290a3041719a09d0c697452 = cache_frame_b32e43a9c290a3041719a09d0c697452;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b32e43a9c290a3041719a09d0c697452);
    assert(Py_REFCNT(frame_b32e43a9c290a3041719a09d0c697452) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_b32e43a9c290a3041719a09d0c697452->m_frame.f_lineno = 93;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b32e43a9c290a3041719a09d0c697452->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_b32e43a9c290a3041719a09d0c697452, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b32e43a9c290a3041719a09d0c697452->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b32e43a9c290a3041719a09d0c697452, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b32e43a9c290a3041719a09d0c697452,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_b32e43a9c290a3041719a09d0c697452 == cache_frame_b32e43a9c290a3041719a09d0c697452) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b32e43a9c290a3041719a09d0c697452);
        cache_frame_b32e43a9c290a3041719a09d0c697452 = NULL;
    }

    assertFrameObject(frame_b32e43a9c290a3041719a09d0c697452);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__4___setitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_c6aa27748508ad57cd43983e6ad41de9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6aa27748508ad57cd43983e6ad41de9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c6aa27748508ad57cd43983e6ad41de9)) {
        Py_XDECREF(cache_frame_c6aa27748508ad57cd43983e6ad41de9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6aa27748508ad57cd43983e6ad41de9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6aa27748508ad57cd43983e6ad41de9 = MAKE_FUNCTION_FRAME(codeobj_c6aa27748508ad57cd43983e6ad41de9, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6aa27748508ad57cd43983e6ad41de9->m_type_description == NULL);
    frame_c6aa27748508ad57cd43983e6ad41de9 = cache_frame_c6aa27748508ad57cd43983e6ad41de9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c6aa27748508ad57cd43983e6ad41de9);
    assert(Py_REFCNT(frame_c6aa27748508ad57cd43983e6ad41de9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_0_1 = par_name;
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_0_1 = par_value;
        frame_c6aa27748508ad57cd43983e6ad41de9->m_frame.f_lineno = 103;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6aa27748508ad57cd43983e6ad41de9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6aa27748508ad57cd43983e6ad41de9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6aa27748508ad57cd43983e6ad41de9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6aa27748508ad57cd43983e6ad41de9,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c6aa27748508ad57cd43983e6ad41de9 == cache_frame_c6aa27748508ad57cd43983e6ad41de9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6aa27748508ad57cd43983e6ad41de9);
        cache_frame_c6aa27748508ad57cd43983e6ad41de9 = NULL;
    }

    assertFrameObject(frame_c6aa27748508ad57cd43983e6ad41de9);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__5___delitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_a43c6606041b328c5e5469e73fac6720;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a43c6606041b328c5e5469e73fac6720 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a43c6606041b328c5e5469e73fac6720)) {
        Py_XDECREF(cache_frame_a43c6606041b328c5e5469e73fac6720);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a43c6606041b328c5e5469e73fac6720 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a43c6606041b328c5e5469e73fac6720 = MAKE_FUNCTION_FRAME(codeobj_a43c6606041b328c5e5469e73fac6720, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a43c6606041b328c5e5469e73fac6720->m_type_description == NULL);
    frame_a43c6606041b328c5e5469e73fac6720 = cache_frame_a43c6606041b328c5e5469e73fac6720;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a43c6606041b328c5e5469e73fac6720);
    assert(Py_REFCNT(frame_a43c6606041b328c5e5469e73fac6720) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_a43c6606041b328c5e5469e73fac6720->m_frame.f_lineno = 108;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a43c6606041b328c5e5469e73fac6720->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_a43c6606041b328c5e5469e73fac6720, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a43c6606041b328c5e5469e73fac6720->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a43c6606041b328c5e5469e73fac6720, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a43c6606041b328c5e5469e73fac6720,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_a43c6606041b328c5e5469e73fac6720 == cache_frame_a43c6606041b328c5e5469e73fac6720) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a43c6606041b328c5e5469e73fac6720);
        cache_frame_a43c6606041b328c5e5469e73fac6720 = NULL;
    }

    assertFrameObject(frame_a43c6606041b328c5e5469e73fac6720);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__6_create(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *par_shape = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    PyObject *var_use_htype = NULL;
    PyObject *var_original_dtype = NULL;
    PyObject *var_subdtype = NULL;
    PyObject *var_subshape = NULL;
    PyObject *var_htype = NULL;
    PyObject *var_htype2 = NULL;
    PyObject *var_space = NULL;
    nuitka_bool var_attr_exists = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_tempname = NULL;
    PyObject *var_attr = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_ea0c3951399dc533ab9131d446243597;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_ea0c3951399dc533ab9131d446243597 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ea0c3951399dc533ab9131d446243597)) {
        Py_XDECREF(cache_frame_ea0c3951399dc533ab9131d446243597);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea0c3951399dc533ab9131d446243597 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea0c3951399dc533ab9131d446243597 = MAKE_FUNCTION_FRAME(codeobj_ea0c3951399dc533ab9131d446243597, module_h5py$_hl$attrs, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea0c3951399dc533ab9131d446243597->m_type_description == NULL);
    frame_ea0c3951399dc533ab9131d446243597 = cache_frame_ea0c3951399dc533ab9131d446243597;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea0c3951399dc533ab9131d446243597);
    assert(Py_REFCNT(frame_ea0c3951399dc533ab9131d446243597) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_1);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_2;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 125;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[39]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_1 = par_data;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_data);
        tmp_kw_call_arg_value_0_1 = par_data;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_1 = par_dtype;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 129;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_shape);
        tmp_cmp_expr_left_1 = par_shape;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_data);
        tmp_expression_value_4 = par_data;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_shape;
            assert(old != NULL);
            par_shape = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_shape);
        tmp_isinstance_inst_2 = par_shape;
        tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_shape);
        tmp_tuple_element_1 = par_shape;
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
        {
            PyObject *old = par_shape;
            assert(old != NULL);
            par_shape = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(var_use_htype == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_use_htype = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_isinstance_inst_3 = par_dtype;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_5;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_expression_value_5 = par_dtype;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_use_htype;
            assert(old != NULL);
            var_use_htype = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_6;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_expression_value_6 = par_dtype;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_cmp_expr_left_2 = par_dtype;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_data);
        tmp_expression_value_7 = par_data;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[8]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_1 = par_dtype;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 145;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(par_dtype);
        tmp_assign_source_13 = par_dtype;
        assert(var_original_dtype == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_original_dtype = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_9 = par_dtype;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[12]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_10 = par_dtype;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[12]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_5;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooboo";
            exception_lineno = 154;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooboo";
            exception_lineno = 154;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "ooooooooooooboo";
                    exception_lineno = 154;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooboo";
            exception_lineno = 154;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        assert(var_subdtype == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_subdtype = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        assert(var_subshape == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_subshape = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(par_shape);
        tmp_expression_value_11 = par_shape;
        CHECK_OBJECT(var_subshape);
        tmp_len_arg_1 = var_subshape;
        tmp_operand_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_start_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_start_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_start_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_subshape);
        tmp_cmp_expr_right_4 = var_subshape;
        tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_1 = mod_consts[44];
        CHECK_OBJECT(var_subshape);
        tmp_tuple_element_2 = var_subshape;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_shape);
        tmp_tuple_element_2 = par_shape;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 158;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 158;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooboo";
        goto try_except_handler_4;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(par_shape);
        tmp_expression_value_12 = par_shape;
        tmp_start_value_2 = mod_consts[45];
        CHECK_OBJECT(par_shape);
        tmp_len_arg_2 = par_shape;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_subshape);
        tmp_len_arg_3 = var_subshape;
        tmp_sub_expr_right_1 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_stop_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        assert(!(tmp_stop_value_2 == NULL));
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_shape;
            assert(old != NULL);
            par_shape = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(var_subdtype);
        tmp_assign_source_20 = var_subdtype;
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_20;
            Py_INCREF(par_dtype);
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_shape);
        tmp_cmp_expr_left_5 = par_shape;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[46]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_shape);
        tmp_kw_call_arg_value_0_2 = par_shape;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[47]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 168;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[46]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_16 = par_data;
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[9]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[47]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 168;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_cmp_expr_right_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_8 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[48];
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 169;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 169;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooboo";
        goto try_except_handler_4;
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_18;
        if (par_shape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_cmp_expr_left_7 = par_shape;
        CHECK_OBJECT(par_data);
        tmp_expression_value_18 = par_data;
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[9]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_data);
        tmp_expression_value_19 = par_data;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        if (par_shape == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_2 = par_shape;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 172;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    branch_end_6:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_isinstance_inst_4 = par_data;
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[50]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        if (par_data == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_kw_call_arg_value_0_4 = par_data;
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_0_4 = par_dtype;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 176;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_data;
            par_data = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    branch_no_10:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_use_htype);
        tmp_cmp_expr_left_8 = var_use_htype;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[11]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_original_dtype);
        tmp_tuple_element_3 = var_original_dtype;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[51]);
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 180;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        assert(var_htype == NULL);
        var_htype = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_original_dtype);
        tmp_args_element_value_3 = var_original_dtype;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 181;
        tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[11], tmp_args_element_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        assert(var_htype2 == NULL);
        var_htype2 = tmp_assign_source_24;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(var_use_htype);
        tmp_assign_source_25 = var_use_htype;
        assert(var_htype == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_htype = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_None;
        assert(var_htype2 == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_htype2 = tmp_assign_source_26;
    }
    branch_end_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_isinstance_inst_5 = par_data;
        tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_5 == NULL)) {
            tmp_isinstance_cls_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[32]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[53]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 187;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        assert(var_space == NULL);
        var_space = tmp_assign_source_27;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[54]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        if (par_shape == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_5 = par_shape;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 189;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        assert(var_space == NULL);
        var_space = tmp_assign_source_28;
    }
    branch_end_12:;
    {
        nuitka_bool tmp_assign_source_29;
        tmp_assign_source_29 = NUITKA_BOOL_FALSE;
        var_attr_exists = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        int tmp_truth_name_1;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[55]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[1]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 199;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_8 = par_name;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 199;
        tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[5], tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 199;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 199;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_assign_source_30;
        tmp_assign_source_30 = NUITKA_BOOL_TRUE;
        var_attr_exists = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 201;
        tmp_expression_value_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[57]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[58]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        assert(var_tempname == NULL);
        var_tempname = tmp_assign_source_31;
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(par_name);
        tmp_assign_source_32 = par_name;
        assert(var_tempname == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_tempname = tmp_assign_source_32;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[32]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[1]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_tempname);
        tmp_args_element_value_11 = var_tempname;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 205;
        tmp_args_element_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[5], tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_htype);
        tmp_args_element_value_12 = var_htype;
        CHECK_OBJECT(var_space);
        tmp_args_element_value_13 = var_space;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        assert(var_attr == NULL);
        var_attr = tmp_assign_source_33;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }

        tmp_isinstance_inst_6 = par_data;
        tmp_isinstance_cls_6 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_6 == NULL)) {
            tmp_isinstance_cls_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        CHECK_OBJECT(var_attr);
        tmp_expression_value_30 = var_attr;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[59]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        if (par_data == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }

        tmp_kw_call_arg_value_0_5 = par_data;
        CHECK_OBJECT(var_htype2);
        tmp_kw_call_dict_value_0_5 = var_htype2;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 208;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_13, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        assert(var_attr_exists != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_15 = var_attr_exists == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[35]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[1]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_16 = par_name;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 212;
        tmp_args_element_value_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[5], tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[60]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_34 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[1]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_tempname);
        tmp_args_element_value_19 = var_tempname;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 213;
        tmp_args_element_value_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[5], tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_21 = par_name;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 213;
        tmp_args_element_value_20 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[5], tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_20};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_15:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_ea0c3951399dc533ab9131d446243597, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_ea0c3951399dc533ab9131d446243597, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_5;
        if (var_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }

        tmp_called_instance_8 = var_attr;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 215;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[62]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_24;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[35]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_36 = par_self;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[1]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 216;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        CHECK_OBJECT(var_tempname);
        tmp_args_element_value_24 = var_tempname;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 216;
        tmp_args_element_value_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[5], tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 216;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_6);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 217;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ea0c3951399dc533ab9131d446243597->m_frame) frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboo";
    goto try_except_handler_9;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_7;
    // End of try:
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_ea0c3951399dc533ab9131d446243597, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_ea0c3951399dc533ab9131d446243597, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_7;
        if (var_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_10;
        }

        tmp_called_instance_10 = var_attr;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 219;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[62]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_7);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 206;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ea0c3951399dc533ab9131d446243597->m_frame) frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboo";
    goto try_except_handler_10;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_8;
        if (var_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }

        tmp_called_instance_11 = var_attr;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 219;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[62]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_ea0c3951399dc533ab9131d446243597, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_ea0c3951399dc533ab9131d446243597, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        nuitka_bool tmp_assign_source_34;
        tmp_assign_source_34 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_17 = tmp_with_1__exit;
        tmp_args_element_value_25 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_26 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_27 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_17, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_11;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_11;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 219;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ea0c3951399dc533ab9131d446243597->m_frame) frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboo";
    goto try_except_handler_11;
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 125;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ea0c3951399dc533ab9131d446243597->m_frame) frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboo";
    goto try_except_handler_11;
    branch_end_16:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_18;
        nuitka_bool tmp_cmp_expr_left_10;
        nuitka_bool tmp_cmp_expr_right_10;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_10 = tmp_with_1__indicator;
        tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_18 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_18 = tmp_with_1__exit;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 219;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_18, mod_consts[63]);

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_18:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_19;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_1__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_19 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_19 = tmp_with_1__exit;
        frame_ea0c3951399dc533ab9131d446243597->m_frame.f_lineno = 219;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_19, mod_consts[63]);

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_19:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea0c3951399dc533ab9131d446243597, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea0c3951399dc533ab9131d446243597->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea0c3951399dc533ab9131d446243597, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea0c3951399dc533ab9131d446243597,
        type_description_1,
        par_self,
        par_name,
        par_data,
        par_shape,
        par_dtype,
        var_use_htype,
        var_original_dtype,
        var_subdtype,
        var_subshape,
        var_htype,
        var_htype2,
        var_space,
        (int)var_attr_exists,
        var_tempname,
        var_attr
    );


    // Release cached frame if used for exception.
    if (frame_ea0c3951399dc533ab9131d446243597 == cache_frame_ea0c3951399dc533ab9131d446243597) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea0c3951399dc533ab9131d446243597);
        cache_frame_ea0c3951399dc533ab9131d446243597 = NULL;
    }

    assertFrameObject(frame_ea0c3951399dc533ab9131d446243597);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(par_shape);
    par_shape = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_use_htype);
    var_use_htype = NULL;
    Py_XDECREF(var_original_dtype);
    var_original_dtype = NULL;
    Py_XDECREF(var_subdtype);
    var_subdtype = NULL;
    Py_XDECREF(var_subshape);
    var_subshape = NULL;
    Py_XDECREF(var_htype);
    var_htype = NULL;
    Py_XDECREF(var_htype2);
    var_htype2 = NULL;
    Py_XDECREF(var_space);
    var_space = NULL;
    var_attr_exists = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_tempname);
    var_tempname = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(par_shape);
    par_shape = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_use_htype);
    var_use_htype = NULL;
    Py_XDECREF(var_original_dtype);
    var_original_dtype = NULL;
    Py_XDECREF(var_subdtype);
    var_subdtype = NULL;
    Py_XDECREF(var_subshape);
    var_subshape = NULL;
    Py_XDECREF(var_htype);
    var_htype = NULL;
    Py_XDECREF(var_htype2);
    var_htype2 = NULL;
    Py_XDECREF(var_space);
    var_space = NULL;
    var_attr_exists = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_tempname);
    var_tempname = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__7_modify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_attr = NULL;
    PyObject *var_dt = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_b6af080cfa509a97476fc2a51a22c2ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_b6af080cfa509a97476fc2a51a22c2ee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b6af080cfa509a97476fc2a51a22c2ee)) {
        Py_XDECREF(cache_frame_b6af080cfa509a97476fc2a51a22c2ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6af080cfa509a97476fc2a51a22c2ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6af080cfa509a97476fc2a51a22c2ee = MAKE_FUNCTION_FRAME(codeobj_b6af080cfa509a97476fc2a51a22c2ee, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6af080cfa509a97476fc2a51a22c2ee->m_type_description == NULL);
    frame_b6af080cfa509a97476fc2a51a22c2ee = cache_frame_b6af080cfa509a97476fc2a51a22c2ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b6af080cfa509a97476fc2a51a22c2ee);
    assert(Py_REFCNT(frame_b6af080cfa509a97476fc2a51a22c2ee) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_1);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 230;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[39]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_right_1 = par_self;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 234;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(var_attr == NULL);
        var_attr = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_attr);
        tmp_args_element_value_4 = var_attr;
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 236;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[65];
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 237;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_OSError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 237;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_6 = Py_None;
        Py_INCREF(tmp_assign_source_6);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_attr);
        tmp_expression_value_6 = var_attr;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        condexpr_end_1:;
        assert(var_dt == NULL);
        var_dt = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[50]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_arg_value_0_1 = par_value;
        tmp_kw_call_dict_value_0_1 = mod_consts[16];
        CHECK_OBJECT(var_dt);
        tmp_kw_call_dict_value_1_1 = var_dt;
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 242;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_value);
        tmp_expression_value_8 = par_value;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_attr);
        tmp_expression_value_9 = var_attr;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_expression_value_10 = par_value;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[68]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_3 = mod_consts[69];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_attr);
        tmp_expression_value_11 = var_attr;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[9]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 246;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_4 = mod_consts[69];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_operand_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_operand_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[70];
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 247;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 247;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_attr);
        tmp_called_instance_2 = var_attr;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_6 = par_value;
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 248;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[59], tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b6af080cfa509a97476fc2a51a22c2ee, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b6af080cfa509a97476fc2a51a22c2ee, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        tmp_args_element_value_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_9 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 248;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame) frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 230;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame) frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 248;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[63]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame.f_lineno = 248;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[63]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    goto try_end_4;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6af080cfa509a97476fc2a51a22c2ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6af080cfa509a97476fc2a51a22c2ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6af080cfa509a97476fc2a51a22c2ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6af080cfa509a97476fc2a51a22c2ee,
        type_description_1,
        par_self,
        par_name,
        par_value,
        var_attr,
        var_dt
    );


    // Release cached frame if used for exception.
    if (frame_b6af080cfa509a97476fc2a51a22c2ee == cache_frame_b6af080cfa509a97476fc2a51a22c2ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6af080cfa509a97476fc2a51a22c2ee);
        cache_frame_b6af080cfa509a97476fc2a51a22c2ee = NULL;
    }

    assertFrameObject(frame_b6af080cfa509a97476fc2a51a22c2ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_dt);
    var_dt = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_dt);
    var_dt = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__8___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e0902327bc3f5a703f2ec0eef63ee465;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0902327bc3f5a703f2ec0eef63ee465 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0902327bc3f5a703f2ec0eef63ee465)) {
        Py_XDECREF(cache_frame_e0902327bc3f5a703f2ec0eef63ee465);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0902327bc3f5a703f2ec0eef63ee465 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0902327bc3f5a703f2ec0eef63ee465 = MAKE_FUNCTION_FRAME(codeobj_e0902327bc3f5a703f2ec0eef63ee465, module_h5py$_hl$attrs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0902327bc3f5a703f2ec0eef63ee465->m_type_description == NULL);
    frame_e0902327bc3f5a703f2ec0eef63ee465 = cache_frame_e0902327bc3f5a703f2ec0eef63ee465;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0902327bc3f5a703f2ec0eef63ee465);
    assert(Py_REFCNT(frame_e0902327bc3f5a703f2ec0eef63ee465) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0902327bc3f5a703f2ec0eef63ee465->m_frame.f_lineno = 254;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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
        exception_tb = MAKE_TRACEBACK(frame_e0902327bc3f5a703f2ec0eef63ee465, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0902327bc3f5a703f2ec0eef63ee465->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0902327bc3f5a703f2ec0eef63ee465, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0902327bc3f5a703f2ec0eef63ee465,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e0902327bc3f5a703f2ec0eef63ee465 == cache_frame_e0902327bc3f5a703f2ec0eef63ee465) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0902327bc3f5a703f2ec0eef63ee465);
        cache_frame_e0902327bc3f5a703f2ec0eef63ee465 = NULL;
    }

    assertFrameObject(frame_e0902327bc3f5a703f2ec0eef63ee465);

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


static PyObject *impl_h5py$_hl$attrs$$$function__9___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



struct h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter___locals {
    struct Nuitka_CellObject *var_attrlist;
    PyObject *var_iter_cb;
    PyObject *var_cpl;
    PyObject *var_crt_order;
    PyObject *var_idx_type;
    PyObject *var_name;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
};

static PyObject *h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter___locals *generator_heap = (struct h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_attrlist = Nuitka_Cell_Empty();
    generator_heap->var_iter_cb = NULL;
    generator_heap->var_cpl = NULL;
    generator_heap->var_crt_order = NULL;
    generator_heap->var_idx_type = NULL;
    generator_heap->var_name = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_228e8011bb48d8c13b564a28b7ab8af9, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_1 = generator_heap->tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 258;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_2 = generator_heap->tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[39]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(generator_heap->var_attrlist) == NULL);
        PyCell_SET(generator_heap->var_attrlist, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = generator_heap->var_attrlist;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = generator->m_closure[0];
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_6 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__$$$function__1_iter_cb(tmp_closure_1);

        assert(generator_heap->var_iter_cb == NULL);
        generator_heap->var_iter_cb = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[78]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        generator->m_frame->m_frame.f_lineno = 265;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[79]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->var_cpl == NULL);
        generator_heap->var_cpl = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(generator_heap->var_cpl);
        tmp_called_instance_2 = generator_heap->var_cpl;
        generator->m_frame->m_frame.f_lineno = 266;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[80]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->var_crt_order == NULL);
        generator_heap->var_crt_order = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(generator_heap->var_cpl);
        tmp_called_instance_3 = generator_heap->var_cpl;
        generator->m_frame->m_frame.f_lineno = 267;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[62]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->var_crt_order);
        tmp_bitand_expr_left_1 = generator_heap->var_crt_order;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        tmp_bitand_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[84]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->var_idx_type == NULL);
        generator_heap->var_idx_type = tmp_assign_source_9;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[85]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->var_idx_type == NULL);
        generator_heap->var_idx_type = tmp_assign_source_10;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[86]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[78]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[1]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_2);

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_iter_cb);
        tmp_kw_call_arg_value_1_1 = generator_heap->var_iter_cb;
        CHECK_OBJECT(generator_heap->var_idx_type);
        tmp_kw_call_dict_value_0_1 = generator_heap->var_idx_type;
        generator->m_frame->m_frame.f_lineno = 273;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_3 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_5;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 273;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 258;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_4 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 273;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[63]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_3);
            Py_XDECREF(generator_heap->exception_keeper_value_3);
            Py_XDECREF(generator_heap->exception_keeper_tb_3);

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_5 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 273;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[63]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_attrlist));
        tmp_iter_arg_1 = Nuitka_Cell_GET(generator_heap->var_attrlist);
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 275;
            generator_heap->type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooo";
                generator_heap->exception_lineno = 275;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_name;
            generator_heap->var_name = tmp_assign_source_14;
            Py_INCREF(generator_heap->var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_9;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_name);
        tmp_expression_value_9 = generator_heap->var_name;
        Py_INCREF(tmp_expression_value_9);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_9;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooo";
            goto try_except_handler_6;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 275;
        generator_heap->type_description_1 = "ccooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator_heap->var_attrlist,
            generator_heap->var_iter_cb,
            generator_heap->var_cpl,
            generator_heap->var_crt_order,
            generator_heap->var_idx_type,
            generator_heap->var_name
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->var_attrlist);
    Py_DECREF(generator_heap->var_attrlist);
    generator_heap->var_attrlist = NULL;
    Py_XDECREF(generator_heap->var_iter_cb);
    generator_heap->var_iter_cb = NULL;
    Py_XDECREF(generator_heap->var_cpl);
    generator_heap->var_cpl = NULL;
    Py_XDECREF(generator_heap->var_crt_order);
    generator_heap->var_crt_order = NULL;
    Py_XDECREF(generator_heap->var_idx_type);
    generator_heap->var_idx_type = NULL;
    Py_XDECREF(generator_heap->var_name);
    generator_heap->var_name = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_attrlist);
    Py_DECREF(generator_heap->var_attrlist);
    generator_heap->var_attrlist = NULL;
    CHECK_OBJECT(generator_heap->var_iter_cb);
    Py_DECREF(generator_heap->var_iter_cb);
    generator_heap->var_iter_cb = NULL;
    Py_XDECREF(generator_heap->var_cpl);
    generator_heap->var_cpl = NULL;
    Py_XDECREF(generator_heap->var_crt_order);
    generator_heap->var_crt_order = NULL;
    Py_XDECREF(generator_heap->var_idx_type);
    generator_heap->var_idx_type = NULL;
    Py_XDECREF(generator_heap->var_name);
    generator_heap->var_name = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter___context,
        module_h5py$_hl$attrs,
        mod_consts[88],
#if PYTHON_VERSION >= 0x350
        mod_consts[89],
#endif
        codeobj_228e8011bb48d8c13b564a28b7ab8af9,
        closure,
        1,
        sizeof(struct h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter___locals)
    );
}


static PyObject *impl_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__$$$function__1_iter_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_7ceb05021d75666ed96c0c2dbab55f01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ceb05021d75666ed96c0c2dbab55f01 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ceb05021d75666ed96c0c2dbab55f01)) {
        Py_XDECREF(cache_frame_7ceb05021d75666ed96c0c2dbab55f01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ceb05021d75666ed96c0c2dbab55f01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ceb05021d75666ed96c0c2dbab55f01 = MAKE_FUNCTION_FRAME(codeobj_7ceb05021d75666ed96c0c2dbab55f01, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ceb05021d75666ed96c0c2dbab55f01->m_type_description == NULL);
    frame_7ceb05021d75666ed96c0c2dbab55f01 = cache_frame_7ceb05021d75666ed96c0c2dbab55f01;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ceb05021d75666ed96c0c2dbab55f01);
    assert(Py_REFCNT(frame_7ceb05021d75666ed96c0c2dbab55f01) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[91]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        frame_7ceb05021d75666ed96c0c2dbab55f01->m_frame.f_lineno = 263;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[92], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 263;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_7ceb05021d75666ed96c0c2dbab55f01->m_frame.f_lineno = 263;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ceb05021d75666ed96c0c2dbab55f01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ceb05021d75666ed96c0c2dbab55f01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ceb05021d75666ed96c0c2dbab55f01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ceb05021d75666ed96c0c2dbab55f01,
        type_description_1,
        par_name,
        par_args,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_7ceb05021d75666ed96c0c2dbab55f01 == cache_frame_7ceb05021d75666ed96c0c2dbab55f01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ceb05021d75666ed96c0c2dbab55f01);
        cache_frame_7ceb05021d75666ed96c0c2dbab55f01 = NULL;
    }

    assertFrameObject(frame_7ceb05021d75666ed96c0c2dbab55f01);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__10___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_a3108b63da14ba7cfe3f9515645ced1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3108b63da14ba7cfe3f9515645ced1d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a3108b63da14ba7cfe3f9515645ced1d)) {
        Py_XDECREF(cache_frame_a3108b63da14ba7cfe3f9515645ced1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3108b63da14ba7cfe3f9515645ced1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3108b63da14ba7cfe3f9515645ced1d = MAKE_FUNCTION_FRAME(codeobj_a3108b63da14ba7cfe3f9515645ced1d, module_h5py$_hl$attrs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a3108b63da14ba7cfe3f9515645ced1d->m_type_description == NULL);
    frame_a3108b63da14ba7cfe3f9515645ced1d = cache_frame_a3108b63da14ba7cfe3f9515645ced1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a3108b63da14ba7cfe3f9515645ced1d);
    assert(Py_REFCNT(frame_a3108b63da14ba7cfe3f9515645ced1d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_a3108b63da14ba7cfe3f9515645ced1d->m_frame.f_lineno = 281;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a3108b63da14ba7cfe3f9515645ced1d->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_a3108b63da14ba7cfe3f9515645ced1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3108b63da14ba7cfe3f9515645ced1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3108b63da14ba7cfe3f9515645ced1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3108b63da14ba7cfe3f9515645ced1d,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_a3108b63da14ba7cfe3f9515645ced1d == cache_frame_a3108b63da14ba7cfe3f9515645ced1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a3108b63da14ba7cfe3f9515645ced1d);
        cache_frame_a3108b63da14ba7cfe3f9515645ced1d = NULL;
    }

    assertFrameObject(frame_a3108b63da14ba7cfe3f9515645ced1d);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h5py$_hl$attrs$$$function__11___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7e0bd5184f28ba96e0f39d5aa35b0c28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28)) {
        Py_XDECREF(cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28 = MAKE_FUNCTION_FRAME(codeobj_7e0bd5184f28ba96e0f39d5aa35b0c28, module_h5py$_hl$attrs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28->m_type_description == NULL);
    frame_7e0bd5184f28ba96e0f39d5aa35b0c28 = cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e0bd5184f28ba96e0f39d5aa35b0c28);
    assert(Py_REFCNT(frame_7e0bd5184f28ba96e0f39d5aa35b0c28) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
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
    tmp_return_value = mod_consts[94];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_id_arg_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[95];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_id_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_id_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        Py_DECREF(tmp_id_arg_1);
        assert(!(tmp_mod_expr_right_1 == NULL));
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_7e0bd5184f28ba96e0f39d5aa35b0c28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e0bd5184f28ba96e0f39d5aa35b0c28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e0bd5184f28ba96e0f39d5aa35b0c28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e0bd5184f28ba96e0f39d5aa35b0c28,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7e0bd5184f28ba96e0f39d5aa35b0c28 == cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28);
        cache_frame_7e0bd5184f28ba96e0f39d5aa35b0c28 = NULL;
    }

    assertFrameObject(frame_7e0bd5184f28ba96e0f39d5aa35b0c28);

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



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__10___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__10___contains__,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_a3108b63da14ba7cfe3f9515645ced1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__11___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__11___repr__,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_7e0bd5184f28ba96e0f39d5aa35b0c28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__1___init__,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_27fdfe84b7197a0686790d0d21ba95ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__2___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__2___getitem__,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_f56c9dfc779c21f2bd602efb77fc839c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__3_get_id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__3_get_id,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_b32e43a9c290a3041719a09d0c697452,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__4___setitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__4___setitem__,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_c6aa27748508ad57cd43983e6ad41de9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__5___delitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__5___delitem__,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_a43c6606041b328c5e5469e73fac6720,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__6_create(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__6_create,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_ea0c3951399dc533ab9131d446243597,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__7_modify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__7_modify,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_b6af080cfa509a97476fc2a51a22c2ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__8___len__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__8___len__,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_e0902327bc3f5a703f2ec0eef63ee465,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__9___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__9___iter__,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_228e8011bb48d8c13b564a28b7ab8af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__$$$function__1_iter_cb(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__$$$function__1_iter_cb,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_7ceb05021d75666ed96c0c2dbab55f01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_h5py$_hl$attrs,
        mod_consts[75],
        closure,
        2
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

function_impl_code functable_h5py$_hl$attrs[] = {
    impl_h5py$_hl$attrs$$$function__9___iter__$$$genobj__1___iter__$$$function__1_iter_cb,
    impl_h5py$_hl$attrs$$$function__1___init__,
    impl_h5py$_hl$attrs$$$function__2___getitem__,
    impl_h5py$_hl$attrs$$$function__3_get_id,
    impl_h5py$_hl$attrs$$$function__4___setitem__,
    impl_h5py$_hl$attrs$$$function__5___delitem__,
    impl_h5py$_hl$attrs$$$function__6_create,
    impl_h5py$_hl$attrs$$$function__7_modify,
    impl_h5py$_hl$attrs$$$function__8___len__,
    impl_h5py$_hl$attrs$$$function__9___iter__,
    impl_h5py$_hl$attrs$$$function__10___contains__,
    impl_h5py$_hl$attrs$$$function__11___repr__,
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

    function_impl_code *current = functable_h5py$_hl$attrs;
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

    if (offset > sizeof(functable_h5py$_hl$attrs) || offset < 0) {
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
        functable_h5py$_hl$attrs[offset],
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
        module_h5py$_hl$attrs,
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
PyObject *modulecode_h5py$_hl$attrs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h5py._hl.attrs");

    // Store the module for future use.
    module_h5py$_hl$attrs = module;

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
        PRINT_STRING("h5py._hl.attrs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("h5py._hl.attrs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("h5py._hl.attrs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inith5py$_hl$attrs\n");

    moduledict_h5py$_hl$attrs = MODULE_DICT(module_h5py$_hl$attrs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h5py$_hl$attrs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h5py$_hl$attrs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[103]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h5py$_hl$attrs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h5py$_hl$attrs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h5py$_hl$attrs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h5py$_hl$attrs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_h5py$_hl$attrs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_8e0bfb6d5d379d9b36353089f87b440f;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *locals_h5py$_hl$attrs$$$class__1_AttributeManager_26 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c3fef7ce5a69529cc4f23bca115b8f48_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_2);
    }
    frame_8e0bfb6d5d379d9b36353089f87b440f = MAKE_MODULE_FRAME(codeobj_8e0bfb6d5d379d9b36353089f87b440f, module_h5py$_hl$attrs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e0bfb6d5d379d9b36353089f87b440f);
    assert(Py_REFCNT(frame_8e0bfb6d5d379d9b36353089f87b440f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[100], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[101], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_h5py$_hl$attrs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[45];
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 17;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_h5py$_hl$attrs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[45];
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 18;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[103];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_h5py$_hl$attrs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[104];
        tmp_level_value_3 = mod_consts[105];
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 20;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[83],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[83]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[52],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[52]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[10],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[10]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[3],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[3]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[81],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[81]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[103];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_h5py$_hl$attrs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[106];
        tmp_level_value_4 = mod_consts[69];
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 21;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[40],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[40];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_h5py$_hl$attrs;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[107];
        tmp_level_value_5 = mod_consts[69];
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 22;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[37],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[37]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[108],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[108]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[7],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[7]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[6],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[6]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[46],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[46]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[109];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_h5py$_hl$attrs;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[110];
        tmp_level_value_6 = mod_consts[69];
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 23;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_h5py$_hl$attrs,
                mod_consts[43],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_19);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[111]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[112]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_20);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 26;

            goto try_except_handler_3;
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
        tmp_subscript_value_1 = mod_consts[45];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[113]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[113]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[114];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 26;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[115]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
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
        tmp_mod_expr_left_1 = mod_consts[116];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[117];
        tmp_getattr_default_1 = mod_consts[118];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[117]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 26;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_h5py$_hl$attrs$$$class__1_AttributeManager_26 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        frame_c3fef7ce5a69529cc4f23bca115b8f48_2 = MAKE_CLASS_FRAME(codeobj_c3fef7ce5a69529cc4f23bca115b8f48, module_h5py$_hl$attrs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c3fef7ce5a69529cc4f23bca115b8f48_2);
        assert(Py_REFCNT(frame_c3fef7ce5a69529cc4f23bca115b8f48_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_h5py$_hl$attrs$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[123], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = PyObject_GetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[108]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_1 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__2___getitem__();

            frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_h5py$_hl$attrs$$$function__3_get_id();

        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_3 = PyObject_GetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[108]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_2 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__4___setitem__();

            frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_4 = PyObject_GetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[108]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_3 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__5___delitem__();

            frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame.f_lineno = 105;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[132];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_h5py$_hl$attrs$$$function__6_create(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_h5py$_hl$attrs$$$function__7_modify();

        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[134], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_5 = PyObject_GetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[108]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_4 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__8___len__();

            frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_h5py$_hl$attrs$$$function__9___iter__();

        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[88], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_6 = PyObject_GetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[108]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_5 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__10___contains__();

            frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame.f_lineno = 278;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_7 = PyObject_GetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[108]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_6 = MAKE_FUNCTION_h5py$_hl$attrs$$$function__11___repr__();

            frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame.f_lineno = 283;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c3fef7ce5a69529cc4f23bca115b8f48_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c3fef7ce5a69529cc4f23bca115b8f48_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c3fef7ce5a69529cc4f23bca115b8f48_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c3fef7ce5a69529cc4f23bca115b8f48_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c3fef7ce5a69529cc4f23bca115b8f48_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
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


                exception_lineno = 26;

                goto try_except_handler_5;
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
        tmp_res = PyObject_SetItem(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26, mod_consts[142], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[114];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_h5py$_hl$attrs$$$class__1_AttributeManager_26;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame.f_lineno = 26;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26);
        locals_h5py$_hl$attrs$$$class__1_AttributeManager_26 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_h5py$_hl$attrs$$$class__1_AttributeManager_26);
        locals_h5py$_hl$attrs$$$class__1_AttributeManager_26 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 26;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_26);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e0bfb6d5d379d9b36353089f87b440f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e0bfb6d5d379d9b36353089f87b440f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e0bfb6d5d379d9b36353089f87b440f, exception_lineno);
    }



    assertFrameObject(frame_8e0bfb6d5d379d9b36353089f87b440f);

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
    PGO_onModuleExit("h5py._hl.attrs", false);

    Py_INCREF(module_h5py$_hl$attrs);
    return module_h5py$_hl$attrs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h5py$_hl$attrs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("h5py$_hl$attrs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
