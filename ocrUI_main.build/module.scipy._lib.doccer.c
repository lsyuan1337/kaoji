/* Generated code for Python module 'scipy._lib.doccer'
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

/* The "module_scipy$_lib$doccer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$_lib$doccer;
PyDictObject *moduledict_scipy$_lib$doccer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[90];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[90];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy._lib.doccer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 90; i++) {
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
void checkModuleConstants_scipy$_lib$doccer(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 90; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_36a60492acdde2ac9a8b259cd51dfd07;
static PyCodeObject *codeobj_d1d977235d00ccac7ed27fe2fad5541f;
static PyCodeObject *codeobj_f11cfe85bf6acba9dd5fe6e5c2d3d746;
static PyCodeObject *codeobj_84196281160da7737aca717ee1f14089;
static PyCodeObject *codeobj_6a65a22e9b9923d3e19773d661909594;
static PyCodeObject *codeobj_3c6386e357537f3cd8490a9b0104fa40;
static PyCodeObject *codeobj_dc396025c10b42b1218b5696be23bbb3;
static PyCodeObject *codeobj_9eaf7b9294ff145faffe1f21b4cc2457;
static PyCodeObject *codeobj_c6bce3560ecb85e1852a3e44eb163992;
static PyCodeObject *codeobj_6e022d196cc7d5d845bf0b98aa69b2e0;
static PyCodeObject *codeobj_b425bbe26a319c0eb4ed1f243f9b0ca0;
static PyCodeObject *codeobj_3f453913d4efb79389e767490686cd1d;
static PyCodeObject *codeobj_23e932e0a8ae6de12f01dcac52351498;
static PyCodeObject *codeobj_51ebd066425e2ff6571dab0f6b0d2a32;
static PyCodeObject *codeobj_8f8538dbd2ed48505caa8dcda6a80001;
static PyCodeObject *codeobj_787c09663f552212cf899b29c7c280d0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[69]); CHECK_OBJECT(module_filename_obj);
    codeobj_36a60492acdde2ac9a8b259cd51dfd07 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[71], NULL, 1, 0, 0);
    codeobj_d1d977235d00ccac7ed27fe2fad5541f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[72], mod_consts[72], NULL, NULL, 0, 0, 0);
    codeobj_f11cfe85bf6acba9dd5fe6e5c2d3d746 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[73], mod_consts[74], 1, 0, 0);
    codeobj_84196281160da7737aca717ee1f14089 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[75], mod_consts[76], 1, 0, 0);
    codeobj_6a65a22e9b9923d3e19773d661909594 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[77], mod_consts[74], 1, 0, 0);
    codeobj_3c6386e357537f3cd8490a9b0104fa40 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[78], mod_consts[79], 1, 0, 0);
    codeobj_dc396025c10b42b1218b5696be23bbb3 = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[80], NULL, 3, 0, 0);
    codeobj_9eaf7b9294ff145faffe1f21b4cc2457 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[81], NULL, 2, 0, 0);
    codeobj_c6bce3560ecb85e1852a3e44eb163992 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[82], NULL, 2, 0, 0);
    codeobj_6e022d196cc7d5d845bf0b98aa69b2e0 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[83], NULL, 2, 0, 0);
    codeobj_b425bbe26a319c0eb4ed1f243f9b0ca0 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[84], NULL, 1, 0, 0);
    codeobj_3f453913d4efb79389e767490686cd1d = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[85], NULL, 1, 0, 0);
    codeobj_23e932e0a8ae6de12f01dcac52351498 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[86], mod_consts[87], 1, 0, 0);
    codeobj_51ebd066425e2ff6571dab0f6b0d2a32 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[82], NULL, 2, 0, 0);
    codeobj_8f8538dbd2ed48505caa8dcda6a80001 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[88], NULL, 1, 0, 0);
    codeobj_787c09663f552212cf899b29c7c280d0 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[89], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__1_docformat(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__2_inherit_docstring_from();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__2_inherit_docstring_from$$$function__1__doc(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring$$$function__1__doc(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring$$$function__1__doc(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__5_indentcount_lines();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__6_filldoc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__6_filldoc$$$function__1_decorate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__7_unindent_dict();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__8_unindent_string();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__9_doc_replace();


static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__9_doc_replace$$$function__1_inner(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_scipy$_lib$doccer$$$function__1_docformat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docstring = python_pars[0];
    PyObject *par_docdict = python_pars[1];
    PyObject *var_lines = NULL;
    PyObject *var_icount = NULL;
    PyObject *var_indent = NULL;
    PyObject *var_indented = NULL;
    PyObject *var_name = NULL;
    PyObject *var_dstr = NULL;
    PyObject *var_newlines = NULL;
    PyObject *var_line = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9eaf7b9294ff145faffe1f21b4cc2457;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_9eaf7b9294ff145faffe1f21b4cc2457 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eaf7b9294ff145faffe1f21b4cc2457)) {
        Py_XDECREF(cache_frame_9eaf7b9294ff145faffe1f21b4cc2457);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eaf7b9294ff145faffe1f21b4cc2457 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eaf7b9294ff145faffe1f21b4cc2457 = MAKE_FUNCTION_FRAME(codeobj_9eaf7b9294ff145faffe1f21b4cc2457, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9eaf7b9294ff145faffe1f21b4cc2457->m_type_description == NULL);
    frame_9eaf7b9294ff145faffe1f21b4cc2457 = cache_frame_9eaf7b9294ff145faffe1f21b4cc2457;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9eaf7b9294ff145faffe1f21b4cc2457);
    assert(Py_REFCNT(frame_9eaf7b9294ff145faffe1f21b4cc2457) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_docstring);
        tmp_operand_value_1 = par_docstring;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
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
    CHECK_OBJECT(par_docstring);
    tmp_return_value = par_docstring;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_docdict);
        tmp_cmp_expr_left_1 = par_docdict;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        {
            PyObject *old = par_docdict;
            assert(old != NULL);
            par_docdict = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_docdict);
        tmp_operand_value_2 = par_docdict;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
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
    CHECK_OBJECT(par_docstring);
    tmp_return_value = par_docstring;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_docstring);
        tmp_expression_value_2 = par_docstring;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 48;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 48;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_lines);
        tmp_len_arg_1 = var_lines;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 2;
        tmp_condition_result_4 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[2];
        assert(var_icount == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_icount = tmp_assign_source_3;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_expression_value_3 = var_lines;
        tmp_subscript_value_1 = mod_consts[4];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 53;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_icount == NULL);
        var_icount = tmp_assign_source_4;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(var_icount);
        tmp_mult_expr_right_1 = var_icount;
        tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indent == NULL);
        var_indent = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(var_indented == NULL);
        var_indented = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_docdict);
        tmp_expression_value_4 = par_docdict;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 57;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
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
                type_description_1 = "oooooooooo";
                exception_lineno = 57;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 57;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 57;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 57;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 57;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_12;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_dstr;
            var_dstr = tmp_assign_source_13;
            Py_INCREF(var_dstr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_dstr);
        tmp_expression_value_6 = var_dstr;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 58;
        tmp_expression_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[1]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 58;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_lines;
            var_lines = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_lines);
        tmp_expression_value_7 = var_lines;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_list_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_15 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_15, 0, tmp_list_element_1);
        {
            PyObject *old = var_newlines;
            var_newlines = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_lines);
        tmp_expression_value_8 = var_lines;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 61;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_18 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_18;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (var_newlines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_9 = var_newlines;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        if (var_indent == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_1 = var_indent;
        CHECK_OBJECT(var_line);
        tmp_add_expr_right_1 = var_line;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = 62;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_str_arg_value_1 = mod_consts[11];
        if (var_newlines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }

        tmp_iterable_value_1 = var_newlines;
        tmp_ass_subvalue_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        if (var_indented == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = var_indented;
        CHECK_OBJECT(var_name);
        tmp_ass_subscript_1 = var_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_9eaf7b9294ff145faffe1f21b4cc2457, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_9eaf7b9294ff145faffe1f21b4cc2457, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_dstr);
        tmp_ass_subvalue_2 = var_dstr;
        if (var_indented == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_2 = var_indented;
        CHECK_OBJECT(var_name);
        tmp_ass_subscript_2 = var_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame) frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_7;
    branch_end_5:;
    goto try_end_5;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_docstring);
        tmp_mod_expr_left_1 = par_docstring;
        if (var_indented == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = var_indented;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9eaf7b9294ff145faffe1f21b4cc2457, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eaf7b9294ff145faffe1f21b4cc2457->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eaf7b9294ff145faffe1f21b4cc2457, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eaf7b9294ff145faffe1f21b4cc2457,
        type_description_1,
        par_docstring,
        par_docdict,
        var_lines,
        var_icount,
        var_indent,
        var_indented,
        var_name,
        var_dstr,
        var_newlines,
        var_line
    );


    // Release cached frame if used for exception.
    if (frame_9eaf7b9294ff145faffe1f21b4cc2457 == cache_frame_9eaf7b9294ff145faffe1f21b4cc2457) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9eaf7b9294ff145faffe1f21b4cc2457);
        cache_frame_9eaf7b9294ff145faffe1f21b4cc2457 = NULL;
    }

    assertFrameObject(frame_9eaf7b9294ff145faffe1f21b4cc2457);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_docdict);
    par_docdict = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_icount);
    var_icount = NULL;
    Py_XDECREF(var_indent);
    var_indent = NULL;
    Py_XDECREF(var_indented);
    var_indented = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_dstr);
    var_dstr = NULL;
    Py_XDECREF(var_newlines);
    var_newlines = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_docdict);
    par_docdict = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_icount);
    var_icount = NULL;
    Py_XDECREF(var_indent);
    var_indent = NULL;
    Py_XDECREF(var_indented);
    var_indented = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_dstr);
    var_dstr = NULL;
    Py_XDECREF(var_newlines);
    var_newlines = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

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


static PyObject *impl_scipy$_lib$doccer$$$function__2_inherit_docstring_from(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var__doc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__2_inherit_docstring_from$$$function__1__doc(tmp_closure_1);

        assert(var__doc == NULL);
        var__doc = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__doc);
    tmp_return_value = var__doc;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__doc);
    Py_DECREF(var__doc);
    var__doc = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_scipy$_lib$doccer$$$function__2_inherit_docstring_from$$$function__1__doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_cls_docstring = NULL;
    PyObject *var_func_docstring = NULL;
    PyObject *var_new_docstring = NULL;
    struct Nuitka_FrameObject *frame_84196281160da7737aca717ee1f14089;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_84196281160da7737aca717ee1f14089 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_84196281160da7737aca717ee1f14089)) {
        Py_XDECREF(cache_frame_84196281160da7737aca717ee1f14089);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84196281160da7737aca717ee1f14089 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84196281160da7737aca717ee1f14089 = MAKE_FUNCTION_FRAME(codeobj_84196281160da7737aca717ee1f14089, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84196281160da7737aca717ee1f14089->m_type_description == NULL);
    frame_84196281160da7737aca717ee1f14089 = cache_frame_84196281160da7737aca717ee1f14089;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84196281160da7737aca717ee1f14089);
    assert(Py_REFCNT(frame_84196281160da7737aca717ee1f14089) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_func);
        tmp_expression_value_2 = par_func;
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_cls_docstring == NULL);
        var_cls_docstring = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_func);
        tmp_expression_value_3 = par_func;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_func_docstring == NULL);
        var_func_docstring = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_func_docstring);
        tmp_cmp_expr_left_1 = var_func_docstring;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_assattr_value_1 = var_cls_docstring;
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_func_docstring);
        tmp_mod_expr_left_1 = var_func_docstring;
        tmp_dict_key_1 = mod_consts[20];
        CHECK_OBJECT(var_cls_docstring);
        tmp_dict_value_1 = var_cls_docstring;
        tmp_mod_expr_right_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_assign_source_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_new_docstring == NULL);
        var_new_docstring = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_new_docstring);
        tmp_assattr_value_2 = var_new_docstring;
        CHECK_OBJECT(par_func);
        tmp_assattr_target_2 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84196281160da7737aca717ee1f14089, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84196281160da7737aca717ee1f14089->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84196281160da7737aca717ee1f14089, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84196281160da7737aca717ee1f14089,
        type_description_1,
        par_func,
        var_cls_docstring,
        var_func_docstring,
        var_new_docstring,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_84196281160da7737aca717ee1f14089 == cache_frame_84196281160da7737aca717ee1f14089) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84196281160da7737aca717ee1f14089);
        cache_frame_84196281160da7737aca717ee1f14089 = NULL;
    }

    assertFrameObject(frame_84196281160da7737aca717ee1f14089);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cls_docstring);
    Py_DECREF(var_cls_docstring);
    var_cls_docstring = NULL;
    Py_XDECREF(var_func_docstring);
    var_func_docstring = NULL;
    Py_XDECREF(var_new_docstring);
    var_new_docstring = NULL;
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

    Py_XDECREF(var_cls_docstring);
    var_cls_docstring = NULL;
    Py_XDECREF(var_func_docstring);
    var_func_docstring = NULL;
    Py_XDECREF(var_new_docstring);
    var_new_docstring = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_notes = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var__doc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_notes;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring$$$function__1__doc(tmp_closure_1);

        assert(var__doc == NULL);
        var__doc = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__doc);
    tmp_return_value = var__doc;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__doc);
    Py_DECREF(var__doc);
    var__doc = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring$$$function__1__doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_cls_docstring = NULL;
    PyObject *var_end_of_notes = NULL;
    struct Nuitka_FrameObject *frame_f11cfe85bf6acba9dd5fe6e5c2d3d746;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746)) {
        Py_XDECREF(cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746 = MAKE_FUNCTION_FRAME(codeobj_f11cfe85bf6acba9dd5fe6e5c2d3d746, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746->m_type_description == NULL);
    frame_f11cfe85bf6acba9dd5fe6e5c2d3d746 = cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f11cfe85bf6acba9dd5fe6e5c2d3d746);
    assert(Py_REFCNT(frame_f11cfe85bf6acba9dd5fe6e5c2d3d746) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_func);
        tmp_expression_value_2 = par_func;
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_cls_docstring == NULL);
        var_cls_docstring = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_cmp_expr_left_1 = var_cls_docstring;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_3 = var_cls_docstring;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_f11cfe85bf6acba9dd5fe6e5c2d3d746->m_frame.f_lineno = 139;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[24]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_end_of_notes == NULL);
        var_end_of_notes = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_end_of_notes);
        tmp_cmp_expr_left_2 = var_end_of_notes;
        tmp_cmp_expr_right_2 = mod_consts[25];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooocc";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_4 = var_cls_docstring;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_f11cfe85bf6acba9dd5fe6e5c2d3d746->m_frame.f_lineno = 141;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[26]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_end_of_notes;
            assert(old != NULL);
            var_end_of_notes = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_end_of_notes);
        tmp_cmp_expr_left_3 = var_end_of_notes;
        tmp_cmp_expr_right_3 = mod_consts[25];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooocc";
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
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_len_arg_1 = var_cls_docstring;
        tmp_assign_source_4 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_end_of_notes;
            assert(old != NULL);
            var_end_of_notes = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_5 = var_cls_docstring;
        CHECK_OBJECT(var_end_of_notes);
        tmp_stop_value_1 = var_end_of_notes;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_6 = var_cls_docstring;
        CHECK_OBJECT(var_end_of_notes);
        tmp_start_value_1 = var_end_of_notes;
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 145;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_f11cfe85bf6acba9dd5fe6e5c2d3d746, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f11cfe85bf6acba9dd5fe6e5c2d3d746->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f11cfe85bf6acba9dd5fe6e5c2d3d746, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f11cfe85bf6acba9dd5fe6e5c2d3d746,
        type_description_1,
        par_func,
        var_cls_docstring,
        var_end_of_notes,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_f11cfe85bf6acba9dd5fe6e5c2d3d746 == cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746);
        cache_frame_f11cfe85bf6acba9dd5fe6e5c2d3d746 = NULL;
    }

    assertFrameObject(frame_f11cfe85bf6acba9dd5fe6e5c2d3d746);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cls_docstring);
    var_cls_docstring = NULL;
    Py_XDECREF(var_end_of_notes);
    var_end_of_notes = NULL;
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

    Py_XDECREF(var_cls_docstring);
    var_cls_docstring = NULL;
    Py_XDECREF(var_end_of_notes);
    var_end_of_notes = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_notes = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var__doc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_notes;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring$$$function__1__doc(tmp_closure_1);

        assert(var__doc == NULL);
        var__doc = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__doc);
    tmp_return_value = var__doc;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__doc);
    Py_DECREF(var__doc);
    var__doc = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring$$$function__1__doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_cls_docstring = NULL;
    PyObject *var_start_of_notes = NULL;
    PyObject *var_end_of_notes = NULL;
    struct Nuitka_FrameObject *frame_6a65a22e9b9923d3e19773d661909594;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6a65a22e9b9923d3e19773d661909594 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6a65a22e9b9923d3e19773d661909594)) {
        Py_XDECREF(cache_frame_6a65a22e9b9923d3e19773d661909594);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a65a22e9b9923d3e19773d661909594 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a65a22e9b9923d3e19773d661909594 = MAKE_FUNCTION_FRAME(codeobj_6a65a22e9b9923d3e19773d661909594, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a65a22e9b9923d3e19773d661909594->m_type_description == NULL);
    frame_6a65a22e9b9923d3e19773d661909594 = cache_frame_6a65a22e9b9923d3e19773d661909594;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a65a22e9b9923d3e19773d661909594);
    assert(Py_REFCNT(frame_6a65a22e9b9923d3e19773d661909594) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_func);
        tmp_expression_value_2 = par_func;
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        assert(var_cls_docstring == NULL);
        var_cls_docstring = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_cmp_expr_left_1 = var_cls_docstring;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_3 = var_cls_docstring;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        frame_6a65a22e9b9923d3e19773d661909594->m_frame.f_lineno = 164;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[30]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        assert(var_start_of_notes == NULL);
        var_start_of_notes = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_4 = var_cls_docstring;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        frame_6a65a22e9b9923d3e19773d661909594->m_frame.f_lineno = 165;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[24]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        assert(var_end_of_notes == NULL);
        var_end_of_notes = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_end_of_notes);
        tmp_cmp_expr_left_2 = var_end_of_notes;
        tmp_cmp_expr_right_2 = mod_consts[25];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooNoocc";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_5 = var_cls_docstring;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        frame_6a65a22e9b9923d3e19773d661909594->m_frame.f_lineno = 167;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[26]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_end_of_notes;
            assert(old != NULL);
            var_end_of_notes = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_end_of_notes);
        tmp_cmp_expr_left_3 = var_end_of_notes;
        tmp_cmp_expr_right_3 = mod_consts[25];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooNoocc";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_len_arg_1 = var_cls_docstring;
        tmp_assign_source_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_end_of_notes;
            assert(old != NULL);
            var_end_of_notes = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_6 = var_cls_docstring;
        CHECK_OBJECT(var_start_of_notes);
        tmp_add_expr_left_3 = var_start_of_notes;
        tmp_add_expr_right_3 = mod_consts[31];
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cls_docstring);
        tmp_expression_value_7 = var_cls_docstring;
        CHECK_OBJECT(var_end_of_notes);
        tmp_start_value_1 = var_end_of_notes;
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 172;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooNoocc";
            goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_6a65a22e9b9923d3e19773d661909594, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a65a22e9b9923d3e19773d661909594->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a65a22e9b9923d3e19773d661909594, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a65a22e9b9923d3e19773d661909594,
        type_description_1,
        par_func,
        var_cls_docstring,
        NULL,
        var_start_of_notes,
        var_end_of_notes,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_6a65a22e9b9923d3e19773d661909594 == cache_frame_6a65a22e9b9923d3e19773d661909594) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a65a22e9b9923d3e19773d661909594);
        cache_frame_6a65a22e9b9923d3e19773d661909594 = NULL;
    }

    assertFrameObject(frame_6a65a22e9b9923d3e19773d661909594);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cls_docstring);
    var_cls_docstring = NULL;
    Py_XDECREF(var_start_of_notes);
    var_start_of_notes = NULL;
    Py_XDECREF(var_end_of_notes);
    var_end_of_notes = NULL;
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

    Py_XDECREF(var_cls_docstring);
    var_cls_docstring = NULL;
    Py_XDECREF(var_start_of_notes);
    var_start_of_notes = NULL;
    Py_XDECREF(var_end_of_notes);
    var_end_of_notes = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$doccer$$$function__5_indentcount_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    PyObject *var_indentno = NULL;
    PyObject *var_line = NULL;
    PyObject *var_stripped = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b425bbe26a319c0eb4ed1f243f9b0ca0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[32];
        assert(var_indentno == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_indentno = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0)) {
        Py_XDECREF(cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0 = MAKE_FUNCTION_FRAME(codeobj_b425bbe26a319c0eb4ed1f243f9b0ca0, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0->m_type_description == NULL);
    frame_b425bbe26a319c0eb4ed1f243f9b0ca0 = cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b425bbe26a319c0eb4ed1f243f9b0ca0);
    assert(Py_REFCNT(frame_b425bbe26a319c0eb4ed1f243f9b0ca0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_lines);
        tmp_iter_arg_1 = par_lines;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 193;
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
            PyObject *old = var_line;
            var_line = tmp_assign_source_4;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_line);
        tmp_expression_value_1 = var_line;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_b425bbe26a319c0eb4ed1f243f9b0ca0->m_frame.f_lineno = 194;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_stripped;
            var_stripped = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_stripped);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_stripped);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[34]);
        assert(tmp_called_value_2 != NULL);
        if (var_indentno == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = var_indentno;
        CHECK_OBJECT(var_line);
        tmp_len_arg_1 = var_line;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_stripped);
        tmp_len_arg_2 = var_stripped;
        tmp_sub_expr_right_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_b425bbe26a319c0eb4ed1f243f9b0ca0->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_indentno;
            var_indentno = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 193;
        type_description_1 = "oooo";
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
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_indentno == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_indentno;
        tmp_cmp_expr_right_1 = mod_consts[32];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[2];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    if (var_indentno == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_indentno;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b425bbe26a319c0eb4ed1f243f9b0ca0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b425bbe26a319c0eb4ed1f243f9b0ca0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b425bbe26a319c0eb4ed1f243f9b0ca0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b425bbe26a319c0eb4ed1f243f9b0ca0,
        type_description_1,
        par_lines,
        var_indentno,
        var_line,
        var_stripped
    );


    // Release cached frame if used for exception.
    if (frame_b425bbe26a319c0eb4ed1f243f9b0ca0 == cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0);
        cache_frame_b425bbe26a319c0eb4ed1f243f9b0ca0 = NULL;
    }

    assertFrameObject(frame_b425bbe26a319c0eb4ed1f243f9b0ca0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_indentno);
    var_indentno = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_stripped);
    var_stripped = NULL;
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

    Py_XDECREF(var_indentno);
    var_indentno = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_stripped);
    var_stripped = NULL;
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


static PyObject *impl_scipy$_lib$doccer$$$function__6_filldoc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_docdict = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_unindent_params = python_pars[1];
    PyObject *var_decorate = NULL;
    struct Nuitka_FrameObject *frame_6e022d196cc7d5d845bf0b98aa69b2e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0)) {
        Py_XDECREF(cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0 = MAKE_FUNCTION_FRAME(codeobj_6e022d196cc7d5d845bf0b98aa69b2e0, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0->m_type_description == NULL);
    frame_6e022d196cc7d5d845bf0b98aa69b2e0 = cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e022d196cc7d5d845bf0b98aa69b2e0);
    assert(Py_REFCNT(frame_6e022d196cc7d5d845bf0b98aa69b2e0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_unindent_params);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_unindent_params);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_docdict));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_docdict);
        frame_6e022d196cc7d5d845bf0b98aa69b2e0->m_frame.f_lineno = 220;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_docdict);
            PyCell_SET(par_docdict, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e022d196cc7d5d845bf0b98aa69b2e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e022d196cc7d5d845bf0b98aa69b2e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e022d196cc7d5d845bf0b98aa69b2e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e022d196cc7d5d845bf0b98aa69b2e0,
        type_description_1,
        par_docdict,
        par_unindent_params,
        var_decorate
    );


    // Release cached frame if used for exception.
    if (frame_6e022d196cc7d5d845bf0b98aa69b2e0 == cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0);
        cache_frame_6e022d196cc7d5d845bf0b98aa69b2e0 = NULL;
    }

    assertFrameObject(frame_6e022d196cc7d5d845bf0b98aa69b2e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_docdict;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__6_filldoc$$$function__1_decorate(tmp_closure_1);

        assert(var_decorate == NULL);
        var_decorate = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_decorate);
    tmp_return_value = var_decorate;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);
    par_docdict = NULL;
    CHECK_OBJECT(var_decorate);
    Py_DECREF(var_decorate);
    var_decorate = NULL;
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

    CHECK_OBJECT(par_docdict);
    Py_DECREF(par_docdict);
    par_docdict = NULL;
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
    CHECK_OBJECT(par_unindent_params);
    Py_DECREF(par_unindent_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_unindent_params);
    Py_DECREF(par_unindent_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$doccer$$$function__6_filldoc$$$function__1_decorate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    struct Nuitka_FrameObject *frame_3c6386e357537f3cd8490a9b0104fa40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3c6386e357537f3cd8490a9b0104fa40 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c6386e357537f3cd8490a9b0104fa40)) {
        Py_XDECREF(cache_frame_3c6386e357537f3cd8490a9b0104fa40);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c6386e357537f3cd8490a9b0104fa40 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c6386e357537f3cd8490a9b0104fa40 = MAKE_FUNCTION_FRAME(codeobj_3c6386e357537f3cd8490a9b0104fa40, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c6386e357537f3cd8490a9b0104fa40->m_type_description == NULL);
    frame_3c6386e357537f3cd8490a9b0104fa40 = cache_frame_3c6386e357537f3cd8490a9b0104fa40;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c6386e357537f3cd8490a9b0104fa40);
    assert(Py_REFCNT(frame_3c6386e357537f3cd8490a9b0104fa40) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_expression_value_1 = par_f;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_3c6386e357537f3cd8490a9b0104fa40->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_assattr_target_1 = par_f;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c6386e357537f3cd8490a9b0104fa40, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c6386e357537f3cd8490a9b0104fa40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c6386e357537f3cd8490a9b0104fa40, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c6386e357537f3cd8490a9b0104fa40,
        type_description_1,
        par_f,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3c6386e357537f3cd8490a9b0104fa40 == cache_frame_3c6386e357537f3cd8490a9b0104fa40) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c6386e357537f3cd8490a9b0104fa40);
        cache_frame_3c6386e357537f3cd8490a9b0104fa40 = NULL;
    }

    assertFrameObject(frame_3c6386e357537f3cd8490a9b0104fa40);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_f);
    tmp_return_value = par_f;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$doccer$$$function__7_unindent_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docdict = python_pars[0];
    PyObject *var_can_dict = NULL;
    PyObject *var_name = NULL;
    PyObject *var_dstr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8f8538dbd2ed48505caa8dcda6a80001;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f8538dbd2ed48505caa8dcda6a80001 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_can_dict == NULL);
        var_can_dict = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8f8538dbd2ed48505caa8dcda6a80001)) {
        Py_XDECREF(cache_frame_8f8538dbd2ed48505caa8dcda6a80001);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f8538dbd2ed48505caa8dcda6a80001 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f8538dbd2ed48505caa8dcda6a80001 = MAKE_FUNCTION_FRAME(codeobj_8f8538dbd2ed48505caa8dcda6a80001, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f8538dbd2ed48505caa8dcda6a80001->m_type_description == NULL);
    frame_8f8538dbd2ed48505caa8dcda6a80001 = cache_frame_8f8538dbd2ed48505caa8dcda6a80001;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f8538dbd2ed48505caa8dcda6a80001);
    assert(Py_REFCNT(frame_8f8538dbd2ed48505caa8dcda6a80001) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_docdict);
        tmp_expression_value_1 = par_docdict;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8f8538dbd2ed48505caa8dcda6a80001->m_frame.f_lineno = 231;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 231;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 231;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 231;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooo";
                    exception_lineno = 231;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 231;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_7;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_dstr;
            var_dstr = tmp_assign_source_8;
            Py_INCREF(var_dstr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_dstr);
        tmp_args_element_value_1 = var_dstr;
        frame_8f8538dbd2ed48505caa8dcda6a80001->m_frame.f_lineno = 232;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_can_dict == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_can_dict;
        CHECK_OBJECT(var_name);
        tmp_ass_subscript_1 = var_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 231;
        type_description_1 = "oooo";
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
    if (var_can_dict == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 233;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_can_dict;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f8538dbd2ed48505caa8dcda6a80001, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f8538dbd2ed48505caa8dcda6a80001->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f8538dbd2ed48505caa8dcda6a80001, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f8538dbd2ed48505caa8dcda6a80001,
        type_description_1,
        par_docdict,
        var_can_dict,
        var_name,
        var_dstr
    );


    // Release cached frame if used for exception.
    if (frame_8f8538dbd2ed48505caa8dcda6a80001 == cache_frame_8f8538dbd2ed48505caa8dcda6a80001) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f8538dbd2ed48505caa8dcda6a80001);
        cache_frame_8f8538dbd2ed48505caa8dcda6a80001 = NULL;
    }

    assertFrameObject(frame_8f8538dbd2ed48505caa8dcda6a80001);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_can_dict);
    var_can_dict = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_dstr);
    var_dstr = NULL;
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

    Py_XDECREF(var_can_dict);
    var_can_dict = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_dstr);
    var_dstr = NULL;
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


static PyObject *impl_scipy$_lib$doccer$$$function__8_unindent_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_docstring = python_pars[0];
    PyObject *var_lines = NULL;
    PyObject *var_icount = NULL;
    PyObject *outline_0_var_line = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_787c09663f552212cf899b29c7c280d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_36a60492acdde2ac9a8b259cd51dfd07_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_787c09663f552212cf899b29c7c280d0 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_787c09663f552212cf899b29c7c280d0)) {
        Py_XDECREF(cache_frame_787c09663f552212cf899b29c7c280d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_787c09663f552212cf899b29c7c280d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_787c09663f552212cf899b29c7c280d0 = MAKE_FUNCTION_FRAME(codeobj_787c09663f552212cf899b29c7c280d0, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_787c09663f552212cf899b29c7c280d0->m_type_description == NULL);
    frame_787c09663f552212cf899b29c7c280d0 = cache_frame_787c09663f552212cf899b29c7c280d0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_787c09663f552212cf899b29c7c280d0);
    assert(Py_REFCNT(frame_787c09663f552212cf899b29c7c280d0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_docstring);
        tmp_expression_value_2 = par_docstring;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_787c09663f552212cf899b29c7c280d0->m_frame.f_lineno = 244;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_787c09663f552212cf899b29c7c280d0->m_frame.f_lineno = 244;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_args_element_value_1 = var_lines;
        frame_787c09663f552212cf899b29c7c280d0->m_frame.f_lineno = 245;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_icount == NULL);
        var_icount = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_icount);
        tmp_cmp_expr_left_1 = var_icount;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
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
    CHECK_OBJECT(par_docstring);
    tmp_return_value = par_docstring;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[11];
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_lines);
            tmp_iter_arg_1 = var_lines;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2)) {
            Py_XDECREF(cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2 = MAKE_FUNCTION_FRAME(codeobj_36a60492acdde2ac9a8b259cd51dfd07, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2->m_type_description == NULL);
        frame_36a60492acdde2ac9a8b259cd51dfd07_2 = cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_36a60492acdde2ac9a8b259cd51dfd07_2);
        assert(Py_REFCNT(frame_36a60492acdde2ac9a8b259cd51dfd07_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 248;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_line;
                outline_0_var_line = tmp_assign_source_6;
                Py_INCREF(outline_0_var_line);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_line);
            tmp_expression_value_3 = outline_0_var_line;
            CHECK_OBJECT(var_icount);
            tmp_start_value_1 = var_icount;
            tmp_stop_value_1 = Py_None;
            tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
            assert(!(tmp_subscript_value_1 == NULL));
            tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_36a60492acdde2ac9a8b259cd51dfd07_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_36a60492acdde2ac9a8b259cd51dfd07_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_36a60492acdde2ac9a8b259cd51dfd07_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_36a60492acdde2ac9a8b259cd51dfd07_2,
            type_description_2,
            outline_0_var_line,
            var_icount
        );


        // Release cached frame if used for exception.
        if (frame_36a60492acdde2ac9a8b259cd51dfd07_2 == cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2);
            cache_frame_36a60492acdde2ac9a8b259cd51dfd07_2 = NULL;
        }

        assertFrameObject(frame_36a60492acdde2ac9a8b259cd51dfd07_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
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

        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
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
        exception_lineno = 248;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_787c09663f552212cf899b29c7c280d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_787c09663f552212cf899b29c7c280d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_787c09663f552212cf899b29c7c280d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_787c09663f552212cf899b29c7c280d0,
        type_description_1,
        par_docstring,
        var_lines,
        var_icount
    );


    // Release cached frame if used for exception.
    if (frame_787c09663f552212cf899b29c7c280d0 == cache_frame_787c09663f552212cf899b29c7c280d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_787c09663f552212cf899b29c7c280d0);
        cache_frame_787c09663f552212cf899b29c7c280d0 = NULL;
    }

    assertFrameObject(frame_787c09663f552212cf899b29c7c280d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lines);
    Py_DECREF(var_lines);
    var_lines = NULL;
    CHECK_OBJECT(var_icount);
    Py_DECREF(var_icount);
    var_icount = NULL;
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

    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_icount);
    var_icount = NULL;
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


static PyObject *impl_scipy$_lib$doccer$$$function__9_doc_replace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_oldval = python_pars[1];
    PyObject *par_newval = python_pars[2];
    struct Nuitka_CellObject *var_doc = Nuitka_Cell_Empty();
    PyObject *var_inner = NULL;
    struct Nuitka_FrameObject *frame_dc396025c10b42b1218b5696be23bbb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dc396025c10b42b1218b5696be23bbb3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dc396025c10b42b1218b5696be23bbb3)) {
        Py_XDECREF(cache_frame_dc396025c10b42b1218b5696be23bbb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc396025c10b42b1218b5696be23bbb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc396025c10b42b1218b5696be23bbb3 = MAKE_FUNCTION_FRAME(codeobj_dc396025c10b42b1218b5696be23bbb3, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc396025c10b42b1218b5696be23bbb3->m_type_description == NULL);
    frame_dc396025c10b42b1218b5696be23bbb3 = cache_frame_dc396025c10b42b1218b5696be23bbb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc396025c10b42b1218b5696be23bbb3);
    assert(Py_REFCNT(frame_dc396025c10b42b1218b5696be23bbb3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_2 = par_obj;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 266;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[47];
        Py_INCREF(tmp_or_right_value_1);
        tmp_expression_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_expression_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_oldval);
        tmp_args_element_value_1 = par_oldval;
        CHECK_OBJECT(par_newval);
        tmp_args_element_value_2 = par_newval;
        frame_dc396025c10b42b1218b5696be23bbb3->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_doc) == NULL);
        PyCell_SET(var_doc, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc396025c10b42b1218b5696be23bbb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc396025c10b42b1218b5696be23bbb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc396025c10b42b1218b5696be23bbb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc396025c10b42b1218b5696be23bbb3,
        type_description_1,
        par_obj,
        par_oldval,
        par_newval,
        var_doc,
        var_inner
    );


    // Release cached frame if used for exception.
    if (frame_dc396025c10b42b1218b5696be23bbb3 == cache_frame_dc396025c10b42b1218b5696be23bbb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc396025c10b42b1218b5696be23bbb3);
        cache_frame_dc396025c10b42b1218b5696be23bbb3 = NULL;
    }

    assertFrameObject(frame_dc396025c10b42b1218b5696be23bbb3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_doc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__9_doc_replace$$$function__1_inner(tmp_closure_1);

        assert(var_inner == NULL);
        var_inner = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_inner);
    tmp_return_value = var_inner;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_doc);
    Py_DECREF(var_doc);
    var_doc = NULL;
    CHECK_OBJECT(var_inner);
    Py_DECREF(var_inner);
    var_inner = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_oldval);
    Py_DECREF(par_oldval);
    CHECK_OBJECT(par_newval);
    Py_DECREF(par_newval);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_oldval);
    Py_DECREF(par_oldval);
    CHECK_OBJECT(par_newval);
    Py_DECREF(par_newval);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$_lib$doccer$$$function__9_doc_replace$$$function__1_inner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_FrameObject *frame_23e932e0a8ae6de12f01dcac52351498;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_23e932e0a8ae6de12f01dcac52351498 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23e932e0a8ae6de12f01dcac52351498)) {
        Py_XDECREF(cache_frame_23e932e0a8ae6de12f01dcac52351498);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23e932e0a8ae6de12f01dcac52351498 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23e932e0a8ae6de12f01dcac52351498 = MAKE_FUNCTION_FRAME(codeobj_23e932e0a8ae6de12f01dcac52351498, module_scipy$_lib$doccer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23e932e0a8ae6de12f01dcac52351498->m_type_description == NULL);
    frame_23e932e0a8ae6de12f01dcac52351498 = cache_frame_23e932e0a8ae6de12f01dcac52351498;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23e932e0a8ae6de12f01dcac52351498);
    assert(Py_REFCNT(frame_23e932e0a8ae6de12f01dcac52351498) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23e932e0a8ae6de12f01dcac52351498, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23e932e0a8ae6de12f01dcac52351498->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23e932e0a8ae6de12f01dcac52351498, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23e932e0a8ae6de12f01dcac52351498,
        type_description_1,
        par_func,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_23e932e0a8ae6de12f01dcac52351498 == cache_frame_23e932e0a8ae6de12f01dcac52351498) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23e932e0a8ae6de12f01dcac52351498);
        cache_frame_23e932e0a8ae6de12f01dcac52351498 = NULL;
    }

    assertFrameObject(frame_23e932e0a8ae6de12f01dcac52351498);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__1_docformat(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__1_docformat,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9eaf7b9294ff145faffe1f21b4cc2457,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__2_inherit_docstring_from() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__2_inherit_docstring_from,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f453913d4efb79389e767490686cd1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__2_inherit_docstring_from$$$function__1__doc(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__2_inherit_docstring_from$$$function__1__doc,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[15],
#endif
        codeobj_84196281160da7737aca717ee1f14089,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6bce3560ecb85e1852a3e44eb163992,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring$$$function__1__doc(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring$$$function__1__doc,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        codeobj_f11cfe85bf6acba9dd5fe6e5c2d3d746,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51ebd066425e2ff6571dab0f6b0d2a32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring$$$function__1__doc(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring$$$function__1__doc,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_6a65a22e9b9923d3e19773d661909594,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__5_indentcount_lines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__5_indentcount_lines,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b425bbe26a319c0eb4ed1f243f9b0ca0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__6_filldoc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__6_filldoc,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e022d196cc7d5d845bf0b98aa69b2e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__6_filldoc$$$function__1_decorate(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__6_filldoc$$$function__1_decorate,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_3c6386e357537f3cd8490a9b0104fa40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__7_unindent_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__7_unindent_dict,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f8538dbd2ed48505caa8dcda6a80001,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__8_unindent_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__8_unindent_string,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_787c09663f552212cf899b29c7c280d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__9_doc_replace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__9_doc_replace,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc396025c10b42b1218b5696be23bbb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$_lib$doccer$$$function__9_doc_replace$$$function__1_inner(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$_lib$doccer$$$function__9_doc_replace$$$function__1_inner,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_23e932e0a8ae6de12f01dcac52351498,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$_lib$doccer,
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

function_impl_code functable_scipy$_lib$doccer[] = {
    impl_scipy$_lib$doccer$$$function__2_inherit_docstring_from$$$function__1__doc,
    impl_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring$$$function__1__doc,
    impl_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring$$$function__1__doc,
    impl_scipy$_lib$doccer$$$function__6_filldoc$$$function__1_decorate,
    impl_scipy$_lib$doccer$$$function__9_doc_replace$$$function__1_inner,
    impl_scipy$_lib$doccer$$$function__1_docformat,
    impl_scipy$_lib$doccer$$$function__2_inherit_docstring_from,
    impl_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring,
    impl_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring,
    impl_scipy$_lib$doccer$$$function__5_indentcount_lines,
    impl_scipy$_lib$doccer$$$function__6_filldoc,
    impl_scipy$_lib$doccer$$$function__7_unindent_dict,
    impl_scipy$_lib$doccer$$$function__8_unindent_string,
    impl_scipy$_lib$doccer$$$function__9_doc_replace,
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

    function_impl_code *current = functable_scipy$_lib$doccer;
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

    if (offset > sizeof(functable_scipy$_lib$doccer) || offset < 0) {
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
        functable_scipy$_lib$doccer[offset],
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
        module_scipy$_lib$doccer,
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
PyObject *modulecode_scipy$_lib$doccer(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy._lib.doccer");

    // Store the module for future use.
    module_scipy$_lib$doccer = module;

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
        PRINT_STRING("scipy._lib.doccer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy._lib.doccer: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy._lib.doccer: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$_lib$doccer\n");

    moduledict_scipy$_lib$doccer = MODULE_DICT(module_scipy$_lib$doccer);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$_lib$doccer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$_lib$doccer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[47]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$_lib$doccer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$_lib$doccer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$_lib$doccer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$_lib$doccer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$_lib$doccer);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_d1d977235d00ccac7ed27fe2fad5541f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_2);
    }
    frame_d1d977235d00ccac7ed27fe2fad5541f = MAKE_MODULE_FRAME(codeobj_d1d977235d00ccac7ed27fe2fad5541f, module_scipy$_lib$doccer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d1d977235d00ccac7ed27fe2fad5541f);
    assert(Py_REFCNT(frame_d1d977235d00ccac7ed27fe2fad5541f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[57], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1d977235d00ccac7ed27fe2fad5541f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1d977235d00ccac7ed27fe2fad5541f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1d977235d00ccac7ed27fe2fad5541f, exception_lineno);
    }



    assertFrameObject(frame_d1d977235d00ccac7ed27fe2fad5541f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST7(mod_consts[60]);
        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[62];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_6 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__1_docformat(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__2_inherit_docstring_from();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__3_extend_notes_in_docstring();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__4_replace_notes_in_docstring();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__5_indentcount_lines();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[66];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_11 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__6_filldoc(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__7_unindent_dict();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__8_unindent_string();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_scipy$_lib$doccer$$$function__9_doc_replace();

        UPDATE_STRING_DICT1(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_14);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy._lib.doccer", false);

    Py_INCREF(module_scipy$_lib$doccer);
    return module_scipy$_lib$doccer;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$_lib$doccer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$_lib$doccer", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
