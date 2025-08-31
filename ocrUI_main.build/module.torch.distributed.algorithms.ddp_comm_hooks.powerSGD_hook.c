/* Generated code for Python module 'torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook'
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

/* The "module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
PyDictObject *moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[213];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[213];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 213; i++) {
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
void checkModuleConstants_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 213; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1c0453ad25eef7802d445cb17a66baf9;
static PyCodeObject *codeobj_ec6b35059586992dae0f11a34df258db;
static PyCodeObject *codeobj_0aeaab2cd74a653ba3e542be49f002a3;
static PyCodeObject *codeobj_23091ab6851043738c5d6730888db4ba;
static PyCodeObject *codeobj_263bceb8452cae21857a9513b30f7498;
static PyCodeObject *codeobj_08e24e09ba50af676ca627a4f7c04b09;
static PyCodeObject *codeobj_2c5fb460f39093a5e0fbd302095252b7;
static PyCodeObject *codeobj_64aff220b16c9aa97856f79db85a4937;
static PyCodeObject *codeobj_ec40dc24abb2952ad237da9ff9653620;
static PyCodeObject *codeobj_41c3c0d6778a3ccb7576c0858f3b9928;
static PyCodeObject *codeobj_c7cc03c59575611b2c40e4d7544c9a76;
static PyCodeObject *codeobj_cb9e5281b05f91cb067af55454d132de;
static PyCodeObject *codeobj_2a42469b7f0ea2bcf856f1dbc69bf971;
static PyCodeObject *codeobj_6f14aed8dada76d120a8ec48096e7728;
static PyCodeObject *codeobj_939dd420a5e6d20968813c74be5d34b4;
static PyCodeObject *codeobj_fa594e5a0366c4bf8e1949cd7ce7edb8;
static PyCodeObject *codeobj_e52ef77e1b844fae06d82c315002bd42;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[188]); CHECK_OBJECT(module_filename_obj);
    codeobj_1c0453ad25eef7802d445cb17a66baf9 = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[190], NULL, 1, 0, 0);
    codeobj_ec6b35059586992dae0f11a34df258db = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[191], mod_consts[191], NULL, NULL, 0, 0, 0);
    codeobj_0aeaab2cd74a653ba3e542be49f002a3 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[192], NULL, 0, 0, 0);
    codeobj_23091ab6851043738c5d6730888db4ba = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[193], NULL, 10, 0, 0);
    codeobj_263bceb8452cae21857a9513b30f7498 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[194], NULL, 2, 0, 0);
    codeobj_08e24e09ba50af676ca627a4f7c04b09 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[195], NULL, 2, 0, 0);
    codeobj_2c5fb460f39093a5e0fbd302095252b7 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[196], NULL, 4, 0, 0);
    codeobj_64aff220b16c9aa97856f79db85a4937 = MAKE_CODE_OBJECT(module_filename_obj, 538, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[197], NULL, 2, 0, 0);
    codeobj_ec40dc24abb2952ad237da9ff9653620 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[198], NULL, 1, 0, 0);
    codeobj_41c3c0d6778a3ccb7576c0858f3b9928 = MAKE_CODE_OBJECT(module_filename_obj, 696, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], mod_consts[199], mod_consts[200], 1, 0, 0);
    codeobj_c7cc03c59575611b2c40e4d7544c9a76 = MAKE_CODE_OBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[110], mod_consts[201], mod_consts[202], 1, 0, 0);
    codeobj_cb9e5281b05f91cb067af55454d132de = MAKE_CODE_OBJECT(module_filename_obj, 656, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[139], mod_consts[203], mod_consts[204], 2, 0, 0);
    codeobj_2a42469b7f0ea2bcf856f1dbc69bf971 = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[112], mod_consts[205], mod_consts[206], 1, 0, 0);
    codeobj_6f14aed8dada76d120a8ec48096e7728 = MAKE_CODE_OBJECT(module_filename_obj, 718, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[112], mod_consts[207], mod_consts[208], 1, 0, 0);
    codeobj_939dd420a5e6d20968813c74be5d34b4 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[209], NULL, 2, 0, 0);
    codeobj_fa594e5a0366c4bf8e1949cd7ce7edb8 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[186], mod_consts[186], mod_consts[210], NULL, 2, 0, 0);
    codeobj_e52ef77e1b844fae06d82c315002bd42 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], mod_consts[211], mod_consts[212], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__13_complex_call_helper_keywords_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__1__orthogonalize(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__2__should_compress();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__3__report_compression_stats();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__4___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__5_maybe_increase_iter();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__6_compression_stats();


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__1_unpack_uncompressed_tensors_and_allreduce_ps(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__2_compute_qs(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__3_decompress(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__1_create_low_rank_tensor(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__2_compute_q(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__3_decompress(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__1__orthogonalize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_matrix = python_pars[0];
    PyObject *par_epsilon = python_pars[1];
    PyObject *var_num_cols = NULL;
    PyObject *var_i = NULL;
    PyObject *var_col = NULL;
    PyObject *var_rest = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_263bceb8452cae21857a9513b30f7498;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_263bceb8452cae21857a9513b30f7498 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_263bceb8452cae21857a9513b30f7498)) {
        Py_XDECREF(cache_frame_263bceb8452cae21857a9513b30f7498);

#if _DEBUG_REFCOUNTS
        if (cache_frame_263bceb8452cae21857a9513b30f7498 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_263bceb8452cae21857a9513b30f7498 = MAKE_FUNCTION_FRAME(codeobj_263bceb8452cae21857a9513b30f7498, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_263bceb8452cae21857a9513b30f7498->m_type_description == NULL);
    frame_263bceb8452cae21857a9513b30f7498 = cache_frame_263bceb8452cae21857a9513b30f7498;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_263bceb8452cae21857a9513b30f7498);
    assert(Py_REFCNT(frame_263bceb8452cae21857a9513b30f7498) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_matrix);
        tmp_expression_value_2 = par_matrix;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_cols == NULL);
        var_num_cols = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(var_num_cols);
        tmp_xrange_low_1 = var_num_cols;
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
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
                exception_lineno = 20;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_matrix);
        tmp_expression_value_3 = par_matrix;
        tmp_tuple_element_1 = mod_consts[2];
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_i);
            tmp_start_value_1 = var_i;
            CHECK_OBJECT(var_i);
            tmp_add_expr_left_1 = var_i;
            tmp_add_expr_right_1 = mod_consts[1];
            tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_stop_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
            Py_DECREF(tmp_stop_value_1);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_col;
            var_col = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_epsilon == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_epsilon;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_col);
        tmp_itruediv_expr_left_1 = var_col;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_col);
        tmp_args_element_value_1 = var_col;
        frame_263bceb8452cae21857a9513b30f7498->m_frame.f_lineno = 29;
        tmp_itruediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_itruediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        Py_DECREF(tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_6 = tmp_itruediv_expr_left_1;
        var_col = tmp_assign_source_6;

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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_263bceb8452cae21857a9513b30f7498, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_263bceb8452cae21857a9513b30f7498, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ZeroDivisionError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_263bceb8452cae21857a9513b30f7498->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_col);
        tmp_called_instance_3 = var_col;
        frame_263bceb8452cae21857a9513b30f7498->m_frame.f_lineno = 36;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 28;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_263bceb8452cae21857a9513b30f7498->m_frame) frame_263bceb8452cae21857a9513b30f7498->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_4;
    branch_end_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_itruediv_expr_left_2;
        PyObject *tmp_itruediv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_col);
        tmp_itruediv_expr_left_2 = var_col;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_col);
        tmp_args_element_value_2 = var_col;
        frame_263bceb8452cae21857a9513b30f7498->m_frame.f_lineno = 38;
        tmp_add_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[6], tmp_args_element_value_2);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_epsilon == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_2 = par_epsilon;
        tmp_itruediv_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_itruediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_2, tmp_itruediv_expr_right_2);
        Py_DECREF(tmp_itruediv_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_itruediv_expr_left_2;
        var_col = tmp_assign_source_7;

    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_3 = var_i;
        tmp_add_expr_right_3 = mod_consts[1];
        tmp_cmp_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_cols);
        tmp_cmp_expr_right_3 = var_num_cols;
        tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_matrix);
        tmp_expression_value_4 = par_matrix;
        tmp_tuple_element_2 = mod_consts[2];
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_2;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_i);
            tmp_add_expr_left_4 = var_i;
            tmp_add_expr_right_4 = mod_consts[1];
            tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
            if (tmp_start_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_stop_value_2 = Py_None;
            tmp_tuple_element_2 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
            Py_DECREF(tmp_start_value_2);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rest;
            var_rest = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_rest);
        tmp_isub_expr_left_1 = var_rest;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (var_col == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_2 = var_col;
        CHECK_OBJECT(var_rest);
        tmp_mult_expr_right_2 = var_rest;
        tmp_tuple_element_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[14]);
        frame_263bceb8452cae21857a9513b30f7498->m_frame.f_lineno = 42;
        tmp_mult_expr_left_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (var_col == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_1 = var_col;
        tmp_isub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_isub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_isub_expr_left_1;
        var_rest = tmp_assign_source_9;

    }
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 20;
        type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_263bceb8452cae21857a9513b30f7498, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_263bceb8452cae21857a9513b30f7498->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_263bceb8452cae21857a9513b30f7498, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_263bceb8452cae21857a9513b30f7498,
        type_description_1,
        par_matrix,
        par_epsilon,
        var_num_cols,
        var_i,
        var_col,
        var_rest
    );


    // Release cached frame if used for exception.
    if (frame_263bceb8452cae21857a9513b30f7498 == cache_frame_263bceb8452cae21857a9513b30f7498) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_263bceb8452cae21857a9513b30f7498);
        cache_frame_263bceb8452cae21857a9513b30f7498 = NULL;
    }

    assertFrameObject(frame_263bceb8452cae21857a9513b30f7498);

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
    CHECK_OBJECT(var_num_cols);
    Py_DECREF(var_num_cols);
    var_num_cols = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
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

    Py_XDECREF(var_num_cols);
    var_num_cols = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
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
    CHECK_OBJECT(par_matrix);
    Py_DECREF(par_matrix);
    CHECK_OBJECT(par_epsilon);
    Py_DECREF(par_epsilon);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_matrix);
    Py_DECREF(par_matrix);
    CHECK_OBJECT(par_epsilon);
    Py_DECREF(par_epsilon);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__2__should_compress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num_rows = python_pars[0];
    PyObject *par_num_cols = python_pars[1];
    PyObject *par_matrix_approximation_rank = python_pars[2];
    PyObject *par_min_compression_rate = python_pars[3];
    PyObject *var_uncompressed_size = NULL;
    PyObject *var_compressed_size = NULL;
    struct Nuitka_FrameObject *frame_2c5fb460f39093a5e0fbd302095252b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2c5fb460f39093a5e0fbd302095252b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2c5fb460f39093a5e0fbd302095252b7)) {
        Py_XDECREF(cache_frame_2c5fb460f39093a5e0fbd302095252b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c5fb460f39093a5e0fbd302095252b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c5fb460f39093a5e0fbd302095252b7 = MAKE_FUNCTION_FRAME(codeobj_2c5fb460f39093a5e0fbd302095252b7, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c5fb460f39093a5e0fbd302095252b7->m_type_description == NULL);
    frame_2c5fb460f39093a5e0fbd302095252b7 = cache_frame_2c5fb460f39093a5e0fbd302095252b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c5fb460f39093a5e0fbd302095252b7);
    assert(Py_REFCNT(frame_2c5fb460f39093a5e0fbd302095252b7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_num_rows);
        tmp_mult_expr_left_1 = par_num_rows;
        CHECK_OBJECT(par_num_cols);
        tmp_mult_expr_right_1 = par_num_cols;
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uncompressed_size == NULL);
        var_uncompressed_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_num_rows);
        tmp_add_expr_left_1 = par_num_rows;
        CHECK_OBJECT(par_num_cols);
        tmp_add_expr_right_1 = par_num_cols;
        tmp_mult_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_matrix_approximation_rank);
        tmp_mult_expr_right_2 = par_matrix_approximation_rank;
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_compressed_size == NULL);
        var_compressed_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_compressed_size);
        tmp_mult_expr_left_3 = var_compressed_size;
        CHECK_OBJECT(par_min_compression_rate);
        tmp_mult_expr_right_3 = par_min_compression_rate;
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uncompressed_size);
        tmp_cmp_expr_right_1 = var_uncompressed_size;
        tmp_tuple_element_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_uncompressed_size);
        tmp_tuple_element_1 = var_uncompressed_size;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_compressed_size);
        tmp_tuple_element_1 = var_compressed_size;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_2c5fb460f39093a5e0fbd302095252b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c5fb460f39093a5e0fbd302095252b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c5fb460f39093a5e0fbd302095252b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c5fb460f39093a5e0fbd302095252b7,
        type_description_1,
        par_num_rows,
        par_num_cols,
        par_matrix_approximation_rank,
        par_min_compression_rate,
        var_uncompressed_size,
        var_compressed_size
    );


    // Release cached frame if used for exception.
    if (frame_2c5fb460f39093a5e0fbd302095252b7 == cache_frame_2c5fb460f39093a5e0fbd302095252b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c5fb460f39093a5e0fbd302095252b7);
        cache_frame_2c5fb460f39093a5e0fbd302095252b7 = NULL;
    }

    assertFrameObject(frame_2c5fb460f39093a5e0fbd302095252b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_uncompressed_size);
    Py_DECREF(var_uncompressed_size);
    var_uncompressed_size = NULL;
    CHECK_OBJECT(var_compressed_size);
    Py_DECREF(var_compressed_size);
    var_compressed_size = NULL;
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

    Py_XDECREF(var_uncompressed_size);
    var_uncompressed_size = NULL;
    Py_XDECREF(var_compressed_size);
    var_compressed_size = NULL;
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
    CHECK_OBJECT(par_num_rows);
    Py_DECREF(par_num_rows);
    CHECK_OBJECT(par_num_cols);
    Py_DECREF(par_num_cols);
    CHECK_OBJECT(par_matrix_approximation_rank);
    Py_DECREF(par_matrix_approximation_rank);
    CHECK_OBJECT(par_min_compression_rate);
    Py_DECREF(par_min_compression_rate);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_num_rows);
    Py_DECREF(par_num_rows);
    CHECK_OBJECT(par_num_cols);
    Py_DECREF(par_num_cols);
    CHECK_OBJECT(par_matrix_approximation_rank);
    Py_DECREF(par_matrix_approximation_rank);
    CHECK_OBJECT(par_min_compression_rate);
    Py_DECREF(par_min_compression_rate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__3__report_compression_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bucket = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *var_stats = NULL;
    struct Nuitka_FrameObject *frame_08e24e09ba50af676ca627a4f7c04b09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_08e24e09ba50af676ca627a4f7c04b09 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_08e24e09ba50af676ca627a4f7c04b09)) {
        Py_XDECREF(cache_frame_08e24e09ba50af676ca627a4f7c04b09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08e24e09ba50af676ca627a4f7c04b09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08e24e09ba50af676ca627a4f7c04b09 = MAKE_FUNCTION_FRAME(codeobj_08e24e09ba50af676ca627a4f7c04b09, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08e24e09ba50af676ca627a4f7c04b09->m_type_description == NULL);
    frame_08e24e09ba50af676ca627a4f7c04b09 = cache_frame_08e24e09ba50af676ca627a4f7c04b09;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08e24e09ba50af676ca627a4f7c04b09);
    assert(Py_REFCNT(frame_08e24e09ba50af676ca627a4f7c04b09) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_bucket);
        tmp_called_instance_1 = par_bucket;
        frame_08e24e09ba50af676ca627a4f7c04b09->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_state);
        tmp_expression_value_1 = par_state;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_2 = par_state;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_state;
        frame_08e24e09ba50af676ca627a4f7c04b09->m_frame.f_lineno = 80;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_stats == NULL);
        var_stats = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[23];
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_state;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_stats);
        tmp_expression_value_5 = var_stats;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_kw_call_arg_value_2_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_stats);
        tmp_expression_value_6 = var_stats;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_kw_call_arg_value_3_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 2);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_stats);
        tmp_expression_value_7 = var_stats;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_kw_call_arg_value_4_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_3, 0);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_08e24e09ba50af676ca627a4f7c04b09->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS5(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_08e24e09ba50af676ca627a4f7c04b09->m_frame.f_lineno = 81;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_1;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_state;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_state;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[25]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_08e24e09ba50af676ca627a4f7c04b09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08e24e09ba50af676ca627a4f7c04b09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08e24e09ba50af676ca627a4f7c04b09, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08e24e09ba50af676ca627a4f7c04b09,
        type_description_1,
        par_bucket,
        par_state,
        var_stats
    );


    // Release cached frame if used for exception.
    if (frame_08e24e09ba50af676ca627a4f7c04b09 == cache_frame_08e24e09ba50af676ca627a4f7c04b09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08e24e09ba50af676ca627a4f7c04b09);
        cache_frame_08e24e09ba50af676ca627a4f7c04b09 = NULL;
    }

    assertFrameObject(frame_08e24e09ba50af676ca627a4f7c04b09);

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
    Py_XDECREF(var_stats);
    var_stats = NULL;
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

    Py_XDECREF(var_stats);
    var_stats = NULL;
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
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_process_group = python_pars[1];
    PyObject *par_matrix_approximation_rank = python_pars[2];
    PyObject *par_start_powerSGD_iter = python_pars[3];
    PyObject *par_min_compression_rate = python_pars[4];
    PyObject *par_use_error_feedback = python_pars[5];
    PyObject *par_warm_start = python_pars[6];
    PyObject *par_orthogonalization_epsilon = python_pars[7];
    PyObject *par_random_seed = python_pars[8];
    PyObject *par_compression_stats_logging_frequency = python_pars[9];
    struct Nuitka_FrameObject *frame_23091ab6851043738c5d6730888db4ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_23091ab6851043738c5d6730888db4ba = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23091ab6851043738c5d6730888db4ba)) {
        Py_XDECREF(cache_frame_23091ab6851043738c5d6730888db4ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23091ab6851043738c5d6730888db4ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23091ab6851043738c5d6730888db4ba = MAKE_FUNCTION_FRAME(codeobj_23091ab6851043738c5d6730888db4ba, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23091ab6851043738c5d6730888db4ba->m_type_description == NULL);
    frame_23091ab6851043738c5d6730888db4ba = cache_frame_23091ab6851043738c5d6730888db4ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23091ab6851043738c5d6730888db4ba);
    assert(Py_REFCNT(frame_23091ab6851043738c5d6730888db4ba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_kw_call_arg_value_8_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[27];
        CHECK_OBJECT(par_matrix_approximation_rank);
        tmp_kw_call_arg_value_1_1 = par_matrix_approximation_rank;
        CHECK_OBJECT(par_start_powerSGD_iter);
        tmp_kw_call_arg_value_2_1 = par_start_powerSGD_iter;
        CHECK_OBJECT(par_min_compression_rate);
        tmp_kw_call_arg_value_3_1 = par_min_compression_rate;
        CHECK_OBJECT(par_orthogonalization_epsilon);
        tmp_kw_call_arg_value_4_1 = par_orthogonalization_epsilon;
        CHECK_OBJECT(par_use_error_feedback);
        tmp_kw_call_arg_value_5_1 = par_use_error_feedback;
        CHECK_OBJECT(par_warm_start);
        tmp_kw_call_arg_value_6_1 = par_warm_start;
        CHECK_OBJECT(par_random_seed);
        tmp_kw_call_arg_value_7_1 = par_random_seed;
        CHECK_OBJECT(par_compression_stats_logging_frequency);
        tmp_kw_call_arg_value_8_1 = par_compression_stats_logging_frequency;
        frame_23091ab6851043738c5d6730888db4ba->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS9(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 155;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_23091ab6851043738c5d6730888db4ba->m_frame.f_lineno = 154;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_process_group);
        tmp_assattr_value_1 = par_process_group;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_matrix_approximation_rank);
        tmp_assattr_value_2 = par_matrix_approximation_rank;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_use_error_feedback);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_use_error_feedback);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_warm_start);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_warm_start);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_start_powerSGD_iter);
        tmp_cmp_expr_left_1 = par_start_powerSGD_iter;
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[30];
        frame_23091ab6851043738c5d6730888db4ba->m_frame.f_lineno = 183;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 183;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_start_powerSGD_iter);
        tmp_assattr_value_3 = par_start_powerSGD_iter;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[31], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_min_compression_rate);
        tmp_assattr_value_4 = par_min_compression_rate;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[32], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_use_error_feedback);
        tmp_assattr_value_5 = par_use_error_feedback;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[33], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_warm_start);
        tmp_assattr_value_6 = par_warm_start;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[34], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_orthogonalization_epsilon);
        tmp_assattr_value_7 = par_orthogonalization_epsilon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[35], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_random_seed);
        tmp_args_element_value_2 = par_random_seed;
        frame_23091ab6851043738c5d6730888db4ba->m_frame.f_lineno = 211;
        tmp_assattr_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[38], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[39], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[40], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[41], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[42], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = mod_consts[4];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[18], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = mod_consts[4];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[43], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = mod_consts[4];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[44], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_assattr_target_15;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[45]);
        assert(tmp_called_value_2 != NULL);
        tmp_args_element_value_3 = mod_consts[1];
        CHECK_OBJECT(par_compression_stats_logging_frequency);
        tmp_args_element_value_4 = par_compression_stats_logging_frequency;
        frame_23091ab6851043738c5d6730888db4ba->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[25], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = mod_consts[4];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[19], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23091ab6851043738c5d6730888db4ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23091ab6851043738c5d6730888db4ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23091ab6851043738c5d6730888db4ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23091ab6851043738c5d6730888db4ba,
        type_description_1,
        par_self,
        par_process_group,
        par_matrix_approximation_rank,
        par_start_powerSGD_iter,
        par_min_compression_rate,
        par_use_error_feedback,
        par_warm_start,
        par_orthogonalization_epsilon,
        par_random_seed,
        par_compression_stats_logging_frequency
    );


    // Release cached frame if used for exception.
    if (frame_23091ab6851043738c5d6730888db4ba == cache_frame_23091ab6851043738c5d6730888db4ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23091ab6851043738c5d6730888db4ba);
        cache_frame_23091ab6851043738c5d6730888db4ba = NULL;
    }

    assertFrameObject(frame_23091ab6851043738c5d6730888db4ba);

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
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_matrix_approximation_rank);
    Py_DECREF(par_matrix_approximation_rank);
    CHECK_OBJECT(par_start_powerSGD_iter);
    Py_DECREF(par_start_powerSGD_iter);
    CHECK_OBJECT(par_min_compression_rate);
    Py_DECREF(par_min_compression_rate);
    CHECK_OBJECT(par_use_error_feedback);
    Py_DECREF(par_use_error_feedback);
    CHECK_OBJECT(par_warm_start);
    Py_DECREF(par_warm_start);
    CHECK_OBJECT(par_orthogonalization_epsilon);
    Py_DECREF(par_orthogonalization_epsilon);
    CHECK_OBJECT(par_random_seed);
    Py_DECREF(par_random_seed);
    CHECK_OBJECT(par_compression_stats_logging_frequency);
    Py_DECREF(par_compression_stats_logging_frequency);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_process_group);
    Py_DECREF(par_process_group);
    CHECK_OBJECT(par_matrix_approximation_rank);
    Py_DECREF(par_matrix_approximation_rank);
    CHECK_OBJECT(par_start_powerSGD_iter);
    Py_DECREF(par_start_powerSGD_iter);
    CHECK_OBJECT(par_min_compression_rate);
    Py_DECREF(par_min_compression_rate);
    CHECK_OBJECT(par_use_error_feedback);
    Py_DECREF(par_use_error_feedback);
    CHECK_OBJECT(par_warm_start);
    Py_DECREF(par_warm_start);
    CHECK_OBJECT(par_orthogonalization_epsilon);
    Py_DECREF(par_orthogonalization_epsilon);
    CHECK_OBJECT(par_random_seed);
    Py_DECREF(par_random_seed);
    CHECK_OBJECT(par_compression_stats_logging_frequency);
    Py_DECREF(par_compression_stats_logging_frequency);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__5_maybe_increase_iter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bucket = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_939dd420a5e6d20968813c74be5d34b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_939dd420a5e6d20968813c74be5d34b4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_939dd420a5e6d20968813c74be5d34b4)) {
        Py_XDECREF(cache_frame_939dd420a5e6d20968813c74be5d34b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_939dd420a5e6d20968813c74be5d34b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_939dd420a5e6d20968813c74be5d34b4 = MAKE_FUNCTION_FRAME(codeobj_939dd420a5e6d20968813c74be5d34b4, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_939dd420a5e6d20968813c74be5d34b4->m_type_description == NULL);
    frame_939dd420a5e6d20968813c74be5d34b4 = cache_frame_939dd420a5e6d20968813c74be5d34b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_939dd420a5e6d20968813c74be5d34b4);
    assert(Py_REFCNT(frame_939dd420a5e6d20968813c74be5d34b4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_bucket);
        tmp_called_instance_1 = par_bucket;
        frame_939dd420a5e6d20968813c74be5d34b4->m_frame.f_lineno = 232;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 232;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[1];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
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
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[47];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_939dd420a5e6d20968813c74be5d34b4->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_939dd420a5e6d20968813c74be5d34b4->m_frame.f_lineno = 236;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_939dd420a5e6d20968813c74be5d34b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_939dd420a5e6d20968813c74be5d34b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_939dd420a5e6d20968813c74be5d34b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_939dd420a5e6d20968813c74be5d34b4,
        type_description_1,
        par_self,
        par_bucket
    );


    // Release cached frame if used for exception.
    if (frame_939dd420a5e6d20968813c74be5d34b4 == cache_frame_939dd420a5e6d20968813c74be5d34b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_939dd420a5e6d20968813c74be5d34b4);
        cache_frame_939dd420a5e6d20968813c74be5d34b4 = NULL;
    }

    assertFrameObject(frame_939dd420a5e6d20968813c74be5d34b4);

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
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__6_compression_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_compress_rate = NULL;
    struct Nuitka_FrameObject *frame_ec40dc24abb2952ad237da9ff9653620;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ec40dc24abb2952ad237da9ff9653620 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ec40dc24abb2952ad237da9ff9653620)) {
        Py_XDECREF(cache_frame_ec40dc24abb2952ad237da9ff9653620);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec40dc24abb2952ad237da9ff9653620 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec40dc24abb2952ad237da9ff9653620 = MAKE_FUNCTION_FRAME(codeobj_ec40dc24abb2952ad237da9ff9653620, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec40dc24abb2952ad237da9ff9653620->m_type_description == NULL);
    frame_ec40dc24abb2952ad237da9ff9653620 = cache_frame_ec40dc24abb2952ad237da9ff9653620;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec40dc24abb2952ad237da9ff9653620);
    assert(Py_REFCNT(frame_ec40dc24abb2952ad237da9ff9653620) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 251;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[4];
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        assert(var_compress_rate == NULL);
        var_compress_rate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_compress_rate);
        tmp_tuple_element_1 = var_compress_rate;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[43]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[44]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_ec40dc24abb2952ad237da9ff9653620, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec40dc24abb2952ad237da9ff9653620->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec40dc24abb2952ad237da9ff9653620, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec40dc24abb2952ad237da9ff9653620,
        type_description_1,
        par_self,
        var_compress_rate
    );


    // Release cached frame if used for exception.
    if (frame_ec40dc24abb2952ad237da9ff9653620 == cache_frame_ec40dc24abb2952ad237da9ff9653620) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec40dc24abb2952ad237da9ff9653620);
        cache_frame_ec40dc24abb2952ad237da9ff9653620 = NULL;
    }

    assertFrameObject(frame_ec40dc24abb2952ad237da9ff9653620);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_compress_rate);
    Py_DECREF(var_compress_rate);
    var_compress_rate = NULL;
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

    Py_XDECREF(var_compress_rate);
    var_compress_rate = NULL;
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


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_state = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_process_group = NULL;
    struct Nuitka_CellObject *var_group_to_use = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_world_size = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_input_tensor = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_device = Nuitka_Cell_Empty();
    PyObject *var_dtype = NULL;
    struct Nuitka_CellObject *var_bucket_index = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_input_tensor_cp = Nuitka_Cell_Empty();
    PyObject *var_total_length = NULL;
    PyObject *var_tensors = NULL;
    struct Nuitka_CellObject *var_tensors_to_compress = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_uncompressed_tensors = Nuitka_Cell_Empty();
    PyObject *var_total_Ps_size = NULL;
    PyObject *var_total_Qs_size = NULL;
    PyObject *var_tensor = NULL;
    PyObject *var_matrix = NULL;
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_matrix_approximation_rank = NULL;
    PyObject *var_compress_test = NULL;
    PyObject *var_uncompressed_tensors_memory = NULL;
    nuitka_bool var_need_randomize_qs = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_CellObject *var_ps = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_qs = Nuitka_Cell_Empty();
    PyObject *var_p_idx = NULL;
    PyObject *var_q_idx = NULL;
    PyObject *var_q = NULL;
    PyObject *var_p = NULL;
    PyObject *var_allreduce_contiguous_uncompressed_tensors_fut = NULL;
    PyObject *var_unpack_uncompressed_tensors_and_allreduce_ps = NULL;
    PyObject *var_compute_qs = NULL;
    PyObject *var_decompress = NULL;
    PyObject *outline_0_var_tensor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    PyObject *tmp_inplace_assign_3__value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_fa594e5a0366c4bf8e1949cd7ce7edb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
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
    struct Nuitka_FrameObject *frame_1c0453ad25eef7802d445cb17a66baf9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_1c0453ad25eef7802d445cb17a66baf9_2 = NULL;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    static struct Nuitka_FrameObject *cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8)) {
        Py_XDECREF(cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8 = MAKE_FUNCTION_FRAME(codeobj_fa594e5a0366c4bf8e1949cd7ce7edb8, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_type_description == NULL);
    frame_fa594e5a0366c4bf8e1949cd7ce7edb8 = cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa594e5a0366c4bf8e1949cd7ce7edb8);
    assert(Py_REFCNT(frame_fa594e5a0366c4bf8e1949cd7ce7edb8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_process_group == NULL);
        var_process_group = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_process_group);
        tmp_cmp_expr_left_1 = var_process_group;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_process_group);
        tmp_assign_source_2 = var_process_group;
        Py_INCREF(tmp_assign_source_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[50]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[51]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(Nuitka_Cell_GET(var_group_to_use) == NULL);
        PyCell_SET(var_group_to_use, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_group_to_use));
        tmp_called_instance_1 = Nuitka_Cell_GET(var_group_to_use);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 322;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[52]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_world_size) == NULL);
        PyCell_SET(var_world_size, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_called_instance_2 = Nuitka_Cell_GET(par_bucket);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 325;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[53]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_input_tensor) == NULL);
        PyCell_SET(var_input_tensor, tmp_assign_source_4);

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 328;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_called_instance_3 = Nuitka_Cell_GET(par_state);
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_bucket);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 329;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[54], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_group_to_use));
        tmp_args_element_value_2 = Nuitka_Cell_GET(var_group_to_use);
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_args_element_value_3 = Nuitka_Cell_GET(var_input_tensor);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_6 = Nuitka_Cell_GET(var_input_tensor);
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[57]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_device) == NULL);
        PyCell_SET(var_device, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_7 = Nuitka_Cell_GET(var_input_tensor);
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[58]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_bucket);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[59]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 337;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_bucket_index) == NULL);
        PyCell_SET(var_bucket_index, tmp_assign_source_7);

    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(Nuitka_Cell_GET(var_input_tensor_cp) == NULL);
        Py_INCREF(tmp_assign_source_8);
        PyCell_SET(var_input_tensor_cp, tmp_assign_source_8);

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_10 = Nuitka_Cell_GET(var_input_tensor);
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[0]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_length == NULL);
        var_total_length = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_11 = Nuitka_Cell_GET(par_state);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 340;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(var_bucket_index);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[40]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_13 = Nuitka_Cell_GET(var_input_tensor);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[60]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_15 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[40]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 342;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_subscript_value_2 = Nuitka_Cell_GET(var_bucket_index);
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 342;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 342;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[61];
        CHECK_OBJECT(var_total_length);
        tmp_kw_call_arg_value_1_1 = var_total_length;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 345;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 344;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[62]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_total_length);
        tmp_kw_call_arg_value_0_2 = var_total_length;
        CHECK_OBJECT(Nuitka_Cell_GET(var_device));
        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(var_device);
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_1_1 = var_dtype;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 349;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_18 = Nuitka_Cell_GET(par_state);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[40]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 349;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_ass_subscript_1 = Nuitka_Cell_GET(var_bucket_index);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_args_element_value_6 = Nuitka_Cell_GET(var_input_tensor);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 356;
        tmp_called_instance_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[64], tmp_args_element_value_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 356;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[65]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_input_tensor_cp);
            PyCell_SET(var_input_tensor_cp, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_called_instance_7 = Nuitka_Cell_GET(par_bucket);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 359;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[66]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensors == NULL);
        var_tensors = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[67], "ll");
        tmp_assign_source_12 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_12 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 363;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 363;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                    exception_lineno = 363;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 363;
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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        assert(Nuitka_Cell_GET(var_tensors_to_compress) == NULL);
        Py_INCREF(tmp_assign_source_15);
        PyCell_SET(var_tensors_to_compress, tmp_assign_source_15);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        assert(Nuitka_Cell_GET(var_uncompressed_tensors) == NULL);
        Py_INCREF(tmp_assign_source_16);
        PyCell_SET(var_uncompressed_tensors, tmp_assign_source_16);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[4];
        assert(var_total_Ps_size == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_total_Ps_size = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[4];
        assert(var_total_Qs_size == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_total_Qs_size = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_tensors);
        tmp_iter_arg_2 = var_tensors;
        tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                exception_lineno = 366;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_21 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_21;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_tensor);
        tmp_expression_value_19 = var_tensor;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[69]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_tensor);
        tmp_expression_value_21 = var_tensor;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[0]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 367;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_3 = mod_consts[4];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 367;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_8 = mod_consts[70];
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_matrix;
            var_matrix = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_22 = var_matrix;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[0]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 368;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 368;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_25;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                    exception_lineno = 368;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 368;
            goto try_except_handler_6;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_26;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_27;
            Py_INCREF(var_m);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_23;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[71]);
        assert(tmp_called_value_6 != NULL);
        CHECK_OBJECT(var_n);
        tmp_args_element_value_9 = var_n;
        CHECK_OBJECT(var_m);
        tmp_args_element_value_10 = var_m;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 369;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_23 = Nuitka_Cell_GET(par_state);
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[29]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_matrix_approximation_rank;
            var_matrix_approximation_rank = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_24;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_n);
        tmp_args_element_value_12 = var_n;
        CHECK_OBJECT(var_m);
        tmp_args_element_value_13 = var_m;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_args_element_value_14 = var_matrix_approximation_rank;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 371;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(par_state);
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[32]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_compress_test;
            var_compress_test = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_25;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_25 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[43]);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_compress_test);
        tmp_expression_value_26 = var_compress_test;
        tmp_subscript_value_4 = mod_consts[1];
        tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_4, 1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_7;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_31 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_7;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(par_state);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_compress_test);
        tmp_expression_value_27 = var_compress_test;
        tmp_subscript_value_5 = mod_consts[4];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_5, 0);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 374;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_16;
        if (Nuitka_Cell_GET(var_tensors_to_compress) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_28 = Nuitka_Cell_GET(var_tensors_to_compress);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[74]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_matrix);
        tmp_args_element_value_16 = var_matrix;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 375;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        if (var_total_Ps_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_2 = var_total_Ps_size;
        CHECK_OBJECT(var_n);
        tmp_mult_expr_left_1 = var_n;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_mult_expr_right_1 = var_matrix_approximation_rank;
        tmp_iadd_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_32 = tmp_iadd_expr_left_2;
        var_total_Ps_size = tmp_assign_source_32;

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        if (var_total_Qs_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 377;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_3 = var_total_Qs_size;
        CHECK_OBJECT(var_m);
        tmp_mult_expr_left_2 = var_m;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_mult_expr_right_2 = var_matrix_approximation_rank;
        tmp_iadd_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_33 = tmp_iadd_expr_left_3;
        var_total_Qs_size = tmp_assign_source_33;

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_29;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_29 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[44]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_2__value;
            tmp_inplace_assign_2__value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_4 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_compress_test);
        tmp_expression_value_30 = var_compress_test;
        tmp_subscript_value_6 = mod_consts[24];
        tmp_iadd_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_30, tmp_subscript_value_6, 2);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_8;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_35 = tmp_iadd_expr_left_4;
        tmp_inplace_assign_2__value = tmp_assign_source_35;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_2 = tmp_inplace_assign_2__value;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_8;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(par_state);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_17;
        if (Nuitka_Cell_GET(var_uncompressed_tensors) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_31 = Nuitka_Cell_GET(var_uncompressed_tensors);
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[74]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_tensor);
        tmp_args_element_value_17 = var_tensor;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 380;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_32;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_32 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[44]);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_3__value;
            tmp_inplace_assign_3__value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(tmp_inplace_assign_3__value);
        tmp_iadd_expr_left_5 = tmp_inplace_assign_3__value;
        CHECK_OBJECT(var_compress_test);
        tmp_expression_value_33 = var_compress_test;
        tmp_subscript_value_7 = mod_consts[1];
        tmp_iadd_expr_right_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_33, tmp_subscript_value_7, 1);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_9;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_37 = tmp_iadd_expr_left_5;
        tmp_inplace_assign_3__value = tmp_assign_source_37;

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_inplace_assign_3__value);
        tmp_assattr_value_3 = tmp_inplace_assign_3__value;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_9;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(par_state);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[44], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_3__value);
    Py_DECREF(tmp_inplace_assign_3__value);
    tmp_inplace_assign_3__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_inplace_assign_3__value);
    Py_DECREF(tmp_inplace_assign_3__value);
    tmp_inplace_assign_3__value = NULL;
    branch_end_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 366;
        type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_18 = Nuitka_Cell_GET(par_bucket);
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_19 = Nuitka_Cell_GET(par_state);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_38;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_call_posargs_values_1;
        if (Nuitka_Cell_GET(var_uncompressed_tensors) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(var_uncompressed_tensors));
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[79]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_iter_arg_4;
            if (Nuitka_Cell_GET(var_uncompressed_tensors) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[77]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 388;
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                goto try_except_handler_10;
            }

            tmp_iter_arg_4 = Nuitka_Cell_GET(var_uncompressed_tensors);
            tmp_assign_source_39 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_39;
        }
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_40;
        }
        if (isFrameUnusable(cache_frame_1c0453ad25eef7802d445cb17a66baf9_2)) {
            Py_XDECREF(cache_frame_1c0453ad25eef7802d445cb17a66baf9_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1c0453ad25eef7802d445cb17a66baf9_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1c0453ad25eef7802d445cb17a66baf9_2 = MAKE_FUNCTION_FRAME(codeobj_1c0453ad25eef7802d445cb17a66baf9, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_1c0453ad25eef7802d445cb17a66baf9_2->m_type_description == NULL);
        frame_1c0453ad25eef7802d445cb17a66baf9_2 = cache_frame_1c0453ad25eef7802d445cb17a66baf9_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1c0453ad25eef7802d445cb17a66baf9_2);
        assert(Py_REFCNT(frame_1c0453ad25eef7802d445cb17a66baf9_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_41 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 388;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_41;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_42 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_tensor;
                outline_0_var_tensor = tmp_assign_source_42;
                Py_INCREF(outline_0_var_tensor);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_8;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_tensor);
            tmp_called_instance_8 = outline_0_var_tensor;
            frame_1c0453ad25eef7802d445cb17a66baf9_2->m_frame.f_lineno = 388;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_8,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[80], 0)
            );

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_20 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_20);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
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
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1c0453ad25eef7802d445cb17a66baf9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1c0453ad25eef7802d445cb17a66baf9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1c0453ad25eef7802d445cb17a66baf9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1c0453ad25eef7802d445cb17a66baf9_2,
            type_description_2,
            outline_0_var_tensor
        );


        // Release cached frame if used for exception.
        if (frame_1c0453ad25eef7802d445cb17a66baf9_2 == cache_frame_1c0453ad25eef7802d445cb17a66baf9_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1c0453ad25eef7802d445cb17a66baf9_2);
            cache_frame_1c0453ad25eef7802d445cb17a66baf9_2 = NULL;
        }

        assertFrameObject(frame_1c0453ad25eef7802d445cb17a66baf9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
        goto try_except_handler_10;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_0_var_tensor);
        outline_0_var_tensor = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_tensor);
        outline_0_var_tensor = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 388;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 388;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[81]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_device));
        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(var_device);
        if (var_dtype == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_1_1 = var_dtype;
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[82], "l");
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 390;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_12, tmp_call_posargs_values_1, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_call_posargs_values_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        assert(var_uncompressed_tensors_memory == NULL);
        var_uncompressed_tensors_memory = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_assign_source_43;
        tmp_assign_source_43 = NUITKA_BOOL_FALSE;
        var_need_randomize_qs = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_7;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_37;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = Nuitka_Cell_GET(par_state);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[34]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(var_bucket_index);
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[41]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_7 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_44;
        tmp_assign_source_44 = NUITKA_BOOL_TRUE;
        var_need_randomize_qs = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_4;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = Nuitka_Cell_GET(par_state);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[34]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 402;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[22]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[83];
        if (var_total_Ps_size == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = var_total_Ps_size;
        if (var_total_Qs_size == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = var_total_Qs_size;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 404;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 403;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_6:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[84]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        if (var_total_Ps_size == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_4 = var_total_Ps_size;
        CHECK_OBJECT(Nuitka_Cell_GET(var_device));
        tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(var_device);
        if (var_dtype == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_2 = var_dtype;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 408;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_14, args, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_state) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = Nuitka_Cell_GET(par_state);
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[41]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 408;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_ass_subscript_2 = Nuitka_Cell_GET(var_bucket_index);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_ass_subscript_3;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[84]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        if (var_total_Qs_size == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_5 = var_total_Qs_size;
        CHECK_OBJECT(Nuitka_Cell_GET(var_device));
        tmp_kw_call_dict_value_0_3 = Nuitka_Cell_GET(var_device);
        if (var_dtype == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_3 = var_dtype;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 411;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_15, args, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_state) == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = Nuitka_Cell_GET(par_state);
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[42]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 411;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_ass_subscript_3 = Nuitka_Cell_GET(var_bucket_index);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(var_ps) == NULL);
        PyCell_SET(var_ps, tmp_assign_source_45);

    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(var_qs) == NULL);
        PyCell_SET(var_qs, tmp_assign_source_46);

    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[4];
        assert(var_p_idx == NULL);
        Py_INCREF(tmp_assign_source_47);
        var_p_idx = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[4];
        assert(var_q_idx == NULL);
        Py_INCREF(tmp_assign_source_48);
        var_q_idx = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_5;
        if (Nuitka_Cell_GET(var_tensors_to_compress) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_5 = Nuitka_Cell_GET(var_tensors_to_compress);
        tmp_assign_source_49 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_49;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_50 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_50 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                exception_lineno = 420;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_51 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_51;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(var_tensor);
        tmp_expression_value_44 = var_tensor;
        tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[0]);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_52 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_53 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 421;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_54 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 421;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_54;
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

                    type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                    exception_lineno = 421;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 421;
            goto try_except_handler_14;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_9:;
    goto try_end_10;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_12;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_55 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_55;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_56 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_56;
            Py_INCREF(var_m);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_45;
        tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[71]);
        assert(tmp_called_value_16 != NULL);
        CHECK_OBJECT(var_n);
        tmp_args_element_value_22 = var_n;
        CHECK_OBJECT(var_m);
        tmp_args_element_value_23 = var_m;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_45 = Nuitka_Cell_GET(par_state);
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[29]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_matrix_approximation_rank;
            var_matrix_approximation_rank = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        if (Nuitka_Cell_GET(var_ps) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_46 = Nuitka_Cell_GET(var_ps);
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[74]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        if (Nuitka_Cell_GET(par_state) == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_49 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[41]);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 424;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        if (Nuitka_Cell_GET(var_bucket_index) == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_expression_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_subscript_value_8 = Nuitka_Cell_GET(var_bucket_index);
        tmp_expression_value_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 424;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        if (var_p_idx == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_expression_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_start_value_1 = var_p_idx;
        if (var_p_idx == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_expression_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_left_1 = var_p_idx;
        CHECK_OBJECT(var_n);
        tmp_mult_expr_left_3 = var_n;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_mult_expr_right_3 = var_matrix_approximation_rank;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_expression_value_47);

            exception_lineno = 425;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_expression_value_47);

            exception_lineno = 425;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_subscript_value_9 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_9 == NULL));
        tmp_called_instance_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_47);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 424;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_n);
        tmp_args_element_value_26 = var_n;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_args_element_value_27 = var_matrix_approximation_rank;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_args_element_value_25 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[69],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_9);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 424;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 423;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        if (Nuitka_Cell_GET(var_qs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_50 = Nuitka_Cell_GET(var_qs);
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[74]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        if (Nuitka_Cell_GET(par_state) == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_53 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[42]);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 429;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        if (Nuitka_Cell_GET(var_bucket_index) == NULL) {
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_expression_value_52);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_subscript_value_10 = Nuitka_Cell_GET(var_bucket_index);
        tmp_expression_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 429;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        if (var_q_idx == NULL) {
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_expression_value_51);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_start_value_2 = var_q_idx;
        if (var_q_idx == NULL) {
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_expression_value_51);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_left_2 = var_q_idx;
        CHECK_OBJECT(var_m);
        tmp_mult_expr_left_4 = var_m;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_mult_expr_right_4 = var_matrix_approximation_rank;
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_expression_value_51);

            exception_lineno = 430;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_stop_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_expression_value_51);

            exception_lineno = 430;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_subscript_value_11 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_11 == NULL));
        tmp_called_instance_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_51);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 429;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_m);
        tmp_args_element_value_29 = var_m;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_args_element_value_30 = var_matrix_approximation_rank;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_args_element_value_28 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_10,
                mod_consts[69],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_10);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 429;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 428;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        if (var_p_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_iadd_expr_left_6 = var_p_idx;
        CHECK_OBJECT(var_n);
        tmp_mult_expr_left_5 = var_n;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_mult_expr_right_5 = var_matrix_approximation_rank;
        tmp_iadd_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_iadd_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        Py_DECREF(tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_58 = tmp_iadd_expr_left_6;
        var_p_idx = tmp_assign_source_58;

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        if (var_q_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }

        tmp_iadd_expr_left_7 = var_q_idx;
        CHECK_OBJECT(var_m);
        tmp_mult_expr_left_6 = var_m;
        CHECK_OBJECT(var_matrix_approximation_rank);
        tmp_mult_expr_right_6 = var_matrix_approximation_rank;
        tmp_iadd_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_iadd_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        Py_DECREF(tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_59 = tmp_iadd_expr_left_7;
        var_q_idx = tmp_assign_source_59;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 420;
        type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        assert(var_need_randomize_qs != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_2 = (var_need_randomize_qs == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_7;
        if (Nuitka_Cell_GET(var_qs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_7 = Nuitka_Cell_GET(var_qs);
        tmp_assign_source_60 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_60;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_61 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_61 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                exception_lineno = 439;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_62 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_62;
            Py_INCREF(var_q);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_54;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_q);
        tmp_args_element_value_31 = var_q;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_54 = Nuitka_Cell_GET(par_state);
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[35]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_15;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_10);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 439;
        type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    goto branch_end_7;
    branch_no_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_args_kwsplit_1;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[37]);
        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[91]);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[82], "l");
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 442;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[92]);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_57 = tmp_with_1__source;
        tmp_called_value_21 = LOOKUP_SPECIAL(tmp_expression_value_57, mod_consts[93]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 442;
        tmp_assign_source_64 = CALL_FUNCTION_NO_ARGS(tmp_called_value_21);
        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_58 = tmp_with_1__source;
        tmp_assign_source_65 = LOOKUP_SPECIAL(tmp_expression_value_58, mod_consts[94]);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_65;
    }
    {
        nuitka_bool tmp_assign_source_66;
        tmp_assign_source_66 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_66;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_60;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[95]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }
        if (Nuitka_Cell_GET(par_state) == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }

        tmp_expression_value_60 = Nuitka_Cell_GET(par_state);
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[39]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 448;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 448;
        tmp_args_element_value_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[96],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        Py_DECREF(tmp_called_instance_11);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 448;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 448;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_8;
        if (Nuitka_Cell_GET(var_qs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }

        tmp_iter_arg_8 = Nuitka_Cell_GET(var_qs);
        tmp_assign_source_67 = MAKE_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_67;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_5 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_68 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_68 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                exception_lineno = 449;
                goto try_except_handler_19;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_69 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_69;
            Py_INCREF(var_q);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_q);
        tmp_expression_value_61 = var_q;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[98]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 451;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[99]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 451;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        CHECK_OBJECT(var_q);
        tmp_expression_value_63 = var_q;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[0]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 452;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        tmp_dict_key_1 = mod_consts[57];
        tmp_dict_value_1 = mod_consts[100];
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[58];
        if (var_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 454;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_dtype;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto try_except_handler_19;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_34 = impl___main__$$$function__13_complex_call_helper_keywords_star_list(dir_call_args);
        }
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 451;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 450;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_64;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        CHECK_OBJECT(var_q);
        tmp_args_element_value_35 = var_q;
        if (Nuitka_Cell_GET(par_state) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }

        tmp_expression_value_64 = Nuitka_Cell_GET(par_state);
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[35]);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 449;
        type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
        goto try_except_handler_19;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_18;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_fa594e5a0366c4bf8e1949cd7ce7edb8, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_fa594e5a0366c4bf8e1949cd7ce7edb8, exception_keeper_lineno_16);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_assign_source_70;
        tmp_assign_source_70 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_70;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_25 = tmp_with_1__exit;
        tmp_args_element_value_37 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_38 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_39 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_25, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_20;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_20;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 449;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame) frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
    goto try_except_handler_20;
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 442;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame) frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
    goto try_except_handler_20;
    branch_end_8:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_17;
    // End of try:
    try_end_15:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_26 = tmp_with_1__exit;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 449;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_26, mod_consts[101]);

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_18);
            Py_XDECREF(exception_keeper_value_18);
            Py_XDECREF(exception_keeper_tb_18);

            exception_lineno = 449;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_16;
    // End of try:
    try_end_16:;
    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_27 = tmp_with_1__exit;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 449;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_27, mod_consts[101]);

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_11:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    branch_end_7:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_28 = (PyObject *)&PyZip_Type;
        if (Nuitka_Cell_GET(var_tensors_to_compress) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_40 = Nuitka_Cell_GET(var_tensors_to_compress);
        if (Nuitka_Cell_GET(var_qs) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_41 = Nuitka_Cell_GET(var_qs);
        if (Nuitka_Cell_GET(var_ps) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_42 = Nuitka_Cell_GET(var_ps);
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_28, call_args);
        }

        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_71;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_6 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_72 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_72 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                exception_lineno = 460;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_iter_arg_10 = tmp_for_loop_5__iter_value;
        tmp_assign_source_73 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_74 = UNPACK_NEXT(tmp_unpack_7, 0, 3);
        if (tmp_assign_source_74 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 460;
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_75 = UNPACK_NEXT(tmp_unpack_8, 1, 3);
        if (tmp_assign_source_75 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 460;
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_76 = UNPACK_NEXT(tmp_unpack_9, 2, 3);
        if (tmp_assign_source_76 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 460;
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_76;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
                    exception_lineno = 460;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[102];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            exception_lineno = 460;
            goto try_except_handler_23;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_22;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_21;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_77 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_77;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_78 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_78;
            Py_INCREF(var_q);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
        tmp_assign_source_79 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_79;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[103]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_tensor);
        tmp_kw_call_arg_value_0_6 = var_tensor;
        CHECK_OBJECT(var_q);
        tmp_kw_call_arg_value_1_3 = var_q;
        CHECK_OBJECT(var_p);
        tmp_kw_call_dict_value_0_4 = var_p;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 461;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_29, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_16);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 460;
        type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
        goto try_except_handler_21;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[105]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uncompressed_tensors_memory);
        tmp_kw_call_arg_value_0_7 = var_uncompressed_tensors_memory;
        CHECK_OBJECT(Nuitka_Cell_GET(var_group_to_use));
        tmp_kw_call_dict_value_0_5 = Nuitka_Cell_GET(var_group_to_use);
        tmp_kw_call_dict_value_1_4 = Py_True;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 466;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_4};
            tmp_called_instance_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_30, args, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_called_value_30);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 466;
        tmp_assign_source_80 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[107]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_allreduce_contiguous_uncompressed_tensors_fut == NULL);
        var_allreduce_contiguous_uncompressed_tensors_fut = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = var_bucket_index;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_group_to_use;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_state;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_uncompressed_tensors;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = var_world_size;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_81 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__1_unpack_uncompressed_tensors_and_allreduce_ps(tmp_closure_1);

        assert(var_unpack_uncompressed_tensors_and_allreduce_ps == NULL);
        var_unpack_uncompressed_tensors_and_allreduce_ps = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        struct Nuitka_CellObject *tmp_closure_2[6];

        tmp_closure_2[0] = var_bucket_index;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_group_to_use;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_ps;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = var_qs;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = par_state;
        Py_INCREF(tmp_closure_2[4]);
        tmp_closure_2[5] = var_tensors_to_compress;
        Py_INCREF(tmp_closure_2[5]);

        tmp_assign_source_82 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__2_compute_qs(tmp_closure_2);

        assert(var_compute_qs == NULL);
        var_compute_qs = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        struct Nuitka_CellObject *tmp_closure_3[10];

        tmp_closure_3[0] = par_bucket;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_bucket_index;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = var_device;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = var_input_tensor;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = var_input_tensor_cp;
        Py_INCREF(tmp_closure_3[4]);
        tmp_closure_3[5] = var_ps;
        Py_INCREF(tmp_closure_3[5]);
        tmp_closure_3[6] = var_qs;
        Py_INCREF(tmp_closure_3[6]);
        tmp_closure_3[7] = par_state;
        Py_INCREF(tmp_closure_3[7]);
        tmp_closure_3[8] = var_tensors_to_compress;
        Py_INCREF(tmp_closure_3[8]);
        tmp_closure_3[9] = var_world_size;
        Py_INCREF(tmp_closure_3[9]);

        tmp_assign_source_83 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__3_decompress(tmp_closure_3);

        assert(var_decompress == NULL);
        var_decompress = tmp_assign_source_83;
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        CHECK_OBJECT(var_allreduce_contiguous_uncompressed_tensors_fut);
        tmp_called_instance_15 = var_allreduce_contiguous_uncompressed_tensors_fut;
        CHECK_OBJECT(var_unpack_uncompressed_tensors_and_allreduce_ps);
        tmp_args_element_value_43 = var_unpack_uncompressed_tensors_and_allreduce_ps;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 530;
        tmp_called_instance_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[114], tmp_args_element_value_43);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_compute_qs);
        tmp_args_element_value_44 = var_compute_qs;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 530;
        tmp_called_instance_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[114], tmp_args_element_value_44);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_decompress);
        tmp_args_element_value_45 = var_decompress;
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame.f_lineno = 530;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[114], tmp_args_element_value_45);
        Py_DECREF(tmp_called_instance_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ccoccccoccooccooooooooobccoooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_fa594e5a0366c4bf8e1949cd7ce7edb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa594e5a0366c4bf8e1949cd7ce7edb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa594e5a0366c4bf8e1949cd7ce7edb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa594e5a0366c4bf8e1949cd7ce7edb8,
        type_description_1,
        par_state,
        par_bucket,
        var_process_group,
        var_group_to_use,
        var_world_size,
        var_input_tensor,
        var_device,
        var_dtype,
        var_bucket_index,
        var_input_tensor_cp,
        var_total_length,
        var_tensors,
        var_tensors_to_compress,
        var_uncompressed_tensors,
        var_total_Ps_size,
        var_total_Qs_size,
        var_tensor,
        var_matrix,
        var_n,
        var_m,
        var_matrix_approximation_rank,
        var_compress_test,
        var_uncompressed_tensors_memory,
        (int)var_need_randomize_qs,
        var_ps,
        var_qs,
        var_p_idx,
        var_q_idx,
        var_q,
        var_p,
        var_allreduce_contiguous_uncompressed_tensors_fut,
        var_unpack_uncompressed_tensors_and_allreduce_ps,
        var_compute_qs,
        var_decompress
    );


    // Release cached frame if used for exception.
    if (frame_fa594e5a0366c4bf8e1949cd7ce7edb8 == cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8);
        cache_frame_fa594e5a0366c4bf8e1949cd7ce7edb8 = NULL;
    }

    assertFrameObject(frame_fa594e5a0366c4bf8e1949cd7ce7edb8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_process_group);
    Py_DECREF(var_process_group);
    var_process_group = NULL;
    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_input_tensor);
    Py_DECREF(var_input_tensor);
    var_input_tensor = NULL;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    CHECK_OBJECT(var_bucket_index);
    Py_DECREF(var_bucket_index);
    var_bucket_index = NULL;
    CHECK_OBJECT(var_input_tensor_cp);
    Py_DECREF(var_input_tensor_cp);
    var_input_tensor_cp = NULL;
    Py_XDECREF(var_total_length);
    var_total_length = NULL;
    Py_XDECREF(var_tensors);
    var_tensors = NULL;
    CHECK_OBJECT(var_tensors_to_compress);
    Py_DECREF(var_tensors_to_compress);
    var_tensors_to_compress = NULL;
    CHECK_OBJECT(var_uncompressed_tensors);
    Py_DECREF(var_uncompressed_tensors);
    var_uncompressed_tensors = NULL;
    Py_XDECREF(var_total_Ps_size);
    var_total_Ps_size = NULL;
    Py_XDECREF(var_total_Qs_size);
    var_total_Qs_size = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_matrix_approximation_rank);
    var_matrix_approximation_rank = NULL;
    Py_XDECREF(var_compress_test);
    var_compress_test = NULL;
    Py_XDECREF(var_uncompressed_tensors_memory);
    var_uncompressed_tensors_memory = NULL;
    var_need_randomize_qs = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(var_ps);
    Py_DECREF(var_ps);
    var_ps = NULL;
    CHECK_OBJECT(var_qs);
    Py_DECREF(var_qs);
    var_qs = NULL;
    Py_XDECREF(var_p_idx);
    var_p_idx = NULL;
    Py_XDECREF(var_q_idx);
    var_q_idx = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_allreduce_contiguous_uncompressed_tensors_fut);
    var_allreduce_contiguous_uncompressed_tensors_fut = NULL;
    Py_XDECREF(var_unpack_uncompressed_tensors_and_allreduce_ps);
    var_unpack_uncompressed_tensors_and_allreduce_ps = NULL;
    Py_XDECREF(var_compute_qs);
    var_compute_qs = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_process_group);
    var_process_group = NULL;
    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_input_tensor);
    Py_DECREF(var_input_tensor);
    var_input_tensor = NULL;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    CHECK_OBJECT(var_bucket_index);
    Py_DECREF(var_bucket_index);
    var_bucket_index = NULL;
    CHECK_OBJECT(var_input_tensor_cp);
    Py_DECREF(var_input_tensor_cp);
    var_input_tensor_cp = NULL;
    Py_XDECREF(var_total_length);
    var_total_length = NULL;
    Py_XDECREF(var_tensors);
    var_tensors = NULL;
    CHECK_OBJECT(var_tensors_to_compress);
    Py_DECREF(var_tensors_to_compress);
    var_tensors_to_compress = NULL;
    CHECK_OBJECT(var_uncompressed_tensors);
    Py_DECREF(var_uncompressed_tensors);
    var_uncompressed_tensors = NULL;
    Py_XDECREF(var_total_Ps_size);
    var_total_Ps_size = NULL;
    Py_XDECREF(var_total_Qs_size);
    var_total_Qs_size = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_matrix_approximation_rank);
    var_matrix_approximation_rank = NULL;
    Py_XDECREF(var_compress_test);
    var_compress_test = NULL;
    Py_XDECREF(var_uncompressed_tensors_memory);
    var_uncompressed_tensors_memory = NULL;
    var_need_randomize_qs = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(var_ps);
    Py_DECREF(var_ps);
    var_ps = NULL;
    CHECK_OBJECT(var_qs);
    Py_DECREF(var_qs);
    var_qs = NULL;
    Py_XDECREF(var_p_idx);
    var_p_idx = NULL;
    Py_XDECREF(var_q_idx);
    var_q_idx = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_allreduce_contiguous_uncompressed_tensors_fut);
    var_allreduce_contiguous_uncompressed_tensors_fut = NULL;
    Py_XDECREF(var_unpack_uncompressed_tensors_and_allreduce_ps);
    var_unpack_uncompressed_tensors_and_allreduce_ps = NULL;
    Py_XDECREF(var_compute_qs);
    var_compute_qs = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__1_unpack_uncompressed_tensors_and_allreduce_ps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_uncompressed_tensors_memory = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_tensor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e52ef77e1b844fae06d82c315002bd42;
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
    static struct Nuitka_FrameObject *cache_frame_e52ef77e1b844fae06d82c315002bd42 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e52ef77e1b844fae06d82c315002bd42)) {
        Py_XDECREF(cache_frame_e52ef77e1b844fae06d82c315002bd42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e52ef77e1b844fae06d82c315002bd42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e52ef77e1b844fae06d82c315002bd42 = MAKE_FUNCTION_FRAME(codeobj_e52ef77e1b844fae06d82c315002bd42, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e52ef77e1b844fae06d82c315002bd42->m_type_description == NULL);
    frame_e52ef77e1b844fae06d82c315002bd42 = cache_frame_e52ef77e1b844fae06d82c315002bd42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e52ef77e1b844fae06d82c315002bd42);
    assert(Py_REFCNT(frame_e52ef77e1b844fae06d82c315002bd42) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 471;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[116]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[117]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 471;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_uncompressed_tensors_memory == NULL);
        var_uncompressed_tensors_memory = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[4];
        assert(var_idx == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_idx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 473;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooccccc";
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
                type_description_1 = "ooooccccc";
                exception_lineno = 473;
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
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_5;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_tensor);
        tmp_expression_value_3 = var_tensor;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[98]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_uncompressed_tensors_memory);
        tmp_expression_value_4 = var_uncompressed_tensors_memory;
        if (var_idx == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }

        tmp_start_value_1 = var_idx;
        if (var_idx == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = var_idx;
        CHECK_OBJECT(var_tensor);
        tmp_called_instance_3 = var_tensor;
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 475;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[120]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 475;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 475;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 475;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tensor);
        tmp_args_element_value_3 = var_tensor;
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 475;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[121], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 475;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 474;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_4;
        if (var_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_idx;
        CHECK_OBJECT(var_tensor);
        tmp_called_instance_4 = var_tensor;
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 477;
        tmp_iadd_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[120]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooccccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        var_idx = tmp_assign_source_6;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 473;
        type_description_1 = "ooooccccc";
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[105]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[41]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 482;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_expression_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 482;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[122]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 481;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 481;
        tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[107]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_e52ef77e1b844fae06d82c315002bd42->m_frame.f_lineno = 481;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[123]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[4];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooccccc";
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
        exception_tb = MAKE_TRACEBACK(frame_e52ef77e1b844fae06d82c315002bd42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e52ef77e1b844fae06d82c315002bd42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e52ef77e1b844fae06d82c315002bd42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e52ef77e1b844fae06d82c315002bd42,
        type_description_1,
        par_fut,
        var_uncompressed_tensors_memory,
        var_idx,
        var_tensor,
        self->m_closure[4],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_e52ef77e1b844fae06d82c315002bd42 == cache_frame_e52ef77e1b844fae06d82c315002bd42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e52ef77e1b844fae06d82c315002bd42);
        cache_frame_e52ef77e1b844fae06d82c315002bd42 = NULL;
    }

    assertFrameObject(frame_e52ef77e1b844fae06d82c315002bd42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_uncompressed_tensors_memory);
    Py_DECREF(var_uncompressed_tensors_memory);
    var_uncompressed_tensors_memory = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
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

    Py_XDECREF(var_uncompressed_tensors_memory);
    var_uncompressed_tensors_memory = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
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
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__2_compute_qs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_p = NULL;
    PyObject *var_tensor = NULL;
    PyObject *var_q = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c7cc03c59575611b2c40e4d7544c9a76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_c7cc03c59575611b2c40e4d7544c9a76 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c7cc03c59575611b2c40e4d7544c9a76)) {
        Py_XDECREF(cache_frame_c7cc03c59575611b2c40e4d7544c9a76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7cc03c59575611b2c40e4d7544c9a76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7cc03c59575611b2c40e4d7544c9a76 = MAKE_FUNCTION_FRAME(codeobj_c7cc03c59575611b2c40e4d7544c9a76, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7cc03c59575611b2c40e4d7544c9a76->m_type_description == NULL);
    frame_c7cc03c59575611b2c40e4d7544c9a76 = cache_frame_c7cc03c59575611b2c40e4d7544c9a76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c7cc03c59575611b2c40e4d7544c9a76);
    assert(Py_REFCNT(frame_c7cc03c59575611b2c40e4d7544c9a76) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 489;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[116]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 489;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooocccccc";
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
                type_description_1 = "oooocccccc";
                exception_lineno = 490;
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
            PyObject *old = var_p;
            var_p = tmp_assign_source_3;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooocccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_p);
        tmp_args_element_value_1 = var_p;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oooocccccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooocccccc";
            goto try_except_handler_2;
        }
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooocccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 490;
        type_description_1 = "oooocccccc";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = (PyObject *)&PyZip_Type;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[5]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooocccccc";
                exception_lineno = 494;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooocccccc";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocccccc";
            exception_lineno = 494;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocccccc";
            exception_lineno = 494;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocccccc";
            exception_lineno = 494;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
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

                    type_description_1 = "oooocccccc";
                    exception_lineno = 494;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[102];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooocccccc";
            exception_lineno = 494;
            goto try_except_handler_5;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_10;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_11;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_12;
            Py_INCREF(var_q);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooocccccc";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooocccccc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_tensor);
        tmp_called_instance_2 = var_tensor;
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 495;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 495;
            type_description_1 = "oooocccccc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_p);
        tmp_kw_call_arg_value_1_1 = var_p;
        CHECK_OBJECT(var_q);
        tmp_kw_call_dict_value_0_1 = var_q;
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 495;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooocccccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 494;
        type_description_1 = "oooocccccc";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[105]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[42]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 504;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_expression_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_arg_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 504;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[122]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 503;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 503;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[107]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame.f_lineno = 503;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[123]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[4];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooocccccc";
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
        exception_tb = MAKE_TRACEBACK(frame_c7cc03c59575611b2c40e4d7544c9a76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7cc03c59575611b2c40e4d7544c9a76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7cc03c59575611b2c40e4d7544c9a76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7cc03c59575611b2c40e4d7544c9a76,
        type_description_1,
        par_fut,
        var_p,
        var_tensor,
        var_q,
        self->m_closure[4],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[5],
        self->m_closure[3],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_c7cc03c59575611b2c40e4d7544c9a76 == cache_frame_c7cc03c59575611b2c40e4d7544c9a76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7cc03c59575611b2c40e4d7544c9a76);
        cache_frame_c7cc03c59575611b2c40e4d7544c9a76 = NULL;
    }

    assertFrameObject(frame_c7cc03c59575611b2c40e4d7544c9a76);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
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

    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
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
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__3_decompress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_p = NULL;
    PyObject *var_q = NULL;
    PyObject *var_tensor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2a42469b7f0ea2bcf856f1dbc69bf971;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971)) {
        Py_XDECREF(cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971 = MAKE_FUNCTION_FRAME(codeobj_2a42469b7f0ea2bcf856f1dbc69bf971, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_type_description == NULL);
    frame_2a42469b7f0ea2bcf856f1dbc69bf971 = cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2a42469b7f0ea2bcf856f1dbc69bf971);
    assert(Py_REFCNT(frame_2a42469b7f0ea2bcf856f1dbc69bf971) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 511;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[116]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[117]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[9]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[9]);
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 511;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = (PyObject *)&PyZip_Type;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[5]);
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[6]);
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[8]);
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooocccccccccc";
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
                type_description_1 = "oooocccccccccc";
                exception_lineno = 513;
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


            exception_lineno = 513;
            type_description_1 = "oooocccccccccc";
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocccccccccc";
            exception_lineno = 513;
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
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocccccccccc";
            exception_lineno = 513;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooocccccccccc";
            exception_lineno = 513;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                    type_description_1 = "oooocccccccccc";
                    exception_lineno = 513;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[102];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooocccccccccc";
            exception_lineno = 513;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
            PyObject *old = var_p;
            var_p = tmp_assign_source_7;
            Py_INCREF(var_p);
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
            PyObject *old = var_q;
            var_q = tmp_assign_source_8;
            Py_INCREF(var_q);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_9;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooocccccccccc";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooocccccccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_p);
        tmp_kw_call_arg_value_0_1 = var_p;
        CHECK_OBJECT(var_q);
        tmp_called_instance_2 = var_q;
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 514;
        tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 514;
            type_description_1 = "oooocccccccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tensor);
        tmp_kw_call_dict_value_0_1 = var_tensor;
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 514;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooocccccccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 513;
        type_description_1 = "oooocccccccccc";
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
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[125]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 515;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[126]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 515;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[125]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[127]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 516;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 516;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 518;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscript_2;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[128]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_1 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_9;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[34]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooocccccccccc";
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
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 522;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[41]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[130]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 522;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[130]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 523;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[54]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame.f_lineno = 525;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooocccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 527;
        type_description_1 = "oooocccccccccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[3]);
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
        exception_tb = MAKE_TRACEBACK(frame_2a42469b7f0ea2bcf856f1dbc69bf971, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a42469b7f0ea2bcf856f1dbc69bf971->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a42469b7f0ea2bcf856f1dbc69bf971, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a42469b7f0ea2bcf856f1dbc69bf971,
        type_description_1,
        par_fut,
        var_p,
        var_q,
        var_tensor,
        self->m_closure[9],
        self->m_closure[7],
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[6],
        self->m_closure[8],
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2a42469b7f0ea2bcf856f1dbc69bf971 == cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971);
        cache_frame_2a42469b7f0ea2bcf856f1dbc69bf971 = NULL;
    }

    assertFrameObject(frame_2a42469b7f0ea2bcf856f1dbc69bf971);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
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
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
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
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_state = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_bucket = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_process_group = NULL;
    struct Nuitka_CellObject *var_group_to_use = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_world_size = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_input_tensor = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_device = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_total_length = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_square_side_length = Nuitka_Cell_Empty();
    PyObject *var_padded_total_length = NULL;
    struct Nuitka_CellObject *var_bucket_index = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_input_tensor_cp = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_matrix = Nuitka_Cell_Empty();
    PyObject *var_create_low_rank_tensor = NULL;
    PyObject *var_allreduce_p_fut = NULL;
    PyObject *var_compute_q = NULL;
    PyObject *var_decompress = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_64aff220b16c9aa97856f79db85a4937;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_64aff220b16c9aa97856f79db85a4937 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64aff220b16c9aa97856f79db85a4937)) {
        Py_XDECREF(cache_frame_64aff220b16c9aa97856f79db85a4937);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64aff220b16c9aa97856f79db85a4937 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64aff220b16c9aa97856f79db85a4937 = MAKE_FUNCTION_FRAME(codeobj_64aff220b16c9aa97856f79db85a4937, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64aff220b16c9aa97856f79db85a4937->m_type_description == NULL);
    frame_64aff220b16c9aa97856f79db85a4937 = cache_frame_64aff220b16c9aa97856f79db85a4937;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64aff220b16c9aa97856f79db85a4937);
    assert(Py_REFCNT(frame_64aff220b16c9aa97856f79db85a4937) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_process_group == NULL);
        var_process_group = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_process_group);
        tmp_cmp_expr_left_1 = var_process_group;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_process_group);
        tmp_assign_source_2 = var_process_group;
        Py_INCREF(tmp_assign_source_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[50]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[51]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(Nuitka_Cell_GET(var_group_to_use) == NULL);
        PyCell_SET(var_group_to_use, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_group_to_use));
        tmp_called_instance_1 = Nuitka_Cell_GET(var_group_to_use);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 596;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[52]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_world_size) == NULL);
        PyCell_SET(var_world_size, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_called_instance_2 = Nuitka_Cell_GET(par_bucket);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 599;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[53]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_input_tensor) == NULL);
        PyCell_SET(var_input_tensor, tmp_assign_source_4);

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 602;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_called_instance_3 = Nuitka_Cell_GET(par_state);
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_bucket);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 603;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[54], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_group_to_use));
        tmp_args_element_value_2 = Nuitka_Cell_GET(var_group_to_use);
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_args_element_value_3 = Nuitka_Cell_GET(var_input_tensor);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 604;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_6 = Nuitka_Cell_GET(var_input_tensor);
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[57]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_device) == NULL);
        PyCell_SET(var_device, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_8 = Nuitka_Cell_GET(var_input_tensor);
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_total_length) == NULL);
        PyCell_SET(var_total_length, tmp_assign_source_6);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_9 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[43]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(Nuitka_Cell_GET(var_total_length));
        tmp_iadd_expr_right_1 = Nuitka_Cell_GET(var_total_length);
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ccoccccccocccoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_8;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_state);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ccoccccccocccoooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[133]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 612;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_total_length));
        tmp_args_element_value_5 = Nuitka_Cell_GET(var_total_length);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 612;
        tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[134], tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 612;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 612;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_square_side_length) == NULL);
        PyCell_SET(var_square_side_length, tmp_assign_source_9);

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_11 = Nuitka_Cell_GET(par_state);
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[44]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ccoccccccocccoooo";
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
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(Nuitka_Cell_GET(var_square_side_length));
        tmp_mult_expr_left_2 = Nuitka_Cell_GET(var_square_side_length);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_state);
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[29]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ccoccccccocccoooo";
            goto try_except_handler_3;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ccoccccccocccoooo";
            goto try_except_handler_3;
        }
        tmp_mult_expr_right_1 = mod_consts[24];
        tmp_iadd_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ccoccccccocccoooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ccoccccccocccoooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_assattr_target_2 = Nuitka_Cell_GET(par_state);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ccoccccccocccoooo";
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
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_square_side_length));
        tmp_pow_expr_left_1 = Nuitka_Cell_GET(var_square_side_length);
        tmp_pow_expr_right_1 = mod_consts[24];
        tmp_assign_source_12 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_padded_total_length == NULL);
        var_padded_total_length = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_called_instance_6 = Nuitka_Cell_GET(var_input_tensor);
        CHECK_OBJECT(var_padded_total_length);
        tmp_args_element_value_6 = var_padded_total_length;
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 617;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[135], tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_13 = Nuitka_Cell_GET(var_input_tensor);
        CHECK_OBJECT(Nuitka_Cell_GET(var_total_length));
        tmp_start_value_1 = Nuitka_Cell_GET(var_total_length);
        CHECK_OBJECT(var_padded_total_length);
        tmp_stop_value_1 = var_padded_total_length;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 618;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[136], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_args_element_value_7 = Nuitka_Cell_GET(par_bucket);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_args_element_value_8 = Nuitka_Cell_GET(par_state);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 620;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bucket));
        tmp_expression_value_14 = Nuitka_Cell_GET(par_bucket);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 623;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_bucket_index) == NULL);
        PyCell_SET(var_bucket_index, tmp_assign_source_13);

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        assert(Nuitka_Cell_GET(var_input_tensor_cp) == NULL);
        Py_INCREF(tmp_assign_source_14);
        PyCell_SET(var_input_tensor_cp, tmp_assign_source_14);

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_15 = Nuitka_Cell_GET(par_state);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 625;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(var_bucket_index);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_16 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[40]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_17 = Nuitka_Cell_GET(var_input_tensor);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[60]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_19 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[40]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 627;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_subscript_value_3 = Nuitka_Cell_GET(var_bucket_index);
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 627;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 627;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[22]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[61];
        CHECK_OBJECT(var_padded_total_length);
        tmp_kw_call_arg_value_1_1 = var_padded_total_length;
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 630;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 630;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 629;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[62]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_padded_total_length);
        tmp_kw_call_arg_value_0_2 = var_padded_total_length;
        CHECK_OBJECT(Nuitka_Cell_GET(var_device));
        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(var_device);
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_expression_value_22 = Nuitka_Cell_GET(var_input_tensor);
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[58]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 635;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 634;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_23 = Nuitka_Cell_GET(par_state);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[40]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 634;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_ass_subscript_1 = Nuitka_Cell_GET(var_bucket_index);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_args_element_value_11 = Nuitka_Cell_GET(var_input_tensor);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 641;
        tmp_called_instance_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[64], tmp_args_element_value_11);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 641;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[65]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_input_tensor_cp);
            PyCell_SET(var_input_tensor_cp, tmp_assign_source_15);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(Nuitka_Cell_GET(var_input_tensor));
        tmp_called_instance_10 = Nuitka_Cell_GET(var_input_tensor);
        CHECK_OBJECT(Nuitka_Cell_GET(var_square_side_length));
        tmp_args_element_value_12 = Nuitka_Cell_GET(var_square_side_length);
        CHECK_OBJECT(Nuitka_Cell_GET(var_square_side_length));
        tmp_args_element_value_13 = Nuitka_Cell_GET(var_square_side_length);
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 642;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_10,
                mod_consts[69],
                call_args
            );
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_matrix) == NULL);
        PyCell_SET(var_matrix, tmp_assign_source_16);

    }
    {
        bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_24 = Nuitka_Cell_GET(par_state);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[34]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(var_bucket_index);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_25 = Nuitka_Cell_GET(par_state);
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[41]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_26 = Nuitka_Cell_GET(par_state);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[34]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 649;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[22]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[137];
        CHECK_OBJECT(Nuitka_Cell_GET(var_square_side_length));
        tmp_kw_call_arg_value_1_2 = Nuitka_Cell_GET(var_square_side_length);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_28 = Nuitka_Cell_GET(par_state);
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[29]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 652;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 651;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 651;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 650;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_17;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = var_device;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_input_tensor;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_square_side_length;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_state;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_17 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__1_create_low_rank_tensor(tmp_closure_1);

        assert(var_create_low_rank_tensor == NULL);
        var_create_low_rank_tensor = tmp_assign_source_17;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_create_low_rank_tensor);
        tmp_called_value_8 = var_create_low_rank_tensor;
        tmp_kw_call_value_0_1 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_29 = Nuitka_Cell_GET(par_state);
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[39]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 681;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[141]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_30 = Nuitka_Cell_GET(par_state);
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[41]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 681;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_ass_subscript_2 = Nuitka_Cell_GET(var_bucket_index);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_create_low_rank_tensor);
        tmp_called_value_9 = var_create_low_rank_tensor;
        tmp_kw_call_value_0_2 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_31 = Nuitka_Cell_GET(par_state);
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[39]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 684;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, kw_values, mod_consts[141]);
        }

        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_32 = Nuitka_Cell_GET(par_state);
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[42]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 684;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_ass_subscript_3 = Nuitka_Cell_GET(var_bucket_index);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_4;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_34 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[42]);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_subscript_value_4 = Nuitka_Cell_GET(var_bucket_index);
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 687;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[103]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_matrix));
        tmp_kw_call_arg_value_0_4 = Nuitka_Cell_GET(var_matrix);
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_37 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[42]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 690;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_subscript_value_5 = Nuitka_Cell_GET(var_bucket_index);
        tmp_kw_call_arg_value_1_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_kw_call_arg_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 690;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_39 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[41]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 690;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_subscript_value_6 = Nuitka_Cell_GET(var_bucket_index);
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 690;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 689;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_11, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_arg_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[105]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_state));
        tmp_expression_value_42 = Nuitka_Cell_GET(par_state);
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[41]);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 693;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_bucket_index));
        tmp_subscript_value_7 = Nuitka_Cell_GET(var_bucket_index);
        tmp_kw_call_arg_value_0_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 693;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_group_to_use));
        tmp_kw_call_dict_value_0_3 = Nuitka_Cell_GET(var_group_to_use);
        tmp_kw_call_dict_value_1_2 = Py_True;
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 692;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2};
            tmp_called_instance_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_arg_value_0_5);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 692;
        tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[107]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_allreduce_p_fut == NULL);
        var_allreduce_p_fut = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        struct Nuitka_CellObject *tmp_closure_2[4];

        tmp_closure_2[0] = var_bucket_index;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_group_to_use;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_matrix;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = par_state;
        Py_INCREF(tmp_closure_2[3]);

        tmp_assign_source_19 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__2_compute_q(tmp_closure_2);

        assert(var_compute_q == NULL);
        var_compute_q = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        struct Nuitka_CellObject *tmp_closure_3[9];

        tmp_closure_3[0] = par_bucket;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_bucket_index;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = var_device;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = var_input_tensor;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = var_input_tensor_cp;
        Py_INCREF(tmp_closure_3[4]);
        tmp_closure_3[5] = var_matrix;
        Py_INCREF(tmp_closure_3[5]);
        tmp_closure_3[6] = par_state;
        Py_INCREF(tmp_closure_3[6]);
        tmp_closure_3[7] = var_total_length;
        Py_INCREF(tmp_closure_3[7]);
        tmp_closure_3[8] = var_world_size;
        Py_INCREF(tmp_closure_3[8]);

        tmp_assign_source_20 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__3_decompress(tmp_closure_3);

        assert(var_decompress == NULL);
        var_decompress = tmp_assign_source_20;
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_allreduce_p_fut);
        tmp_called_instance_13 = var_allreduce_p_fut;
        CHECK_OBJECT(var_compute_q);
        tmp_args_element_value_16 = var_compute_q;
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 742;
        tmp_called_instance_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[114], tmp_args_element_value_16);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ccoccccccocccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_decompress);
        tmp_args_element_value_17 = var_decompress;
        frame_64aff220b16c9aa97856f79db85a4937->m_frame.f_lineno = 742;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[114], tmp_args_element_value_17);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "ccoccccccocccoooo";
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
        exception_tb = MAKE_TRACEBACK(frame_64aff220b16c9aa97856f79db85a4937, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64aff220b16c9aa97856f79db85a4937->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64aff220b16c9aa97856f79db85a4937, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64aff220b16c9aa97856f79db85a4937,
        type_description_1,
        par_state,
        par_bucket,
        var_process_group,
        var_group_to_use,
        var_world_size,
        var_input_tensor,
        var_device,
        var_total_length,
        var_square_side_length,
        var_padded_total_length,
        var_bucket_index,
        var_input_tensor_cp,
        var_matrix,
        var_create_low_rank_tensor,
        var_allreduce_p_fut,
        var_compute_q,
        var_decompress
    );


    // Release cached frame if used for exception.
    if (frame_64aff220b16c9aa97856f79db85a4937 == cache_frame_64aff220b16c9aa97856f79db85a4937) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64aff220b16c9aa97856f79db85a4937);
        cache_frame_64aff220b16c9aa97856f79db85a4937 = NULL;
    }

    assertFrameObject(frame_64aff220b16c9aa97856f79db85a4937);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_process_group);
    Py_DECREF(var_process_group);
    var_process_group = NULL;
    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_input_tensor);
    Py_DECREF(var_input_tensor);
    var_input_tensor = NULL;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
    CHECK_OBJECT(var_total_length);
    Py_DECREF(var_total_length);
    var_total_length = NULL;
    CHECK_OBJECT(var_square_side_length);
    Py_DECREF(var_square_side_length);
    var_square_side_length = NULL;
    Py_XDECREF(var_padded_total_length);
    var_padded_total_length = NULL;
    CHECK_OBJECT(var_bucket_index);
    Py_DECREF(var_bucket_index);
    var_bucket_index = NULL;
    CHECK_OBJECT(var_input_tensor_cp);
    Py_DECREF(var_input_tensor_cp);
    var_input_tensor_cp = NULL;
    CHECK_OBJECT(var_matrix);
    Py_DECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_create_low_rank_tensor);
    var_create_low_rank_tensor = NULL;
    Py_XDECREF(var_allreduce_p_fut);
    var_allreduce_p_fut = NULL;
    Py_XDECREF(var_compute_q);
    var_compute_q = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
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

    Py_XDECREF(var_process_group);
    var_process_group = NULL;
    CHECK_OBJECT(var_group_to_use);
    Py_DECREF(var_group_to_use);
    var_group_to_use = NULL;
    CHECK_OBJECT(var_world_size);
    Py_DECREF(var_world_size);
    var_world_size = NULL;
    CHECK_OBJECT(var_input_tensor);
    Py_DECREF(var_input_tensor);
    var_input_tensor = NULL;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
    CHECK_OBJECT(var_total_length);
    Py_DECREF(var_total_length);
    var_total_length = NULL;
    CHECK_OBJECT(var_square_side_length);
    Py_DECREF(var_square_side_length);
    var_square_side_length = NULL;
    Py_XDECREF(var_padded_total_length);
    var_padded_total_length = NULL;
    CHECK_OBJECT(var_bucket_index);
    Py_DECREF(var_bucket_index);
    var_bucket_index = NULL;
    CHECK_OBJECT(var_input_tensor_cp);
    Py_DECREF(var_input_tensor_cp);
    var_input_tensor_cp = NULL;
    CHECK_OBJECT(var_matrix);
    Py_DECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_create_low_rank_tensor);
    var_create_low_rank_tensor = NULL;
    Py_XDECREF(var_allreduce_p_fut);
    var_allreduce_p_fut = NULL;
    Py_XDECREF(var_compute_q);
    var_compute_q = NULL;
    Py_XDECREF(var_decompress);
    var_decompress = NULL;
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
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_bucket);
    Py_DECREF(par_bucket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__1_create_low_rank_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fill_random_values = python_pars[0];
    PyObject *par_rng = python_pars[1];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_cb9e5281b05f91cb067af55454d132de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_cb9e5281b05f91cb067af55454d132de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb9e5281b05f91cb067af55454d132de)) {
        Py_XDECREF(cache_frame_cb9e5281b05f91cb067af55454d132de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb9e5281b05f91cb067af55454d132de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb9e5281b05f91cb067af55454d132de = MAKE_FUNCTION_FRAME(codeobj_cb9e5281b05f91cb067af55454d132de, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb9e5281b05f91cb067af55454d132de->m_type_description == NULL);
    frame_cb9e5281b05f91cb067af55454d132de = cache_frame_cb9e5281b05f91cb067af55454d132de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb9e5281b05f91cb067af55454d132de);
    assert(Py_REFCNT(frame_cb9e5281b05f91cb067af55454d132de) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_fill_random_values);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_fill_random_values);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oocccc";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_args_kwsplit_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[91]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[82], "l");
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 659;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[92]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[93]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 659;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[94]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[95]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_rng);
        tmp_called_instance_1 = par_rng;
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 666;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[96],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 666;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 666;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[99]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 668;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 669;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 669;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[100];
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 671;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[58]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 671;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 667;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[147]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 672;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 667;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oocccc";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cb9e5281b05f91cb067af55454d132de, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cb9e5281b05f91cb067af55454d132de, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 672;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "oocccc";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "oocccc";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 672;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cb9e5281b05f91cb067af55454d132de->m_frame) frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocccc";
    goto try_except_handler_4;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 659;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cb9e5281b05f91cb067af55454d132de->m_frame) frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocccc";
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 672;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[101]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_return_handler_1;
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

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 672;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[101]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 672;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 672;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[101]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "oocccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
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
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[84]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 675;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 676;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[29]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 676;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 677;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 678;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[58]);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 678;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        frame_cb9e5281b05f91cb067af55454d132de->m_frame.f_lineno = 674;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb9e5281b05f91cb067af55454d132de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb9e5281b05f91cb067af55454d132de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb9e5281b05f91cb067af55454d132de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb9e5281b05f91cb067af55454d132de,
        type_description_1,
        par_fill_random_values,
        par_rng,
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cb9e5281b05f91cb067af55454d132de == cache_frame_cb9e5281b05f91cb067af55454d132de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb9e5281b05f91cb067af55454d132de);
        cache_frame_cb9e5281b05f91cb067af55454d132de = NULL;
    }

    assertFrameObject(frame_cb9e5281b05f91cb067af55454d132de);

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
    CHECK_OBJECT(par_fill_random_values);
    Py_DECREF(par_fill_random_values);
    CHECK_OBJECT(par_rng);
    Py_DECREF(par_rng);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fill_random_values);
    Py_DECREF(par_fill_random_values);
    CHECK_OBJECT(par_rng);
    Py_DECREF(par_rng);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__2_compute_q(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    struct Nuitka_FrameObject *frame_41c3c0d6778a3ccb7576c0858f3b9928;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_41c3c0d6778a3ccb7576c0858f3b9928 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41c3c0d6778a3ccb7576c0858f3b9928)) {
        Py_XDECREF(cache_frame_41c3c0d6778a3ccb7576c0858f3b9928);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41c3c0d6778a3ccb7576c0858f3b9928 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41c3c0d6778a3ccb7576c0858f3b9928 = MAKE_FUNCTION_FRAME(codeobj_41c3c0d6778a3ccb7576c0858f3b9928, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41c3c0d6778a3ccb7576c0858f3b9928->m_type_description == NULL);
    frame_41c3c0d6778a3ccb7576c0858f3b9928 = cache_frame_41c3c0d6778a3ccb7576c0858f3b9928;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41c3c0d6778a3ccb7576c0858f3b9928);
    assert(Py_REFCNT(frame_41c3c0d6778a3ccb7576c0858f3b9928) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 697;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[116]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 697;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 697;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 697;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 698;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_expression_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 698;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 698;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[103]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 701;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 701;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 701;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 702;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[41]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 702;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_expression_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 702;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 702;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 703;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[42]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 703;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_expression_value_8);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 703;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 703;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 700;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[105]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 712;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 712;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_expression_value_12);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 712;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_arg_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 712;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[122]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 712;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 711;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 711;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[107]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame.f_lineno = 711;
        tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[123]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[4];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "occcc";
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
        exception_tb = MAKE_TRACEBACK(frame_41c3c0d6778a3ccb7576c0858f3b9928, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41c3c0d6778a3ccb7576c0858f3b9928->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41c3c0d6778a3ccb7576c0858f3b9928, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41c3c0d6778a3ccb7576c0858f3b9928,
        type_description_1,
        par_fut,
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_41c3c0d6778a3ccb7576c0858f3b9928 == cache_frame_41c3c0d6778a3ccb7576c0858f3b9928) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41c3c0d6778a3ccb7576c0858f3b9928);
        cache_frame_41c3c0d6778a3ccb7576c0858f3b9928 = NULL;
    }

    assertFrameObject(frame_41c3c0d6778a3ccb7576c0858f3b9928);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__3_decompress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fut = python_pars[0];
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_6f14aed8dada76d120a8ec48096e7728;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6f14aed8dada76d120a8ec48096e7728 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6f14aed8dada76d120a8ec48096e7728)) {
        Py_XDECREF(cache_frame_6f14aed8dada76d120a8ec48096e7728);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f14aed8dada76d120a8ec48096e7728 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f14aed8dada76d120a8ec48096e7728 = MAKE_FUNCTION_FRAME(codeobj_6f14aed8dada76d120a8ec48096e7728, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f14aed8dada76d120a8ec48096e7728->m_type_description == NULL);
    frame_6f14aed8dada76d120a8ec48096e7728 = cache_frame_6f14aed8dada76d120a8ec48096e7728;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f14aed8dada76d120a8ec48096e7728);
    assert(Py_REFCNT(frame_6f14aed8dada76d120a8ec48096e7728) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_fut);
        tmp_called_instance_1 = par_fut;
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 719;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[116]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[117]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[8]);
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 719;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 721;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[41]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 721;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_expression_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 721;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 721;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 722;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[42]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 722;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_expression_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 722;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 722;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 722;
        tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 722;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 723;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[5]);
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 720;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 726;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 726;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_ass_subscript_2;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[128]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_1 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[40]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 731;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[125]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 731;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 731;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[126]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 731;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 731;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[125]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[127]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 732;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 732;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_13;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 733;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[34]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 733;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 733;
            type_description_1 = "ooccccccccc";
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
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 734;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[41]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[130]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 734;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 735;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[42]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[130]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 735;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 736;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[135]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 736;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[7]);
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 736;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 738;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[54]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 738;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_6f14aed8dada76d120a8ec48096e7728->m_frame.f_lineno = 738;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f14aed8dada76d120a8ec48096e7728, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f14aed8dada76d120a8ec48096e7728->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f14aed8dada76d120a8ec48096e7728, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f14aed8dada76d120a8ec48096e7728,
        type_description_1,
        par_fut,
        var_ret,
        self->m_closure[8],
        self->m_closure[6],
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[4],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[7],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6f14aed8dada76d120a8ec48096e7728 == cache_frame_6f14aed8dada76d120a8ec48096e7728) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f14aed8dada76d120a8ec48096e7728);
        cache_frame_6f14aed8dada76d120a8ec48096e7728 = NULL;
    }

    assertFrameObject(frame_6f14aed8dada76d120a8ec48096e7728);

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
    CHECK_OBJECT(var_ret);
    Py_DECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(var_ret);
    var_ret = NULL;
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
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fut);
    Py_DECREF(par_fut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__1__orthogonalize(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__1__orthogonalize,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_263bceb8452cae21857a9513b30f7498,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__2__should_compress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__2__should_compress,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c5fb460f39093a5e0fbd302095252b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__3__report_compression_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__3__report_compression_stats,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08e24e09ba50af676ca627a4f7c04b09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__4___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__4___init__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_23091ab6851043738c5d6730888db4ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__5_maybe_increase_iter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__5_maybe_increase_iter,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_939dd420a5e6d20968813c74be5d34b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__6_compression_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__6_compression_stats,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_ec40dc24abb2952ad237da9ff9653620,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa594e5a0366c4bf8e1949cd7ce7edb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__1_unpack_uncompressed_tensors_and_allreduce_ps(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__1_unpack_uncompressed_tensors_and_allreduce_ps,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_e52ef77e1b844fae06d82c315002bd42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__2_compute_qs(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__2_compute_qs,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_c7cc03c59575611b2c40e4d7544c9a76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__3_decompress(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__3_decompress,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_2a42469b7f0ea2bcf856f1dbc69bf971,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        closure,
        10
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64aff220b16c9aa97856f79db85a4937,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[145],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__1_create_low_rank_tensor(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__1_create_low_rank_tensor,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_cb9e5281b05f91cb067af55454d132de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        mod_consts[138],
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__2_compute_q(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__2_compute_q,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_41c3c0d6778a3ccb7576c0858f3b9928,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__3_decompress(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__3_decompress,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_6f14aed8dada76d120a8ec48096e7728,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        NULL,
        closure,
        9
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

function_impl_code functable_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook[] = {
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__1_unpack_uncompressed_tensors_and_allreduce_ps,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__2_compute_qs,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook$$$function__3_decompress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__1_create_low_rank_tensor,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__2_compute_q,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook$$$function__3_decompress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__1__orthogonalize,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__2__should_compress,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__3__report_compression_stats,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__4___init__,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__5_maybe_increase_iter,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__6_compression_stats,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook,
    impl_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook,
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

    function_impl_code *current = functable_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
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

    if (offset > sizeof(functable_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook) || offset < 0) {
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
        functable_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook[offset],
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
        module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
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
PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook");

    // Store the module for future use.
    module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook = module;

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
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook\n");

    moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook = MODULE_DICT(module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[159]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_ec6b35059586992dae0f11a34df258db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0aeaab2cd74a653ba3e542be49f002a3_2;
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_2);
    }
    frame_ec6b35059586992dae0f11a34df258db = MAKE_MODULE_FRAME(codeobj_ec6b35059586992dae0f11a34df258db, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec6b35059586992dae0f11a34df258db);
    assert(Py_REFCNT(frame_ec6b35059586992dae0f11a34df258db) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[153], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[154], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[132];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[4];
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[156];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[4];
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[5];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[4];
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[157];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[4];
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
                mod_consts[158],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[159];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[160];
        tmp_level_value_6 = mod_consts[1];
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook,
                mod_consts[161],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[161]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[136];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_10 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__1__orthogonalize(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__2__should_compress();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__3__report_compression_stats();

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[162];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 88;

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
        tmp_subscript_value_1 = mod_consts[4];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[163]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[163]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[164];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 88;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[165]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[167];
        tmp_getattr_default_1 = mod_consts[168];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[167]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 88;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_3;
        }
        frame_0aeaab2cd74a653ba3e542be49f002a3_2 = MAKE_CLASS_FRAME(codeobj_0aeaab2cd74a653ba3e542be49f002a3, module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0aeaab2cd74a653ba3e542be49f002a3_2);
        assert(Py_REFCNT(frame_0aeaab2cd74a653ba3e542be49f002a3_2) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[173]);
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[175];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__4___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__5_maybe_increase_iter();

        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__6_compression_stats();

        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0aeaab2cd74a653ba3e542be49f002a3_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0aeaab2cd74a653ba3e542be49f002a3_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0aeaab2cd74a653ba3e542be49f002a3_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0aeaab2cd74a653ba3e542be49f002a3_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0aeaab2cd74a653ba3e542be49f002a3_2);

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
            tmp_cmp_expr_right_1 = mod_consts[162];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88, mod_consts[180], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[164];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_ec6b35059586992dae0f11a34df258db->m_frame.f_lineno = 88;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88);
        locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88 = NULL;
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

        Py_DECREF(locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88);
        locals_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$class__1_PowerSGDState_88 = NULL;
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
        exception_lineno = 88;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[20];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[131];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[181]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[182];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[183]);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[184]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_7);

                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[185]);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_7);

                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_7);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__7_powerSGD_hook(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[20];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_15;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[131];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[181]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[182];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto dict_build_exception_2;
            }
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[183]);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto dict_build_exception_2;
            }
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[184]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto dict_build_exception_2;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_12);

                exception_lineno = 540;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[185]);
            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_12);

                exception_lineno = 540;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook$$$function__8_batched_powerSGD_hook(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_21);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec6b35059586992dae0f11a34df258db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec6b35059586992dae0f11a34df258db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec6b35059586992dae0f11a34df258db, exception_lineno);
    }



    assertFrameObject(frame_ec6b35059586992dae0f11a34df258db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook", false);

    Py_INCREF(module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook);
    return module_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
