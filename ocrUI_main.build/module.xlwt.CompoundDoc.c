/* Generated code for Python module 'xlwt.CompoundDoc'
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

/* The "module_xlwt$CompoundDoc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_xlwt$CompoundDoc;
PyDictObject *moduledict_xlwt$CompoundDoc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[114];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[114];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("xlwt.CompoundDoc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 114; i++) {
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
void checkModuleConstants_xlwt$CompoundDoc(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 114; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b88fc01ac391168722bb852e46e8c03a;
static PyCodeObject *codeobj_27b84236e5927c196a17ef9bcd48235c;
static PyCodeObject *codeobj_76ed33afe618f072e8c9567b7a0357c5;
static PyCodeObject *codeobj_e253bfc0425773c3c0a240acf443e67b;
static PyCodeObject *codeobj_17610a8d1433bc30ad558d9845e783ce;
static PyCodeObject *codeobj_a5be244dc2803008b0087998b057b2f5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[107]); CHECK_OBJECT(module_filename_obj);
    codeobj_b88fc01ac391168722bb852e46e8c03a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[108], mod_consts[108], NULL, NULL, 0, 0, 0);
    codeobj_27b84236e5927c196a17ef9bcd48235c = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[109], NULL, 1, 0, 0);
    codeobj_76ed33afe618f072e8c9567b7a0357c5 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[110], NULL, 1, 0, 0);
    codeobj_e253bfc0425773c3c0a240acf443e67b = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[111], NULL, 1, 0, 0);
    codeobj_17610a8d1433bc30ad558d9845e783ce = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[112], NULL, 1, 0, 0);
    codeobj_a5be244dc2803008b0087998b057b2f5 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[113], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__1___init__();


static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__2__build_directory();


static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__3__build_sat();


static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__4__build_header();


static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__5_save();


// The module function definitions.
static PyObject *impl_xlwt$CompoundDoc$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_27b84236e5927c196a17ef9bcd48235c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_27b84236e5927c196a17ef9bcd48235c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27b84236e5927c196a17ef9bcd48235c)) {
        Py_XDECREF(cache_frame_27b84236e5927c196a17ef9bcd48235c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27b84236e5927c196a17ef9bcd48235c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27b84236e5927c196a17ef9bcd48235c = MAKE_FUNCTION_FRAME(codeobj_27b84236e5927c196a17ef9bcd48235c, module_xlwt$CompoundDoc, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27b84236e5927c196a17ef9bcd48235c->m_type_description == NULL);
    frame_27b84236e5927c196a17ef9bcd48235c = cache_frame_27b84236e5927c196a17ef9bcd48235c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_27b84236e5927c196a17ef9bcd48235c);
    assert(Py_REFCNT(frame_27b84236e5927c196a17ef9bcd48235c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[1];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[3], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[1];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[4], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[5], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[1];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[6], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[1];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[7], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[8], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = mod_consts[1];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[9], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27b84236e5927c196a17ef9bcd48235c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27b84236e5927c196a17ef9bcd48235c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27b84236e5927c196a17ef9bcd48235c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27b84236e5927c196a17ef9bcd48235c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_27b84236e5927c196a17ef9bcd48235c == cache_frame_27b84236e5927c196a17ef9bcd48235c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27b84236e5927c196a17ef9bcd48235c);
        cache_frame_27b84236e5927c196a17ef9bcd48235c = NULL;
    }

    assertFrameObject(frame_27b84236e5927c196a17ef9bcd48235c);

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


static PyObject *impl_xlwt$CompoundDoc$$$function__2__build_directory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_dentry_name = NULL;
    PyObject *var_dentry_name_sz = NULL;
    PyObject *var_dentry_name_pad = NULL;
    PyObject *var_dentry_stream_sz = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    PyObject *tmp_inplace_assign_3__value = NULL;
    struct Nuitka_FrameObject *frame_76ed33afe618f072e8c9567b7a0357c5;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_76ed33afe618f072e8c9567b7a0357c5 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_76ed33afe618f072e8c9567b7a0357c5)) {
        Py_XDECREF(cache_frame_76ed33afe618f072e8c9567b7a0357c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76ed33afe618f072e8c9567b7a0357c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76ed33afe618f072e8c9567b7a0357c5 = MAKE_FUNCTION_FRAME(codeobj_76ed33afe618f072e8c9567b7a0357c5, module_xlwt$CompoundDoc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76ed33afe618f072e8c9567b7a0357c5->m_type_description == NULL);
    frame_76ed33afe618f072e8c9567b7a0357c5 = cache_frame_76ed33afe618f072e8c9567b7a0357c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76ed33afe618f072e8c9567b7a0357c5);
    assert(Py_REFCNT(frame_76ed33afe618f072e8c9567b7a0357c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[10];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_encoding_value_1;
        tmp_str_arg_value_1 = mod_consts[11];
        tmp_encoding_value_1 = mod_consts[12];
        tmp_assign_source_1 = UNICODE_ENCODE2(tmp_str_arg_value_1, tmp_encoding_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
        assert(var_dentry_name == NULL);
        var_dentry_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_dentry_name);
        tmp_len_arg_1 = var_dentry_name;
        tmp_assign_source_2 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_dentry_name_sz == NULL);
        var_dentry_name_sz = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        nuitka_digit tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        tmp_sub_expr_left_1 = 64;
        CHECK_OBJECT(var_dentry_name_sz);
        tmp_sub_expr_right_1 = var_dentry_name_sz;
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_DIGIT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        assert(!(tmp_mult_expr_right_1 == NULL));
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_BYTES_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_dentry_name_pad == NULL);
        var_dentry_name_pad = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[16];
        CHECK_OBJECT(var_dentry_name);
        tmp_add_expr_left_1 = var_dentry_name;
        CHECK_OBJECT(var_dentry_name_pad);
        tmp_add_expr_right_1 = var_dentry_name_pad;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 59;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_dentry_name_sz);
        tmp_args_element_value_3 = var_dentry_name_sz;
        tmp_args_element_value_4 = mod_consts[17];
        tmp_args_element_value_5 = mod_consts[18];
        tmp_args_element_value_6 = mod_consts[19];
        tmp_args_element_value_7 = mod_consts[19];
        tmp_args_element_value_8 = mod_consts[18];
        tmp_args_element_value_9 = mod_consts[20];
        tmp_args_element_value_10 = mod_consts[20];
        tmp_args_element_value_11 = mod_consts[20];
        tmp_args_element_value_12 = mod_consts[20];
        tmp_args_element_value_13 = mod_consts[20];
        tmp_args_element_value_14 = mod_consts[20];
        tmp_args_element_value_15 = mod_consts[20];
        tmp_args_element_value_16 = mod_consts[20];
        tmp_args_element_value_17 = mod_consts[20];
        tmp_args_element_value_18 = mod_consts[21];
        tmp_args_element_value_19 = mod_consts[20];
        tmp_args_element_value_20 = mod_consts[20];
        frame_76ed33afe618f072e8c9567b7a0357c5->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS20(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_2 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_encoding_value_2;
        tmp_str_arg_value_2 = mod_consts[22];
        tmp_encoding_value_2 = mod_consts[12];
        tmp_assign_source_6 = UNICODE_ENCODE2(tmp_str_arg_value_2, tmp_encoding_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dentry_name;
            assert(old != NULL);
            var_dentry_name = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_dentry_name);
        tmp_len_arg_2 = var_dentry_name;
        tmp_assign_source_7 = BUILTIN_LEN(tmp_len_arg_2);
        assert(!(tmp_assign_source_7 == NULL));
        {
            PyObject *old = var_dentry_name_sz;
            assert(old != NULL);
            var_dentry_name_sz = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        nuitka_digit tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        tmp_mult_expr_left_2 = mod_consts[13];
        tmp_sub_expr_left_2 = 64;
        CHECK_OBJECT(var_dentry_name_sz);
        tmp_sub_expr_right_2 = var_dentry_name_sz;
        tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_DIGIT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        assert(!(tmp_mult_expr_right_2 == NULL));
        tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_BYTES_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        assert(!(tmp_assign_source_8 == NULL));
        {
            PyObject *old = var_dentry_name_pad;
            assert(old != NULL);
            var_dentry_name_pad = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
        assert(var_dentry_stream_sz == NULL);
        var_dentry_stream_sz = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_21 = mod_consts[16];
        CHECK_OBJECT(var_dentry_name);
        tmp_add_expr_left_2 = var_dentry_name;
        CHECK_OBJECT(var_dentry_name_pad);
        tmp_add_expr_right_2 = var_dentry_name_pad;
        tmp_args_element_value_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 84;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_dentry_name_sz);
        tmp_args_element_value_23 = var_dentry_name_sz;
        tmp_args_element_value_24 = mod_consts[24];
        tmp_args_element_value_25 = mod_consts[18];
        tmp_args_element_value_26 = mod_consts[19];
        tmp_args_element_value_27 = mod_consts[19];
        tmp_args_element_value_28 = mod_consts[19];
        tmp_args_element_value_29 = mod_consts[20];
        tmp_args_element_value_30 = mod_consts[20];
        tmp_args_element_value_31 = mod_consts[20];
        tmp_args_element_value_32 = mod_consts[20];
        tmp_args_element_value_33 = mod_consts[20];
        tmp_args_element_value_34 = mod_consts[20];
        tmp_args_element_value_35 = mod_consts[20];
        tmp_args_element_value_36 = mod_consts[20];
        tmp_args_element_value_37 = mod_consts[20];
        tmp_args_element_value_38 = mod_consts[20];
        CHECK_OBJECT(var_dentry_stream_sz);
        tmp_args_element_value_39 = var_dentry_stream_sz;
        tmp_args_element_value_40 = mod_consts[20];
        frame_76ed33afe618f072e8c9567b7a0357c5->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_ARGS20(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_3 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    Py_XDECREF(var_dentry_name);
    var_dentry_name = NULL;

    Py_XDECREF(var_dentry_name_sz);
    var_dentry_name_sz = NULL;

    Py_XDECREF(var_dentry_name_pad);
    var_dentry_name_pad = NULL;

    Py_XDECREF(var_dentry_stream_sz);
    var_dentry_stream_sz = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooNNNNNNo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_3__value == NULL);
        tmp_inplace_assign_3__value = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(tmp_inplace_assign_3__value);
        tmp_iadd_expr_left_3 = tmp_inplace_assign_3__value;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_4;
        }
        frame_76ed33afe618f072e8c9567b7a0357c5->m_frame.f_lineno = 109;
        tmp_mult_expr_left_3 = CALL_METHOD_WITH_ARGS20(
            tmp_called_instance_1,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_4;
        }
        tmp_mult_expr_right_3 = mod_consts[24];
        tmp_iadd_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_4;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = tmp_iadd_expr_left_3;
        tmp_inplace_assign_3__value = tmp_assign_source_13;

    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(tmp_inplace_assign_3__value);
        tmp_assattr_value_4 = tmp_inplace_assign_3__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[2], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooNNNNNNo";
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_3__value);
    Py_DECREF(tmp_inplace_assign_3__value);
    tmp_inplace_assign_3__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76ed33afe618f072e8c9567b7a0357c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76ed33afe618f072e8c9567b7a0357c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76ed33afe618f072e8c9567b7a0357c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76ed33afe618f072e8c9567b7a0357c5,
        type_description_1,
        par_self,
        var_dentry_name,
        var_dentry_name_sz,
        var_dentry_name_pad,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        var_dentry_stream_sz
    );


    // Release cached frame if used for exception.
    if (frame_76ed33afe618f072e8c9567b7a0357c5 == cache_frame_76ed33afe618f072e8c9567b7a0357c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76ed33afe618f072e8c9567b7a0357c5);
        cache_frame_76ed33afe618f072e8c9567b7a0357c5 = NULL;
    }

    assertFrameObject(frame_76ed33afe618f072e8c9567b7a0357c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    goto try_end_4;
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

    Py_XDECREF(var_dentry_name);
    var_dentry_name = NULL;
    Py_XDECREF(var_dentry_name_sz);
    var_dentry_name_sz = NULL;
    Py_XDECREF(var_dentry_name_pad);
    var_dentry_name_pad = NULL;
    Py_XDECREF(var_dentry_stream_sz);
    var_dentry_stream_sz = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_inplace_assign_3__value);
    Py_DECREF(tmp_inplace_assign_3__value);
    tmp_inplace_assign_3__value = NULL;
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


static PyObject *impl_xlwt$CompoundDoc$$$function__3__build_sat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_book_sect_count = NULL;
    PyObject *var_dir_sect_count = NULL;
    PyObject *var_total_sect_count = NULL;
    PyObject *var_SAT_sect_count = NULL;
    PyObject *var_MSAT_sect_count = NULL;
    PyObject *var_SAT_sect_count_limit = NULL;
    PyObject *var_SAT = NULL;
    PyObject *var_sect = NULL;
    PyObject *var_MSAT_1st = NULL;
    PyObject *var_i = NULL;
    PyObject *var_SAT_sect_num = NULL;
    PyObject *var_MSAT_2nd = NULL;
    PyObject *var_msat_sect = NULL;
    PyObject *var_sid_num = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_17610a8d1433bc30ad558d9845e783ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_17610a8d1433bc30ad558d9845e783ce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_17610a8d1433bc30ad558d9845e783ce)) {
        Py_XDECREF(cache_frame_17610a8d1433bc30ad558d9845e783ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17610a8d1433bc30ad558d9845e783ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17610a8d1433bc30ad558d9845e783ce = MAKE_FUNCTION_FRAME(codeobj_17610a8d1433bc30ad558d9845e783ce, module_xlwt$CompoundDoc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17610a8d1433bc30ad558d9845e783ce->m_type_description == NULL);
    frame_17610a8d1433bc30ad558d9845e783ce = cache_frame_17610a8d1433bc30ad558d9845e783ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17610a8d1433bc30ad558d9845e783ce);
    assert(Py_REFCNT(frame_17610a8d1433bc30ad558d9845e783ce) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_rshift_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_1 = mod_consts[26];
        tmp_assign_source_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_book_sect_count == NULL);
        var_book_sect_count = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_2 = mod_consts[26];
        tmp_assign_source_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_OBJECT(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dir_sect_count == NULL);
        var_dir_sect_count = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_book_sect_count);
        tmp_add_expr_left_1 = var_book_sect_count;
        CHECK_OBJECT(var_dir_sect_count);
        tmp_add_expr_right_1 = var_dir_sect_count;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_sect_count == NULL);
        var_total_sect_count = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[20];
        assert(var_SAT_sect_count == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_SAT_sect_count = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[20];
        assert(var_MSAT_sect_count == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_MSAT_sect_count = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[27];
        assert(var_SAT_sect_count_limit == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_SAT_sect_count_limit = tmp_assign_source_6;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_total_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_total_sect_count;
        tmp_mult_expr_left_1 = mod_consts[29];
        if (var_SAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_1 = var_SAT_sect_count;
        tmp_cmp_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (var_SAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_SAT_sect_count;
        if (var_SAT_sect_count_limit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = var_SAT_sect_count_limit;
        tmp_or_right_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooo";
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_SAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_SAT_sect_count;
        tmp_iadd_expr_right_1 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_1;
        var_SAT_sect_count = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_total_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_total_sect_count;
        tmp_iadd_expr_right_2 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_2;
        var_total_sect_count = tmp_assign_source_8;

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_SAT_sect_count);
        tmp_cmp_expr_left_3 = var_SAT_sect_count;
        if (var_SAT_sect_count_limit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = var_SAT_sect_count_limit;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_MSAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_3 = var_MSAT_sect_count;
        tmp_iadd_expr_right_3 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_3;
        var_MSAT_sect_count = tmp_assign_source_9;

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        CHECK_OBJECT(var_total_sect_count);
        tmp_iadd_expr_left_4 = var_total_sect_count;
        tmp_iadd_expr_right_4 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_4;
        var_total_sect_count = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        if (var_SAT_sect_count_limit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_5 = var_SAT_sect_count_limit;
        tmp_iadd_expr_right_5 = mod_consts[33];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_5;
        var_SAT_sect_count_limit = tmp_assign_source_11;

    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_mult_expr_left_3, 0, tmp_list_element_1);
        tmp_mult_expr_right_3 = mod_consts[29];
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        assert(!(tmp_mult_expr_left_2 == NULL));
        if (var_SAT_sect_count == NULL) {
            Py_DECREF(tmp_mult_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_2 = var_SAT_sect_count;
        tmp_assign_source_12 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SAT == NULL);
        var_SAT = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[20];
        assert(var_sect == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_sect = tmp_assign_source_13;
    }
    loop_start_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_sect;
        if (var_book_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_1 = var_book_sect_count;
        tmp_sub_expr_right_1 = mod_consts[18];
        tmp_cmp_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sect == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_sect;
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 145;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_2 = var_sect;
        tmp_add_expr_right_2 = mod_consts[18];
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_SAT;
        if (var_sect == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = var_sect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_6 = var_sect;
        tmp_iadd_expr_right_6 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_iadd_expr_left_6;
        var_sect = tmp_assign_source_14;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 144;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sect == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_sect;
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 148;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_SAT;
        if (var_sect == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = var_sect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_7 = var_sect;
        tmp_iadd_expr_right_7 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_7;
        var_sect = tmp_assign_source_15;

    }
    loop_start_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_5 = var_sect;
        if (var_book_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_3 = var_book_sect_count;
        if (var_MSAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_3 = var_MSAT_sect_count;
        tmp_cmp_expr_right_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_3;
    branch_no_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[8]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[38]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sect == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_sect;
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 153;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[41]);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_SAT;
        if (var_sect == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = var_sect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_8 = var_sect;
        tmp_iadd_expr_right_8 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_8;
        var_sect = tmp_assign_source_16;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    loop_start_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = var_sect;
        if (var_book_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_5 = var_book_sect_count;
        if (var_MSAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_5 = var_MSAT_sect_count;
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT_sect_count == NULL) {
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_4 = var_SAT_sect_count;
        tmp_cmp_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_end_4;
    branch_no_5:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[5]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[38]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sect == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_sect;
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 158;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_self;
        tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[42]);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = var_SAT;
        if (var_sect == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = var_sect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_9 = var_sect;
        tmp_iadd_expr_right_9 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_9;
        var_sect = tmp_assign_source_17;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 157;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_4;
    loop_end_4:;
    loop_start_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_7 = var_sect;
        if (var_book_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_8 = var_book_sect_count;
        if (var_MSAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_8 = var_MSAT_sect_count;
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT_sect_count == NULL) {
            Py_DECREF(tmp_add_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_7 = var_SAT_sect_count;
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_dir_sect_count == NULL) {
            Py_DECREF(tmp_add_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_6 = var_dir_sect_count;
        tmp_sub_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[18];
        tmp_cmp_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_5 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    goto loop_end_5;
    branch_no_6:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[3]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[38]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sect == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_sect;
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 163;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_9 = var_sect;
        tmp_add_expr_right_9 = mod_consts[18];
        tmp_ass_subvalue_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = var_SAT;
        if (var_sect == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_5 = var_sect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_10 = var_sect;
        tmp_iadd_expr_right_10 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_10;
        var_sect = tmp_assign_source_18;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 162;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_5;
    loop_end_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[3]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[38]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sect == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_sect;
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 166;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = par_self;
        tmp_ass_subvalue_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[40]);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_SAT == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = var_SAT;
        if (var_sect == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_6 = var_sect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        if (var_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_11 = var_sect;
        tmp_iadd_expr_right_11 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_11;
        var_sect = tmp_assign_source_19;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[15]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[44];
        if (var_SAT_sect_count == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_4 = var_SAT_sect_count;
        tmp_mult_expr_right_4 = mod_consts[29];
        tmp_mod_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (var_SAT == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_SAT;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_value_1 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_21;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = par_self;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[34]);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_5 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_mult_expr_left_5, 0, tmp_list_element_2);
        tmp_mult_expr_right_5 = mod_consts[27];
        tmp_assign_source_20 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        assert(!(tmp_assign_source_20 == NULL));
        assert(var_MSAT_1st == NULL);
        var_MSAT_1st = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_22;
        tmp_called_value_7 = (PyObject *)&PyZip_Type;
        tmp_args_element_value_7 = mod_consts[45];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[5]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_17610a8d1433bc30ad558d9845e783ce->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_21;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 173;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 173;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 173;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_25;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 173;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 173;
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
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_26;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_SAT_sect_num;
            var_SAT_sect_num = tmp_assign_source_27;
            Py_INCREF(var_SAT_sect_num);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(var_SAT_sect_num);
        tmp_ass_subvalue_7 = var_SAT_sect_num;
        if (var_MSAT_1st == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_7 = var_MSAT_1st;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_7 = var_i;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 173;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_6;
    loop_end_6:;
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[15]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = mod_consts[48];
        if (var_MSAT_1st == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_2 = var_MSAT_1st;
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_assattr_value_2 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_expression_value_24;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_self;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[34]);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_mult_expr_left_7, 0, tmp_list_element_3);
        tmp_mult_expr_right_7 = mod_consts[29];
        tmp_mult_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        assert(!(tmp_mult_expr_left_6 == NULL));
        if (var_MSAT_sect_count == NULL) {
            Py_DECREF(tmp_mult_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_6 = var_MSAT_sect_count;
        tmp_assign_source_28 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_MSAT_2nd == NULL);
        var_MSAT_2nd = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (var_MSAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = var_MSAT_sect_count;
        tmp_cmp_expr_right_8 = mod_consts[20];
        tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        int tmp_ass_subscript_res_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_self;
        tmp_ass_subvalue_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[40]);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_MSAT_2nd);
        tmp_ass_subscribed_8 = var_MSAT_2nd;
        tmp_ass_subscript_8 = mod_consts[19];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_8, tmp_ass_subscript_8, -1, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[27];
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_29;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[20];
        assert(var_msat_sect == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_msat_sect = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[20];
        assert(var_sid_num == NULL);
        Py_INCREF(tmp_assign_source_31);
        var_sid_num = tmp_assign_source_31;
    }
    loop_start_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = var_i;
        if (var_SAT_sect_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_9 = var_SAT_sect_count;
        tmp_operand_value_6 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    goto loop_end_7;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        if (var_sid_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_10 = var_sid_num;
        tmp_add_expr_right_10 = mod_consts[18];
        tmp_mod_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_mod_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = mod_consts[29];
        tmp_cmp_expr_left_10 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_left_2);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = mod_consts[20];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        if (var_msat_sect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_12 = var_msat_sect;
        tmp_iadd_expr_right_12 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = tmp_iadd_expr_left_12;
        var_msat_sect = tmp_assign_source_32;

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_msat_sect);
        tmp_cmp_expr_left_11 = var_msat_sect;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[8]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[8]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msat_sect);
        tmp_subscript_value_1 = var_msat_sect;
        tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_MSAT_2nd == NULL) {
            Py_DECREF(tmp_ass_subvalue_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = var_MSAT_2nd;
        if (var_sid_num == NULL) {
            Py_DECREF(tmp_ass_subvalue_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_9 = var_sid_num;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_self;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[5]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_i == NULL) {
            Py_DECREF(tmp_expression_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = var_i;
        tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_ass_subvalue_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_MSAT_2nd == NULL) {
            Py_DECREF(tmp_ass_subvalue_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_10 = var_MSAT_2nd;
        if (var_sid_num == NULL) {
            Py_DECREF(tmp_ass_subvalue_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_10 = var_sid_num;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        Py_DECREF(tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_13 = var_i;
        tmp_iadd_expr_right_13 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = tmp_iadd_expr_left_13;
        var_i = tmp_assign_source_33;

    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        if (var_sid_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_14 = var_sid_num;
        tmp_iadd_expr_right_14 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = tmp_iadd_expr_left_14;
        var_sid_num = tmp_assign_source_34;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 184;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_7;
    loop_end_7:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[15]);
        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_3 = mod_consts[44];
        if (var_MSAT_sect_count == NULL) {
            Py_DECREF(tmp_dircall_arg1_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_8 = var_MSAT_sect_count;
        tmp_mult_expr_right_8 = mod_consts[29];
        tmp_mod_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_mod_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_3);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_3);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_3, 0, tmp_tuple_element_2);
        if (var_MSAT_2nd == NULL) {
            Py_DECREF(tmp_dircall_arg1_3);
            Py_DECREF(tmp_dircall_arg2_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_3 = var_MSAT_2nd;
        Py_INCREF(tmp_dircall_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_assattr_value_3 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17610a8d1433bc30ad558d9845e783ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17610a8d1433bc30ad558d9845e783ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17610a8d1433bc30ad558d9845e783ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17610a8d1433bc30ad558d9845e783ce,
        type_description_1,
        par_self,
        var_book_sect_count,
        var_dir_sect_count,
        var_total_sect_count,
        var_SAT_sect_count,
        var_MSAT_sect_count,
        var_SAT_sect_count_limit,
        var_SAT,
        var_sect,
        var_MSAT_1st,
        var_i,
        var_SAT_sect_num,
        var_MSAT_2nd,
        var_msat_sect,
        var_sid_num
    );


    // Release cached frame if used for exception.
    if (frame_17610a8d1433bc30ad558d9845e783ce == cache_frame_17610a8d1433bc30ad558d9845e783ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17610a8d1433bc30ad558d9845e783ce);
        cache_frame_17610a8d1433bc30ad558d9845e783ce = NULL;
    }

    assertFrameObject(frame_17610a8d1433bc30ad558d9845e783ce);

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
    Py_XDECREF(var_book_sect_count);
    var_book_sect_count = NULL;
    Py_XDECREF(var_dir_sect_count);
    var_dir_sect_count = NULL;
    Py_XDECREF(var_total_sect_count);
    var_total_sect_count = NULL;
    Py_XDECREF(var_SAT_sect_count);
    var_SAT_sect_count = NULL;
    Py_XDECREF(var_MSAT_sect_count);
    var_MSAT_sect_count = NULL;
    Py_XDECREF(var_SAT_sect_count_limit);
    var_SAT_sect_count_limit = NULL;
    Py_XDECREF(var_SAT);
    var_SAT = NULL;
    CHECK_OBJECT(var_sect);
    Py_DECREF(var_sect);
    var_sect = NULL;
    Py_XDECREF(var_MSAT_1st);
    var_MSAT_1st = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_SAT_sect_num);
    var_SAT_sect_num = NULL;
    Py_XDECREF(var_MSAT_2nd);
    var_MSAT_2nd = NULL;
    Py_XDECREF(var_msat_sect);
    var_msat_sect = NULL;
    Py_XDECREF(var_sid_num);
    var_sid_num = NULL;
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

    Py_XDECREF(var_book_sect_count);
    var_book_sect_count = NULL;
    Py_XDECREF(var_dir_sect_count);
    var_dir_sect_count = NULL;
    Py_XDECREF(var_total_sect_count);
    var_total_sect_count = NULL;
    Py_XDECREF(var_SAT_sect_count);
    var_SAT_sect_count = NULL;
    Py_XDECREF(var_MSAT_sect_count);
    var_MSAT_sect_count = NULL;
    Py_XDECREF(var_SAT_sect_count_limit);
    var_SAT_sect_count_limit = NULL;
    Py_XDECREF(var_SAT);
    var_SAT = NULL;
    Py_XDECREF(var_sect);
    var_sect = NULL;
    Py_XDECREF(var_MSAT_1st);
    var_MSAT_1st = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_SAT_sect_num);
    var_SAT_sect_num = NULL;
    Py_XDECREF(var_MSAT_2nd);
    var_MSAT_2nd = NULL;
    Py_XDECREF(var_msat_sect);
    var_msat_sect = NULL;
    Py_XDECREF(var_sid_num);
    var_sid_num = NULL;
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


static PyObject *impl_xlwt$CompoundDoc$$$function__4__build_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_log_sect_size = NULL;
    PyObject *var_log_short_sect_size = NULL;
    PyObject *var_total_sat_sectors = NULL;
    PyObject *var_dir_start_sid = NULL;
    PyObject *var_min_stream_size = NULL;
    PyObject *var_ssat_start_sid = NULL;
    PyObject *var_total_ssat_sectors = NULL;
    PyObject *var_msat_start_sid = NULL;
    PyObject *var_total_msat_sectors = NULL;
    struct Nuitka_FrameObject *frame_e253bfc0425773c3c0a240acf443e67b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e253bfc0425773c3c0a240acf443e67b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e253bfc0425773c3c0a240acf443e67b)) {
        Py_XDECREF(cache_frame_e253bfc0425773c3c0a240acf443e67b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e253bfc0425773c3c0a240acf443e67b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e253bfc0425773c3c0a240acf443e67b = MAKE_FUNCTION_FRAME(codeobj_e253bfc0425773c3c0a240acf443e67b, module_xlwt$CompoundDoc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e253bfc0425773c3c0a240acf443e67b->m_type_description == NULL);
    frame_e253bfc0425773c3c0a240acf443e67b = cache_frame_e253bfc0425773c3c0a240acf443e67b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e253bfc0425773c3c0a240acf443e67b);
    assert(Py_REFCNT(frame_e253bfc0425773c3c0a240acf443e67b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 214;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log_sect_size == NULL);
        var_log_sect_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 215;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log_short_sect_size == NULL);
        var_log_short_sect_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[55];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_sat_sectors == NULL);
        var_total_sat_sectors = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[56];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 218;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[20];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 218;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dir_start_sid == NULL);
        var_dir_start_sid = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 220;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_min_stream_size == NULL);
        var_min_stream_size = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 221;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ssat_start_sid == NULL);
        var_ssat_start_sid = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 222;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_5,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_ssat_sectors == NULL);
        var_total_ssat_sectors = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 225;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_6,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msat_start_sid == NULL);
        var_msat_start_sid = tmp_assign_source_8;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[56];
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[8]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 227;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[20];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 227;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msat_start_sid == NULL);
        var_msat_start_sid = tmp_assign_source_9;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[15]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[55];
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[8]);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 229;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 229;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        frame_e253bfc0425773c3c0a240acf443e67b->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_msat_sectors == NULL);
        var_total_msat_sectors = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_assattr_target_1;
        tmp_bytes_arg_value_1 = mod_consts[10];
        tmp_list_element_1 = mod_consts[60];
        tmp_iterable_value_1 = MAKE_LIST_EMPTY(16);
        PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[61];
        PyList_SET_ITEM0(tmp_iterable_value_1, 1, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[62];
        PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[63];
        PyList_SET_ITEM0(tmp_iterable_value_1, 3, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[64];
        PyList_SET_ITEM0(tmp_iterable_value_1, 4, tmp_list_element_1);
        CHECK_OBJECT(var_log_sect_size);
        tmp_list_element_1 = var_log_sect_size;
        PyList_SET_ITEM0(tmp_iterable_value_1, 5, tmp_list_element_1);
        CHECK_OBJECT(var_log_short_sect_size);
        tmp_list_element_1 = var_log_short_sect_size;
        PyList_SET_ITEM0(tmp_iterable_value_1, 6, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[65];
        PyList_SET_ITEM0(tmp_iterable_value_1, 7, tmp_list_element_1);
        CHECK_OBJECT(var_total_sat_sectors);
        tmp_list_element_1 = var_total_sat_sectors;
        PyList_SET_ITEM0(tmp_iterable_value_1, 8, tmp_list_element_1);
        CHECK_OBJECT(var_dir_start_sid);
        tmp_list_element_1 = var_dir_start_sid;
        PyList_SET_ITEM0(tmp_iterable_value_1, 9, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[66];
        PyList_SET_ITEM0(tmp_iterable_value_1, 10, tmp_list_element_1);
        CHECK_OBJECT(var_min_stream_size);
        tmp_list_element_1 = var_min_stream_size;
        PyList_SET_ITEM0(tmp_iterable_value_1, 11, tmp_list_element_1);
        CHECK_OBJECT(var_ssat_start_sid);
        tmp_list_element_1 = var_ssat_start_sid;
        PyList_SET_ITEM0(tmp_iterable_value_1, 12, tmp_list_element_1);
        CHECK_OBJECT(var_total_ssat_sectors);
        tmp_list_element_1 = var_total_ssat_sectors;
        PyList_SET_ITEM0(tmp_iterable_value_1, 13, tmp_list_element_1);
        CHECK_OBJECT(var_msat_start_sid);
        tmp_list_element_1 = var_msat_start_sid;
        PyList_SET_ITEM0(tmp_iterable_value_1, 14, tmp_list_element_1);
        CHECK_OBJECT(var_total_msat_sectors);
        tmp_list_element_1 = var_total_msat_sectors;
        PyList_SET_ITEM0(tmp_iterable_value_1, 15, tmp_list_element_1);
        tmp_assattr_value_1 = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oNNNNNooNooNooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e253bfc0425773c3c0a240acf443e67b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e253bfc0425773c3c0a240acf443e67b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e253bfc0425773c3c0a240acf443e67b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e253bfc0425773c3c0a240acf443e67b,
        type_description_1,
        par_self,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        var_log_sect_size,
        var_log_short_sect_size,
        NULL,
        var_total_sat_sectors,
        var_dir_start_sid,
        NULL,
        var_min_stream_size,
        var_ssat_start_sid,
        var_total_ssat_sectors,
        var_msat_start_sid,
        var_total_msat_sectors
    );


    // Release cached frame if used for exception.
    if (frame_e253bfc0425773c3c0a240acf443e67b == cache_frame_e253bfc0425773c3c0a240acf443e67b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e253bfc0425773c3c0a240acf443e67b);
        cache_frame_e253bfc0425773c3c0a240acf443e67b = NULL;
    }

    assertFrameObject(frame_e253bfc0425773c3c0a240acf443e67b);

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
    CHECK_OBJECT(var_log_sect_size);
    Py_DECREF(var_log_sect_size);
    var_log_sect_size = NULL;
    CHECK_OBJECT(var_log_short_sect_size);
    Py_DECREF(var_log_short_sect_size);
    var_log_short_sect_size = NULL;
    CHECK_OBJECT(var_total_sat_sectors);
    Py_DECREF(var_total_sat_sectors);
    var_total_sat_sectors = NULL;
    CHECK_OBJECT(var_dir_start_sid);
    Py_DECREF(var_dir_start_sid);
    var_dir_start_sid = NULL;
    CHECK_OBJECT(var_min_stream_size);
    Py_DECREF(var_min_stream_size);
    var_min_stream_size = NULL;
    CHECK_OBJECT(var_ssat_start_sid);
    Py_DECREF(var_ssat_start_sid);
    var_ssat_start_sid = NULL;
    CHECK_OBJECT(var_total_ssat_sectors);
    Py_DECREF(var_total_ssat_sectors);
    var_total_ssat_sectors = NULL;
    CHECK_OBJECT(var_msat_start_sid);
    Py_DECREF(var_msat_start_sid);
    var_msat_start_sid = NULL;
    CHECK_OBJECT(var_total_msat_sectors);
    Py_DECREF(var_total_msat_sectors);
    var_total_msat_sectors = NULL;
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

    Py_XDECREF(var_log_sect_size);
    var_log_sect_size = NULL;
    Py_XDECREF(var_log_short_sect_size);
    var_log_short_sect_size = NULL;
    Py_XDECREF(var_total_sat_sectors);
    var_total_sat_sectors = NULL;
    Py_XDECREF(var_dir_start_sid);
    var_dir_start_sid = NULL;
    Py_XDECREF(var_min_stream_size);
    var_min_stream_size = NULL;
    Py_XDECREF(var_ssat_start_sid);
    var_ssat_start_sid = NULL;
    Py_XDECREF(var_total_ssat_sectors);
    var_total_ssat_sectors = NULL;
    Py_XDECREF(var_msat_start_sid);
    var_msat_start_sid = NULL;
    Py_XDECREF(var_total_msat_sectors);
    var_total_msat_sectors = NULL;
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


static PyObject *impl_xlwt$CompoundDoc$$$function__5_save(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file_name_or_filelike_obj = python_pars[1];
    PyObject *par_stream = python_pars[2];
    PyObject *var_padding = NULL;
    PyObject *var_f = NULL;
    nuitka_bool var_we_own_it = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_e = NULL;
    PyObject *var_chunk_size = NULL;
    PyObject *var_offset = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a5be244dc2803008b0087998b057b2f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_a5be244dc2803008b0087998b057b2f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a5be244dc2803008b0087998b057b2f5)) {
        Py_XDECREF(cache_frame_a5be244dc2803008b0087998b057b2f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5be244dc2803008b0087998b057b2f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5be244dc2803008b0087998b057b2f5 = MAKE_FUNCTION_FRAME(codeobj_a5be244dc2803008b0087998b057b2f5, module_xlwt$CompoundDoc, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5be244dc2803008b0087998b057b2f5->m_type_description == NULL);
    frame_a5be244dc2803008b0087998b057b2f5 = cache_frame_a5be244dc2803008b0087998b057b2f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5be244dc2803008b0087998b057b2f5);
    assert(Py_REFCNT(frame_a5be244dc2803008b0087998b057b2f5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        nuitka_digit tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_len_arg_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        tmp_sub_expr_left_1 = 4096;
        CHECK_OBJECT(par_stream);
        tmp_len_arg_1 = par_stream;
        tmp_mod_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = mod_consts[67];
        tmp_sub_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_DIGIT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        assert(!(tmp_mult_expr_right_1 == NULL));
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_BYTES_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_padding == NULL);
        var_padding = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_stream);
        tmp_len_arg_2 = par_stream;
        tmp_add_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_padding);
        tmp_len_arg_3 = var_padding;
        tmp_add_expr_right_1 = BUILTIN_LEN(tmp_len_arg_3);
        assert(!(tmp_add_expr_right_1 == NULL));
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_assattr_value_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[68]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 256;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[69]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 257;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[70]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_file_name_or_filelike_obj);
        tmp_assign_source_2 = par_file_name_or_filelike_obj;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_f = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_assign_source_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_f);
        tmp_expression_value_1 = var_f;
        tmp_attribute_value_1 = mod_consts[71];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_we_own_it = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        assert(var_we_own_it != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_1 = var_we_own_it == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_file_name_or_filelike_obj);
        tmp_open_filename_1 = par_file_name_or_filelike_obj;
        tmp_open_mode_1 = mod_consts[72];
        tmp_assign_source_4 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f;
            assert(old != NULL);
            var_f = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_f);
        tmp_expression_value_2 = var_f;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 263;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 263;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_f);
        tmp_expression_value_4 = var_f;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[71]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 264;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 264;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_f);
        tmp_called_instance_4 = var_f;
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_3 = par_stream;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 271;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[71], tmp_args_element_value_3);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooobooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a5be244dc2803008b0087998b057b2f5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a5be244dc2803008b0087998b057b2f5, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_IOError;
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_e);
        tmp_expression_value_6 = var_e;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[73]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = mod_consts[74];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 274;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a5be244dc2803008b0087998b057b2f5->m_frame) frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooobooo";
    goto try_except_handler_4;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[75];
        assert(var_chunk_size == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_chunk_size = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_4 = mod_consts[20];
        CHECK_OBJECT(par_stream);
        tmp_len_arg_4 = par_stream;
        tmp_args_element_value_5 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_chunk_size);
        tmp_args_element_value_6 = var_chunk_size;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooobooo";
                exception_lineno = 276;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_9;
            Py_INCREF(var_offset);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_7 = var_f;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[71]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }
        if (par_stream == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_8 = par_stream;
        CHECK_OBJECT(var_offset);
        tmp_args_element_value_9 = var_offset;
        if (var_chunk_size == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_10 = var_chunk_size;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 277;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooobooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 276;
        type_description_1 = "ooooobooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 270;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a5be244dc2803008b0087998b057b2f5->m_frame) frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooobooo";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_11;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_f;
        CHECK_OBJECT(var_padding);
        tmp_args_element_value_11 = var_padding;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 278;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[71], tmp_args_element_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_9;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_f;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[71]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[7]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 279;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 279;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_11;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_f;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[71]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[4]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 280;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 280;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_13;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_f;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[71]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[2]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 281;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 281;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        bool tmp_condition_result_4;
        assert(var_we_own_it != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_4 = var_we_own_it == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_12;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_f;
        frame_a5be244dc2803008b0087998b057b2f5->m_frame.f_lineno = 283;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[81]);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5be244dc2803008b0087998b057b2f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5be244dc2803008b0087998b057b2f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5be244dc2803008b0087998b057b2f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5be244dc2803008b0087998b057b2f5,
        type_description_1,
        par_self,
        par_file_name_or_filelike_obj,
        par_stream,
        var_padding,
        var_f,
        (int)var_we_own_it,
        var_e,
        var_chunk_size,
        var_offset
    );


    // Release cached frame if used for exception.
    if (frame_a5be244dc2803008b0087998b057b2f5 == cache_frame_a5be244dc2803008b0087998b057b2f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5be244dc2803008b0087998b057b2f5);
        cache_frame_a5be244dc2803008b0087998b057b2f5 = NULL;
    }

    assertFrameObject(frame_a5be244dc2803008b0087998b057b2f5);

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
    CHECK_OBJECT(var_padding);
    Py_DECREF(var_padding);
    var_padding = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    assert(var_we_own_it != NUITKA_BOOL_UNASSIGNED);
    var_we_own_it = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_chunk_size);
    var_chunk_size = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
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

    Py_XDECREF(var_padding);
    var_padding = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    var_we_own_it = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_chunk_size);
    var_chunk_size = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
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
    CHECK_OBJECT(par_file_name_or_filelike_obj);
    Py_DECREF(par_file_name_or_filelike_obj);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file_name_or_filelike_obj);
    Py_DECREF(par_file_name_or_filelike_obj);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_xlwt$CompoundDoc$$$function__1___init__,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_27b84236e5927c196a17ef9bcd48235c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_xlwt$CompoundDoc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__2__build_directory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_xlwt$CompoundDoc$$$function__2__build_directory,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_76ed33afe618f072e8c9567b7a0357c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_xlwt$CompoundDoc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__3__build_sat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_xlwt$CompoundDoc$$$function__3__build_sat,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_17610a8d1433bc30ad558d9845e783ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_xlwt$CompoundDoc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__4__build_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_xlwt$CompoundDoc$$$function__4__build_header,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_e253bfc0425773c3c0a240acf443e67b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_xlwt$CompoundDoc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_xlwt$CompoundDoc$$$function__5_save() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_xlwt$CompoundDoc$$$function__5_save,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_a5be244dc2803008b0087998b057b2f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_xlwt$CompoundDoc,
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

function_impl_code functable_xlwt$CompoundDoc[] = {
    impl_xlwt$CompoundDoc$$$function__1___init__,
    impl_xlwt$CompoundDoc$$$function__2__build_directory,
    impl_xlwt$CompoundDoc$$$function__3__build_sat,
    impl_xlwt$CompoundDoc$$$function__4__build_header,
    impl_xlwt$CompoundDoc$$$function__5_save,
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

    function_impl_code *current = functable_xlwt$CompoundDoc;
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

    if (offset > sizeof(functable_xlwt$CompoundDoc) || offset < 0) {
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
        functable_xlwt$CompoundDoc[offset],
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
        module_xlwt$CompoundDoc,
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
PyObject *modulecode_xlwt$CompoundDoc(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("xlwt.CompoundDoc");

    // Store the module for future use.
    module_xlwt$CompoundDoc = module;

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
        PRINT_STRING("xlwt.CompoundDoc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("xlwt.CompoundDoc: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("xlwt.CompoundDoc: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initxlwt$CompoundDoc\n");

    moduledict_xlwt$CompoundDoc = MODULE_DICT(module_xlwt$CompoundDoc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_xlwt$CompoundDoc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_xlwt$CompoundDoc,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[1]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_xlwt$CompoundDoc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_xlwt$CompoundDoc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_xlwt$CompoundDoc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_xlwt$CompoundDoc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_xlwt$CompoundDoc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_b88fc01ac391168722bb852e46e8c03a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
        UPDATE_STRING_DICT0(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_2);
    }
    frame_b88fc01ac391168722bb852e46e8c03a = MAKE_MODULE_FRAME(codeobj_b88fc01ac391168722bb852e46e8c03a, module_xlwt$CompoundDoc);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b88fc01ac391168722bb852e46e8c03a);
    assert(Py_REFCNT(frame_b88fc01ac391168722bb852e46e8c03a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[86], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_xlwt$CompoundDoc;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[20];
        frame_b88fc01ac391168722bb852e46e8c03a->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[88];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_xlwt$CompoundDoc;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[89];
        tmp_level_value_2 = mod_consts[18];
        frame_b88fc01ac391168722bb852e46e8c03a->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_xlwt$CompoundDoc,
                mod_consts[76],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[91], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[93], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[95], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[96], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[19];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[34], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[40], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[41], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_xlwt$CompoundDoc$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_xlwt$CompoundDoc$$$function__2__build_directory();

        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[68], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_xlwt$CompoundDoc$$$function__3__build_sat();

        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_xlwt$CompoundDoc$$$function__4__build_header();

        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_xlwt$CompoundDoc$$$function__5_save();

        tmp_res = PyDict_SetItem(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[92];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[106];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_b88fc01ac391168722bb852e46e8c03a->m_frame.f_lineno = 19;
            tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_9;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_8 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19);
        locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19 = NULL;
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

        Py_DECREF(locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19);
        locals_xlwt$CompoundDoc$$$class__1_XlsDoc_19 = NULL;
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
        exception_lineno = 19;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_8);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
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

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b88fc01ac391168722bb852e46e8c03a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b88fc01ac391168722bb852e46e8c03a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b88fc01ac391168722bb852e46e8c03a, exception_lineno);
    }



    assertFrameObject(frame_b88fc01ac391168722bb852e46e8c03a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("xlwt.CompoundDoc", false);

    Py_INCREF(module_xlwt$CompoundDoc);
    return module_xlwt$CompoundDoc;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_xlwt$CompoundDoc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("xlwt$CompoundDoc", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
