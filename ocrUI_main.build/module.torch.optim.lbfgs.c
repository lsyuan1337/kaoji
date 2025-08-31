/* Generated code for Python module 'torch.optim.lbfgs'
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

/* The "module_torch$optim$lbfgs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$optim$lbfgs;
PyDictObject *moduledict_torch$optim$lbfgs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[188];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[188];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.optim.lbfgs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 188; i++) {
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
void checkModuleConstants_torch$optim$lbfgs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 188; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3fb100f565544ea433df9dbbe1d5cea5;
static PyCodeObject *codeobj_b5b357b1c24cff3373e896c5dcd51390;
static PyCodeObject *codeobj_529ced6414b7a98ae9a0e1d1348973eb;
static PyCodeObject *codeobj_f5b36f717507b3b4b9e17bb3629789d1;
static PyCodeObject *codeobj_28ce32062557986c1044b452099afea0;
static PyCodeObject *codeobj_82cb21f5564e9a73a9f1d95c4eaea1e5;
static PyCodeObject *codeobj_4276eabf841edf377dd437814d0f3ffb;
static PyCodeObject *codeobj_6e0df440a302a6a8c56a84cf0a52ec99;
static PyCodeObject *codeobj_18fcea42dffff2aa3494e9f77bec6ee6;
static PyCodeObject *codeobj_d673a3295d08e550eaa899fce6f71232;
static PyCodeObject *codeobj_2aa6e5e2611a727a75dcbe83a7c8907c;
static PyCodeObject *codeobj_25dc9e7b303e80da0c1269fe14c3a77d;
static PyCodeObject *codeobj_52a8cb3b6b9fdae585c80813d72a370f;
static PyCodeObject *codeobj_c8f6b1c716f52ca07e706c5c97555bea;
static PyCodeObject *codeobj_5e67aaef7c33072aaaaed4215953651d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[170]); CHECK_OBJECT(module_filename_obj);
    codeobj_3fb100f565544ea433df9dbbe1d5cea5 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[171], NULL, 2, 0, 0);
    codeobj_b5b357b1c24cff3373e896c5dcd51390 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_529ced6414b7a98ae9a0e1d1348973eb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_f5b36f717507b3b4b9e17bb3629789d1 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[175], NULL, 0, 0, 0);
    codeobj_28ce32062557986c1044b452099afea0 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[176], NULL, 9, 0, 0);
    codeobj_82cb21f5564e9a73a9f1d95c4eaea1e5 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[177], NULL, 3, 0, 0);
    codeobj_4276eabf841edf377dd437814d0f3ffb = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[178], NULL, 1, 0, 0);
    codeobj_6e0df440a302a6a8c56a84cf0a52ec99 = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[179], NULL, 7, 0, 0);
    codeobj_18fcea42dffff2aa3494e9f77bec6ee6 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[180], NULL, 5, 0, 0);
    codeobj_d673a3295d08e550eaa899fce6f71232 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[181], NULL, 1, 0, 0);
    codeobj_2aa6e5e2611a727a75dcbe83a7c8907c = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_25dc9e7b303e80da0c1269fe14c3a77d = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[182], NULL, 2, 0, 0);
    codeobj_52a8cb3b6b9fdae585c80813d72a370f = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[183], NULL, 11, 0, 0);
    codeobj_c8f6b1c716f52ca07e706c5c97555bea = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[184], mod_consts[185], 3, 0, 0);
    codeobj_5e67aaef7c33072aaaaed4215953651d = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[186], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__10_step();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__10_step$$$function__1_obj_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__1__cubic_interpolate(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__2__strong_wolfe(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__3___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__4__numel();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__4__numel$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__5__gather_flat_grad();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__6__add_grad();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__7__clone_param();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__8__set_param();


static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__9__directional_evaluate();


// The module function definitions.
static PyObject *impl_torch$optim$lbfgs$$$function__1__cubic_interpolate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x1 = python_pars[0];
    PyObject *par_f1 = python_pars[1];
    PyObject *par_g1 = python_pars[2];
    PyObject *par_x2 = python_pars[3];
    PyObject *par_f2 = python_pars[4];
    PyObject *par_g2 = python_pars[5];
    PyObject *par_bounds = python_pars[6];
    PyObject *var_xmin_bound = NULL;
    PyObject *var_xmax_bound = NULL;
    PyObject *var_d1 = NULL;
    PyObject *var_d2_square = NULL;
    PyObject *var_d2 = NULL;
    PyObject *var_min_pos = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6e0df440a302a6a8c56a84cf0a52ec99;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6e0df440a302a6a8c56a84cf0a52ec99 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e0df440a302a6a8c56a84cf0a52ec99)) {
        Py_XDECREF(cache_frame_6e0df440a302a6a8c56a84cf0a52ec99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e0df440a302a6a8c56a84cf0a52ec99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e0df440a302a6a8c56a84cf0a52ec99 = MAKE_FUNCTION_FRAME(codeobj_6e0df440a302a6a8c56a84cf0a52ec99, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e0df440a302a6a8c56a84cf0a52ec99->m_type_description == NULL);
    frame_6e0df440a302a6a8c56a84cf0a52ec99 = cache_frame_6e0df440a302a6a8c56a84cf0a52ec99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e0df440a302a6a8c56a84cf0a52ec99);
    assert(Py_REFCNT(frame_6e0df440a302a6a8c56a84cf0a52ec99) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_bounds);
        tmp_cmp_expr_left_1 = par_bounds;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_bounds);
        tmp_iter_arg_1 = par_bounds;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 10;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 10;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 10;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 10;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_xmin_bound == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_xmin_bound = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_xmax_bound == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_xmax_bound = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_x1);
        tmp_cmp_expr_left_2 = par_x1;
        CHECK_OBJECT(par_x2);
        tmp_cmp_expr_right_2 = par_x2;
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_x1);
        tmp_tuple_element_1 = par_x1;
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_x2);
        tmp_tuple_element_1 = par_x2;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_x2);
        tmp_tuple_element_2 = par_x2;
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_x1);
        tmp_tuple_element_2 = par_x1;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_2);
        condexpr_end_1:;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 12;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 12;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 12;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 12;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert(var_xmin_bound == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_xmin_bound = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert(var_xmax_bound == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_xmax_bound = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(par_g1);
        tmp_add_expr_left_1 = par_g1;
        CHECK_OBJECT(par_g2);
        tmp_add_expr_right_1 = par_g2;
        tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[1];
        CHECK_OBJECT(par_f1);
        tmp_sub_expr_left_2 = par_f1;
        CHECK_OBJECT(par_f2);
        tmp_sub_expr_right_2 = par_f2;
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x1);
        tmp_sub_expr_left_3 = par_x1;
        CHECK_OBJECT(par_x2);
        tmp_sub_expr_right_3 = par_x2;
        tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_d1 == NULL);
        var_d1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_d1);
        tmp_pow_expr_left_1 = var_d1;
        tmp_pow_expr_right_1 = mod_consts[2];
        tmp_sub_expr_left_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g1);
        tmp_mult_expr_left_2 = par_g1;
        CHECK_OBJECT(par_g2);
        tmp_mult_expr_right_2 = par_g2;
        tmp_sub_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_d2_square == NULL);
        var_d2_square = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_d2_square);
        tmp_cmp_expr_left_3 = var_d2_square;
        tmp_cmp_expr_right_3 = mod_consts[3];
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_d2_square);
        tmp_called_instance_1 = var_d2_square;
        frame_6e0df440a302a6a8c56a84cf0a52ec99->m_frame.f_lineno = 24;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_d2 == NULL);
        var_d2 = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_x1);
        tmp_cmp_expr_left_4 = par_x1;
        CHECK_OBJECT(par_x2);
        tmp_cmp_expr_right_4 = par_x2;
        tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(par_x2);
        tmp_sub_expr_left_5 = par_x2;
        CHECK_OBJECT(par_x2);
        tmp_sub_expr_left_6 = par_x2;
        CHECK_OBJECT(par_x1);
        tmp_sub_expr_right_6 = par_x1;
        tmp_mult_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g2);
        tmp_add_expr_left_2 = par_g2;
        CHECK_OBJECT(var_d2);
        tmp_add_expr_right_2 = var_d2;
        tmp_sub_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_sub_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d1);
        tmp_sub_expr_right_7 = var_d1;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_left_7);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g2);
        tmp_sub_expr_left_8 = par_g2;
        CHECK_OBJECT(par_g1);
        tmp_sub_expr_right_8 = par_g1;
        tmp_add_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_4 = mod_consts[2];
        CHECK_OBJECT(var_d2);
        tmp_mult_expr_right_4 = var_d2;
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_truediv_expr_left_2);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_min_pos == NULL);
        var_min_pos = tmp_assign_source_14;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_sub_expr_left_12;
        PyObject *tmp_sub_expr_right_12;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        CHECK_OBJECT(par_x1);
        tmp_sub_expr_left_9 = par_x1;
        CHECK_OBJECT(par_x1);
        tmp_sub_expr_left_10 = par_x1;
        CHECK_OBJECT(par_x2);
        tmp_sub_expr_right_10 = par_x2;
        tmp_mult_expr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g1);
        tmp_add_expr_left_4 = par_g1;
        CHECK_OBJECT(var_d2);
        tmp_add_expr_right_4 = var_d2;
        tmp_sub_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_sub_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d1);
        tmp_sub_expr_right_11 = var_d1;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        Py_DECREF(tmp_sub_expr_left_11);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g1);
        tmp_sub_expr_left_12 = par_g1;
        CHECK_OBJECT(par_g2);
        tmp_sub_expr_right_12 = par_g2;
        tmp_add_expr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
        if (tmp_add_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_6 = mod_consts[2];
        CHECK_OBJECT(var_d2);
        tmp_mult_expr_right_6 = var_d2;
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_add_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);
            Py_DECREF(tmp_truediv_expr_left_3);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_sub_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        Py_DECREF(tmp_sub_expr_right_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_min_pos == NULL);
        var_min_pos = tmp_assign_source_15;
    }
    branch_end_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_1 != NULL);
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(var_min_pos);
        tmp_args_element_value_2 = var_min_pos;
        CHECK_OBJECT(var_xmin_bound);
        tmp_args_element_value_3 = var_xmin_bound;
        frame_6e0df440a302a6a8c56a84cf0a52ec99->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xmax_bound);
        tmp_args_element_value_4 = var_xmax_bound;
        frame_6e0df440a302a6a8c56a84cf0a52ec99->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(var_xmin_bound);
        tmp_add_expr_left_6 = var_xmin_bound;
        CHECK_OBJECT(var_xmax_bound);
        tmp_add_expr_right_6 = var_xmax_bound;
        tmp_truediv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[7];
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e0df440a302a6a8c56a84cf0a52ec99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e0df440a302a6a8c56a84cf0a52ec99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e0df440a302a6a8c56a84cf0a52ec99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e0df440a302a6a8c56a84cf0a52ec99,
        type_description_1,
        par_x1,
        par_f1,
        par_g1,
        par_x2,
        par_f2,
        par_g2,
        par_bounds,
        var_xmin_bound,
        var_xmax_bound,
        var_d1,
        var_d2_square,
        var_d2,
        var_min_pos
    );


    // Release cached frame if used for exception.
    if (frame_6e0df440a302a6a8c56a84cf0a52ec99 == cache_frame_6e0df440a302a6a8c56a84cf0a52ec99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e0df440a302a6a8c56a84cf0a52ec99);
        cache_frame_6e0df440a302a6a8c56a84cf0a52ec99 = NULL;
    }

    assertFrameObject(frame_6e0df440a302a6a8c56a84cf0a52ec99);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_xmin_bound);
    var_xmin_bound = NULL;
    Py_XDECREF(var_xmax_bound);
    var_xmax_bound = NULL;
    CHECK_OBJECT(var_d1);
    Py_DECREF(var_d1);
    var_d1 = NULL;
    CHECK_OBJECT(var_d2_square);
    Py_DECREF(var_d2_square);
    var_d2_square = NULL;
    Py_XDECREF(var_d2);
    var_d2 = NULL;
    Py_XDECREF(var_min_pos);
    var_min_pos = NULL;
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

    Py_XDECREF(var_xmin_bound);
    var_xmin_bound = NULL;
    Py_XDECREF(var_xmax_bound);
    var_xmax_bound = NULL;
    Py_XDECREF(var_d1);
    var_d1 = NULL;
    Py_XDECREF(var_d2_square);
    var_d2_square = NULL;
    Py_XDECREF(var_d2);
    var_d2 = NULL;
    Py_XDECREF(var_min_pos);
    var_min_pos = NULL;
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
    CHECK_OBJECT(par_x1);
    Py_DECREF(par_x1);
    CHECK_OBJECT(par_f1);
    Py_DECREF(par_f1);
    CHECK_OBJECT(par_g1);
    Py_DECREF(par_g1);
    CHECK_OBJECT(par_x2);
    Py_DECREF(par_x2);
    CHECK_OBJECT(par_f2);
    Py_DECREF(par_f2);
    CHECK_OBJECT(par_g2);
    Py_DECREF(par_g2);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x1);
    Py_DECREF(par_x1);
    CHECK_OBJECT(par_f1);
    Py_DECREF(par_f1);
    CHECK_OBJECT(par_g1);
    Py_DECREF(par_g1);
    CHECK_OBJECT(par_x2);
    Py_DECREF(par_x2);
    CHECK_OBJECT(par_f2);
    Py_DECREF(par_f2);
    CHECK_OBJECT(par_g2);
    Py_DECREF(par_g2);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__2__strong_wolfe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj_func = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_t = python_pars[2];
    PyObject *par_d = python_pars[3];
    PyObject *par_f = python_pars[4];
    PyObject *par_g = python_pars[5];
    PyObject *par_gtd = python_pars[6];
    PyObject *par_c1 = python_pars[7];
    PyObject *par_c2 = python_pars[8];
    PyObject *par_tolerance_change = python_pars[9];
    PyObject *par_max_ls = python_pars[10];
    PyObject *var_d_norm = NULL;
    PyObject *var_f_new = NULL;
    PyObject *var_g_new = NULL;
    PyObject *var_ls_func_evals = NULL;
    PyObject *var_gtd_new = NULL;
    PyObject *var_t_prev = NULL;
    PyObject *var_f_prev = NULL;
    PyObject *var_g_prev = NULL;
    PyObject *var_gtd_prev = NULL;
    PyObject *var_done = NULL;
    PyObject *var_ls_iter = NULL;
    PyObject *var_bracket = NULL;
    PyObject *var_bracket_f = NULL;
    PyObject *var_bracket_g = NULL;
    PyObject *var_bracket_gtd = NULL;
    PyObject *var_min_step = NULL;
    PyObject *var_max_step = NULL;
    PyObject *var_tmp = NULL;
    nuitka_bool var_insuf_progress = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_low_pos = NULL;
    PyObject *var_high_pos = NULL;
    PyObject *var_eps = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    struct Nuitka_FrameObject *frame_52a8cb3b6b9fdae585c80813d72a370f;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52a8cb3b6b9fdae585c80813d72a370f = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52a8cb3b6b9fdae585c80813d72a370f)) {
        Py_XDECREF(cache_frame_52a8cb3b6b9fdae585c80813d72a370f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52a8cb3b6b9fdae585c80813d72a370f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52a8cb3b6b9fdae585c80813d72a370f = MAKE_FUNCTION_FRAME(codeobj_52a8cb3b6b9fdae585c80813d72a370f, module_torch$optim$lbfgs, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52a8cb3b6b9fdae585c80813d72a370f->m_type_description == NULL);
    frame_52a8cb3b6b9fdae585c80813d72a370f = cache_frame_52a8cb3b6b9fdae585c80813d72a370f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52a8cb3b6b9fdae585c80813d72a370f);
    assert(Py_REFCNT(frame_52a8cb3b6b9fdae585c80813d72a370f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_d);
        tmp_called_instance_2 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 46;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[8]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 46;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_d_norm == NULL);
        var_d_norm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 47;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_g;
            assert(old != NULL);
            par_g = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_obj_func);
        tmp_called_value_2 = par_obj_func;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_t);
        tmp_args_element_value_2 = par_t;
        CHECK_OBJECT(par_d);
        tmp_args_element_value_3 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 49;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 49;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooooooooooooooooobooo";
                    exception_lineno = 49;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 49;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_f_new == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_f_new = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_g_new == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_g_new = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[13];
        assert(var_ls_func_evals == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_ls_func_evals = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_g_new);
        tmp_called_instance_3 = var_g_new;
        CHECK_OBJECT(par_d);
        tmp_args_element_value_4 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 51;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[14], tmp_args_element_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_gtd_new == NULL);
        var_gtd_new = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[3];
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_f);
        tmp_tuple_element_1 = par_f;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_g);
        tmp_tuple_element_1 = par_g;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_gtd);
        tmp_tuple_element_1 = par_gtd;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 3, tmp_tuple_element_1);
        tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 0, 4);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 54;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 1, 4);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 54;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 2, 4);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 54;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_6, 3, 4);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 54;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_4 == NULL);
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooobooo";
                    exception_lineno = 54;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[15];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 54;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        assert(var_t_prev == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_t_prev = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        assert(var_f_prev == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_f_prev = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
        assert(var_g_prev == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_g_prev = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_4;
        assert(var_gtd_prev == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_gtd_prev = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_False;
        assert(var_done == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_done = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[3];
        assert(var_ls_iter == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_ls_iter = tmp_assign_source_20;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_ls_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_ls_iter;
        CHECK_OBJECT(par_max_ls);
        tmp_cmp_expr_right_1 = par_max_ls;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_f_new;
        if (par_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_1 = par_f;
        if (par_c1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_2 = par_c1;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_2 = par_t;
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (par_gtd == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_1 = par_gtd;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_ls_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_ls_iter;
        tmp_cmp_expr_right_3 = mod_consts[13];
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_f_new;
        if (var_f_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = var_f_prev;
        tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_list_element_1;
        if (var_t_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = var_t_prev;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_21, 0, tmp_list_element_1);
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_1;
        }

        tmp_list_element_1 = par_t;
        PyList_SET_ITEM0(tmp_assign_source_21, 1, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_21);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_bracket == NULL);
        var_bracket = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_list_element_2;
        if (var_f_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = var_f_prev;
        tmp_assign_source_22 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_22, 0, tmp_list_element_2);
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_2;
        }

        tmp_list_element_2 = var_f_new;
        PyList_SET_ITEM0(tmp_assign_source_22, 1, tmp_list_element_2);
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_22);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        assert(var_bracket_f == NULL);
        var_bracket_f = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_list_element_3;
        if (var_g_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_3 = var_g_prev;
        tmp_assign_source_23 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM0(tmp_assign_source_23, 0, tmp_list_element_3);
            if (var_g_new == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_3;
            }

            tmp_expression_value_3 = var_g_new;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_3;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 62;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 62;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_3;
            }
            frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 62;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[12]);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assign_source_23, 1, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assign_source_23);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        assert(var_bracket_g == NULL);
        var_bracket_g = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_list_element_4;
        if (var_gtd_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_4 = var_gtd_prev;
        tmp_assign_source_24 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_24, 0, tmp_list_element_4);
        if (var_gtd_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_4;
        }

        tmp_list_element_4 = var_gtd_new;
        PyList_SET_ITEM0(tmp_assign_source_24, 1, tmp_list_element_4);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assign_source_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        assert(var_bracket_gtd == NULL);
        var_bracket_gtd = tmp_assign_source_24;
    }
    goto loop_end_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_operand_value_2;
        if (var_gtd_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_abs_arg_1 = var_gtd_new;
        tmp_cmp_expr_left_5 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c2);
        tmp_operand_value_2 = par_c2;
        tmp_mult_expr_left_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (par_gtd == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_3 = par_gtd;
        tmp_cmp_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_list_element_5;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_5 = par_t;
        tmp_assign_source_25 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_25, 0, tmp_list_element_5);
        assert(var_bracket == NULL);
        var_bracket = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_list_element_6;
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_6 = var_f_new;
        tmp_assign_source_26 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_26, 0, tmp_list_element_6);
        assert(var_bracket_f == NULL);
        var_bracket_f = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_list_element_7;
        if (var_g_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_7 = var_g_new;
        tmp_assign_source_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_27, 0, tmp_list_element_7);
        assert(var_bracket_g == NULL);
        var_bracket_g = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = Py_True;
        {
            PyObject *old = var_done;
            assert(old != NULL);
            var_done = tmp_assign_source_28;
            Py_INCREF(var_done);
            Py_DECREF(old);
        }

    }
    goto loop_end_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        if (var_gtd_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = var_gtd_new;
        tmp_cmp_expr_right_6 = mod_consts[3];
        tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_list_element_8;
        if (var_t_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_8 = var_t_prev;
        tmp_assign_source_29 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_29, 0, tmp_list_element_8);
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_5;
        }

        tmp_list_element_8 = par_t;
        PyList_SET_ITEM0(tmp_assign_source_29, 1, tmp_list_element_8);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assign_source_29);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        assert(var_bracket == NULL);
        var_bracket = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_list_element_9;
        if (var_f_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_9 = var_f_prev;
        tmp_assign_source_30 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_30, 0, tmp_list_element_9);
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_6;
        }

        tmp_list_element_9 = var_f_new;
        PyList_SET_ITEM0(tmp_assign_source_30, 1, tmp_list_element_9);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assign_source_30);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        assert(var_bracket_f == NULL);
        var_bracket_f = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_list_element_10;
        if (var_g_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_10 = var_g_prev;
        tmp_assign_source_31 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_expression_value_6;
            PyList_SET_ITEM0(tmp_assign_source_31, 0, tmp_list_element_10);
            if (var_g_new == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_7;
            }

            tmp_expression_value_5 = var_g_new;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_7;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_7;
            }
            tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
            if (tmp_kw_call_value_0_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_7;
            }
            frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 76;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

                tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[12]);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_3);
            if (tmp_list_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooooooooooooooooooooobooo";
                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assign_source_31, 1, tmp_list_element_10);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assign_source_31);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        assert(var_bracket_g == NULL);
        var_bracket_g = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_list_element_11;
        if (var_gtd_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = var_gtd_prev;
        tmp_assign_source_32 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_32, 0, tmp_list_element_11);
        if (var_gtd_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_8;
        }

        tmp_list_element_11 = var_gtd_new;
        PyList_SET_ITEM0(tmp_assign_source_32, 1, tmp_list_element_11);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assign_source_32);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        assert(var_bracket_gtd == NULL);
        var_bracket_gtd = tmp_assign_source_32;
    }
    goto loop_end_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_2 = par_t;
        tmp_mult_expr_left_4 = mod_consts[28];
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_1 = par_t;
        if (var_t_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_1 = var_t_prev;
        tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_min_step;
            var_min_step = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_5 = par_t;
        tmp_mult_expr_right_5 = mod_consts[29];
        tmp_assign_source_34 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_max_step;
            var_max_step = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_35 = par_t;
        {
            PyObject *old = var_tmp;
            var_tmp = tmp_assign_source_35;
            Py_INCREF(var_tmp);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_t_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = var_t_prev;
        if (var_f_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = var_f_prev;
        if (var_gtd_prev == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = var_gtd_prev;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_3_1 = par_t;
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_4_1 = var_f_new;
        if (var_gtd_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_5_1 = var_gtd_new;
        CHECK_OBJECT(var_min_step);
        tmp_tuple_element_2 = var_min_step;
        tmp_kw_call_dict_value_0_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_max_step);
        tmp_tuple_element_2 = var_max_step;
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 1, tmp_tuple_element_2);
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 84;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS6_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[31]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_t;
            par_t = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(var_tmp);
        tmp_assign_source_37 = var_tmp;
        {
            PyObject *old = var_t_prev;
            var_t_prev = tmp_assign_source_37;
            Py_INCREF(var_t_prev);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_38 = var_f_new;
        {
            PyObject *old = var_f_prev;
            var_f_prev = tmp_assign_source_38;
            Py_INCREF(var_f_prev);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_8;
        if (var_g_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_g_new;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[9]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 96;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_assign_source_39 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_prev;
            var_g_prev = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        if (var_gtd_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_40 = var_gtd_new;
        {
            PyObject *old = var_gtd_prev;
            var_gtd_prev = tmp_assign_source_40;
            Py_INCREF(var_gtd_prev);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (par_obj_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_6;
        }

        tmp_called_value_7 = par_obj_func;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_5 = par_x;
        CHECK_OBJECT(par_t);
        tmp_args_element_value_6 = par_t;
        if (par_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_7 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_41 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_42 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 98;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_43 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 98;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooobooo";
                    exception_lineno = 98;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 98;
            goto try_except_handler_7;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_44 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_f_new;
            var_f_new = tmp_assign_source_44;
            Py_INCREF(var_f_new);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_45 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_g_new;
            var_g_new = tmp_assign_source_45;
            Py_INCREF(var_g_new);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_ls_func_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_ls_func_evals;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_46 = tmp_iadd_expr_left_1;
        var_ls_func_evals = tmp_assign_source_46;

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_g_new);
        tmp_expression_value_9 = var_g_new;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[14]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (par_d == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 100;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gtd_new;
            var_gtd_new = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_ls_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_ls_iter;
        tmp_iadd_expr_right_2 = mod_consts[13];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = tmp_iadd_expr_left_2;
        var_ls_iter = tmp_assign_source_48;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;
        type_description_1 = "ooooooooooooooooooooooooooooobooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        if (var_ls_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_7 = var_ls_iter;
        CHECK_OBJECT(par_max_ls);
        tmp_cmp_expr_right_7 = par_max_ls;
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_list_element_12;
        tmp_list_element_12 = mod_consts[3];
        tmp_assign_source_49 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_49, 0, tmp_list_element_12);
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_9;
        }

        tmp_list_element_12 = par_t;
        PyList_SET_ITEM0(tmp_assign_source_49, 1, tmp_list_element_12);
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assign_source_49);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        {
            PyObject *old = var_bracket;
            var_bracket = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_list_element_13;
        if (par_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_13 = par_f;
        tmp_assign_source_50 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_50, 0, tmp_list_element_13);
        if (var_f_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_10;
        }

        tmp_list_element_13 = var_f_new;
        PyList_SET_ITEM0(tmp_assign_source_50, 1, tmp_list_element_13);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assign_source_50);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        {
            PyObject *old = var_bracket_f;
            var_bracket_f = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_list_element_14;
        CHECK_OBJECT(par_g);
        tmp_list_element_14 = par_g;
        tmp_assign_source_51 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_51, 0, tmp_list_element_14);
        if (var_g_new == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto list_build_exception_11;
        }

        tmp_list_element_14 = var_g_new;
        PyList_SET_ITEM0(tmp_assign_source_51, 1, tmp_list_element_14);
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assign_source_51);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        {
            PyObject *old = var_bracket_g;
            var_bracket_g = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_assign_source_52;
        tmp_assign_source_52 = NUITKA_BOOL_FALSE;
        var_insuf_progress = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_4;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_10 = var_bracket_f;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_8;
        }
        if (var_bracket_f == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_11 = var_bracket_f;
        tmp_subscript_value_2 = mod_consts[37];
        tmp_cmp_expr_right_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_2, -1);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_8);

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_6 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_iter_arg_4 = mod_consts[38];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_iter_arg_4 = mod_consts[39];
        condexpr_end_1:;
        tmp_assign_source_53 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_54 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 114;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_55 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 114;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_55;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooobooo";
                    exception_lineno = 114;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 114;
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_56 = tmp_tuple_unpack_4__element_1;
        assert(var_low_pos == NULL);
        Py_INCREF(tmp_assign_source_56);
        var_low_pos = tmp_assign_source_56;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_57 = tmp_tuple_unpack_4__element_2;
        assert(var_high_pos == NULL);
        Py_INCREF(tmp_assign_source_57);
        var_high_pos = tmp_assign_source_57;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    loop_start_2:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (var_done == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_4 = var_done;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_ls_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = var_ls_iter;
        CHECK_OBJECT(par_max_ls);
        tmp_cmp_expr_right_9 = par_max_ls;
        tmp_and_right_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_operand_value_3 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    goto loop_end_2;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_abs_arg_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_bracket;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_3, 1);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_bracket;
        tmp_subscript_value_4 = mod_consts[3];
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_4, 0);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_abs_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_6 = BUILTIN_ABS(tmp_abs_arg_2);
        Py_DECREF(tmp_abs_arg_2);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_d_norm == NULL) {
            Py_DECREF(tmp_mult_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_6 = var_d_norm;
        tmp_cmp_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tolerance_change);
        tmp_cmp_expr_right_10 = par_tolerance_change;
        tmp_condition_result_8 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_end_2;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_bracket;
        tmp_subscript_value_5 = mod_consts[3];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_5, 0);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_f == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = var_bracket_f;
        tmp_subscript_value_6 = mod_consts[3];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_6, 0);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_gtd == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = var_bracket_gtd;
        tmp_subscript_value_7 = mod_consts[3];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_7, 0);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = var_bracket;
        tmp_subscript_value_8 = mod_consts[13];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_8, 1);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_f == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_bracket_f;
        tmp_subscript_value_9 = mod_consts[13];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_9, 1);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_gtd == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = var_bracket_gtd;
        tmp_subscript_value_10 = mod_consts[13];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_10, 1);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_t;
            par_t = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_16;
        tmp_mult_expr_left_7 = mod_consts[44];
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_10 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 131;
        tmp_sub_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_15);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_11 != NULL);
        if (var_bracket == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 131;
        tmp_sub_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_16);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_59 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eps;
            var_eps = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_12 != NULL);
        tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_13 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 132;
        tmp_sub_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_18);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_sub_expr_right_4 = par_t;
        tmp_args_element_value_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_sub_expr_left_5 = par_t;
        tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_14 != NULL);
        if (var_bracket == NULL) {
            Py_DECREF(tmp_args_element_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 132;
        tmp_sub_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_20);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_19};
            tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eps);
        tmp_cmp_expr_right_11 = var_eps;
        tmp_condition_result_9 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_22;
        if (var_insuf_progress == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_or_left_value_2 = var_insuf_progress;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_t);
        tmp_cmp_expr_left_12 = par_t;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_15 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 134;
        tmp_cmp_expr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_21);
        if (tmp_cmp_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_right_12);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(par_t);
        tmp_cmp_expr_left_13 = par_t;
        tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_16 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 134;
        tmp_cmp_expr_right_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_22);
        if (tmp_cmp_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_right_13);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_condition_result_10 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_10 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_abs_arg_3;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_abs_arg_4;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(par_t);
        tmp_sub_expr_left_6 = par_t;
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_17 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_23 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 136;
        tmp_sub_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_23);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_abs_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_14 = BUILTIN_ABS(tmp_abs_arg_3);
        Py_DECREF(tmp_abs_arg_3);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_sub_expr_left_7 = par_t;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_18 != NULL);
        if (var_bracket == NULL) {
            Py_DECREF(tmp_cmp_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_24 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 136;
        tmp_sub_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_24);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_14);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_abs_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_14);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = BUILTIN_ABS(tmp_abs_arg_4);
        Py_DECREF(tmp_abs_arg_4);
        if (tmp_cmp_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_14);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        Py_DECREF(tmp_cmp_expr_right_14);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_19 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_19 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_25 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 137;
        tmp_sub_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_25);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eps);
        tmp_sub_expr_right_8 = var_eps;
        tmp_assign_source_60 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_t;
            assert(old != NULL);
            par_t = tmp_assign_source_60;
            Py_DECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_20 != NULL);
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_26 = var_bracket;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 139;
        tmp_add_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_26);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eps);
        tmp_add_expr_right_3 = var_eps;
        tmp_assign_source_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_t;
            assert(old != NULL);
            par_t = tmp_assign_source_61;
            Py_DECREF(old);
        }

    }
    branch_end_10:;
    {
        nuitka_bool tmp_assign_source_62;
        tmp_assign_source_62 = NUITKA_BOOL_FALSE;
        var_insuf_progress = tmp_assign_source_62;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_assign_source_63;
        tmp_assign_source_63 = NUITKA_BOOL_TRUE;
        var_insuf_progress = tmp_assign_source_63;
    }
    branch_end_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_assign_source_64;
        tmp_assign_source_64 = NUITKA_BOOL_FALSE;
        var_insuf_progress = tmp_assign_source_64;
    }
    branch_end_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        if (par_obj_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_10;
        }

        tmp_called_value_21 = par_obj_func;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_27 = par_x;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_28 = par_t;
        if (par_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_29 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_21, call_args);
        }

        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_65 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_66 = UNPACK_NEXT(tmp_unpack_11, 0, 2);
        if (tmp_assign_source_66 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 147;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_67 = UNPACK_NEXT(tmp_unpack_12, 1, 2);
        if (tmp_assign_source_67 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 147;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooobooo";
                    exception_lineno = 147;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 147;
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_68 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_f_new;
            var_f_new = tmp_assign_source_68;
            Py_INCREF(var_f_new);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_69 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_g_new;
            var_g_new = tmp_assign_source_69;
            Py_INCREF(var_g_new);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iadd_expr_left_3;
        nuitka_digit tmp_iadd_expr_right_3;
        if (var_ls_func_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_3 = var_ls_func_evals;
        tmp_iadd_expr_right_3 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        assert(!(tmp_result == false));
        tmp_assign_source_70 = tmp_iadd_expr_left_3;
        var_ls_func_evals = tmp_assign_source_70;

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(var_g_new);
        tmp_expression_value_20 = var_g_new;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[14]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (par_d == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_30 = par_d;
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 149;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_22);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gtd_new;
            var_gtd_new = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (var_ls_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = var_ls_iter;
        tmp_iadd_expr_right_4 = mod_consts[13];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_72 = tmp_iadd_expr_left_4;
        var_ls_iter = tmp_assign_source_72;

    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_f_new);
        tmp_cmp_expr_left_15 = var_f_new;
        if (par_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_4 = par_f;
        if (par_c1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_9 = par_c1;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_9 = par_t;
        tmp_mult_expr_left_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_mult_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (par_gtd == NULL) {
            Py_DECREF(tmp_mult_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_8 = par_gtd;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_cmp_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_right_15);
        if (tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        CHECK_OBJECT(var_f_new);
        tmp_cmp_expr_left_16 = var_f_new;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = var_bracket_f;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_11 = var_low_pos;
        tmp_cmp_expr_right_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_11);
        if (tmp_cmp_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_4 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_or_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_12 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = par_t;
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_bracket;
        if (var_high_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_f_new);
        tmp_ass_subvalue_2 = var_f_new;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_bracket_f;
        if (var_high_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_g_new);
        tmp_expression_value_22 = var_g_new;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[9]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[11]);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 156;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_g == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_bracket_g;
        if (var_high_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_gtd_new);
        tmp_ass_subvalue_4 = var_gtd_new;
        if (var_bracket_gtd == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = var_bracket_gtd;
        if (var_high_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_6;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_13;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_24 = var_bracket_f;
        tmp_subscript_value_12 = mod_consts[3];
        tmp_cmp_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_12, 0);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_12;
        }
        if (var_bracket_f == NULL) {
            Py_DECREF(tmp_cmp_expr_left_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_25 = var_bracket_f;
        tmp_subscript_value_13 = mod_consts[13];
        tmp_cmp_expr_right_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_13, 1);
        if (tmp_cmp_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_17);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_13 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_12;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_iter_arg_6 = mod_consts[38];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_iter_arg_6 = mod_consts[39];
        condexpr_end_2:;
        tmp_assign_source_73 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_74 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_74 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 158;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_75 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_75 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 158;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooobooo";
                    exception_lineno = 158;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            exception_lineno = 158;
            goto try_except_handler_13;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_76 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_low_pos;
            var_low_pos = tmp_assign_source_76;
            Py_INCREF(var_low_pos);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_77 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_high_pos;
            var_high_pos = tmp_assign_source_77;
            Py_INCREF(var_high_pos);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_abs_arg_5;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_operand_value_5;
        CHECK_OBJECT(var_gtd_new);
        tmp_abs_arg_5 = var_gtd_new;
        tmp_cmp_expr_left_18 = BUILTIN_ABS(tmp_abs_arg_5);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c2);
        tmp_operand_value_5 = par_c2;
        tmp_mult_expr_left_10 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_5);
        if (tmp_mult_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_18);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (par_gtd == NULL) {
            Py_DECREF(tmp_cmp_expr_left_18);
            Py_DECREF(tmp_mult_expr_left_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_10 = par_gtd;
        tmp_cmp_expr_right_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_left_10);
        if (tmp_cmp_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_18);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_left_18);
        Py_DECREF(tmp_cmp_expr_right_18);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = Py_True;
        {
            PyObject *old = var_done;
            var_done = tmp_assign_source_78;
            Py_INCREF(var_done);
            Py_XDECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(var_gtd_new);
        tmp_mult_expr_left_11 = var_gtd_new;
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = var_bracket;
        if (var_high_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_14 = var_high_pos;
        tmp_sub_expr_left_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_14);
        if (tmp_sub_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket == NULL) {
            Py_DECREF(tmp_sub_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = var_bracket;
        if (var_low_pos == NULL) {
            Py_DECREF(tmp_sub_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_15 = var_low_pos;
        tmp_sub_expr_right_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_15);
        if (tmp_sub_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_9);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        Py_DECREF(tmp_sub_expr_left_9);
        Py_DECREF(tmp_sub_expr_right_9);
        if (tmp_mult_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_19 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        Py_DECREF(tmp_mult_expr_right_11);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_19 = mod_consts[3];
        tmp_condition_result_15 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_left_19);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = var_bracket;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_16 = var_low_pos;
        tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_16);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = var_bracket;
        if (var_high_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_5 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = var_bracket_f;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_17 = var_low_pos;
        tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_17);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_f == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = var_bracket_f;
        if (var_high_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_6 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        if (var_bracket_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = var_bracket_g;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_18 = var_low_pos;
        tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_18);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_g == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_7 = var_bracket_g;
        if (var_high_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_7 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        if (var_bracket_gtd == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = var_bracket_gtd;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_19 = var_low_pos;
        tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_19);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_gtd == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = var_bracket_gtd;
        if (var_high_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_8 = var_high_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_13:;
    branch_end_12:;
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        if (par_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_9 = par_t;
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = var_bracket;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_9 = var_low_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        CHECK_OBJECT(var_f_new);
        tmp_ass_subvalue_10 = var_f_new;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_10 = var_bracket_f;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_10 = var_low_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        CHECK_OBJECT(var_g_new);
        tmp_expression_value_32 = var_g_new;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[9]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[11]);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame.f_lineno = 173;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_ass_subvalue_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_ass_subvalue_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_bracket_g == NULL) {
            Py_DECREF(tmp_ass_subvalue_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_11 = var_bracket_g;
        if (var_low_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_11 = var_low_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        Py_DECREF(tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        CHECK_OBJECT(var_gtd_new);
        tmp_ass_subvalue_12 = var_gtd_new;
        if (var_bracket_gtd == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_12 = var_bracket_gtd;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_12 = var_low_pos;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_11:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 115;
        type_description_1 = "ooooooooooooooooooooooooooooobooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_20;
        if (var_bracket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_bracket;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_20 = var_low_pos;
        tmp_assign_source_79 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_20);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_t;
            par_t = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_21;
        if (var_bracket_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_bracket_f;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_21 = var_low_pos;
        tmp_assign_source_80 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_21);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f_new;
            var_f_new = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_22;
        if (var_bracket_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = var_bracket_g;
        if (var_low_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_22 = var_low_pos;
        tmp_assign_source_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_22);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_new;
            var_g_new = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_f_new);
        tmp_tuple_element_3 = var_f_new;
        tmp_return_value = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_g_new);
        tmp_tuple_element_3 = var_g_new;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        CHECK_OBJECT(par_t);
        tmp_tuple_element_3 = par_t;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
        if (var_ls_func_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooooooooobooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = var_ls_func_evals;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_52a8cb3b6b9fdae585c80813d72a370f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52a8cb3b6b9fdae585c80813d72a370f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52a8cb3b6b9fdae585c80813d72a370f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52a8cb3b6b9fdae585c80813d72a370f,
        type_description_1,
        par_obj_func,
        par_x,
        par_t,
        par_d,
        par_f,
        par_g,
        par_gtd,
        par_c1,
        par_c2,
        par_tolerance_change,
        par_max_ls,
        var_d_norm,
        var_f_new,
        var_g_new,
        var_ls_func_evals,
        var_gtd_new,
        var_t_prev,
        var_f_prev,
        var_g_prev,
        var_gtd_prev,
        var_done,
        var_ls_iter,
        var_bracket,
        var_bracket_f,
        var_bracket_g,
        var_bracket_gtd,
        var_min_step,
        var_max_step,
        var_tmp,
        (int)var_insuf_progress,
        var_low_pos,
        var_high_pos,
        var_eps
    );


    // Release cached frame if used for exception.
    if (frame_52a8cb3b6b9fdae585c80813d72a370f == cache_frame_52a8cb3b6b9fdae585c80813d72a370f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52a8cb3b6b9fdae585c80813d72a370f);
        cache_frame_52a8cb3b6b9fdae585c80813d72a370f = NULL;
    }

    assertFrameObject(frame_52a8cb3b6b9fdae585c80813d72a370f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    par_t = NULL;
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    par_g = NULL;
    Py_XDECREF(var_d_norm);
    var_d_norm = NULL;
    CHECK_OBJECT(var_f_new);
    Py_DECREF(var_f_new);
    var_f_new = NULL;
    CHECK_OBJECT(var_g_new);
    Py_DECREF(var_g_new);
    var_g_new = NULL;
    Py_XDECREF(var_ls_func_evals);
    var_ls_func_evals = NULL;
    Py_XDECREF(var_gtd_new);
    var_gtd_new = NULL;
    Py_XDECREF(var_t_prev);
    var_t_prev = NULL;
    Py_XDECREF(var_f_prev);
    var_f_prev = NULL;
    Py_XDECREF(var_g_prev);
    var_g_prev = NULL;
    Py_XDECREF(var_gtd_prev);
    var_gtd_prev = NULL;
    Py_XDECREF(var_done);
    var_done = NULL;
    Py_XDECREF(var_ls_iter);
    var_ls_iter = NULL;
    Py_XDECREF(var_bracket);
    var_bracket = NULL;
    Py_XDECREF(var_bracket_f);
    var_bracket_f = NULL;
    Py_XDECREF(var_bracket_g);
    var_bracket_g = NULL;
    Py_XDECREF(var_bracket_gtd);
    var_bracket_gtd = NULL;
    Py_XDECREF(var_min_step);
    var_min_step = NULL;
    Py_XDECREF(var_max_step);
    var_max_step = NULL;
    Py_XDECREF(var_tmp);
    var_tmp = NULL;
    var_insuf_progress = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_low_pos);
    var_low_pos = NULL;
    Py_XDECREF(var_high_pos);
    var_high_pos = NULL;
    Py_XDECREF(var_eps);
    var_eps = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_t);
    par_t = NULL;
    Py_XDECREF(par_g);
    par_g = NULL;
    Py_XDECREF(var_d_norm);
    var_d_norm = NULL;
    Py_XDECREF(var_f_new);
    var_f_new = NULL;
    Py_XDECREF(var_g_new);
    var_g_new = NULL;
    Py_XDECREF(var_ls_func_evals);
    var_ls_func_evals = NULL;
    Py_XDECREF(var_gtd_new);
    var_gtd_new = NULL;
    Py_XDECREF(var_t_prev);
    var_t_prev = NULL;
    Py_XDECREF(var_f_prev);
    var_f_prev = NULL;
    Py_XDECREF(var_g_prev);
    var_g_prev = NULL;
    Py_XDECREF(var_gtd_prev);
    var_gtd_prev = NULL;
    Py_XDECREF(var_done);
    var_done = NULL;
    Py_XDECREF(var_ls_iter);
    var_ls_iter = NULL;
    Py_XDECREF(var_bracket);
    var_bracket = NULL;
    Py_XDECREF(var_bracket_f);
    var_bracket_f = NULL;
    Py_XDECREF(var_bracket_g);
    var_bracket_g = NULL;
    Py_XDECREF(var_bracket_gtd);
    var_bracket_gtd = NULL;
    Py_XDECREF(var_min_step);
    var_min_step = NULL;
    Py_XDECREF(var_max_step);
    var_max_step = NULL;
    Py_XDECREF(var_tmp);
    var_tmp = NULL;
    var_insuf_progress = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_low_pos);
    var_low_pos = NULL;
    Py_XDECREF(var_high_pos);
    var_high_pos = NULL;
    Py_XDECREF(var_eps);
    var_eps = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj_func);
    Py_DECREF(par_obj_func);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_gtd);
    Py_DECREF(par_gtd);
    CHECK_OBJECT(par_c1);
    Py_DECREF(par_c1);
    CHECK_OBJECT(par_c2);
    Py_DECREF(par_c2);
    CHECK_OBJECT(par_tolerance_change);
    Py_DECREF(par_tolerance_change);
    CHECK_OBJECT(par_max_ls);
    Py_DECREF(par_max_ls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj_func);
    Py_DECREF(par_obj_func);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_gtd);
    Py_DECREF(par_gtd);
    CHECK_OBJECT(par_c1);
    Py_DECREF(par_c1);
    CHECK_OBJECT(par_c2);
    Py_DECREF(par_c2);
    CHECK_OBJECT(par_tolerance_change);
    Py_DECREF(par_tolerance_change);
    CHECK_OBJECT(par_max_ls);
    Py_DECREF(par_max_ls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *par_lr = python_pars[2];
    PyObject *par_max_iter = python_pars[3];
    PyObject *par_max_eval = python_pars[4];
    PyObject *par_tolerance_grad = python_pars[5];
    PyObject *par_tolerance_change = python_pars[6];
    PyObject *par_history_size = python_pars[7];
    PyObject *par_line_search_fn = python_pars[8];
    PyObject *var_defaults = NULL;
    struct Nuitka_FrameObject *frame_28ce32062557986c1044b452099afea0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_28ce32062557986c1044b452099afea0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28ce32062557986c1044b452099afea0)) {
        Py_XDECREF(cache_frame_28ce32062557986c1044b452099afea0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28ce32062557986c1044b452099afea0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28ce32062557986c1044b452099afea0 = MAKE_FUNCTION_FRAME(codeobj_28ce32062557986c1044b452099afea0, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28ce32062557986c1044b452099afea0->m_type_description == NULL);
    frame_28ce32062557986c1044b452099afea0 = cache_frame_28ce32062557986c1044b452099afea0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28ce32062557986c1044b452099afea0);
    assert(Py_REFCNT(frame_28ce32062557986c1044b452099afea0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_max_eval);
        tmp_cmp_expr_left_1 = par_max_eval;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_max_iter);
        tmp_mult_expr_left_1 = par_max_iter;
        tmp_mult_expr_right_1 = mod_consts[49];
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[50];
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_max_eval;
            assert(old != NULL);
            par_max_eval = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[51];
        CHECK_OBJECT(par_lr);
        tmp_dict_value_1 = par_lr;
        tmp_assign_source_2 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[52];
        if (par_max_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "ooooooooooN";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = par_max_iter;
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[53];
        CHECK_OBJECT(par_max_eval);
        tmp_dict_value_1 = par_max_eval;
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[54];
        CHECK_OBJECT(par_tolerance_grad);
        tmp_dict_value_1 = par_tolerance_grad;
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[55];
        CHECK_OBJECT(par_tolerance_change);
        tmp_dict_value_1 = par_tolerance_change;
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[56];
        CHECK_OBJECT(par_history_size);
        tmp_dict_value_1 = par_history_size;
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[57];
        CHECK_OBJECT(par_line_search_fn);
        tmp_dict_value_1 = par_line_search_fn;
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_defaults == NULL);
        var_defaults = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$optim$lbfgs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        CHECK_OBJECT(var_defaults);
        tmp_args_element_value_2 = var_defaults;
        frame_28ce32062557986c1044b452099afea0->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[59],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 1;
        tmp_condition_result_2 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[61];
        frame_28ce32062557986c1044b452099afea0->m_frame.f_lineno = 236;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 236;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[60]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[62];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[64], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28ce32062557986c1044b452099afea0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28ce32062557986c1044b452099afea0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28ce32062557986c1044b452099afea0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28ce32062557986c1044b452099afea0,
        type_description_1,
        par_self,
        par_params,
        par_lr,
        par_max_iter,
        par_max_eval,
        par_tolerance_grad,
        par_tolerance_change,
        par_history_size,
        par_line_search_fn,
        var_defaults,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_28ce32062557986c1044b452099afea0 == cache_frame_28ce32062557986c1044b452099afea0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28ce32062557986c1044b452099afea0);
        cache_frame_28ce32062557986c1044b452099afea0 = NULL;
    }

    assertFrameObject(frame_28ce32062557986c1044b452099afea0);

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
    CHECK_OBJECT(par_max_eval);
    Py_DECREF(par_max_eval);
    par_max_eval = NULL;
    CHECK_OBJECT(var_defaults);
    Py_DECREF(var_defaults);
    var_defaults = NULL;
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

    CHECK_OBJECT(par_max_eval);
    Py_DECREF(par_max_eval);
    par_max_eval = NULL;
    Py_XDECREF(var_defaults);
    var_defaults = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_tolerance_grad);
    Py_DECREF(par_tolerance_grad);
    CHECK_OBJECT(par_tolerance_change);
    Py_DECREF(par_tolerance_change);
    CHECK_OBJECT(par_history_size);
    Py_DECREF(par_history_size);
    CHECK_OBJECT(par_line_search_fn);
    Py_DECREF(par_line_search_fn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_tolerance_grad);
    Py_DECREF(par_tolerance_grad);
    CHECK_OBJECT(par_tolerance_change);
    Py_DECREF(par_tolerance_change);
    CHECK_OBJECT(par_history_size);
    Py_DECREF(par_history_size);
    CHECK_OBJECT(par_line_search_fn);
    Py_DECREF(par_line_search_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__4__numel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2aa6e5e2611a727a75dcbe83a7c8907c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c)) {
        Py_XDECREF(cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c = MAKE_FUNCTION_FRAME(codeobj_2aa6e5e2611a727a75dcbe83a7c8907c, module_torch$optim$lbfgs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c->m_type_description == NULL);
    frame_2aa6e5e2611a727a75dcbe83a7c8907c = cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2aa6e5e2611a727a75dcbe83a7c8907c);
    assert(Py_REFCNT(frame_2aa6e5e2611a727a75dcbe83a7c8907c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[64]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$optim$lbfgs$$$function__4__numel$$$function__1_lambda();

        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[3];
        frame_2aa6e5e2611a727a75dcbe83a7c8907c->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[64], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[64]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_2aa6e5e2611a727a75dcbe83a7c8907c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2aa6e5e2611a727a75dcbe83a7c8907c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2aa6e5e2611a727a75dcbe83a7c8907c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2aa6e5e2611a727a75dcbe83a7c8907c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2aa6e5e2611a727a75dcbe83a7c8907c == cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c);
        cache_frame_2aa6e5e2611a727a75dcbe83a7c8907c = NULL;
    }

    assertFrameObject(frame_2aa6e5e2611a727a75dcbe83a7c8907c);

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


static PyObject *impl_torch$optim$lbfgs$$$function__4__numel$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_total = python_pars[0];
    PyObject *par_p = python_pars[1];
    struct Nuitka_FrameObject *frame_3fb100f565544ea433df9dbbe1d5cea5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3fb100f565544ea433df9dbbe1d5cea5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3fb100f565544ea433df9dbbe1d5cea5)) {
        Py_XDECREF(cache_frame_3fb100f565544ea433df9dbbe1d5cea5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3fb100f565544ea433df9dbbe1d5cea5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3fb100f565544ea433df9dbbe1d5cea5 = MAKE_FUNCTION_FRAME(codeobj_3fb100f565544ea433df9dbbe1d5cea5, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3fb100f565544ea433df9dbbe1d5cea5->m_type_description == NULL);
    frame_3fb100f565544ea433df9dbbe1d5cea5 = cache_frame_3fb100f565544ea433df9dbbe1d5cea5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3fb100f565544ea433df9dbbe1d5cea5);
    assert(Py_REFCNT(frame_3fb100f565544ea433df9dbbe1d5cea5) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_total);
        tmp_add_expr_left_1 = par_total;
        CHECK_OBJECT(par_p);
        tmp_called_instance_1 = par_p;
        frame_3fb100f565544ea433df9dbbe1d5cea5->m_frame.f_lineno = 244;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[68]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
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
        exception_tb = MAKE_TRACEBACK(frame_3fb100f565544ea433df9dbbe1d5cea5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fb100f565544ea433df9dbbe1d5cea5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fb100f565544ea433df9dbbe1d5cea5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3fb100f565544ea433df9dbbe1d5cea5,
        type_description_1,
        par_total,
        par_p
    );


    // Release cached frame if used for exception.
    if (frame_3fb100f565544ea433df9dbbe1d5cea5 == cache_frame_3fb100f565544ea433df9dbbe1d5cea5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3fb100f565544ea433df9dbbe1d5cea5);
        cache_frame_3fb100f565544ea433df9dbbe1d5cea5 = NULL;
    }

    assertFrameObject(frame_3fb100f565544ea433df9dbbe1d5cea5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__5__gather_flat_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_views = NULL;
    PyObject *var_p = NULL;
    PyObject *var_view = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d673a3295d08e550eaa899fce6f71232;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d673a3295d08e550eaa899fce6f71232 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_views == NULL);
        var_views = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d673a3295d08e550eaa899fce6f71232)) {
        Py_XDECREF(cache_frame_d673a3295d08e550eaa899fce6f71232);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d673a3295d08e550eaa899fce6f71232 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d673a3295d08e550eaa899fce6f71232 = MAKE_FUNCTION_FRAME(codeobj_d673a3295d08e550eaa899fce6f71232, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d673a3295d08e550eaa899fce6f71232->m_type_description == NULL);
    frame_d673a3295d08e550eaa899fce6f71232 = cache_frame_d673a3295d08e550eaa899fce6f71232;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d673a3295d08e550eaa899fce6f71232);
    assert(Py_REFCNT(frame_d673a3295d08e550eaa899fce6f71232) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
                exception_lineno = 249;
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
            PyObject *old = var_p;
            var_p = tmp_assign_source_4;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_p);
        tmp_expression_value_2 = var_p;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_p);
        tmp_expression_value_3 = var_p;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[70]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_p);
        tmp_called_instance_2 = var_p;
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 251;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[68]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 251;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 251;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[71]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_view;
            var_view = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_p);
        tmp_expression_value_5 = var_p;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[69]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[72]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 252;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_p);
        tmp_expression_value_6 = var_p;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[69]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 253;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[73]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 253;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[74],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_view;
            var_view = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_p);
        tmp_expression_value_7 = var_p;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[69]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 255;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[74],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_view;
            var_view = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        if (var_views == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = var_views;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_view);
        tmp_args_element_value_2 = var_view;
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 256;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 249;
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[78]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_views == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_views;
        tmp_args_element_value_4 = mod_consts[3];
        frame_d673a3295d08e550eaa899fce6f71232->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_d673a3295d08e550eaa899fce6f71232, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d673a3295d08e550eaa899fce6f71232->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d673a3295d08e550eaa899fce6f71232, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d673a3295d08e550eaa899fce6f71232,
        type_description_1,
        par_self,
        var_views,
        var_p,
        var_view
    );


    // Release cached frame if used for exception.
    if (frame_d673a3295d08e550eaa899fce6f71232 == cache_frame_d673a3295d08e550eaa899fce6f71232) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d673a3295d08e550eaa899fce6f71232);
        cache_frame_d673a3295d08e550eaa899fce6f71232 = NULL;
    }

    assertFrameObject(frame_d673a3295d08e550eaa899fce6f71232);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_views);
    var_views = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_view);
    var_view = NULL;
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

    Py_XDECREF(var_views);
    var_views = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_view);
    var_view = NULL;
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


static PyObject *impl_torch$optim$lbfgs$$$function__6__add_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_step_size = python_pars[1];
    PyObject *par_update = python_pars[2];
    PyObject *var_offset = NULL;
    PyObject *var_p = NULL;
    PyObject *var_numel = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_82cb21f5564e9a73a9f1d95c4eaea1e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[3];
        assert(var_offset == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_offset = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5)) {
        Py_XDECREF(cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5 = MAKE_FUNCTION_FRAME(codeobj_82cb21f5564e9a73a9f1d95c4eaea1e5, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5->m_type_description == NULL);
    frame_82cb21f5564e9a73a9f1d95c4eaea1e5 = cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_82cb21f5564e9a73a9f1d95c4eaea1e5);
    assert(Py_REFCNT(frame_82cb21f5564e9a73a9f1d95c4eaea1e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 261;
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
            PyObject *old = var_p;
            var_p = tmp_assign_source_4;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_p);
        tmp_called_instance_1 = var_p;
        frame_82cb21f5564e9a73a9f1d95c4eaea1e5->m_frame.f_lineno = 262;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[68]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_numel;
            var_numel = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_p);
        tmp_expression_value_2 = var_p;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[79]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_update);
        tmp_expression_value_3 = par_update;
        if (var_offset == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_start_value_1 = var_offset;
        if (var_offset == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = var_offset;
        CHECK_OBJECT(var_numel);
        tmp_add_expr_right_1 = var_numel;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_p);
        tmp_args_element_value_1 = var_p;
        frame_82cb21f5564e9a73a9f1d95c4eaea1e5->m_frame.f_lineno = 264;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[81], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_step_size == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_step_size;
        frame_82cb21f5564e9a73a9f1d95c4eaea1e5->m_frame.f_lineno = 264;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[83]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_offset;
        CHECK_OBJECT(var_numel);
        tmp_iadd_expr_right_1 = var_numel;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        var_offset = tmp_assign_source_6;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 261;
        type_description_1 = "oooooo";
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
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_3;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_offset;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_82cb21f5564e9a73a9f1d95c4eaea1e5->m_frame.f_lineno = 266;
        tmp_cmp_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[84]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 266;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82cb21f5564e9a73a9f1d95c4eaea1e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82cb21f5564e9a73a9f1d95c4eaea1e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82cb21f5564e9a73a9f1d95c4eaea1e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82cb21f5564e9a73a9f1d95c4eaea1e5,
        type_description_1,
        par_self,
        par_step_size,
        par_update,
        var_offset,
        var_p,
        var_numel
    );


    // Release cached frame if used for exception.
    if (frame_82cb21f5564e9a73a9f1d95c4eaea1e5 == cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5);
        cache_frame_82cb21f5564e9a73a9f1d95c4eaea1e5 = NULL;
    }

    assertFrameObject(frame_82cb21f5564e9a73a9f1d95c4eaea1e5);

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
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_numel);
    var_numel = NULL;
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

    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_numel);
    var_numel = NULL;
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
    CHECK_OBJECT(par_step_size);
    Py_DECREF(par_step_size);
    CHECK_OBJECT(par_update);
    Py_DECREF(par_update);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_step_size);
    Py_DECREF(par_step_size);
    CHECK_OBJECT(par_update);
    Py_DECREF(par_update);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__7__clone_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_p = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4276eabf841edf377dd437814d0f3ffb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_b5b357b1c24cff3373e896c5dcd51390_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b5b357b1c24cff3373e896c5dcd51390_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4276eabf841edf377dd437814d0f3ffb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4276eabf841edf377dd437814d0f3ffb)) {
        Py_XDECREF(cache_frame_4276eabf841edf377dd437814d0f3ffb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4276eabf841edf377dd437814d0f3ffb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4276eabf841edf377dd437814d0f3ffb = MAKE_FUNCTION_FRAME(codeobj_4276eabf841edf377dd437814d0f3ffb, module_torch$optim$lbfgs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4276eabf841edf377dd437814d0f3ffb->m_type_description == NULL);
    frame_4276eabf841edf377dd437814d0f3ffb = cache_frame_4276eabf841edf377dd437814d0f3ffb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4276eabf841edf377dd437814d0f3ffb);
    assert(Py_REFCNT(frame_4276eabf841edf377dd437814d0f3ffb) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_b5b357b1c24cff3373e896c5dcd51390_2)) {
        Py_XDECREF(cache_frame_b5b357b1c24cff3373e896c5dcd51390_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5b357b1c24cff3373e896c5dcd51390_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5b357b1c24cff3373e896c5dcd51390_2 = MAKE_FUNCTION_FRAME(codeobj_b5b357b1c24cff3373e896c5dcd51390, module_torch$optim$lbfgs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5b357b1c24cff3373e896c5dcd51390_2->m_type_description == NULL);
    frame_b5b357b1c24cff3373e896c5dcd51390_2 = cache_frame_b5b357b1c24cff3373e896c5dcd51390_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5b357b1c24cff3373e896c5dcd51390_2);
    assert(Py_REFCNT(frame_b5b357b1c24cff3373e896c5dcd51390_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 269;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_p;
            outline_0_var_p = tmp_assign_source_4;
            Py_INCREF(outline_0_var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_p);
        tmp_expression_value_2 = outline_0_var_p;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        frame_b5b357b1c24cff3373e896c5dcd51390_2->m_frame.f_lineno = 269;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_append_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 269;
        type_description_2 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
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
    try_except_handler_2:;
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

    goto try_return_handler_1;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5b357b1c24cff3373e896c5dcd51390_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5b357b1c24cff3373e896c5dcd51390_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5b357b1c24cff3373e896c5dcd51390_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5b357b1c24cff3373e896c5dcd51390_2,
        type_description_2,
        outline_0_var_p
    );


    // Release cached frame if used for exception.
    if (frame_b5b357b1c24cff3373e896c5dcd51390_2 == cache_frame_b5b357b1c24cff3373e896c5dcd51390_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5b357b1c24cff3373e896c5dcd51390_2);
        cache_frame_b5b357b1c24cff3373e896c5dcd51390_2 = NULL;
    }

    assertFrameObject(frame_b5b357b1c24cff3373e896c5dcd51390_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_p);
    outline_0_var_p = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_p);
    outline_0_var_p = NULL;
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
    exception_lineno = 269;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4276eabf841edf377dd437814d0f3ffb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4276eabf841edf377dd437814d0f3ffb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4276eabf841edf377dd437814d0f3ffb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4276eabf841edf377dd437814d0f3ffb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4276eabf841edf377dd437814d0f3ffb == cache_frame_4276eabf841edf377dd437814d0f3ffb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4276eabf841edf377dd437814d0f3ffb);
        cache_frame_4276eabf841edf377dd437814d0f3ffb = NULL;
    }

    assertFrameObject(frame_4276eabf841edf377dd437814d0f3ffb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

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


static PyObject *impl_torch$optim$lbfgs$$$function__8__set_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params_data = python_pars[1];
    PyObject *var_p = NULL;
    PyObject *var_pdata = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_25dc9e7b303e80da0c1269fe14c3a77d;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_25dc9e7b303e80da0c1269fe14c3a77d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_25dc9e7b303e80da0c1269fe14c3a77d)) {
        Py_XDECREF(cache_frame_25dc9e7b303e80da0c1269fe14c3a77d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25dc9e7b303e80da0c1269fe14c3a77d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25dc9e7b303e80da0c1269fe14c3a77d = MAKE_FUNCTION_FRAME(codeobj_25dc9e7b303e80da0c1269fe14c3a77d, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25dc9e7b303e80da0c1269fe14c3a77d->m_type_description == NULL);
    frame_25dc9e7b303e80da0c1269fe14c3a77d = cache_frame_25dc9e7b303e80da0c1269fe14c3a77d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25dc9e7b303e80da0c1269fe14c3a77d);
    assert(Py_REFCNT(frame_25dc9e7b303e80da0c1269fe14c3a77d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params_data);
        tmp_args_element_value_2 = par_params_data;
        frame_25dc9e7b303e80da0c1269fe14c3a77d->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 272;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 272;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
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
            exception_lineno = 272;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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
                    exception_lineno = 272;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 272;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_6;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_pdata;
            var_pdata = tmp_assign_source_7;
            Py_INCREF(var_pdata);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_p);
        tmp_called_instance_1 = var_p;
        CHECK_OBJECT(var_pdata);
        tmp_args_element_value_3 = var_pdata;
        frame_25dc9e7b303e80da0c1269fe14c3a77d->m_frame.f_lineno = 273;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[85], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 272;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25dc9e7b303e80da0c1269fe14c3a77d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25dc9e7b303e80da0c1269fe14c3a77d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25dc9e7b303e80da0c1269fe14c3a77d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25dc9e7b303e80da0c1269fe14c3a77d,
        type_description_1,
        par_self,
        par_params_data,
        var_p,
        var_pdata
    );


    // Release cached frame if used for exception.
    if (frame_25dc9e7b303e80da0c1269fe14c3a77d == cache_frame_25dc9e7b303e80da0c1269fe14c3a77d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25dc9e7b303e80da0c1269fe14c3a77d);
        cache_frame_25dc9e7b303e80da0c1269fe14c3a77d = NULL;
    }

    assertFrameObject(frame_25dc9e7b303e80da0c1269fe14c3a77d);

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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_pdata);
    var_pdata = NULL;
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

    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_pdata);
    var_pdata = NULL;
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
    CHECK_OBJECT(par_params_data);
    Py_DECREF(par_params_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params_data);
    Py_DECREF(par_params_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__9__directional_evaluate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_closure = python_pars[1];
    PyObject *par_x = python_pars[2];
    PyObject *par_t = python_pars[3];
    PyObject *par_d = python_pars[4];
    PyObject *var_loss = NULL;
    PyObject *var_flat_grad = NULL;
    struct Nuitka_FrameObject *frame_18fcea42dffff2aa3494e9f77bec6ee6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18fcea42dffff2aa3494e9f77bec6ee6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18fcea42dffff2aa3494e9f77bec6ee6)) {
        Py_XDECREF(cache_frame_18fcea42dffff2aa3494e9f77bec6ee6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18fcea42dffff2aa3494e9f77bec6ee6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18fcea42dffff2aa3494e9f77bec6ee6 = MAKE_FUNCTION_FRAME(codeobj_18fcea42dffff2aa3494e9f77bec6ee6, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18fcea42dffff2aa3494e9f77bec6ee6->m_type_description == NULL);
    frame_18fcea42dffff2aa3494e9f77bec6ee6 = cache_frame_18fcea42dffff2aa3494e9f77bec6ee6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18fcea42dffff2aa3494e9f77bec6ee6);
    assert(Py_REFCNT(frame_18fcea42dffff2aa3494e9f77bec6ee6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_t);
        tmp_args_element_value_1 = par_t;
        CHECK_OBJECT(par_d);
        tmp_args_element_value_2 = par_d;
        frame_18fcea42dffff2aa3494e9f77bec6ee6->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[86],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(par_closure);
        tmp_called_value_1 = par_closure;
        frame_18fcea42dffff2aa3494e9f77bec6ee6->m_frame.f_lineno = 277;
        tmp_float_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loss == NULL);
        var_loss = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_18fcea42dffff2aa3494e9f77bec6ee6->m_frame.f_lineno = 278;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[87]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flat_grad == NULL);
        var_flat_grad = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_18fcea42dffff2aa3494e9f77bec6ee6->m_frame.f_lineno = 279;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[88], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18fcea42dffff2aa3494e9f77bec6ee6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18fcea42dffff2aa3494e9f77bec6ee6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18fcea42dffff2aa3494e9f77bec6ee6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18fcea42dffff2aa3494e9f77bec6ee6,
        type_description_1,
        par_self,
        par_closure,
        par_x,
        par_t,
        par_d,
        var_loss,
        var_flat_grad
    );


    // Release cached frame if used for exception.
    if (frame_18fcea42dffff2aa3494e9f77bec6ee6 == cache_frame_18fcea42dffff2aa3494e9f77bec6ee6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18fcea42dffff2aa3494e9f77bec6ee6);
        cache_frame_18fcea42dffff2aa3494e9f77bec6ee6 = NULL;
    }

    assertFrameObject(frame_18fcea42dffff2aa3494e9f77bec6ee6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_loss);
        tmp_tuple_element_1 = var_loss;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_flat_grad);
        tmp_tuple_element_1 = var_flat_grad;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_loss);
    Py_DECREF(var_loss);
    var_loss = NULL;
    CHECK_OBJECT(var_flat_grad);
    Py_DECREF(var_flat_grad);
    var_flat_grad = NULL;
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

    Py_XDECREF(var_loss);
    var_loss = NULL;
    Py_XDECREF(var_flat_grad);
    var_flat_grad = NULL;
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
    CHECK_OBJECT(par_closure);
    Py_DECREF(par_closure);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_closure);
    Py_DECREF(par_closure);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$lbfgs$$$function__10_step(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_closure = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_group = NULL;
    PyObject *var_lr = NULL;
    PyObject *var_max_iter = NULL;
    PyObject *var_max_eval = NULL;
    PyObject *var_tolerance_grad = NULL;
    PyObject *var_tolerance_change = NULL;
    PyObject *var_line_search_fn = NULL;
    PyObject *var_history_size = NULL;
    PyObject *var_state = NULL;
    PyObject *var_orig_loss = NULL;
    PyObject *var_loss = NULL;
    PyObject *var_current_evals = NULL;
    PyObject *var_flat_grad = NULL;
    PyObject *var_opt_cond = NULL;
    PyObject *var_d = NULL;
    PyObject *var_t = NULL;
    PyObject *var_old_dirs = NULL;
    PyObject *var_old_stps = NULL;
    PyObject *var_ro = NULL;
    PyObject *var_H_diag = NULL;
    PyObject *var_prev_flat_grad = NULL;
    PyObject *var_prev_loss = NULL;
    PyObject *var_n_iter = NULL;
    PyObject *var_y = NULL;
    PyObject *var_s = NULL;
    PyObject *var_ys = NULL;
    PyObject *var_num_old = NULL;
    PyObject *var_al = NULL;
    PyObject *var_q = NULL;
    PyObject *var_i = NULL;
    PyObject *var_r = NULL;
    PyObject *var_be_i = NULL;
    PyObject *var_gtd = NULL;
    PyObject *var_ls_func_evals = NULL;
    PyObject *var_x_init = NULL;
    PyObject *var_obj_func = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__value = NULL;
    PyObject *tmp_inplace_assign_subscr_3__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_3__target = NULL;
    PyObject *tmp_inplace_assign_subscr_3__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_5e67aaef7c33072aaaaed4215953651d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_5e67aaef7c33072aaaaed4215953651d = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5e67aaef7c33072aaaaed4215953651d)) {
        Py_XDECREF(cache_frame_5e67aaef7c33072aaaaed4215953651d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e67aaef7c33072aaaaed4215953651d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e67aaef7c33072aaaaed4215953651d = MAKE_FUNCTION_FRAME(codeobj_5e67aaef7c33072aaaaed4215953651d, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e67aaef7c33072aaaaed4215953651d->m_type_description == NULL);
    frame_5e67aaef7c33072aaaaed4215953651d = cache_frame_5e67aaef7c33072aaaaed4215953651d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5e67aaef7c33072aaaaed4215953651d);
    assert(Py_REFCNT(frame_5e67aaef7c33072aaaaed4215953651d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_lineno = 290;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 293;
        tmp_called_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[89]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_closure));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_closure);
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 293;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_closure);
            PyCell_SET(par_closure, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[60]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_group == NULL);
        var_group = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_group);
        tmp_expression_value_4 = var_group;
        tmp_subscript_value_2 = mod_consts[51];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lr == NULL);
        var_lr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_group);
        tmp_expression_value_5 = var_group;
        tmp_subscript_value_3 = mod_consts[52];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_iter == NULL);
        var_max_iter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_group);
        tmp_expression_value_6 = var_group;
        tmp_subscript_value_4 = mod_consts[53];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_eval == NULL);
        var_max_eval = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_group);
        tmp_expression_value_7 = var_group;
        tmp_subscript_value_5 = mod_consts[54];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tolerance_grad == NULL);
        var_tolerance_grad = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_group);
        tmp_expression_value_8 = var_group;
        tmp_subscript_value_6 = mod_consts[55];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tolerance_change == NULL);
        var_tolerance_change = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_group);
        tmp_expression_value_9 = var_group;
        tmp_subscript_value_7 = mod_consts[57];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_line_search_fn == NULL);
        var_line_search_fn = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_group);
        tmp_expression_value_10 = var_group;
        tmp_subscript_value_8 = mod_consts[56];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_history_size == NULL);
        var_history_size = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[90]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_14 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[63]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_11);

            exception_lineno = 306;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[3];
        tmp_subscript_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_10, 0);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_11);

            exception_lineno = 306;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_11);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state == NULL);
        var_state = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_state);
        tmp_expression_value_15 = var_state;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[91]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 307;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[92]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_state);
        tmp_expression_value_16 = var_state;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[91]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 308;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[93]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_closure));
        tmp_called_value_4 = Nuitka_Cell_GET(par_closure);
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 311;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_orig_loss == NULL);
        var_orig_loss = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(var_orig_loss);
        tmp_float_arg_1 = var_orig_loss;
        tmp_assign_source_12 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loss == NULL);
        var_loss = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[13];
        assert(var_current_evals == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_current_evals = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_state);
        tmp_assign_source_14 = var_state;
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_14);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_17 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_11 = mod_consts[94];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_iadd_expr_right_1 = mod_consts[13];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_16;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = mod_consts[94];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_called_instance_2 = Nuitka_Cell_GET(par_self);
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 316;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[87]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flat_grad == NULL);
        var_flat_grad = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_flat_grad);
        tmp_called_instance_4 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 317;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[8]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 317;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[6]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tolerance_grad);
        tmp_cmp_expr_right_2 = var_tolerance_grad;
        tmp_assign_source_18 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_opt_cond == NULL);
        var_opt_cond = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_opt_cond);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_opt_cond);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_orig_loss);
    tmp_return_value = var_orig_loss;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_state);
        tmp_expression_value_18 = var_state;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[95]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 324;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[96]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_state);
        tmp_expression_value_19 = var_state;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[95]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 325;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[97]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_state);
        tmp_expression_value_20 = var_state;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[95]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 326;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[98]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_dirs == NULL);
        var_old_dirs = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_state);
        tmp_expression_value_21 = var_state;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[95]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 327;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[99]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_stps == NULL);
        var_old_stps = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_state);
        tmp_expression_value_22 = var_state;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[95]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 328;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[100]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ro == NULL);
        var_ro = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(var_state);
        tmp_expression_value_23 = var_state;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[95]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 329;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[101]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_H_diag == NULL);
        var_H_diag = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_state);
        tmp_expression_value_24 = var_state;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[95]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 330;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[102]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prev_flat_grad == NULL);
        var_prev_flat_grad = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_state);
        tmp_expression_value_25 = var_state;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[95]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 331;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[103]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prev_loss == NULL);
        var_prev_loss = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[3];
        assert(var_n_iter == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_n_iter = tmp_assign_source_27;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_n_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 335;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_n_iter;
        CHECK_OBJECT(var_max_iter);
        tmp_cmp_expr_right_3 = var_max_iter;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
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
    goto loop_end_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_n_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_n_iter;
        tmp_iadd_expr_right_2 = mod_consts[13];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = tmp_iadd_expr_left_2;
        var_n_iter = tmp_assign_source_28;

    }
    {
        PyObject *tmp_assign_source_29;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_29 = var_state;
        {
            PyObject *old = tmp_inplace_assign_subscr_2__target;
            tmp_inplace_assign_subscr_2__target = tmp_assign_source_29;
            Py_INCREF(tmp_inplace_assign_subscr_2__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[104];
        {
            PyObject *old = tmp_inplace_assign_subscr_2__subscript;
            tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_30;
            Py_INCREF(tmp_inplace_assign_subscr_2__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_expression_value_26 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
        tmp_subscript_value_12 = tmp_inplace_assign_subscr_2__subscript;
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_12);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_2__value;
            tmp_inplace_assign_subscr_2__value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_iadd_expr_left_3 = tmp_inplace_assign_subscr_2__value;
        tmp_iadd_expr_right_3 = mod_consts[13];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_32 = tmp_iadd_expr_left_3;
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_32;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_2__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_2__subscript);
    tmp_inplace_assign_subscr_2__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_2__subscript);
    tmp_inplace_assign_subscr_2__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
    Py_DECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_13;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = var_state;
        tmp_subscript_value_13 = mod_consts[104];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_13);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[13];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_5;
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 344;
        tmp_assign_source_33 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[106]);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_old_dirs;
            var_old_dirs = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_old_stps;
            var_old_stps = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_ro;
            var_ro = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[13];
        {
            PyObject *old = var_H_diag;
            var_H_diag = tmp_assign_source_37;
            Py_INCREF(var_H_diag);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_2;
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = var_flat_grad;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[107]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_prev_flat_grad == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_prev_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 351;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_3;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = var_d;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[109]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_t == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_t;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 352;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_y);
        tmp_called_instance_6 = var_y;
        CHECK_OBJECT(var_s);
        tmp_args_element_value_4 = var_s;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 353;
        tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[14], tmp_args_element_value_4);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ys;
            var_ys = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_ys);
        tmp_cmp_expr_left_5 = var_ys;
        tmp_cmp_expr_right_5 = mod_consts[110];
        tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_2;
        if (var_old_dirs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = var_old_dirs;
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_history_size == NULL) {
            Py_DECREF(tmp_cmp_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_6 = var_history_size;
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_3;
        if (var_old_dirs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = var_old_dirs;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[112]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 358;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[113]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_4;
        if (var_old_stps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 359;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = var_old_stps;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[112]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 359;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[113]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_5;
        if (var_ro == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = var_ro;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[112]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 360;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[113]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        if (var_old_dirs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = var_old_dirs;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[77]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y);
        tmp_args_element_value_5 = var_y;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 363;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_6;
        if (var_old_stps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_old_stps;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[77]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s);
        tmp_args_element_value_6 = var_s;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 364;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (var_ro == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 365;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_ro;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[77]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = mod_consts[116];
        CHECK_OBJECT(var_ys);
        tmp_truediv_expr_right_1 = var_ys;
        tmp_args_element_value_7 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 365;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 365;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_ys);
        tmp_truediv_expr_left_2 = var_ys;
        CHECK_OBJECT(var_y);
        tmp_called_instance_7 = var_y;
        CHECK_OBJECT(var_y);
        tmp_args_element_value_8 = var_y;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 368;
        tmp_truediv_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[14], tmp_args_element_value_8);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_H_diag;
            var_H_diag = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_len_arg_3;
        if (var_old_dirs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_3 = var_old_dirs;
        tmp_assign_source_42 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_num_old;
            var_num_old = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = mod_consts[117];
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = var_state;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_mult_expr_left_1 = MAKE_LIST1(Py_None);
        if (var_history_size == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_1 = var_history_size;
        tmp_ass_subvalue_3 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_state;
        tmp_ass_subscript_3 = mod_consts[117];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_14;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = var_state;
        tmp_subscript_value_14 = mod_consts[117];
        tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_14);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_al;
            var_al = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_8;
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 379;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 379;
        tmp_assign_source_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[106]);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_xrange_step_1;
        CHECK_OBJECT(var_num_old);
        tmp_sub_expr_left_1 = var_num_old;
        tmp_sub_expr_right_1 = 1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        assert(!(tmp_xrange_low_1 == NULL));
        tmp_xrange_high_1 = mod_consts[37];
        tmp_xrange_step_1 = mod_consts[37];
        tmp_iter_arg_1 = BUILTIN_XRANGE3(tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_46 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_46 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
                exception_lineno = 380;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_47 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_47;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_old_stps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_38 = var_old_stps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_15 = var_i;
        tmp_expression_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_15);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[14]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_q == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_9 = var_q;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 381;
        tmp_mult_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_21);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_ro == NULL) {
            Py_DECREF(tmp_mult_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_39 = var_ro;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_16 = var_i;
        tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_16);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_al == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_4 = var_al;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_4 = var_i;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_18;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_40 = var_q;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[79]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_old_dirs == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_41 = var_old_dirs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_17 = var_i;
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_17);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_al == NULL) {
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_42 = var_al;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_18 = var_i;
        tmp_operand_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_18);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 382;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[83]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 380;
        type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[109]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_q == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_10 = var_q;
        if (var_H_diag == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_11 = var_H_diag;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_assign_unpack_1__assign_source;
            tmp_assign_unpack_1__assign_source = tmp_assign_source_48;
            Py_XDECREF(old);
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_49 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_49;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_50 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_50;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT(var_num_old);
        tmp_xrange_low_2 = var_num_old;
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_52 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_52 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
                exception_lineno = 387;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_53 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_53;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_20;
        if (var_old_dirs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_45 = var_old_dirs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_19 = var_i;
        tmp_expression_value_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_19);
        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[14]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_r == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_12 = var_r;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 388;
        tmp_mult_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_ro == NULL) {
            Py_DECREF(tmp_mult_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_46 = var_ro;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_20 = var_i;
        tmp_mult_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_20);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_54 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_be_i;
            var_be_i = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_22;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_47 = var_r;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[79]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_old_stps == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_48 = var_old_stps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_21 = var_i;
        tmp_kw_call_arg_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_21);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_al == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_49 = var_al;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_22 = var_i;
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_22);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_be_i);
        tmp_sub_expr_right_2 = var_be_i;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 389;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_25, args, kw_values, mod_consts[83]);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_10);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 387;
        type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_end_4:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (var_prev_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = var_prev_flat_grad;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_51;
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_50 = var_flat_grad;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[9]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 392;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[11]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 392;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 392;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_55 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_prev_flat_grad;
            var_prev_flat_grad = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_13;
        if (var_prev_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = var_prev_flat_grad;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[85]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_flat_grad == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 394;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_56;
        if (var_loss == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_56 = var_loss;
        {
            PyObject *old = var_prev_loss;
            var_prev_loss = tmp_assign_source_56;
            Py_INCREF(var_prev_loss);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_23;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_53 = var_state;
        tmp_subscript_value_23 = mod_consts[104];
        tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_23);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = mod_consts[13];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_57;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_instance_10;
        tmp_called_value_28 = LOOKUP_BUILTIN(mod_consts[5]);
        assert(tmp_called_value_28 != NULL);
        tmp_args_element_value_14 = mod_consts[116];
        tmp_truediv_expr_left_3 = mod_consts[116];
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 402;
        tmp_called_instance_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[8]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 402;
        tmp_truediv_expr_right_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[122]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_mult_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_lr == NULL) {
            Py_DECREF(tmp_mult_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_4 = var_lr;
        tmp_assign_source_57 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_58;
        if (var_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_58 = var_lr;
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_58;
            Py_INCREF(var_t);
            Py_XDECREF(old);
        }

    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_16;
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = var_flat_grad;
        CHECK_OBJECT(var_d);
        tmp_args_element_value_16 = var_d;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 407;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[14], tmp_args_element_value_16);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gtd;
            var_gtd = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_gtd);
        tmp_cmp_expr_left_10 = var_gtd;
        CHECK_OBJECT(var_tolerance_change);
        tmp_operand_value_3 = var_tolerance_change;
        tmp_cmp_expr_right_10 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_cmp_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    goto loop_end_1;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[3];
        {
            PyObject *old = var_ls_func_evals;
            var_ls_func_evals = tmp_assign_source_60;
            Py_INCREF(var_ls_func_evals);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_line_search_fn);
        tmp_cmp_expr_left_11 = var_line_search_fn;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_line_search_fn);
        tmp_cmp_expr_left_12 = var_line_search_fn;
        tmp_cmp_expr_right_12 = mod_consts[123];
        tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[124];
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 418;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 418;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_instance_12;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = Nuitka_Cell_GET(par_self);
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 420;
        tmp_assign_source_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[126]);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x_init;
            var_x_init = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_closure;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_62 = MAKE_FUNCTION_torch$optim$lbfgs$$$function__10_step$$$function__1_obj_func(tmp_closure_1);

        {
            PyObject *old = var_obj_func;
            var_obj_func = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_obj_func);
        tmp_args_element_value_17 = var_obj_func;
        CHECK_OBJECT(var_x_init);
        tmp_args_element_value_18 = var_x_init;
        CHECK_OBJECT(var_t);
        tmp_args_element_value_19 = var_t;
        CHECK_OBJECT(var_d);
        tmp_args_element_value_20 = var_d;
        if (var_loss == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_21 = var_loss;
        if (var_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_22 = var_flat_grad;
        CHECK_OBJECT(var_gtd);
        tmp_args_element_value_23 = var_gtd;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_29, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_63 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_64 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_64 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            exception_lineno = 425;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_65 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_65 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            exception_lineno = 425;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_66 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_66 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            exception_lineno = 425;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_67 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_67 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            exception_lineno = 425;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_67;
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

                    type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 425;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[15];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            exception_lineno = 425;
            goto try_except_handler_8;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_68 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_loss;
            var_loss = tmp_assign_source_68;
            Py_INCREF(var_loss);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_69 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_flat_grad;
            var_flat_grad = tmp_assign_source_69;
            Py_INCREF(var_flat_grad);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_70 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_t;
            assert(old != NULL);
            var_t = tmp_assign_source_70;
            Py_INCREF(var_t);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_71 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_ls_func_evals;
            assert(old != NULL);
            var_ls_func_evals = tmp_assign_source_71;
            Py_INCREF(var_ls_func_evals);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    branch_end_12:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = Nuitka_Cell_GET(par_self);
        CHECK_OBJECT(var_t);
        tmp_args_element_value_24 = var_t;
        CHECK_OBJECT(var_d);
        tmp_args_element_value_25 = var_d;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_12 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_13,
                mod_consts[86],
                call_args
            );
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(var_flat_grad);
        tmp_called_instance_15 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 428;
        tmp_called_instance_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[8]);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 428;
        tmp_cmp_expr_left_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[6]);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tolerance_grad);
        tmp_cmp_expr_right_13 = var_tolerance_grad;
        tmp_assign_source_72 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_opt_cond;
            var_opt_cond = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_16 = Nuitka_Cell_GET(par_self);
        CHECK_OBJECT(var_t);
        tmp_args_element_value_26 = var_t;
        CHECK_OBJECT(var_d);
        tmp_args_element_value_27 = var_d;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_13 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_16,
                mod_consts[86],
                call_args
            );
        }

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_n_iter);
        tmp_cmp_expr_left_14 = var_n_iter;
        CHECK_OBJECT(var_max_iter);
        tmp_cmp_expr_right_14 = var_max_iter;
        tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_instance_17;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 436;
        tmp_assign_source_73 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[89]);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_with_1__source;
            tmp_with_1__source = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_54 = tmp_with_1__source;
        tmp_called_value_30 = LOOKUP_SPECIAL(tmp_expression_value_54, mod_consts[129]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 436;
        tmp_assign_source_74 = CALL_FUNCTION_NO_ARGS(tmp_called_value_30);
        Py_DECREF(tmp_called_value_30);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_with_1__enter;
            tmp_with_1__enter = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_55 = tmp_with_1__source;
        tmp_assign_source_75 = LOOKUP_SPECIAL(tmp_expression_value_55, mod_consts[130]);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_with_1__exit;
            tmp_with_1__exit = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_76;
        tmp_assign_source_76 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_76;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_called_value_31;
        if (Nuitka_Cell_GET(par_closure) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_value_31 = Nuitka_Cell_GET(par_closure);
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 437;
        tmp_float_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_31);
        if (tmp_float_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_77 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_loss;
            var_loss = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    goto try_end_8;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_8 == NULL) {
        exception_keeper_tb_8 = MAKE_TRACEBACK(frame_5e67aaef7c33072aaaaed4215953651d, exception_keeper_lineno_8);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_5e67aaef7c33072aaaaed4215953651d, exception_keeper_lineno_8);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        nuitka_bool tmp_assign_source_78;
        tmp_assign_source_78 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_32 = tmp_with_1__exit;
        tmp_args_element_value_28 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_29 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_30 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_32, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 437;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5e67aaef7c33072aaaaed4215953651d->m_frame) frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 436;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5e67aaef7c33072aaaaed4215953651d->m_frame) frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
    branch_end_14:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_16;
        nuitka_bool tmp_cmp_expr_right_16;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_16 = tmp_with_1__indicator;
        tmp_cmp_expr_right_16 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_16 == tmp_cmp_expr_right_16) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_33 = tmp_with_1__exit;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 437;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_33, mod_consts[132]);

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_10);
            Py_XDECREF(exception_keeper_value_10);
            Py_XDECREF(exception_keeper_tb_10);

            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_16:;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_9;
    // End of try:
    try_end_10:;
    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_17;
        nuitka_bool tmp_cmp_expr_right_17;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_17 = tmp_with_1__indicator;
        tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_34 = tmp_with_1__exit;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 437;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_34, mod_consts[132]);

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_17:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_instance_18;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_18 = Nuitka_Cell_GET(par_self);
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 438;
        tmp_assign_source_79 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[87]);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_flat_grad;
            var_flat_grad = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_called_instance_20;
        CHECK_OBJECT(var_flat_grad);
        tmp_called_instance_20 = var_flat_grad;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 439;
        tmp_called_instance_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[8]);
        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 439;
        tmp_cmp_expr_left_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[6]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tolerance_grad);
        tmp_cmp_expr_right_18 = var_tolerance_grad;
        tmp_assign_source_80 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_left_18);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_opt_cond;
            var_opt_cond = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[13];
        {
            PyObject *old = var_ls_func_evals;
            assert(old != NULL);
            var_ls_func_evals = tmp_assign_source_81;
            Py_INCREF(var_ls_func_evals);
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    branch_end_11:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (var_current_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[133]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = var_current_evals;
        CHECK_OBJECT(var_ls_func_evals);
        tmp_iadd_expr_right_4 = var_ls_func_evals;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = tmp_iadd_expr_left_4;
        var_current_evals = tmp_assign_source_82;

    }
    {
        PyObject *tmp_assign_source_83;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_83 = var_state;
        {
            PyObject *old = tmp_inplace_assign_subscr_3__target;
            tmp_inplace_assign_subscr_3__target = tmp_assign_source_83;
            Py_INCREF(tmp_inplace_assign_subscr_3__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[94];
        {
            PyObject *old = tmp_inplace_assign_subscr_3__subscript;
            tmp_inplace_assign_subscr_3__subscript = tmp_assign_source_84;
            Py_INCREF(tmp_inplace_assign_subscr_3__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_24;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
        tmp_expression_value_56 = tmp_inplace_assign_subscr_3__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__subscript);
        tmp_subscript_value_24 = tmp_inplace_assign_subscr_3__subscript;
        tmp_assign_source_85 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_24);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_3__value;
            tmp_inplace_assign_subscr_3__value = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__value);
        tmp_iadd_expr_left_5 = tmp_inplace_assign_subscr_3__value;
        CHECK_OBJECT(var_ls_func_evals);
        tmp_iadd_expr_right_5 = var_ls_func_evals;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_86 = tmp_iadd_expr_left_5;
        tmp_inplace_assign_subscr_3__value = tmp_assign_source_86;

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__value);
        tmp_ass_subvalue_5 = tmp_inplace_assign_subscr_3__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
        tmp_ass_subscribed_5 = tmp_inplace_assign_subscr_3__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__subscript);
        tmp_ass_subscript_5 = tmp_inplace_assign_subscr_3__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
    Py_DECREF(tmp_inplace_assign_subscr_3__target);
    tmp_inplace_assign_subscr_3__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_3__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_3__subscript);
    tmp_inplace_assign_subscr_3__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_3__value);
    tmp_inplace_assign_subscr_3__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
    Py_DECREF(tmp_inplace_assign_subscr_3__target);
    tmp_inplace_assign_subscr_3__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_3__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_3__subscript);
    tmp_inplace_assign_subscr_3__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_3__value);
    Py_DECREF(tmp_inplace_assign_subscr_3__value);
    tmp_inplace_assign_subscr_3__value = NULL;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_n_iter);
        tmp_cmp_expr_left_19 = var_n_iter;
        CHECK_OBJECT(var_max_iter);
        tmp_cmp_expr_right_19 = var_max_iter;
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    goto loop_end_1;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(var_current_evals);
        tmp_cmp_expr_left_20 = var_current_evals;
        CHECK_OBJECT(var_max_eval);
        tmp_cmp_expr_right_20 = var_max_eval;
        tmp_condition_result_19 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    goto loop_end_1;
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_2;
        if (var_opt_cond == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_opt_cond);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    goto loop_end_1;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(var_d);
        tmp_expression_value_57 = var_d;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[109]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_t == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = var_t;
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 460;
        tmp_called_instance_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_35);
        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 460;
        tmp_called_instance_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[8]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5e67aaef7c33072aaaaed4215953651d->m_frame.f_lineno = 460;
        tmp_cmp_expr_left_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[6]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_cmp_expr_left_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tolerance_change);
        tmp_cmp_expr_right_21 = var_tolerance_change;
        tmp_condition_result_21 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        Py_DECREF(tmp_cmp_expr_left_21);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    goto loop_end_1;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        if (var_loss == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_3 = var_loss;
        CHECK_OBJECT(var_prev_loss);
        tmp_sub_expr_right_3 = var_prev_loss;
        tmp_abs_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_abs_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_22 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_cmp_expr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tolerance_change);
        tmp_cmp_expr_right_22 = var_tolerance_change;
        tmp_condition_result_22 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_left_22);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    goto loop_end_1;
    branch_no_22:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 335;
        type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_6 = var_d;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = var_state;
        tmp_ass_subscript_6 = mod_consts[34];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        if (var_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_7 = var_t;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_7 = var_state;
        tmp_ass_subscript_7 = mod_consts[20];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        if (var_old_dirs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_8 = var_old_dirs;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = var_state;
        tmp_ass_subscript_8 = mod_consts[111];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        if (var_old_stps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_9 = var_old_stps;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = var_state;
        tmp_ass_subscript_9 = mod_consts[114];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        if (var_ro == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_10 = var_ro;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_10 = var_state;
        tmp_ass_subscript_10 = mod_consts[115];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        if (var_H_diag == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_11 = var_H_diag;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_11 = var_state;
        tmp_ass_subscript_11 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        if (var_prev_flat_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_12 = var_prev_flat_grad;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_12 = var_state;
        tmp_ass_subscript_12 = mod_consts[108];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        if (var_prev_loss == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 473;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_13 = var_prev_loss;
        if (var_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 473;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_13 = var_state;
        tmp_ass_subscript_13 = mod_consts[135];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ccoooooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_5e67aaef7c33072aaaaed4215953651d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e67aaef7c33072aaaaed4215953651d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e67aaef7c33072aaaaed4215953651d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e67aaef7c33072aaaaed4215953651d,
        type_description_1,
        par_self,
        par_closure,
        var_group,
        var_lr,
        var_max_iter,
        var_max_eval,
        var_tolerance_grad,
        var_tolerance_change,
        var_line_search_fn,
        var_history_size,
        var_state,
        var_orig_loss,
        var_loss,
        var_current_evals,
        var_flat_grad,
        var_opt_cond,
        var_d,
        var_t,
        var_old_dirs,
        var_old_stps,
        var_ro,
        var_H_diag,
        var_prev_flat_grad,
        var_prev_loss,
        var_n_iter,
        var_y,
        var_s,
        var_ys,
        var_num_old,
        var_al,
        var_q,
        var_i,
        var_r,
        var_be_i,
        var_gtd,
        var_ls_func_evals,
        var_x_init,
        var_obj_func
    );


    // Release cached frame if used for exception.
    if (frame_5e67aaef7c33072aaaaed4215953651d == cache_frame_5e67aaef7c33072aaaaed4215953651d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e67aaef7c33072aaaaed4215953651d);
        cache_frame_5e67aaef7c33072aaaaed4215953651d = NULL;
    }

    assertFrameObject(frame_5e67aaef7c33072aaaaed4215953651d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_orig_loss);
    tmp_return_value = var_orig_loss;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_closure);
    Py_DECREF(par_closure);
    par_closure = NULL;
    CHECK_OBJECT(var_group);
    Py_DECREF(var_group);
    var_group = NULL;
    Py_XDECREF(var_lr);
    var_lr = NULL;
    CHECK_OBJECT(var_max_iter);
    Py_DECREF(var_max_iter);
    var_max_iter = NULL;
    CHECK_OBJECT(var_max_eval);
    Py_DECREF(var_max_eval);
    var_max_eval = NULL;
    CHECK_OBJECT(var_tolerance_grad);
    Py_DECREF(var_tolerance_grad);
    var_tolerance_grad = NULL;
    CHECK_OBJECT(var_tolerance_change);
    Py_DECREF(var_tolerance_change);
    var_tolerance_change = NULL;
    CHECK_OBJECT(var_line_search_fn);
    Py_DECREF(var_line_search_fn);
    var_line_search_fn = NULL;
    Py_XDECREF(var_history_size);
    var_history_size = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
    CHECK_OBJECT(var_orig_loss);
    Py_DECREF(var_orig_loss);
    var_orig_loss = NULL;
    Py_XDECREF(var_loss);
    var_loss = NULL;
    Py_XDECREF(var_current_evals);
    var_current_evals = NULL;
    Py_XDECREF(var_flat_grad);
    var_flat_grad = NULL;
    Py_XDECREF(var_opt_cond);
    var_opt_cond = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_old_dirs);
    var_old_dirs = NULL;
    Py_XDECREF(var_old_stps);
    var_old_stps = NULL;
    Py_XDECREF(var_ro);
    var_ro = NULL;
    Py_XDECREF(var_H_diag);
    var_H_diag = NULL;
    Py_XDECREF(var_prev_flat_grad);
    var_prev_flat_grad = NULL;
    Py_XDECREF(var_prev_loss);
    var_prev_loss = NULL;
    Py_XDECREF(var_n_iter);
    var_n_iter = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_ys);
    var_ys = NULL;
    Py_XDECREF(var_num_old);
    var_num_old = NULL;
    Py_XDECREF(var_al);
    var_al = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_be_i);
    var_be_i = NULL;
    Py_XDECREF(var_gtd);
    var_gtd = NULL;
    Py_XDECREF(var_ls_func_evals);
    var_ls_func_evals = NULL;
    Py_XDECREF(var_x_init);
    var_x_init = NULL;
    Py_XDECREF(var_obj_func);
    var_obj_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_closure);
    Py_DECREF(par_closure);
    par_closure = NULL;
    Py_XDECREF(var_group);
    var_group = NULL;
    Py_XDECREF(var_lr);
    var_lr = NULL;
    Py_XDECREF(var_max_iter);
    var_max_iter = NULL;
    Py_XDECREF(var_max_eval);
    var_max_eval = NULL;
    Py_XDECREF(var_tolerance_grad);
    var_tolerance_grad = NULL;
    Py_XDECREF(var_tolerance_change);
    var_tolerance_change = NULL;
    Py_XDECREF(var_line_search_fn);
    var_line_search_fn = NULL;
    Py_XDECREF(var_history_size);
    var_history_size = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
    Py_XDECREF(var_orig_loss);
    var_orig_loss = NULL;
    Py_XDECREF(var_loss);
    var_loss = NULL;
    Py_XDECREF(var_current_evals);
    var_current_evals = NULL;
    Py_XDECREF(var_flat_grad);
    var_flat_grad = NULL;
    Py_XDECREF(var_opt_cond);
    var_opt_cond = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_old_dirs);
    var_old_dirs = NULL;
    Py_XDECREF(var_old_stps);
    var_old_stps = NULL;
    Py_XDECREF(var_ro);
    var_ro = NULL;
    Py_XDECREF(var_H_diag);
    var_H_diag = NULL;
    Py_XDECREF(var_prev_flat_grad);
    var_prev_flat_grad = NULL;
    Py_XDECREF(var_prev_loss);
    var_prev_loss = NULL;
    Py_XDECREF(var_n_iter);
    var_n_iter = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_ys);
    var_ys = NULL;
    Py_XDECREF(var_num_old);
    var_num_old = NULL;
    Py_XDECREF(var_al);
    var_al = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_be_i);
    var_be_i = NULL;
    Py_XDECREF(var_gtd);
    var_gtd = NULL;
    Py_XDECREF(var_ls_func_evals);
    var_ls_func_evals = NULL;
    Py_XDECREF(var_x_init);
    var_x_init = NULL;
    Py_XDECREF(var_obj_func);
    var_obj_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

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


static PyObject *impl_torch$optim$lbfgs$$$function__10_step$$$function__1_obj_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_t = python_pars[1];
    PyObject *par_d = python_pars[2];
    struct Nuitka_FrameObject *frame_c8f6b1c716f52ca07e706c5c97555bea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8f6b1c716f52ca07e706c5c97555bea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8f6b1c716f52ca07e706c5c97555bea)) {
        Py_XDECREF(cache_frame_c8f6b1c716f52ca07e706c5c97555bea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8f6b1c716f52ca07e706c5c97555bea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8f6b1c716f52ca07e706c5c97555bea = MAKE_FUNCTION_FRAME(codeobj_c8f6b1c716f52ca07e706c5c97555bea, module_torch$optim$lbfgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8f6b1c716f52ca07e706c5c97555bea->m_type_description == NULL);
    frame_c8f6b1c716f52ca07e706c5c97555bea = cache_frame_c8f6b1c716f52ca07e706c5c97555bea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8f6b1c716f52ca07e706c5c97555bea);
    assert(Py_REFCNT(frame_c8f6b1c716f52ca07e706c5c97555bea) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[137]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_t);
        tmp_args_element_value_3 = par_t;
        CHECK_OBJECT(par_d);
        tmp_args_element_value_4 = par_d;
        frame_c8f6b1c716f52ca07e706c5c97555bea->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooocc";
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
        exception_tb = MAKE_TRACEBACK(frame_c8f6b1c716f52ca07e706c5c97555bea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8f6b1c716f52ca07e706c5c97555bea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8f6b1c716f52ca07e706c5c97555bea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8f6b1c716f52ca07e706c5c97555bea,
        type_description_1,
        par_x,
        par_t,
        par_d,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c8f6b1c716f52ca07e706c5c97555bea == cache_frame_c8f6b1c716f52ca07e706c5c97555bea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8f6b1c716f52ca07e706c5c97555bea);
        cache_frame_c8f6b1c716f52ca07e706c5c97555bea = NULL;
    }

    assertFrameObject(frame_c8f6b1c716f52ca07e706c5c97555bea);

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
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__10_step() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__10_step,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_5e67aaef7c33072aaaaed4215953651d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__10_step$$$function__1_obj_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__10_step$$$function__1_obj_func,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_c8f6b1c716f52ca07e706c5c97555bea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__1__cubic_interpolate(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__1__cubic_interpolate,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e0df440a302a6a8c56a84cf0a52ec99,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__2__strong_wolfe(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__2__strong_wolfe,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52a8cb3b6b9fdae585c80813d72a370f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__3___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__3___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_28ce32062557986c1044b452099afea0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__4__numel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__4__numel,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_2aa6e5e2611a727a75dcbe83a7c8907c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__4__numel$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__4__numel$$$function__1_lambda,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_3fb100f565544ea433df9dbbe1d5cea5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__5__gather_flat_grad() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__5__gather_flat_grad,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_d673a3295d08e550eaa899fce6f71232,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__6__add_grad() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__6__add_grad,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_82cb21f5564e9a73a9f1d95c4eaea1e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__7__clone_param() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__7__clone_param,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_4276eabf841edf377dd437814d0f3ffb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__8__set_param() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__8__set_param,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_25dc9e7b303e80da0c1269fe14c3a77d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$lbfgs$$$function__9__directional_evaluate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$lbfgs$$$function__9__directional_evaluate,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_18fcea42dffff2aa3494e9f77bec6ee6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$lbfgs,
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

function_impl_code functable_torch$optim$lbfgs[] = {
    impl_torch$optim$lbfgs$$$function__4__numel$$$function__1_lambda,
    impl_torch$optim$lbfgs$$$function__10_step$$$function__1_obj_func,
    impl_torch$optim$lbfgs$$$function__1__cubic_interpolate,
    impl_torch$optim$lbfgs$$$function__2__strong_wolfe,
    impl_torch$optim$lbfgs$$$function__3___init__,
    impl_torch$optim$lbfgs$$$function__4__numel,
    impl_torch$optim$lbfgs$$$function__5__gather_flat_grad,
    impl_torch$optim$lbfgs$$$function__6__add_grad,
    impl_torch$optim$lbfgs$$$function__7__clone_param,
    impl_torch$optim$lbfgs$$$function__8__set_param,
    impl_torch$optim$lbfgs$$$function__9__directional_evaluate,
    impl_torch$optim$lbfgs$$$function__10_step,
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

    function_impl_code *current = functable_torch$optim$lbfgs;
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

    if (offset > sizeof(functable_torch$optim$lbfgs) || offset < 0) {
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
        functable_torch$optim$lbfgs[offset],
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
        module_torch$optim$lbfgs,
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
PyObject *modulecode_torch$optim$lbfgs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.optim.lbfgs");

    // Store the module for future use.
    module_torch$optim$lbfgs = module;

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
        PRINT_STRING("torch.optim.lbfgs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.optim.lbfgs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.optim.lbfgs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$optim$lbfgs\n");

    moduledict_torch$optim$lbfgs = MODULE_DICT(module_torch$optim$lbfgs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$optim$lbfgs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$optim$lbfgs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[187]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$optim$lbfgs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$optim$lbfgs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$optim$lbfgs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$optim$lbfgs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$optim$lbfgs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_529ced6414b7a98ae9a0e1d1348973eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_torch$optim$lbfgs$$$class__1_LBFGS_183 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f5b36f717507b3b4b9e17bb3629789d1_2;
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
        UPDATE_STRING_DICT0(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_2);
    }
    frame_529ced6414b7a98ae9a0e1d1348973eb = MAKE_MODULE_FRAME(codeobj_529ced6414b7a98ae9a0e1d1348973eb, module_torch$optim$lbfgs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_529ced6414b7a98ae9a0e1d1348973eb);
    assert(Py_REFCNT(frame_529ced6414b7a98ae9a0e1d1348973eb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[141], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[142], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$optim$lbfgs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_529ced6414b7a98ae9a0e1d1348973eb->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$optim$lbfgs,
                mod_consts[65],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[65]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[144];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$optim$lbfgs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[145];
        tmp_level_value_2 = mod_consts[13];
        frame_529ced6414b7a98ae9a0e1d1348973eb->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$optim$lbfgs,
                mod_consts[146],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[147];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_7 = MAKE_FUNCTION_torch$optim$lbfgs$$$function__1__cubic_interpolate(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[148];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_8 = MAKE_FUNCTION_torch$optim$lbfgs$$$function__2__strong_wolfe(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 183;

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
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[149]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[149]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[58];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_529ced6414b7a98ae9a0e1d1348973eb->m_frame.f_lineno = 183;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[150]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

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
        tmp_mod_expr_left_1 = mod_consts[151];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[152];
        tmp_getattr_default_1 = mod_consts[153];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[152]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

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


            exception_lineno = 183;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 183;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$optim$lbfgs$$$class__1_LBFGS_183 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[154];
        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[155], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        frame_f5b36f717507b3b4b9e17bb3629789d1_2 = MAKE_CLASS_FRAME(codeobj_f5b36f717507b3b4b9e17bb3629789d1, module_torch$optim$lbfgs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f5b36f717507b3b4b9e17bb3629789d1_2);
        assert(Py_REFCNT(frame_f5b36f717507b3b4b9e17bb3629789d1_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[158];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__3___init__(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__4__numel();

        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[84], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__5__gather_flat_grad();

        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__6__add_grad();

        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__7__clone_param();

        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__8__set_param();

        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[88], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$optim$lbfgs$$$function__9__directional_evaluate();

        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[137], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[10]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_f5b36f717507b3b4b9e17bb3629789d1_2->m_frame.f_lineno = 282;
            tmp_called_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[166]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_torch$optim$lbfgs$$$function__10_step();

            frame_f5b36f717507b3b4b9e17bb3629789d1_2->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f5b36f717507b3b4b9e17bb3629789d1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f5b36f717507b3b4b9e17bb3629789d1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f5b36f717507b3b4b9e17bb3629789d1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f5b36f717507b3b4b9e17bb3629789d1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_f5b36f717507b3b4b9e17bb3629789d1_2);

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


                exception_lineno = 183;

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
        tmp_res = PyObject_SetItem(locals_torch$optim$lbfgs$$$class__1_LBFGS_183, mod_consts[169], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[58];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$optim$lbfgs$$$class__1_LBFGS_183;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_529ced6414b7a98ae9a0e1d1348973eb->m_frame.f_lineno = 183;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_torch$optim$lbfgs$$$class__1_LBFGS_183);
        locals_torch$optim$lbfgs$$$class__1_LBFGS_183 = NULL;
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

        Py_DECREF(locals_torch$optim$lbfgs$$$class__1_LBFGS_183);
        locals_torch$optim$lbfgs$$$class__1_LBFGS_183 = NULL;
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
        exception_lineno = 183;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_15);
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

    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
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
        exception_tb = MAKE_TRACEBACK(frame_529ced6414b7a98ae9a0e1d1348973eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_529ced6414b7a98ae9a0e1d1348973eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_529ced6414b7a98ae9a0e1d1348973eb, exception_lineno);
    }



    assertFrameObject(frame_529ced6414b7a98ae9a0e1d1348973eb);

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
    PGO_onModuleExit("torch.optim.lbfgs", false);

    Py_INCREF(module_torch$optim$lbfgs);
    return module_torch$optim$lbfgs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$lbfgs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$optim$lbfgs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
