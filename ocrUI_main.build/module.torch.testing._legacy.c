/* Generated code for Python module 'torch.testing._legacy'
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

/* The "module_torch$testing$_legacy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$testing$_legacy;
PyDictObject *moduledict_torch$testing$_legacy;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[97];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[97];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.testing._legacy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 97; i++) {
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
void checkModuleConstants_torch$testing$_legacy(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 97; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_69089102caafd4181ac9f13f72767e2e;
static PyCodeObject *codeobj_7ae0e5cccf6ef49243bc7bd4fda47e55;
static PyCodeObject *codeobj_3e0fce324183a6eebb956004825e5cef;
static PyCodeObject *codeobj_d56a08f7a77d688b1474bb3709a028c3;
static PyCodeObject *codeobj_50c3edfcb4a599dd5a536f52cc2af8c6;
static PyCodeObject *codeobj_ea354d3e34fafa9d03be83c67c876d2d;
static PyCodeObject *codeobj_d7afd33ff8f46992dc263d487d43b051;
static PyCodeObject *codeobj_b5cfe5281a634f2d600c733407f7a06a;
static PyCodeObject *codeobj_81905b428ba4f95357357879b5627fc3;
static PyCodeObject *codeobj_c8b1eed35db868d7ef415d55d41e26ba;
static PyCodeObject *codeobj_f7ac4c494e37fc4056f4d83d0f2ad811;
static PyCodeObject *codeobj_37e3e3771c29811ab383199a93ddbfe5;
static PyCodeObject *codeobj_b59ebbeafb5b0574c1532d59819bee70;
static PyCodeObject *codeobj_3b2c4ea08d097572eabff4601acfdfe7;
static PyCodeObject *codeobj_0af6aa7bb7dfd341ad5d2005a8293912;
static PyCodeObject *codeobj_7a18500e6ee3ff73985f038c6a7b135a;
static PyCodeObject *codeobj_83b84b4c9eec50d4b246412df56ecff7;
static PyCodeObject *codeobj_70a73cb3f529263ff3b9335234d7fd79;
static PyCodeObject *codeobj_d184cc585b65da2f4a2f902594e8ba8f;
static PyCodeObject *codeobj_6962a8b5fe828fd36ba1ebf93a4e8133;
static PyCodeObject *codeobj_d5ebaa9a0dda656ec580ddedc29d93e9;
static PyCodeObject *codeobj_8b98183789afdaadd3b2fd3ee3ffa946;
static PyCodeObject *codeobj_06f29d2201fd319ea0da5d5ef49c077d;
static PyCodeObject *codeobj_99949ab1a827eb97a6519f7b757dabc1;
static PyCodeObject *codeobj_534f05dabd50110bb9cb18569e005035;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[87]); CHECK_OBJECT(module_filename_obj);
    codeobj_69089102caafd4181ac9f13f72767e2e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[88], mod_consts[88], NULL, NULL, 0, 0, 0);
    codeobj_7ae0e5cccf6ef49243bc7bd4fda47e55 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[89], NULL, 2, 0, 0);
    codeobj_3e0fce324183a6eebb956004825e5cef = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[90], NULL, 0, 0, 0);
    codeobj_d56a08f7a77d688b1474bb3709a028c3 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[91], NULL, 0, 0, 0);
    codeobj_50c3edfcb4a599dd5a536f52cc2af8c6 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_ea354d3e34fafa9d03be83c67c876d2d = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[92], NULL, 0, 0, 0);
    codeobj_d7afd33ff8f46992dc263d487d43b051 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_b5cfe5281a634f2d600c733407f7a06a = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[92], NULL, 0, 0, 0);
    codeobj_81905b428ba4f95357357879b5627fc3 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], NULL, NULL, 0, 0, 0);
    codeobj_c8b1eed35db868d7ef415d55d41e26ba = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], NULL, NULL, 0, 0, 0);
    codeobj_f7ac4c494e37fc4056f4d83d0f2ad811 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], NULL, NULL, 0, 0, 0);
    codeobj_37e3e3771c29811ab383199a93ddbfe5 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_b59ebbeafb5b0574c1532d59819bee70 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], NULL, NULL, 0, 0, 0);
    codeobj_3b2c4ea08d097572eabff4601acfdfe7 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[92], NULL, 0, 0, 0);
    codeobj_0af6aa7bb7dfd341ad5d2005a8293912 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_7a18500e6ee3ff73985f038c6a7b135a = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[92], NULL, 0, 0, 0);
    codeobj_83b84b4c9eec50d4b246412df56ecff7 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_70a73cb3f529263ff3b9335234d7fd79 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], NULL, NULL, 0, 0, 0);
    codeobj_d184cc585b65da2f4a2f902594e8ba8f = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], NULL, NULL, 0, 0, 0);
    codeobj_6962a8b5fe828fd36ba1ebf93a4e8133 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[93], NULL, 4, 0, 0);
    codeobj_d5ebaa9a0dda656ec580ddedc29d93e9 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[94], NULL, 2, 0, 0);
    codeobj_8b98183789afdaadd3b2fd3ee3ffa946 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], NULL, NULL, 0, 0, 0);
    codeobj_06f29d2201fd319ea0da5d5ef49c077d = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[95], NULL, 1, 0, 0);
    codeobj_99949ab1a827eb97a6519f7b757dabc1 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], NULL, NULL, 0, 0, 0);
    codeobj_534f05dabd50110bb9cb18569e005035 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[92], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12__unpack_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__10_integral_types();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__11_integral_types_and();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__12_all_types();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__13_all_types_and();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__14_complex_types();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__15_all_types_and_complex();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__16_all_types_and_complex_and();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__17_all_types_and_half();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__18_get_all_dtypes(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__19_get_all_math_dtypes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__1__validate_dtypes();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__20_get_all_complex_dtypes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__21_get_all_int_dtypes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__22_get_all_fp_dtypes(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__23_get_all_device_types(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__2___add__();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__3_empty_types();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__4_floating_types();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__5_floating_types_and_half();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__6_floating_types_and();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__7_floating_and_complex_types();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__8_floating_and_complex_types_and();


static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__9_double_types();


// The module function definitions.
static PyObject *impl_torch$testing$_legacy$$$function__1__validate_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtypes = python_pars[0];
    PyObject *var_dtype = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d56a08f7a77d688b1474bb3709a028c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d56a08f7a77d688b1474bb3709a028c3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d56a08f7a77d688b1474bb3709a028c3)) {
        Py_XDECREF(cache_frame_d56a08f7a77d688b1474bb3709a028c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d56a08f7a77d688b1474bb3709a028c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d56a08f7a77d688b1474bb3709a028c3 = MAKE_FUNCTION_FRAME(codeobj_d56a08f7a77d688b1474bb3709a028c3, module_torch$testing$_legacy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d56a08f7a77d688b1474bb3709a028c3->m_type_description == NULL);
    frame_d56a08f7a77d688b1474bb3709a028c3 = cache_frame_d56a08f7a77d688b1474bb3709a028c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d56a08f7a77d688b1474bb3709a028c3);
    assert(Py_REFCNT(frame_d56a08f7a77d688b1474bb3709a028c3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_dtypes);
        tmp_iter_arg_1 = par_dtypes;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 45;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_dtype;
            var_dtype = tmp_assign_source_3;
            Py_INCREF(var_dtype);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_dtype);
        tmp_isinstance_inst_1 = var_dtype;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 46;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;
        type_description_1 = "oo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d56a08f7a77d688b1474bb3709a028c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d56a08f7a77d688b1474bb3709a028c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d56a08f7a77d688b1474bb3709a028c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d56a08f7a77d688b1474bb3709a028c3,
        type_description_1,
        par_dtypes,
        var_dtype
    );


    // Release cached frame if used for exception.
    if (frame_d56a08f7a77d688b1474bb3709a028c3 == cache_frame_d56a08f7a77d688b1474bb3709a028c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d56a08f7a77d688b1474bb3709a028c3);
        cache_frame_d56a08f7a77d688b1474bb3709a028c3 = NULL;
    }

    assertFrameObject(frame_d56a08f7a77d688b1474bb3709a028c3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(par_dtypes);
    tmp_return_value = par_dtypes;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
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

    Py_XDECREF(var_dtype);
    var_dtype = NULL;
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
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__2___add__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_7ae0e5cccf6ef49243bc7bd4fda47e55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55)) {
        Py_XDECREF(cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55 = MAKE_FUNCTION_FRAME(codeobj_7ae0e5cccf6ef49243bc7bd4fda47e55, module_torch$testing$_legacy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55->m_type_description == NULL);
    frame_7ae0e5cccf6ef49243bc7bd4fda47e55 = cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ae0e5cccf6ef49243bc7bd4fda47e55);
    assert(Py_REFCNT(frame_7ae0e5cccf6ef49243bc7bd4fda47e55) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = (PyObject *)&PyTuple_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_7ae0e5cccf6ef49243bc7bd4fda47e55->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7ae0e5cccf6ef49243bc7bd4fda47e55->m_frame.f_lineno = 53;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_7ae0e5cccf6ef49243bc7bd4fda47e55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ae0e5cccf6ef49243bc7bd4fda47e55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ae0e5cccf6ef49243bc7bd4fda47e55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ae0e5cccf6ef49243bc7bd4fda47e55,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_7ae0e5cccf6ef49243bc7bd4fda47e55 == cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55);
        cache_frame_7ae0e5cccf6ef49243bc7bd4fda47e55 = NULL;
    }

    assertFrameObject(frame_7ae0e5cccf6ef49243bc7bd4fda47e55);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__3_empty_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_37e3e3771c29811ab383199a93ddbfe5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37e3e3771c29811ab383199a93ddbfe5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_37e3e3771c29811ab383199a93ddbfe5)) {
        Py_XDECREF(cache_frame_37e3e3771c29811ab383199a93ddbfe5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37e3e3771c29811ab383199a93ddbfe5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37e3e3771c29811ab383199a93ddbfe5 = MAKE_FUNCTION_FRAME(codeobj_37e3e3771c29811ab383199a93ddbfe5, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37e3e3771c29811ab383199a93ddbfe5->m_type_description == NULL);
    frame_37e3e3771c29811ab383199a93ddbfe5 = cache_frame_37e3e3771c29811ab383199a93ddbfe5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_37e3e3771c29811ab383199a93ddbfe5);
    assert(Py_REFCNT(frame_37e3e3771c29811ab383199a93ddbfe5) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[4]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37e3e3771c29811ab383199a93ddbfe5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37e3e3771c29811ab383199a93ddbfe5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37e3e3771c29811ab383199a93ddbfe5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37e3e3771c29811ab383199a93ddbfe5,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_37e3e3771c29811ab383199a93ddbfe5 == cache_frame_37e3e3771c29811ab383199a93ddbfe5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37e3e3771c29811ab383199a93ddbfe5);
        cache_frame_37e3e3771c29811ab383199a93ddbfe5 = NULL;
    }

    assertFrameObject(frame_37e3e3771c29811ab383199a93ddbfe5);

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


static PyObject *impl_torch$testing$_legacy$$$function__4_floating_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0af6aa7bb7dfd341ad5d2005a8293912;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0af6aa7bb7dfd341ad5d2005a8293912 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0af6aa7bb7dfd341ad5d2005a8293912)) {
        Py_XDECREF(cache_frame_0af6aa7bb7dfd341ad5d2005a8293912);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0af6aa7bb7dfd341ad5d2005a8293912 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0af6aa7bb7dfd341ad5d2005a8293912 = MAKE_FUNCTION_FRAME(codeobj_0af6aa7bb7dfd341ad5d2005a8293912, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0af6aa7bb7dfd341ad5d2005a8293912->m_type_description == NULL);
    frame_0af6aa7bb7dfd341ad5d2005a8293912 = cache_frame_0af6aa7bb7dfd341ad5d2005a8293912;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0af6aa7bb7dfd341ad5d2005a8293912);
    assert(Py_REFCNT(frame_0af6aa7bb7dfd341ad5d2005a8293912) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[5]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0af6aa7bb7dfd341ad5d2005a8293912, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0af6aa7bb7dfd341ad5d2005a8293912->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0af6aa7bb7dfd341ad5d2005a8293912, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0af6aa7bb7dfd341ad5d2005a8293912,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0af6aa7bb7dfd341ad5d2005a8293912 == cache_frame_0af6aa7bb7dfd341ad5d2005a8293912) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0af6aa7bb7dfd341ad5d2005a8293912);
        cache_frame_0af6aa7bb7dfd341ad5d2005a8293912 = NULL;
    }

    assertFrameObject(frame_0af6aa7bb7dfd341ad5d2005a8293912);

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


static PyObject *impl_torch$testing$_legacy$$$function__5_floating_types_and_half(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_83b84b4c9eec50d4b246412df56ecff7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83b84b4c9eec50d4b246412df56ecff7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83b84b4c9eec50d4b246412df56ecff7)) {
        Py_XDECREF(cache_frame_83b84b4c9eec50d4b246412df56ecff7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83b84b4c9eec50d4b246412df56ecff7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83b84b4c9eec50d4b246412df56ecff7 = MAKE_FUNCTION_FRAME(codeobj_83b84b4c9eec50d4b246412df56ecff7, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83b84b4c9eec50d4b246412df56ecff7->m_type_description == NULL);
    frame_83b84b4c9eec50d4b246412df56ecff7 = cache_frame_83b84b4c9eec50d4b246412df56ecff7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83b84b4c9eec50d4b246412df56ecff7);
    assert(Py_REFCNT(frame_83b84b4c9eec50d4b246412df56ecff7) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83b84b4c9eec50d4b246412df56ecff7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83b84b4c9eec50d4b246412df56ecff7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83b84b4c9eec50d4b246412df56ecff7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83b84b4c9eec50d4b246412df56ecff7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_83b84b4c9eec50d4b246412df56ecff7 == cache_frame_83b84b4c9eec50d4b246412df56ecff7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83b84b4c9eec50d4b246412df56ecff7);
        cache_frame_83b84b4c9eec50d4b246412df56ecff7 = NULL;
    }

    assertFrameObject(frame_83b84b4c9eec50d4b246412df56ecff7);

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


static PyObject *impl_torch$testing$_legacy$$$function__6_floating_types_and(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtypes = python_pars[0];
    struct Nuitka_FrameObject *frame_7a18500e6ee3ff73985f038c6a7b135a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a18500e6ee3ff73985f038c6a7b135a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a18500e6ee3ff73985f038c6a7b135a)) {
        Py_XDECREF(cache_frame_7a18500e6ee3ff73985f038c6a7b135a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a18500e6ee3ff73985f038c6a7b135a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a18500e6ee3ff73985f038c6a7b135a = MAKE_FUNCTION_FRAME(codeobj_7a18500e6ee3ff73985f038c6a7b135a, module_torch$testing$_legacy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a18500e6ee3ff73985f038c6a7b135a->m_type_description == NULL);
    frame_7a18500e6ee3ff73985f038c6a7b135a = cache_frame_7a18500e6ee3ff73985f038c6a7b135a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a18500e6ee3ff73985f038c6a7b135a);
    assert(Py_REFCNT(frame_7a18500e6ee3ff73985f038c6a7b135a) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtypes);
        tmp_dircall_arg2_1 = par_dtypes;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_add_expr_right_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_7a18500e6ee3ff73985f038c6a7b135a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a18500e6ee3ff73985f038c6a7b135a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a18500e6ee3ff73985f038c6a7b135a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a18500e6ee3ff73985f038c6a7b135a,
        type_description_1,
        par_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_7a18500e6ee3ff73985f038c6a7b135a == cache_frame_7a18500e6ee3ff73985f038c6a7b135a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a18500e6ee3ff73985f038c6a7b135a);
        cache_frame_7a18500e6ee3ff73985f038c6a7b135a = NULL;
    }

    assertFrameObject(frame_7a18500e6ee3ff73985f038c6a7b135a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__7_floating_and_complex_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b59ebbeafb5b0574c1532d59819bee70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b59ebbeafb5b0574c1532d59819bee70 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b59ebbeafb5b0574c1532d59819bee70)) {
        Py_XDECREF(cache_frame_b59ebbeafb5b0574c1532d59819bee70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b59ebbeafb5b0574c1532d59819bee70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b59ebbeafb5b0574c1532d59819bee70 = MAKE_FUNCTION_FRAME(codeobj_b59ebbeafb5b0574c1532d59819bee70, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b59ebbeafb5b0574c1532d59819bee70->m_type_description == NULL);
    frame_b59ebbeafb5b0574c1532d59819bee70 = cache_frame_b59ebbeafb5b0574c1532d59819bee70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b59ebbeafb5b0574c1532d59819bee70);
    assert(Py_REFCNT(frame_b59ebbeafb5b0574c1532d59819bee70) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[8]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b59ebbeafb5b0574c1532d59819bee70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b59ebbeafb5b0574c1532d59819bee70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b59ebbeafb5b0574c1532d59819bee70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b59ebbeafb5b0574c1532d59819bee70,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b59ebbeafb5b0574c1532d59819bee70 == cache_frame_b59ebbeafb5b0574c1532d59819bee70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b59ebbeafb5b0574c1532d59819bee70);
        cache_frame_b59ebbeafb5b0574c1532d59819bee70 = NULL;
    }

    assertFrameObject(frame_b59ebbeafb5b0574c1532d59819bee70);

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


static PyObject *impl_torch$testing$_legacy$$$function__8_floating_and_complex_types_and(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtypes = python_pars[0];
    struct Nuitka_FrameObject *frame_3b2c4ea08d097572eabff4601acfdfe7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b2c4ea08d097572eabff4601acfdfe7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3b2c4ea08d097572eabff4601acfdfe7)) {
        Py_XDECREF(cache_frame_3b2c4ea08d097572eabff4601acfdfe7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b2c4ea08d097572eabff4601acfdfe7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b2c4ea08d097572eabff4601acfdfe7 = MAKE_FUNCTION_FRAME(codeobj_3b2c4ea08d097572eabff4601acfdfe7, module_torch$testing$_legacy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b2c4ea08d097572eabff4601acfdfe7->m_type_description == NULL);
    frame_3b2c4ea08d097572eabff4601acfdfe7 = cache_frame_3b2c4ea08d097572eabff4601acfdfe7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b2c4ea08d097572eabff4601acfdfe7);
    assert(Py_REFCNT(frame_3b2c4ea08d097572eabff4601acfdfe7) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtypes);
        tmp_dircall_arg2_1 = par_dtypes;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_add_expr_right_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_3b2c4ea08d097572eabff4601acfdfe7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b2c4ea08d097572eabff4601acfdfe7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b2c4ea08d097572eabff4601acfdfe7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b2c4ea08d097572eabff4601acfdfe7,
        type_description_1,
        par_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_3b2c4ea08d097572eabff4601acfdfe7 == cache_frame_3b2c4ea08d097572eabff4601acfdfe7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b2c4ea08d097572eabff4601acfdfe7);
        cache_frame_3b2c4ea08d097572eabff4601acfdfe7 = NULL;
    }

    assertFrameObject(frame_3b2c4ea08d097572eabff4601acfdfe7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__9_double_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f7ac4c494e37fc4056f4d83d0f2ad811;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811)) {
        Py_XDECREF(cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811 = MAKE_FUNCTION_FRAME(codeobj_f7ac4c494e37fc4056f4d83d0f2ad811, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811->m_type_description == NULL);
    frame_f7ac4c494e37fc4056f4d83d0f2ad811 = cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f7ac4c494e37fc4056f4d83d0f2ad811);
    assert(Py_REFCNT(frame_f7ac4c494e37fc4056f4d83d0f2ad811) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7ac4c494e37fc4056f4d83d0f2ad811, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7ac4c494e37fc4056f4d83d0f2ad811->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7ac4c494e37fc4056f4d83d0f2ad811, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7ac4c494e37fc4056f4d83d0f2ad811,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f7ac4c494e37fc4056f4d83d0f2ad811 == cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811);
        cache_frame_f7ac4c494e37fc4056f4d83d0f2ad811 = NULL;
    }

    assertFrameObject(frame_f7ac4c494e37fc4056f4d83d0f2ad811);

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


static PyObject *impl_torch$testing$_legacy$$$function__10_integral_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_99949ab1a827eb97a6519f7b757dabc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_99949ab1a827eb97a6519f7b757dabc1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_99949ab1a827eb97a6519f7b757dabc1)) {
        Py_XDECREF(cache_frame_99949ab1a827eb97a6519f7b757dabc1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99949ab1a827eb97a6519f7b757dabc1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99949ab1a827eb97a6519f7b757dabc1 = MAKE_FUNCTION_FRAME(codeobj_99949ab1a827eb97a6519f7b757dabc1, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_99949ab1a827eb97a6519f7b757dabc1->m_type_description == NULL);
    frame_99949ab1a827eb97a6519f7b757dabc1 = cache_frame_99949ab1a827eb97a6519f7b757dabc1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_99949ab1a827eb97a6519f7b757dabc1);
    assert(Py_REFCNT(frame_99949ab1a827eb97a6519f7b757dabc1) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[10]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_99949ab1a827eb97a6519f7b757dabc1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99949ab1a827eb97a6519f7b757dabc1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99949ab1a827eb97a6519f7b757dabc1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99949ab1a827eb97a6519f7b757dabc1,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_99949ab1a827eb97a6519f7b757dabc1 == cache_frame_99949ab1a827eb97a6519f7b757dabc1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_99949ab1a827eb97a6519f7b757dabc1);
        cache_frame_99949ab1a827eb97a6519f7b757dabc1 = NULL;
    }

    assertFrameObject(frame_99949ab1a827eb97a6519f7b757dabc1);

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


static PyObject *impl_torch$testing$_legacy$$$function__11_integral_types_and(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtypes = python_pars[0];
    struct Nuitka_FrameObject *frame_534f05dabd50110bb9cb18569e005035;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_534f05dabd50110bb9cb18569e005035 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_534f05dabd50110bb9cb18569e005035)) {
        Py_XDECREF(cache_frame_534f05dabd50110bb9cb18569e005035);

#if _DEBUG_REFCOUNTS
        if (cache_frame_534f05dabd50110bb9cb18569e005035 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_534f05dabd50110bb9cb18569e005035 = MAKE_FUNCTION_FRAME(codeobj_534f05dabd50110bb9cb18569e005035, module_torch$testing$_legacy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_534f05dabd50110bb9cb18569e005035->m_type_description == NULL);
    frame_534f05dabd50110bb9cb18569e005035 = cache_frame_534f05dabd50110bb9cb18569e005035;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_534f05dabd50110bb9cb18569e005035);
    assert(Py_REFCNT(frame_534f05dabd50110bb9cb18569e005035) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtypes);
        tmp_dircall_arg2_1 = par_dtypes;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_add_expr_right_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
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
        exception_tb = MAKE_TRACEBACK(frame_534f05dabd50110bb9cb18569e005035, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_534f05dabd50110bb9cb18569e005035->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_534f05dabd50110bb9cb18569e005035, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_534f05dabd50110bb9cb18569e005035,
        type_description_1,
        par_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_534f05dabd50110bb9cb18569e005035 == cache_frame_534f05dabd50110bb9cb18569e005035) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_534f05dabd50110bb9cb18569e005035);
        cache_frame_534f05dabd50110bb9cb18569e005035 = NULL;
    }

    assertFrameObject(frame_534f05dabd50110bb9cb18569e005035);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__12_all_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_50c3edfcb4a599dd5a536f52cc2af8c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6)) {
        Py_XDECREF(cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6 = MAKE_FUNCTION_FRAME(codeobj_50c3edfcb4a599dd5a536f52cc2af8c6, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6->m_type_description == NULL);
    frame_50c3edfcb4a599dd5a536f52cc2af8c6 = cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50c3edfcb4a599dd5a536f52cc2af8c6);
    assert(Py_REFCNT(frame_50c3edfcb4a599dd5a536f52cc2af8c6) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[11]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50c3edfcb4a599dd5a536f52cc2af8c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50c3edfcb4a599dd5a536f52cc2af8c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50c3edfcb4a599dd5a536f52cc2af8c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50c3edfcb4a599dd5a536f52cc2af8c6,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_50c3edfcb4a599dd5a536f52cc2af8c6 == cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6);
        cache_frame_50c3edfcb4a599dd5a536f52cc2af8c6 = NULL;
    }

    assertFrameObject(frame_50c3edfcb4a599dd5a536f52cc2af8c6);

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


static PyObject *impl_torch$testing$_legacy$$$function__13_all_types_and(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtypes = python_pars[0];
    struct Nuitka_FrameObject *frame_ea354d3e34fafa9d03be83c67c876d2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea354d3e34fafa9d03be83c67c876d2d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea354d3e34fafa9d03be83c67c876d2d)) {
        Py_XDECREF(cache_frame_ea354d3e34fafa9d03be83c67c876d2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea354d3e34fafa9d03be83c67c876d2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea354d3e34fafa9d03be83c67c876d2d = MAKE_FUNCTION_FRAME(codeobj_ea354d3e34fafa9d03be83c67c876d2d, module_torch$testing$_legacy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea354d3e34fafa9d03be83c67c876d2d->m_type_description == NULL);
    frame_ea354d3e34fafa9d03be83c67c876d2d = cache_frame_ea354d3e34fafa9d03be83c67c876d2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea354d3e34fafa9d03be83c67c876d2d);
    assert(Py_REFCNT(frame_ea354d3e34fafa9d03be83c67c876d2d) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtypes);
        tmp_dircall_arg2_1 = par_dtypes;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_add_expr_right_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_ea354d3e34fafa9d03be83c67c876d2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea354d3e34fafa9d03be83c67c876d2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea354d3e34fafa9d03be83c67c876d2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea354d3e34fafa9d03be83c67c876d2d,
        type_description_1,
        par_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_ea354d3e34fafa9d03be83c67c876d2d == cache_frame_ea354d3e34fafa9d03be83c67c876d2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea354d3e34fafa9d03be83c67c876d2d);
        cache_frame_ea354d3e34fafa9d03be83c67c876d2d = NULL;
    }

    assertFrameObject(frame_ea354d3e34fafa9d03be83c67c876d2d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__14_complex_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c8b1eed35db868d7ef415d55d41e26ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8b1eed35db868d7ef415d55d41e26ba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8b1eed35db868d7ef415d55d41e26ba)) {
        Py_XDECREF(cache_frame_c8b1eed35db868d7ef415d55d41e26ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8b1eed35db868d7ef415d55d41e26ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8b1eed35db868d7ef415d55d41e26ba = MAKE_FUNCTION_FRAME(codeobj_c8b1eed35db868d7ef415d55d41e26ba, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8b1eed35db868d7ef415d55d41e26ba->m_type_description == NULL);
    frame_c8b1eed35db868d7ef415d55d41e26ba = cache_frame_c8b1eed35db868d7ef415d55d41e26ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8b1eed35db868d7ef415d55d41e26ba);
    assert(Py_REFCNT(frame_c8b1eed35db868d7ef415d55d41e26ba) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[12]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8b1eed35db868d7ef415d55d41e26ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8b1eed35db868d7ef415d55d41e26ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8b1eed35db868d7ef415d55d41e26ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8b1eed35db868d7ef415d55d41e26ba,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c8b1eed35db868d7ef415d55d41e26ba == cache_frame_c8b1eed35db868d7ef415d55d41e26ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8b1eed35db868d7ef415d55d41e26ba);
        cache_frame_c8b1eed35db868d7ef415d55d41e26ba = NULL;
    }

    assertFrameObject(frame_c8b1eed35db868d7ef415d55d41e26ba);

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


static PyObject *impl_torch$testing$_legacy$$$function__15_all_types_and_complex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d7afd33ff8f46992dc263d487d43b051;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7afd33ff8f46992dc263d487d43b051 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7afd33ff8f46992dc263d487d43b051)) {
        Py_XDECREF(cache_frame_d7afd33ff8f46992dc263d487d43b051);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7afd33ff8f46992dc263d487d43b051 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7afd33ff8f46992dc263d487d43b051 = MAKE_FUNCTION_FRAME(codeobj_d7afd33ff8f46992dc263d487d43b051, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7afd33ff8f46992dc263d487d43b051->m_type_description == NULL);
    frame_d7afd33ff8f46992dc263d487d43b051 = cache_frame_d7afd33ff8f46992dc263d487d43b051;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7afd33ff8f46992dc263d487d43b051);
    assert(Py_REFCNT(frame_d7afd33ff8f46992dc263d487d43b051) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[13]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 101;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7afd33ff8f46992dc263d487d43b051, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7afd33ff8f46992dc263d487d43b051->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7afd33ff8f46992dc263d487d43b051, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7afd33ff8f46992dc263d487d43b051,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d7afd33ff8f46992dc263d487d43b051 == cache_frame_d7afd33ff8f46992dc263d487d43b051) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7afd33ff8f46992dc263d487d43b051);
        cache_frame_d7afd33ff8f46992dc263d487d43b051 = NULL;
    }

    assertFrameObject(frame_d7afd33ff8f46992dc263d487d43b051);

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


static PyObject *impl_torch$testing$_legacy$$$function__16_all_types_and_complex_and(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtypes = python_pars[0];
    struct Nuitka_FrameObject *frame_b5cfe5281a634f2d600c733407f7a06a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5cfe5281a634f2d600c733407f7a06a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5cfe5281a634f2d600c733407f7a06a)) {
        Py_XDECREF(cache_frame_b5cfe5281a634f2d600c733407f7a06a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5cfe5281a634f2d600c733407f7a06a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5cfe5281a634f2d600c733407f7a06a = MAKE_FUNCTION_FRAME(codeobj_b5cfe5281a634f2d600c733407f7a06a, module_torch$testing$_legacy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5cfe5281a634f2d600c733407f7a06a->m_type_description == NULL);
    frame_b5cfe5281a634f2d600c733407f7a06a = cache_frame_b5cfe5281a634f2d600c733407f7a06a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5cfe5281a634f2d600c733407f7a06a);
    assert(Py_REFCNT(frame_b5cfe5281a634f2d600c733407f7a06a) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtypes);
        tmp_dircall_arg2_1 = par_dtypes;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_add_expr_right_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_b5cfe5281a634f2d600c733407f7a06a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5cfe5281a634f2d600c733407f7a06a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5cfe5281a634f2d600c733407f7a06a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5cfe5281a634f2d600c733407f7a06a,
        type_description_1,
        par_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_b5cfe5281a634f2d600c733407f7a06a == cache_frame_b5cfe5281a634f2d600c733407f7a06a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5cfe5281a634f2d600c733407f7a06a);
        cache_frame_b5cfe5281a634f2d600c733407f7a06a = NULL;
    }

    assertFrameObject(frame_b5cfe5281a634f2d600c733407f7a06a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtypes);
    Py_DECREF(par_dtypes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__17_all_types_and_half(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_81905b428ba4f95357357879b5627fc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81905b428ba4f95357357879b5627fc3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81905b428ba4f95357357879b5627fc3)) {
        Py_XDECREF(cache_frame_81905b428ba4f95357357879b5627fc3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81905b428ba4f95357357879b5627fc3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81905b428ba4f95357357879b5627fc3 = MAKE_FUNCTION_FRAME(codeobj_81905b428ba4f95357357879b5627fc3, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81905b428ba4f95357357879b5627fc3->m_type_description == NULL);
    frame_81905b428ba4f95357357879b5627fc3 = cache_frame_81905b428ba4f95357357879b5627fc3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81905b428ba4f95357357879b5627fc3);
    assert(Py_REFCNT(frame_81905b428ba4f95357357879b5627fc3) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[14]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 108;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81905b428ba4f95357357879b5627fc3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81905b428ba4f95357357879b5627fc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81905b428ba4f95357357879b5627fc3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81905b428ba4f95357357879b5627fc3,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_81905b428ba4f95357357879b5627fc3 == cache_frame_81905b428ba4f95357357879b5627fc3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81905b428ba4f95357357879b5627fc3);
        cache_frame_81905b428ba4f95357357879b5627fc3 = NULL;
    }

    assertFrameObject(frame_81905b428ba4f95357357879b5627fc3);

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


static PyObject *impl_torch$testing$_legacy$$$function__18_get_all_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_half = python_pars[0];
    PyObject *par_include_bfloat16 = python_pars[1];
    PyObject *par_include_bool = python_pars[2];
    PyObject *par_include_complex = python_pars[3];
    PyObject *var_dtypes = NULL;
    struct Nuitka_FrameObject *frame_6962a8b5fe828fd36ba1ebf93a4e8133;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133)) {
        Py_XDECREF(cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133 = MAKE_FUNCTION_FRAME(codeobj_6962a8b5fe828fd36ba1ebf93a4e8133, module_torch$testing$_legacy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133->m_type_description == NULL);
    frame_6962a8b5fe828fd36ba1ebf93a4e8133 = cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6962a8b5fe828fd36ba1ebf93a4e8133);
    assert(Py_REFCNT(frame_6962a8b5fe828fd36ba1ebf93a4e8133) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6962a8b5fe828fd36ba1ebf93a4e8133->m_frame.f_lineno = 117;
        tmp_add_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_include_half);
        tmp_kw_call_value_0_1 = par_include_half;
        CHECK_OBJECT(par_include_bfloat16);
        tmp_kw_call_value_1_1 = par_include_bfloat16;
        frame_6962a8b5fe828fd36ba1ebf93a4e8133->m_frame.f_lineno = 117;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_add_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[17]);
        }

        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtypes == NULL);
        var_dtypes = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_include_bool);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_include_bool);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_dtypes);
        tmp_expression_value_1 = var_dtypes;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6962a8b5fe828fd36ba1ebf93a4e8133->m_frame.f_lineno = 119;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_include_complex);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_include_complex);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_4;
        if (var_dtypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_dtypes;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6962a8b5fe828fd36ba1ebf93a4e8133->m_frame.f_lineno = 121;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_dtypes = tmp_assign_source_2;

    }
    branch_no_2:;
    if (var_dtypes == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 122;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_dtypes;
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
        exception_tb = MAKE_TRACEBACK(frame_6962a8b5fe828fd36ba1ebf93a4e8133, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6962a8b5fe828fd36ba1ebf93a4e8133->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6962a8b5fe828fd36ba1ebf93a4e8133, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6962a8b5fe828fd36ba1ebf93a4e8133,
        type_description_1,
        par_include_half,
        par_include_bfloat16,
        par_include_bool,
        par_include_complex,
        var_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_6962a8b5fe828fd36ba1ebf93a4e8133 == cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133);
        cache_frame_6962a8b5fe828fd36ba1ebf93a4e8133 = NULL;
    }

    assertFrameObject(frame_6962a8b5fe828fd36ba1ebf93a4e8133);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
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

    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
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
    CHECK_OBJECT(par_include_half);
    Py_DECREF(par_include_half);
    CHECK_OBJECT(par_include_bfloat16);
    Py_DECREF(par_include_bfloat16);
    CHECK_OBJECT(par_include_bool);
    Py_DECREF(par_include_bool);
    CHECK_OBJECT(par_include_complex);
    Py_DECREF(par_include_complex);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_include_half);
    Py_DECREF(par_include_half);
    CHECK_OBJECT(par_include_bfloat16);
    Py_DECREF(par_include_bfloat16);
    CHECK_OBJECT(par_include_bool);
    Py_DECREF(par_include_bool);
    CHECK_OBJECT(par_include_complex);
    Py_DECREF(par_include_complex);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__19_get_all_math_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_06f29d2201fd319ea0da5d5ef49c077d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06f29d2201fd319ea0da5d5ef49c077d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_06f29d2201fd319ea0da5d5ef49c077d)) {
        Py_XDECREF(cache_frame_06f29d2201fd319ea0da5d5ef49c077d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06f29d2201fd319ea0da5d5ef49c077d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06f29d2201fd319ea0da5d5ef49c077d = MAKE_FUNCTION_FRAME(codeobj_06f29d2201fd319ea0da5d5ef49c077d, module_torch$testing$_legacy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06f29d2201fd319ea0da5d5ef49c077d->m_type_description == NULL);
    frame_06f29d2201fd319ea0da5d5ef49c077d = cache_frame_06f29d2201fd319ea0da5d5ef49c077d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_06f29d2201fd319ea0da5d5ef49c077d);
    assert(Py_REFCNT(frame_06f29d2201fd319ea0da5d5ef49c077d) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_06f29d2201fd319ea0da5d5ef49c077d->m_frame.f_lineno = 125;
        tmp_add_expr_left_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_expression_value_1 = par_device;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_06f29d2201fd319ea0da5d5ef49c077d->m_frame.f_lineno = 125;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[23]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = Py_False;
        frame_06f29d2201fd319ea0da5d5ef49c077d->m_frame.f_lineno = 125;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_add_expr_right_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_06f29d2201fd319ea0da5d5ef49c077d->m_frame.f_lineno = 126;
        tmp_add_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_06f29d2201fd319ea0da5d5ef49c077d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06f29d2201fd319ea0da5d5ef49c077d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06f29d2201fd319ea0da5d5ef49c077d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06f29d2201fd319ea0da5d5ef49c077d,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_06f29d2201fd319ea0da5d5ef49c077d == cache_frame_06f29d2201fd319ea0da5d5ef49c077d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06f29d2201fd319ea0da5d5ef49c077d);
        cache_frame_06f29d2201fd319ea0da5d5ef49c077d = NULL;
    }

    assertFrameObject(frame_06f29d2201fd319ea0da5d5ef49c077d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__20_get_all_complex_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_70a73cb3f529263ff3b9335234d7fd79;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70a73cb3f529263ff3b9335234d7fd79 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70a73cb3f529263ff3b9335234d7fd79)) {
        Py_XDECREF(cache_frame_70a73cb3f529263ff3b9335234d7fd79);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70a73cb3f529263ff3b9335234d7fd79 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70a73cb3f529263ff3b9335234d7fd79 = MAKE_FUNCTION_FRAME(codeobj_70a73cb3f529263ff3b9335234d7fd79, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70a73cb3f529263ff3b9335234d7fd79->m_type_description == NULL);
    frame_70a73cb3f529263ff3b9335234d7fd79 = cache_frame_70a73cb3f529263ff3b9335234d7fd79;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70a73cb3f529263ff3b9335234d7fd79);
    assert(Py_REFCNT(frame_70a73cb3f529263ff3b9335234d7fd79) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_70a73cb3f529263ff3b9335234d7fd79, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70a73cb3f529263ff3b9335234d7fd79->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70a73cb3f529263ff3b9335234d7fd79, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70a73cb3f529263ff3b9335234d7fd79,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_70a73cb3f529263ff3b9335234d7fd79 == cache_frame_70a73cb3f529263ff3b9335234d7fd79) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70a73cb3f529263ff3b9335234d7fd79);
        cache_frame_70a73cb3f529263ff3b9335234d7fd79 = NULL;
    }

    assertFrameObject(frame_70a73cb3f529263ff3b9335234d7fd79);

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


static PyObject *impl_torch$testing$_legacy$$$function__21_get_all_int_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8b98183789afdaadd3b2fd3ee3ffa946;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b98183789afdaadd3b2fd3ee3ffa946 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b98183789afdaadd3b2fd3ee3ffa946)) {
        Py_XDECREF(cache_frame_8b98183789afdaadd3b2fd3ee3ffa946);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b98183789afdaadd3b2fd3ee3ffa946 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b98183789afdaadd3b2fd3ee3ffa946 = MAKE_FUNCTION_FRAME(codeobj_8b98183789afdaadd3b2fd3ee3ffa946, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b98183789afdaadd3b2fd3ee3ffa946->m_type_description == NULL);
    frame_8b98183789afdaadd3b2fd3ee3ffa946 = cache_frame_8b98183789afdaadd3b2fd3ee3ffa946;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b98183789afdaadd3b2fd3ee3ffa946);
    assert(Py_REFCNT(frame_8b98183789afdaadd3b2fd3ee3ffa946) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 3, tmp_list_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 4, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_8b98183789afdaadd3b2fd3ee3ffa946, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b98183789afdaadd3b2fd3ee3ffa946->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b98183789afdaadd3b2fd3ee3ffa946, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b98183789afdaadd3b2fd3ee3ffa946,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8b98183789afdaadd3b2fd3ee3ffa946 == cache_frame_8b98183789afdaadd3b2fd3ee3ffa946) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b98183789afdaadd3b2fd3ee3ffa946);
        cache_frame_8b98183789afdaadd3b2fd3ee3ffa946 = NULL;
    }

    assertFrameObject(frame_8b98183789afdaadd3b2fd3ee3ffa946);

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


static PyObject *impl_torch$testing$_legacy$$$function__22_get_all_fp_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_half = python_pars[0];
    PyObject *par_include_bfloat16 = python_pars[1];
    PyObject *var_dtypes = NULL;
    struct Nuitka_FrameObject *frame_d5ebaa9a0dda656ec580ddedc29d93e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9)) {
        Py_XDECREF(cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9 = MAKE_FUNCTION_FRAME(codeobj_d5ebaa9a0dda656ec580ddedc29d93e9, module_torch$testing$_legacy, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9->m_type_description == NULL);
    frame_d5ebaa9a0dda656ec580ddedc29d93e9 = cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5ebaa9a0dda656ec580ddedc29d93e9);
    assert(Py_REFCNT(frame_d5ebaa9a0dda656ec580ddedc29d93e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_dtypes == NULL);
        var_dtypes = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_include_half);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_include_half);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
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
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_dtypes);
        tmp_list_arg_value_1 = var_dtypes;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_include_bfloat16);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_include_bfloat16);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_expression_value_4;
        if (var_dtypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_dtypes;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_item_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    if (var_dtypes == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_dtypes;
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
        exception_tb = MAKE_TRACEBACK(frame_d5ebaa9a0dda656ec580ddedc29d93e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5ebaa9a0dda656ec580ddedc29d93e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5ebaa9a0dda656ec580ddedc29d93e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5ebaa9a0dda656ec580ddedc29d93e9,
        type_description_1,
        par_include_half,
        par_include_bfloat16,
        var_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_d5ebaa9a0dda656ec580ddedc29d93e9 == cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9);
        cache_frame_d5ebaa9a0dda656ec580ddedc29d93e9 = NULL;
    }

    assertFrameObject(frame_d5ebaa9a0dda656ec580ddedc29d93e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
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

    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
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
    CHECK_OBJECT(par_include_half);
    Py_DECREF(par_include_half);
    CHECK_OBJECT(par_include_bfloat16);
    Py_DECREF(par_include_bfloat16);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_include_half);
    Py_DECREF(par_include_half);
    CHECK_OBJECT(par_include_bfloat16);
    Py_DECREF(par_include_bfloat16);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$testing$_legacy$$$function__23_get_all_device_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d184cc585b65da2f4a2f902594e8ba8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d184cc585b65da2f4a2f902594e8ba8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d184cc585b65da2f4a2f902594e8ba8f)) {
        Py_XDECREF(cache_frame_d184cc585b65da2f4a2f902594e8ba8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d184cc585b65da2f4a2f902594e8ba8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d184cc585b65da2f4a2f902594e8ba8f = MAKE_FUNCTION_FRAME(codeobj_d184cc585b65da2f4a2f902594e8ba8f, module_torch$testing$_legacy, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d184cc585b65da2f4a2f902594e8ba8f->m_type_description == NULL);
    frame_d184cc585b65da2f4a2f902594e8ba8f = cache_frame_d184cc585b65da2f4a2f902594e8ba8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d184cc585b65da2f4a2f902594e8ba8f);
    assert(Py_REFCNT(frame_d184cc585b65da2f4a2f902594e8ba8f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_d184cc585b65da2f4a2f902594e8ba8f->m_frame.f_lineno = 146;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[36]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_return_value = MAKE_LIST1(mod_consts[37]);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = MAKE_LIST2(mod_consts[37],mod_consts[35]);
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_d184cc585b65da2f4a2f902594e8ba8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d184cc585b65da2f4a2f902594e8ba8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d184cc585b65da2f4a2f902594e8ba8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d184cc585b65da2f4a2f902594e8ba8f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d184cc585b65da2f4a2f902594e8ba8f == cache_frame_d184cc585b65da2f4a2f902594e8ba8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d184cc585b65da2f4a2f902594e8ba8f);
        cache_frame_d184cc585b65da2f4a2f902594e8ba8f = NULL;
    }

    assertFrameObject(frame_d184cc585b65da2f4a2f902594e8ba8f);

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



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__10_integral_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__10_integral_types,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_99949ab1a827eb97a6519f7b757dabc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__11_integral_types_and() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__11_integral_types_and,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_534f05dabd50110bb9cb18569e005035,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__12_all_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__12_all_types,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50c3edfcb4a599dd5a536f52cc2af8c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__13_all_types_and() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__13_all_types_and,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea354d3e34fafa9d03be83c67c876d2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__14_complex_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__14_complex_types,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c8b1eed35db868d7ef415d55d41e26ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__15_all_types_and_complex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__15_all_types_and_complex,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7afd33ff8f46992dc263d487d43b051,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__16_all_types_and_complex_and() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__16_all_types_and_complex_and,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5cfe5281a634f2d600c733407f7a06a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__17_all_types_and_half() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__17_all_types_and_half,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81905b428ba4f95357357879b5627fc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__18_get_all_dtypes(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__18_get_all_dtypes,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6962a8b5fe828fd36ba1ebf93a4e8133,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__19_get_all_math_dtypes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__19_get_all_math_dtypes,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_06f29d2201fd319ea0da5d5ef49c077d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__1__validate_dtypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__1__validate_dtypes,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d56a08f7a77d688b1474bb3709a028c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__20_get_all_complex_dtypes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__20_get_all_complex_dtypes,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70a73cb3f529263ff3b9335234d7fd79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__21_get_all_int_dtypes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__21_get_all_int_dtypes,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b98183789afdaadd3b2fd3ee3ffa946,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__22_get_all_fp_dtypes(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__22_get_all_fp_dtypes,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5ebaa9a0dda656ec580ddedc29d93e9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__23_get_all_device_types(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__23_get_all_device_types,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d184cc585b65da2f4a2f902594e8ba8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__2___add__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__2___add__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_7ae0e5cccf6ef49243bc7bd4fda47e55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__3_empty_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__3_empty_types,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_37e3e3771c29811ab383199a93ddbfe5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__4_floating_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__4_floating_types,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0af6aa7bb7dfd341ad5d2005a8293912,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__5_floating_types_and_half() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__5_floating_types_and_half,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83b84b4c9eec50d4b246412df56ecff7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__6_floating_types_and() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__6_floating_types_and,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a18500e6ee3ff73985f038c6a7b135a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__7_floating_and_complex_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__7_floating_and_complex_types,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b59ebbeafb5b0574c1532d59819bee70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__8_floating_and_complex_types_and() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__8_floating_and_complex_types_and,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b2c4ea08d097572eabff4601acfdfe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$testing$_legacy$$$function__9_double_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$testing$_legacy$$$function__9_double_types,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7ac4c494e37fc4056f4d83d0f2ad811,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$testing$_legacy,
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

function_impl_code functable_torch$testing$_legacy[] = {
    impl_torch$testing$_legacy$$$function__1__validate_dtypes,
    impl_torch$testing$_legacy$$$function__2___add__,
    impl_torch$testing$_legacy$$$function__3_empty_types,
    impl_torch$testing$_legacy$$$function__4_floating_types,
    impl_torch$testing$_legacy$$$function__5_floating_types_and_half,
    impl_torch$testing$_legacy$$$function__6_floating_types_and,
    impl_torch$testing$_legacy$$$function__7_floating_and_complex_types,
    impl_torch$testing$_legacy$$$function__8_floating_and_complex_types_and,
    impl_torch$testing$_legacy$$$function__9_double_types,
    impl_torch$testing$_legacy$$$function__10_integral_types,
    impl_torch$testing$_legacy$$$function__11_integral_types_and,
    impl_torch$testing$_legacy$$$function__12_all_types,
    impl_torch$testing$_legacy$$$function__13_all_types_and,
    impl_torch$testing$_legacy$$$function__14_complex_types,
    impl_torch$testing$_legacy$$$function__15_all_types_and_complex,
    impl_torch$testing$_legacy$$$function__16_all_types_and_complex_and,
    impl_torch$testing$_legacy$$$function__17_all_types_and_half,
    impl_torch$testing$_legacy$$$function__18_get_all_dtypes,
    impl_torch$testing$_legacy$$$function__19_get_all_math_dtypes,
    impl_torch$testing$_legacy$$$function__20_get_all_complex_dtypes,
    impl_torch$testing$_legacy$$$function__21_get_all_int_dtypes,
    impl_torch$testing$_legacy$$$function__22_get_all_fp_dtypes,
    impl_torch$testing$_legacy$$$function__23_get_all_device_types,
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

    function_impl_code *current = functable_torch$testing$_legacy;
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

    if (offset > sizeof(functable_torch$testing$_legacy) || offset < 0) {
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
        functable_torch$testing$_legacy[offset],
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
        module_torch$testing$_legacy,
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
PyObject *modulecode_torch$testing$_legacy(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.testing._legacy");

    // Store the module for future use.
    module_torch$testing$_legacy = module;

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
        PRINT_STRING("torch.testing._legacy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.testing._legacy: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.testing._legacy: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$testing$_legacy\n");

    moduledict_torch$testing$_legacy = MODULE_DICT(module_torch$testing$_legacy);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$testing$_legacy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$testing$_legacy,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[96]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$testing$_legacy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$testing$_legacy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$testing$_legacy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$testing$_legacy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$testing$_legacy);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_69089102caafd4181ac9f13f72767e2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3e0fce324183a6eebb956004825e5cef_2;
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
        tmp_assign_source_1 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_2);
    }
    frame_69089102caafd4181ac9f13f72767e2e = MAKE_MODULE_FRAME(codeobj_69089102caafd4181ac9f13f72767e2e, module_torch$testing$_legacy);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69089102caafd4181ac9f13f72767e2e);
    assert(Py_REFCNT(frame_69089102caafd4181ac9f13f72767e2e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[43], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$testing$_legacy,
                mod_consts[45],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[45]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$testing$_legacy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[46];
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 8;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = LIST_COPY(mod_consts[47]);
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_dircall_arg1_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[49];
        PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 1, tmp_tuple_element_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___main__$$$function__12__unpack_list(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_torch$testing$_legacy$$$function__1__validate_dtypes();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[51];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_9 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 50;

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
        tmp_subscript_value_1 = mod_consts[46];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_11 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[52]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[2];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 50;
        tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
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


            exception_lineno = 50;

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


            exception_lineno = 50;

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


                exception_lineno = 50;

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


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 50;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_3;
        }
        frame_3e0fce324183a6eebb956004825e5cef_2 = MAKE_CLASS_FRAME(codeobj_3e0fce324183a6eebb956004825e5cef, module_torch$testing$_legacy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3e0fce324183a6eebb956004825e5cef_2);
        assert(Py_REFCNT(frame_3e0fce324183a6eebb956004825e5cef_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_torch$testing$_legacy$$$function__2___add__();

        tmp_res = PyObject_SetItem(locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3e0fce324183a6eebb956004825e5cef_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3e0fce324183a6eebb956004825e5cef_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3e0fce324183a6eebb956004825e5cef_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3e0fce324183a6eebb956004825e5cef_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3e0fce324183a6eebb956004825e5cef_2);

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
            tmp_cmp_expr_right_1 = mod_consts[51];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[2];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 50;
            tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50);
        locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50 = NULL;
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

        Py_DECREF(locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50);
        locals_torch$testing$_legacy$$$class__1__dispatch_dtypes_50 = NULL;
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
        exception_lineno = 50;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 55;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[62]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$testing$_legacy$$$function__3_empty_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[31]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_5);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[32]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 59;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$testing$_legacy$$$function__4_floating_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_8;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[65]);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_add_expr_right_1, 0, tmp_tuple_element_6);
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$testing$_legacy$$$function__5_floating_types_and_half();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_torch$testing$_legacy$$$function__6_floating_types_and();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_9;
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[68]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM(tmp_add_expr_right_2, 0, tmp_tuple_element_7);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[69]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_add_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_add_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$testing$_legacy$$$function__7_floating_and_complex_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_torch$testing$_legacy$$$function__8_floating_and_complex_types_and();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_11;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[32]);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_8);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[25]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 77;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_torch$testing$_legacy$$$function__9_double_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_13;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[26]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_9);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[27]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_9);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[28]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_3, 2, tmp_tuple_element_9);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[29]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_3, 3, tmp_tuple_element_9);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[30]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_3, 4, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 81;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_torch$testing$_legacy$$$function__10_integral_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_torch$testing$_legacy$$$function__11_integral_types_and();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_add_expr_left_3 == NULL)) {
            tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_add_expr_right_3 == NULL)) {
            tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_add_expr_right_3 == NULL));
        tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_torch$testing$_legacy$$$function__12_all_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_torch$testing$_legacy$$$function__13_all_types_and();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_18;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[68]);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_10);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[69]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        frame_69089102caafd4181ac9f13f72767e2e->m_frame.f_lineno = 95;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_torch$testing$_legacy$$$function__14_complex_types();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_add_expr_left_4 == NULL)) {
            tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_add_expr_right_4 == NULL)) {
            tmp_add_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_add_expr_right_4 == NULL));
        tmp_assign_source_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_torch$testing$_legacy$$$function__15_all_types_and_complex();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_torch$testing$_legacy$$$function__16_all_types_and_complex_and();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_20;
        tmp_add_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_add_expr_left_5 == NULL)) {
            tmp_add_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_add_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[65]);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_add_expr_right_5, 0, tmp_tuple_element_11);
        tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_torch$testing$_legacy$$$function__17_all_types_and_half();

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_22;
        tmp_defaults_1 = mod_consts[81];
        tmp_dict_key_1 = mod_consts[82];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[1]);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_41 = MAKE_FUNCTION_torch$testing$_legacy$$$function__18_get_all_dtypes(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_24;
        tmp_dict_key_2 = mod_consts[82];
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[1]);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_42 = MAKE_FUNCTION_torch$testing$_legacy$$$function__19_get_all_math_dtypes(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_26;
        tmp_dict_key_3 = mod_consts[82];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[1]);
        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_43 = MAKE_FUNCTION_torch$testing$_legacy$$$function__20_get_all_complex_dtypes(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_28;
        tmp_dict_key_4 = mod_consts[82];
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[1]);
        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_44 = MAKE_FUNCTION_torch$testing$_legacy$$$function__21_get_all_int_dtypes(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_expression_value_30;
        tmp_defaults_2 = mod_consts[85];
        tmp_dict_key_5 = mod_consts[82];
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[1]);
        if (tmp_subscript_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_45 = MAKE_FUNCTION_torch$testing$_legacy$$$function__22_get_all_fp_dtypes(tmp_defaults_2, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_7;
        tmp_dict_key_6 = mod_consts[82];
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_7);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_46 = MAKE_FUNCTION_torch$testing$_legacy$$$function__23_get_all_device_types(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_46);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69089102caafd4181ac9f13f72767e2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69089102caafd4181ac9f13f72767e2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69089102caafd4181ac9f13f72767e2e, exception_lineno);
    }



    assertFrameObject(frame_69089102caafd4181ac9f13f72767e2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.testing._legacy", false);

    Py_INCREF(module_torch$testing$_legacy);
    return module_torch$testing$_legacy;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$testing$_legacy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$testing$_legacy", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
