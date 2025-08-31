/* Generated code for Python module 'torch.onnx.symbolic_opset12'
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

/* The "module_torch$onnx$symbolic_opset12" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$onnx$symbolic_opset12;
PyDictObject *moduledict_torch$onnx$symbolic_opset12;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[183];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[183];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.onnx.symbolic_opset12"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 183; i++) {
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
void checkModuleConstants_torch$onnx$symbolic_opset12(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 183; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f77aa0033b0c930bdf603797ec3fe14f;
static PyCodeObject *codeobj_be8289b614c29b87bde8ac86205e304f;
static PyCodeObject *codeobj_346dcd5c25741c2bfb796c0758d8c624;
static PyCodeObject *codeobj_77999bcea1c4a68777c0701e3f2e8f6f;
static PyCodeObject *codeobj_4df0eaa5a7400e41e5d91dbde21d119a;
static PyCodeObject *codeobj_58a563dfe8eb1922192bed87f1192feb;
static PyCodeObject *codeobj_2f9c2d81d5565fd37eb1d571dfe40510;
static PyCodeObject *codeobj_2b0443b0a66a28e6ba9de5fa58f89004;
static PyCodeObject *codeobj_71fc0e37624746af51330a6bea341e1d;
static PyCodeObject *codeobj_e8d637c8102a670b6d56037a3ccc92a4;
static PyCodeObject *codeobj_56bfb8bd6dab32639323c3944f25d456;
static PyCodeObject *codeobj_4f45467e97e4c7d39e0af307533c40db;
static PyCodeObject *codeobj_634759a31acd9fc82a78344190221a4c;
static PyCodeObject *codeobj_f23591bbce048cbab8eedd3fb93ff119;
static PyCodeObject *codeobj_f30eef7adfee94f54bd47652a82baaf3;
static PyCodeObject *codeobj_c5f984711e28532666e7720de6465725;
static PyCodeObject *codeobj_6f5a4b2b059e0a1fa3d6527b73f332d0;
static PyCodeObject *codeobj_6808a9dd2ac8c87774a0b722e4f55216;
static PyCodeObject *codeobj_1762aa7c64e7bd425e411c923fe0e4e5;
static PyCodeObject *codeobj_747f22cce046ca439e3a4d4a9906a344;
static PyCodeObject *codeobj_4647ca50e7e732c6dca2820fb9ebcb5e;
static PyCodeObject *codeobj_359085ad5d04db521404a7c8b0f3b5f0;
static PyCodeObject *codeobj_d74508ada77570897e1f1c3a5cf820a2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[161]); CHECK_OBJECT(module_filename_obj);
    codeobj_f77aa0033b0c930bdf603797ec3fe14f = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[163], NULL, 1, 0, 0);
    codeobj_be8289b614c29b87bde8ac86205e304f = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[164], NULL, 1, 0, 0);
    codeobj_346dcd5c25741c2bfb796c0758d8c624 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[165], NULL, 1, 0, 0);
    codeobj_77999bcea1c4a68777c0701e3f2e8f6f = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[166], NULL, 1, 0, 0);
    codeobj_4df0eaa5a7400e41e5d91dbde21d119a = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[167], NULL, 1, 0, 0);
    codeobj_58a563dfe8eb1922192bed87f1192feb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_2f9c2d81d5565fd37eb1d571dfe40510 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[169], NULL, 4, 0, 0);
    codeobj_2b0443b0a66a28e6ba9de5fa58f89004 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[169], NULL, 4, 0, 0);
    codeobj_71fc0e37624746af51330a6bea341e1d = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[170], NULL, 6, 0, 0);
    codeobj_e8d637c8102a670b6d56037a3ccc92a4 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[171], NULL, 3, 0, 0);
    codeobj_56bfb8bd6dab32639323c3944f25d456 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[172], NULL, 7, 0, 0);
    codeobj_4f45467e97e4c7d39e0af307533c40db = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[173], NULL, 4, 0, 0);
    codeobj_634759a31acd9fc82a78344190221a4c = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[174], NULL, 3, 0, 0);
    codeobj_f23591bbce048cbab8eedd3fb93ff119 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[175], NULL, 3, 0, 0);
    codeobj_f30eef7adfee94f54bd47652a82baaf3 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[176], NULL, 3, 0, 0);
    codeobj_c5f984711e28532666e7720de6465725 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[176], NULL, 3, 0, 0);
    codeobj_6f5a4b2b059e0a1fa3d6527b73f332d0 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[177], NULL, 6, 0, 0);
    codeobj_6808a9dd2ac8c87774a0b722e4f55216 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[178], NULL, 6, 0, 0);
    codeobj_1762aa7c64e7bd425e411c923fe0e4e5 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[178], NULL, 6, 0, 0);
    codeobj_747f22cce046ca439e3a4d4a9906a344 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[176], NULL, 3, 0, 0);
    codeobj_4647ca50e7e732c6dca2820fb9ebcb5e = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[154], mod_consts[179], NULL, 3, 0, 0);
    codeobj_359085ad5d04db521404a7c8b0f3b5f0 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[180], NULL, 6, 0, 0);
    codeobj_d74508ada77570897e1f1c3a5cf820a2 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[181], NULL, 5, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__10_celu();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__11_argmax();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__12_argmin();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__13_pow();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__14_ge();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__15_le();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__16_unfold();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__17_tensordot(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__1_einsum_helper();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__2_einsum();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__3_outer();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__4_dropout();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__5_nll_loss();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__6_nll_loss2d();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__7_nll_loss_nd();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__8_cross_entropy_loss();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__9_binary_cross_entropy_with_logits();


// The module function definitions.
static PyObject *impl_torch$onnx$symbolic_opset12$$$function__1_einsum_helper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_equation = python_pars[1];
    PyObject *par_tensors = python_pars[2];
    PyObject *outline_0_var_tensor = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f23591bbce048cbab8eedd3fb93ff119;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_4df0eaa5a7400e41e5d91dbde21d119a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f23591bbce048cbab8eedd3fb93ff119 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f23591bbce048cbab8eedd3fb93ff119)) {
        Py_XDECREF(cache_frame_f23591bbce048cbab8eedd3fb93ff119);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f23591bbce048cbab8eedd3fb93ff119 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f23591bbce048cbab8eedd3fb93ff119 = MAKE_FUNCTION_FRAME(codeobj_f23591bbce048cbab8eedd3fb93ff119, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f23591bbce048cbab8eedd3fb93ff119->m_type_description == NULL);
    frame_f23591bbce048cbab8eedd3fb93ff119 = cache_frame_f23591bbce048cbab8eedd3fb93ff119;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f23591bbce048cbab8eedd3fb93ff119);
    assert(Py_REFCNT(frame_f23591bbce048cbab8eedd3fb93ff119) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_tensors);
        tmp_operand_value_1 = par_tensors;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_f23591bbce048cbab8eedd3fb93ff119->m_frame.f_lineno = 17;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_tensors);
        tmp_expression_value_1 = par_tensors;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f23591bbce048cbab8eedd3fb93ff119->m_frame.f_lineno = 19;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f23591bbce048cbab8eedd3fb93ff119->m_frame.f_lineno = 19;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_tensors);
            tmp_iter_arg_1 = par_tensors;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2)) {
            Py_XDECREF(cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2 = MAKE_FUNCTION_FRAME(codeobj_4df0eaa5a7400e41e5d91dbde21d119a, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2->m_type_description == NULL);
        frame_4df0eaa5a7400e41e5d91dbde21d119a_2 = cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4df0eaa5a7400e41e5d91dbde21d119a_2);
        assert(Py_REFCNT(frame_4df0eaa5a7400e41e5d91dbde21d119a_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 20;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_tensor;
                outline_0_var_tensor = tmp_assign_source_5;
                Py_INCREF(outline_0_var_tensor);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_g == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_expression_value_2 = par_g;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_kw_call_arg_value_0_1 = mod_consts[7];
            CHECK_OBJECT(outline_0_var_tensor);
            tmp_kw_call_arg_value_1_1 = outline_0_var_tensor;
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_subscript_value_2 = mod_consts[10];
            tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_4df0eaa5a7400e41e5d91dbde21d119a_2->m_frame.f_lineno = 20;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[11]);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
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
            exception_tb = MAKE_TRACEBACK(frame_4df0eaa5a7400e41e5d91dbde21d119a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4df0eaa5a7400e41e5d91dbde21d119a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4df0eaa5a7400e41e5d91dbde21d119a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4df0eaa5a7400e41e5d91dbde21d119a_2,
            type_description_2,
            outline_0_var_tensor,
            par_g
        );


        // Release cached frame if used for exception.
        if (frame_4df0eaa5a7400e41e5d91dbde21d119a_2 == cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2);
            cache_frame_4df0eaa5a7400e41e5d91dbde21d119a_2 = NULL;
        }

        assertFrameObject(frame_4df0eaa5a7400e41e5d91dbde21d119a_2);

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
        Py_XDECREF(outline_0_var_tensor);
        outline_0_var_tensor = NULL;
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

        Py_XDECREF(outline_0_var_tensor);
        outline_0_var_tensor = NULL;
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
        exception_lineno = 20;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_tensors;
            assert(old != NULL);
            par_tensors = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[7];
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[12];
        CHECK_OBJECT(par_tensors);
        tmp_dircall_arg3_1 = par_tensors;
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_equation);
        tmp_dict_value_1 = par_equation;
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_kw_call_arg_value_1_2 = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[4];
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f23591bbce048cbab8eedd3fb93ff119->m_frame.f_lineno = 21;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dircall_arg4_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_9 = par_g;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[6]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = mod_consts[12];
        CHECK_OBJECT(par_tensors);
        tmp_dircall_arg3_2 = par_tensors;
        tmp_dict_key_2 = mod_consts[13];
        CHECK_OBJECT(par_equation);
        tmp_dict_value_2 = par_equation;
        tmp_dircall_arg4_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f23591bbce048cbab8eedd3fb93ff119, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f23591bbce048cbab8eedd3fb93ff119->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f23591bbce048cbab8eedd3fb93ff119, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f23591bbce048cbab8eedd3fb93ff119,
        type_description_1,
        par_g,
        par_equation,
        par_tensors
    );


    // Release cached frame if used for exception.
    if (frame_f23591bbce048cbab8eedd3fb93ff119 == cache_frame_f23591bbce048cbab8eedd3fb93ff119) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f23591bbce048cbab8eedd3fb93ff119);
        cache_frame_f23591bbce048cbab8eedd3fb93ff119 = NULL;
    }

    assertFrameObject(frame_f23591bbce048cbab8eedd3fb93ff119);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    par_tensors = NULL;
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

    Py_XDECREF(par_tensors);
    par_tensors = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_equation);
    Py_DECREF(par_equation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_equation);
    Py_DECREF(par_equation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__2_einsum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_equation = python_pars[1];
    PyObject *par_tensor_list = python_pars[2];
    PyObject *var_tensors = NULL;
    struct Nuitka_FrameObject *frame_634759a31acd9fc82a78344190221a4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_634759a31acd9fc82a78344190221a4c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_634759a31acd9fc82a78344190221a4c)) {
        Py_XDECREF(cache_frame_634759a31acd9fc82a78344190221a4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_634759a31acd9fc82a78344190221a4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_634759a31acd9fc82a78344190221a4c = MAKE_FUNCTION_FRAME(codeobj_634759a31acd9fc82a78344190221a4c, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_634759a31acd9fc82a78344190221a4c->m_type_description == NULL);
    frame_634759a31acd9fc82a78344190221a4c = cache_frame_634759a31acd9fc82a78344190221a4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_634759a31acd9fc82a78344190221a4c);
    assert(Py_REFCNT(frame_634759a31acd9fc82a78344190221a4c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor_list);
        tmp_args_element_value_1 = par_tensor_list;
        frame_634759a31acd9fc82a78344190221a4c->m_frame.f_lineno = 27;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensors == NULL);
        var_tensors = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_2 = par_g;
        CHECK_OBJECT(par_equation);
        tmp_args_element_value_3 = par_equation;
        CHECK_OBJECT(var_tensors);
        tmp_args_element_value_4 = var_tensors;
        frame_634759a31acd9fc82a78344190221a4c->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
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
        exception_tb = MAKE_TRACEBACK(frame_634759a31acd9fc82a78344190221a4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_634759a31acd9fc82a78344190221a4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_634759a31acd9fc82a78344190221a4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_634759a31acd9fc82a78344190221a4c,
        type_description_1,
        par_g,
        par_equation,
        par_tensor_list,
        var_tensors
    );


    // Release cached frame if used for exception.
    if (frame_634759a31acd9fc82a78344190221a4c == cache_frame_634759a31acd9fc82a78344190221a4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_634759a31acd9fc82a78344190221a4c);
        cache_frame_634759a31acd9fc82a78344190221a4c = NULL;
    }

    assertFrameObject(frame_634759a31acd9fc82a78344190221a4c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_tensors);
    Py_DECREF(var_tensors);
    var_tensors = NULL;
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

    Py_XDECREF(var_tensors);
    var_tensors = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_equation);
    Py_DECREF(par_equation);
    CHECK_OBJECT(par_tensor_list);
    Py_DECREF(par_tensor_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_equation);
    Py_DECREF(par_equation);
    CHECK_OBJECT(par_tensor_list);
    Py_DECREF(par_tensor_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__3_outer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_other = python_pars[2];
    struct Nuitka_FrameObject *frame_747f22cce046ca439e3a4d4a9906a344;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_747f22cce046ca439e3a4d4a9906a344 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_747f22cce046ca439e3a4d4a9906a344)) {
        Py_XDECREF(cache_frame_747f22cce046ca439e3a4d4a9906a344);

#if _DEBUG_REFCOUNTS
        if (cache_frame_747f22cce046ca439e3a4d4a9906a344 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_747f22cce046ca439e3a4d4a9906a344 = MAKE_FUNCTION_FRAME(codeobj_747f22cce046ca439e3a4d4a9906a344, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_747f22cce046ca439e3a4d4a9906a344->m_type_description == NULL);
    frame_747f22cce046ca439e3a4d4a9906a344 = cache_frame_747f22cce046ca439e3a4d4a9906a344;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_747f22cce046ca439e3a4d4a9906a344);
    assert(Py_REFCNT(frame_747f22cce046ca439e3a4d4a9906a344) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_other);
        tmp_called_instance_2 = par_other;
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 33;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 33;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_called_instance_4 = par_input;
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 33;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[2]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 33;
        tmp_cmp_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[3]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[7];
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_called_instance_6 = par_input;
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 34;
        tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[2]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 34;
        tmp_subscript_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[3]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 34;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_other;
            assert(old != NULL);
            par_other = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_g;
        tmp_args_element_value_2 = mod_consts[16];
        CHECK_OBJECT(par_input);
        tmp_list_element_1 = par_input;
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
        if (par_other == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto list_build_exception_1;
        }

        tmp_list_element_1 = par_other;
        PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_747f22cce046ca439e3a4d4a9906a344->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_747f22cce046ca439e3a4d4a9906a344, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_747f22cce046ca439e3a4d4a9906a344->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_747f22cce046ca439e3a4d4a9906a344, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_747f22cce046ca439e3a4d4a9906a344,
        type_description_1,
        par_g,
        par_input,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_747f22cce046ca439e3a4d4a9906a344 == cache_frame_747f22cce046ca439e3a4d4a9906a344) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_747f22cce046ca439e3a4d4a9906a344);
        cache_frame_747f22cce046ca439e3a4d4a9906a344 = NULL;
    }

    assertFrameObject(frame_747f22cce046ca439e3a4d4a9906a344);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_other);
    par_other = NULL;
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

    Py_XDECREF(par_other);
    par_other = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__4_dropout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_p = python_pars[2];
    PyObject *par_train = python_pars[3];
    PyObject *var_t = NULL;
    PyObject *var_r = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4f45467e97e4c7d39e0af307533c40db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_4f45467e97e4c7d39e0af307533c40db = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f45467e97e4c7d39e0af307533c40db)) {
        Py_XDECREF(cache_frame_4f45467e97e4c7d39e0af307533c40db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f45467e97e4c7d39e0af307533c40db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f45467e97e4c7d39e0af307533c40db = MAKE_FUNCTION_FRAME(codeobj_4f45467e97e4c7d39e0af307533c40db, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f45467e97e4c7d39e0af307533c40db->m_type_description == NULL);
    frame_4f45467e97e4c7d39e0af307533c40db = cache_frame_4f45467e97e4c7d39e0af307533c40db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f45467e97e4c7d39e0af307533c40db);
    assert(Py_REFCNT(frame_4f45467e97e4c7d39e0af307533c40db) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_train);
        tmp_args_element_value_1 = par_train;
        tmp_args_element_value_2 = mod_consts[19];
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[18],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_train);
        tmp_operand_value_1 = par_train;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
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
    CHECK_OBJECT(par_input);
    tmp_return_value = par_input;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 43;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_args_element_value_3 = par_p;
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 45;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[24], tmp_args_element_value_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 45;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert(old != NULL);
            par_p = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 46;
        tmp_kw_call_value_0_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 46;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[28];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_p);
        tmp_tuple_element_1 = par_p;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_t);
        tmp_tuple_element_1 = var_t;
        PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[29]);
        frame_4f45467e97e4c7d39e0af307533c40db->m_frame.f_lineno = 47;
        tmp_iter_arg_1 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 47;
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


            type_description_1 = "ooooooo";
            exception_lineno = 47;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 47;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 47;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f45467e97e4c7d39e0af307533c40db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f45467e97e4c7d39e0af307533c40db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f45467e97e4c7d39e0af307533c40db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f45467e97e4c7d39e0af307533c40db,
        type_description_1,
        par_g,
        par_input,
        par_p,
        par_train,
        var_t,
        var_r,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_4f45467e97e4c7d39e0af307533c40db == cache_frame_4f45467e97e4c7d39e0af307533c40db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f45467e97e4c7d39e0af307533c40db);
        cache_frame_4f45467e97e4c7d39e0af307533c40db = NULL;
    }

    assertFrameObject(frame_4f45467e97e4c7d39e0af307533c40db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_r = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_7);
        var__ = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT(var_r);
    tmp_return_value = var_r;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_p);
    par_p = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
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

    Py_XDECREF(par_p);
    par_p = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_train);
    Py_DECREF(par_train);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_train);
    Py_DECREF(par_train);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__5_nll_loss(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_target = python_pars[2];
    PyObject *par_weight = python_pars[3];
    PyObject *par_reduction = python_pars[4];
    PyObject *par_ignore_index = python_pars[5];
    PyObject *var_reduction_vals = NULL;
    PyObject *var_nllloss = NULL;
    struct Nuitka_FrameObject *frame_6f5a4b2b059e0a1fa3d6527b73f332d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0)) {
        Py_XDECREF(cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0 = MAKE_FUNCTION_FRAME(codeobj_6f5a4b2b059e0a1fa3d6527b73f332d0, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_type_description == NULL);
    frame_6f5a4b2b059e0a1fa3d6527b73f332d0 = cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f5a4b2b059e0a1fa3d6527b73f332d0);
    assert(Py_REFCNT(frame_6f5a4b2b059e0a1fa3d6527b73f332d0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reduction);
        tmp_args_element_value_1 = par_reduction;
        tmp_args_element_value_2 = mod_consts[32];
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reduction;
            assert(old != NULL);
            par_reduction = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST3(mod_consts[33],mod_consts[34],mod_consts[35]);
        assert(var_reduction_vals == NULL);
        var_reduction_vals = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_reduction_vals);
        tmp_expression_value_1 = var_reduction_vals;
        CHECK_OBJECT(par_reduction);
        tmp_subscript_value_1 = par_reduction;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reduction;
            assert(old != NULL);
            par_reduction = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ignore_index);
        tmp_args_element_value_3 = par_ignore_index;
        tmp_args_element_value_4 = mod_consts[32];
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ignore_index;
            assert(old != NULL);
            par_ignore_index = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_weight);
        tmp_called_instance_4 = par_weight;
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame.f_lineno = 62;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[36]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame.f_lineno = 62;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[37]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 62;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[38];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_target);
        tmp_kw_call_arg_value_2_1 = par_target;
        CHECK_OBJECT(par_reduction);
        tmp_kw_call_dict_value_0_1 = par_reduction;
        CHECK_OBJECT(par_ignore_index);
        tmp_kw_call_dict_value_1_1 = par_ignore_index;
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame.f_lineno = 63;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nllloss == NULL);
        var_nllloss = tmp_assign_source_5;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[38];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(par_target);
        tmp_kw_call_arg_value_2_2 = par_target;
        CHECK_OBJECT(par_weight);
        tmp_kw_call_arg_value_3_1 = par_weight;
        CHECK_OBJECT(par_reduction);
        tmp_kw_call_dict_value_0_2 = par_reduction;
        CHECK_OBJECT(par_ignore_index);
        tmp_kw_call_dict_value_1_2 = par_ignore_index;
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame.f_lineno = 65;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nllloss == NULL);
        var_nllloss = tmp_assign_source_6;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f5a4b2b059e0a1fa3d6527b73f332d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f5a4b2b059e0a1fa3d6527b73f332d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f5a4b2b059e0a1fa3d6527b73f332d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f5a4b2b059e0a1fa3d6527b73f332d0,
        type_description_1,
        par_g,
        par_self,
        par_target,
        par_weight,
        par_reduction,
        par_ignore_index,
        var_reduction_vals,
        var_nllloss
    );


    // Release cached frame if used for exception.
    if (frame_6f5a4b2b059e0a1fa3d6527b73f332d0 == cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0);
        cache_frame_6f5a4b2b059e0a1fa3d6527b73f332d0 = NULL;
    }

    assertFrameObject(frame_6f5a4b2b059e0a1fa3d6527b73f332d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_nllloss);
    tmp_return_value = var_nllloss;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_reduction);
    par_reduction = NULL;
    Py_XDECREF(par_ignore_index);
    par_ignore_index = NULL;
    CHECK_OBJECT(var_reduction_vals);
    Py_DECREF(var_reduction_vals);
    var_reduction_vals = NULL;
    CHECK_OBJECT(var_nllloss);
    Py_DECREF(var_nllloss);
    var_nllloss = NULL;
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

    Py_XDECREF(par_reduction);
    par_reduction = NULL;
    Py_XDECREF(par_ignore_index);
    par_ignore_index = NULL;
    Py_XDECREF(var_reduction_vals);
    var_reduction_vals = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__6_nll_loss2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_target = python_pars[2];
    PyObject *par_weight = python_pars[3];
    PyObject *par_reduction = python_pars[4];
    PyObject *par_ignore_index = python_pars[5];
    struct Nuitka_FrameObject *frame_6808a9dd2ac8c87774a0b722e4f55216;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6808a9dd2ac8c87774a0b722e4f55216 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6808a9dd2ac8c87774a0b722e4f55216)) {
        Py_XDECREF(cache_frame_6808a9dd2ac8c87774a0b722e4f55216);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6808a9dd2ac8c87774a0b722e4f55216 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6808a9dd2ac8c87774a0b722e4f55216 = MAKE_FUNCTION_FRAME(codeobj_6808a9dd2ac8c87774a0b722e4f55216, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6808a9dd2ac8c87774a0b722e4f55216->m_type_description == NULL);
    frame_6808a9dd2ac8c87774a0b722e4f55216 = cache_frame_6808a9dd2ac8c87774a0b722e4f55216;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6808a9dd2ac8c87774a0b722e4f55216);
    assert(Py_REFCNT(frame_6808a9dd2ac8c87774a0b722e4f55216) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_3 = par_target;
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_4 = par_weight;
        CHECK_OBJECT(par_reduction);
        tmp_args_element_value_5 = par_reduction;
        CHECK_OBJECT(par_ignore_index);
        tmp_args_element_value_6 = par_ignore_index;
        frame_6808a9dd2ac8c87774a0b722e4f55216->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_6808a9dd2ac8c87774a0b722e4f55216, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6808a9dd2ac8c87774a0b722e4f55216->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6808a9dd2ac8c87774a0b722e4f55216, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6808a9dd2ac8c87774a0b722e4f55216,
        type_description_1,
        par_g,
        par_self,
        par_target,
        par_weight,
        par_reduction,
        par_ignore_index
    );


    // Release cached frame if used for exception.
    if (frame_6808a9dd2ac8c87774a0b722e4f55216 == cache_frame_6808a9dd2ac8c87774a0b722e4f55216) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6808a9dd2ac8c87774a0b722e4f55216);
        cache_frame_6808a9dd2ac8c87774a0b722e4f55216 = NULL;
    }

    assertFrameObject(frame_6808a9dd2ac8c87774a0b722e4f55216);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    CHECK_OBJECT(par_ignore_index);
    Py_DECREF(par_ignore_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    CHECK_OBJECT(par_ignore_index);
    Py_DECREF(par_ignore_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__7_nll_loss_nd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_target = python_pars[2];
    PyObject *par_weight = python_pars[3];
    PyObject *par_reduction = python_pars[4];
    PyObject *par_ignore_index = python_pars[5];
    struct Nuitka_FrameObject *frame_1762aa7c64e7bd425e411c923fe0e4e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1762aa7c64e7bd425e411c923fe0e4e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1762aa7c64e7bd425e411c923fe0e4e5)) {
        Py_XDECREF(cache_frame_1762aa7c64e7bd425e411c923fe0e4e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1762aa7c64e7bd425e411c923fe0e4e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1762aa7c64e7bd425e411c923fe0e4e5 = MAKE_FUNCTION_FRAME(codeobj_1762aa7c64e7bd425e411c923fe0e4e5, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1762aa7c64e7bd425e411c923fe0e4e5->m_type_description == NULL);
    frame_1762aa7c64e7bd425e411c923fe0e4e5 = cache_frame_1762aa7c64e7bd425e411c923fe0e4e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1762aa7c64e7bd425e411c923fe0e4e5);
    assert(Py_REFCNT(frame_1762aa7c64e7bd425e411c923fe0e4e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_3 = par_target;
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_4 = par_weight;
        CHECK_OBJECT(par_reduction);
        tmp_args_element_value_5 = par_reduction;
        CHECK_OBJECT(par_ignore_index);
        tmp_args_element_value_6 = par_ignore_index;
        frame_1762aa7c64e7bd425e411c923fe0e4e5->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_1762aa7c64e7bd425e411c923fe0e4e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1762aa7c64e7bd425e411c923fe0e4e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1762aa7c64e7bd425e411c923fe0e4e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1762aa7c64e7bd425e411c923fe0e4e5,
        type_description_1,
        par_g,
        par_self,
        par_target,
        par_weight,
        par_reduction,
        par_ignore_index
    );


    // Release cached frame if used for exception.
    if (frame_1762aa7c64e7bd425e411c923fe0e4e5 == cache_frame_1762aa7c64e7bd425e411c923fe0e4e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1762aa7c64e7bd425e411c923fe0e4e5);
        cache_frame_1762aa7c64e7bd425e411c923fe0e4e5 = NULL;
    }

    assertFrameObject(frame_1762aa7c64e7bd425e411c923fe0e4e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    CHECK_OBJECT(par_ignore_index);
    Py_DECREF(par_ignore_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    CHECK_OBJECT(par_ignore_index);
    Py_DECREF(par_ignore_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__8_cross_entropy_loss(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_target = python_pars[2];
    PyObject *par_weight = python_pars[3];
    PyObject *par_reduction = python_pars[4];
    PyObject *par_ignore_index = python_pars[5];
    PyObject *par_label_smoothing = python_pars[6];
    PyObject *var_reduction_vals = NULL;
    PyObject *var_celoss = NULL;
    struct Nuitka_FrameObject *frame_56bfb8bd6dab32639323c3944f25d456;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56bfb8bd6dab32639323c3944f25d456 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_56bfb8bd6dab32639323c3944f25d456)) {
        Py_XDECREF(cache_frame_56bfb8bd6dab32639323c3944f25d456);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56bfb8bd6dab32639323c3944f25d456 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56bfb8bd6dab32639323c3944f25d456 = MAKE_FUNCTION_FRAME(codeobj_56bfb8bd6dab32639323c3944f25d456, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56bfb8bd6dab32639323c3944f25d456->m_type_description == NULL);
    frame_56bfb8bd6dab32639323c3944f25d456 = cache_frame_56bfb8bd6dab32639323c3944f25d456;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56bfb8bd6dab32639323c3944f25d456);
    assert(Py_REFCNT(frame_56bfb8bd6dab32639323c3944f25d456) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reduction);
        tmp_args_element_value_1 = par_reduction;
        tmp_args_element_value_2 = mod_consts[32];
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reduction;
            assert(old != NULL);
            par_reduction = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST3(mod_consts[33],mod_consts[34],mod_consts[35]);
        assert(var_reduction_vals == NULL);
        var_reduction_vals = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_reduction_vals);
        tmp_expression_value_1 = var_reduction_vals;
        CHECK_OBJECT(par_reduction);
        tmp_subscript_value_1 = par_reduction;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reduction;
            assert(old != NULL);
            par_reduction = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_label_smoothing);
        tmp_args_element_value_3 = par_label_smoothing;
        tmp_args_element_value_4 = mod_consts[41];
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_label_smoothing;
            assert(old != NULL);
            par_label_smoothing = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_label_smoothing);
        tmp_cmp_expr_left_1 = par_label_smoothing;
        tmp_cmp_expr_right_1 = mod_consts[42];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
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
        tmp_make_exception_arg_1 = mod_consts[43];
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 88;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 88;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ignore_index);
        tmp_args_element_value_5 = par_ignore_index;
        tmp_args_element_value_6 = mod_consts[32];
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ignore_index;
            assert(old != NULL);
            par_ignore_index = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_weight);
        tmp_called_instance_5 = par_weight;
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 93;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[36]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 93;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[37]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[44];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_target);
        tmp_kw_call_arg_value_2_1 = par_target;
        CHECK_OBJECT(par_reduction);
        tmp_kw_call_dict_value_0_1 = par_reduction;
        CHECK_OBJECT(par_ignore_index);
        tmp_kw_call_dict_value_1_1 = par_ignore_index;
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_celoss == NULL);
        var_celoss = tmp_assign_source_6;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[44];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(par_target);
        tmp_kw_call_arg_value_2_2 = par_target;
        CHECK_OBJECT(par_weight);
        tmp_kw_call_arg_value_3_1 = par_weight;
        CHECK_OBJECT(par_reduction);
        tmp_kw_call_dict_value_0_2 = par_reduction;
        CHECK_OBJECT(par_ignore_index);
        tmp_kw_call_dict_value_1_2 = par_ignore_index;
        frame_56bfb8bd6dab32639323c3944f25d456->m_frame.f_lineno = 96;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_celoss == NULL);
        var_celoss = tmp_assign_source_7;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56bfb8bd6dab32639323c3944f25d456, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56bfb8bd6dab32639323c3944f25d456->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56bfb8bd6dab32639323c3944f25d456, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56bfb8bd6dab32639323c3944f25d456,
        type_description_1,
        par_g,
        par_self,
        par_target,
        par_weight,
        par_reduction,
        par_ignore_index,
        par_label_smoothing,
        var_reduction_vals,
        var_celoss
    );


    // Release cached frame if used for exception.
    if (frame_56bfb8bd6dab32639323c3944f25d456 == cache_frame_56bfb8bd6dab32639323c3944f25d456) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56bfb8bd6dab32639323c3944f25d456);
        cache_frame_56bfb8bd6dab32639323c3944f25d456 = NULL;
    }

    assertFrameObject(frame_56bfb8bd6dab32639323c3944f25d456);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_celoss);
    tmp_return_value = var_celoss;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_reduction);
    par_reduction = NULL;
    Py_XDECREF(par_ignore_index);
    par_ignore_index = NULL;
    CHECK_OBJECT(par_label_smoothing);
    Py_DECREF(par_label_smoothing);
    par_label_smoothing = NULL;
    CHECK_OBJECT(var_reduction_vals);
    Py_DECREF(var_reduction_vals);
    var_reduction_vals = NULL;
    CHECK_OBJECT(var_celoss);
    Py_DECREF(var_celoss);
    var_celoss = NULL;
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

    Py_XDECREF(par_reduction);
    par_reduction = NULL;
    Py_XDECREF(par_ignore_index);
    par_ignore_index = NULL;
    Py_XDECREF(par_label_smoothing);
    par_label_smoothing = NULL;
    Py_XDECREF(var_reduction_vals);
    var_reduction_vals = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__9_binary_cross_entropy_with_logits(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_target = python_pars[2];
    PyObject *par_weight = python_pars[3];
    PyObject *par_pos_weight = python_pars[4];
    PyObject *par_reduction = python_pars[5];
    PyObject *var_sigmoid = NULL;
    PyObject *var_log = NULL;
    PyObject *var_sub = NULL;
    PyObject *var_neg = NULL;
    PyObject *var_mul = NULL;
    PyObject *var_add = NULL;
    PyObject *var_p = NULL;
    PyObject *var_sig_x = NULL;
    PyObject *var_log_sig_x = NULL;
    PyObject *var_sub_1_x = NULL;
    PyObject *var_sub_1_y = NULL;
    PyObject *var_log_1_x = NULL;
    PyObject *var_output = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_71fc0e37624746af51330a6bea341e1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_71fc0e37624746af51330a6bea341e1d = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_71fc0e37624746af51330a6bea341e1d)) {
        Py_XDECREF(cache_frame_71fc0e37624746af51330a6bea341e1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71fc0e37624746af51330a6bea341e1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71fc0e37624746af51330a6bea341e1d = MAKE_FUNCTION_FRAME(codeobj_71fc0e37624746af51330a6bea341e1d, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71fc0e37624746af51330a6bea341e1d->m_type_description == NULL);
    frame_71fc0e37624746af51330a6bea341e1d = cache_frame_71fc0e37624746af51330a6bea341e1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71fc0e37624746af51330a6bea341e1d);
    assert(Py_REFCNT(frame_71fc0e37624746af51330a6bea341e1d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[45];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[46];
        tmp_level_value_1 = mod_consts[1];
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 103;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[47],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[47]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_sigmoid == NULL);
        var_sigmoid = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[48],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[48]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_log == NULL);
        var_log = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[49],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[49]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_sub == NULL);
        var_sub = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[50],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[50]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_neg == NULL);
        var_neg = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[51],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[51]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_mul == NULL);
        var_mul = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[52],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[52]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_add == NULL);
        var_add = tmp_assign_source_7;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[53]);
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 104;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[24], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 104;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_sigmoid);
        tmp_called_value_2 = var_sigmoid;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sig_x == NULL);
        var_sig_x = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_log);
        tmp_called_value_3 = var_log;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_3 = par_g;
        CHECK_OBJECT(var_sig_x);
        tmp_args_element_value_4 = var_sig_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log_sig_x == NULL);
        var_log_sig_x = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_sub);
        tmp_called_value_4 = var_sub;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_5 = par_g;
        CHECK_OBJECT(var_p);
        tmp_args_element_value_6 = var_p;
        CHECK_OBJECT(var_sig_x);
        tmp_args_element_value_7 = var_sig_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sub_1_x == NULL);
        var_sub_1_x = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_sub);
        tmp_called_value_5 = var_sub;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_8 = par_g;
        CHECK_OBJECT(var_p);
        tmp_args_element_value_9 = var_p;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_10 = par_target;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sub_1_y == NULL);
        var_sub_1_y = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var_log);
        tmp_called_value_6 = var_log;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_11 = par_g;
        CHECK_OBJECT(var_sub_1_x);
        tmp_args_element_value_12 = var_sub_1_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_log_1_x == NULL);
        var_log_1_x = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_13;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_pos_weight);
        tmp_cmp_expr_left_1 = par_pos_weight;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pos_weight);
        tmp_args_element_value_13 = par_pos_weight;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 110;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[54], tmp_args_element_value_13);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(var_neg);
        tmp_called_value_7 = var_neg;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_14 = par_g;
        CHECK_OBJECT(var_add);
        tmp_called_value_8 = var_add;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_16 = par_g;
        CHECK_OBJECT(var_mul);
        tmp_called_value_9 = var_mul;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_18 = par_g;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_19 = par_target;
        CHECK_OBJECT(var_log_sig_x);
        tmp_args_element_value_20 = var_log_sig_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_args_element_value_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mul);
        tmp_called_value_10 = var_mul;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_22 = par_g;
        CHECK_OBJECT(var_sub_1_y);
        tmp_args_element_value_23 = var_sub_1_y;
        CHECK_OBJECT(var_log_1_x);
        tmp_args_element_value_24 = var_log_1_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_21};
            tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_14;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        CHECK_OBJECT(var_neg);
        tmp_called_value_11 = var_neg;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_25 = par_g;
        CHECK_OBJECT(var_add);
        tmp_called_value_12 = var_add;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_27 = par_g;
        CHECK_OBJECT(var_mul);
        tmp_called_value_13 = var_mul;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_29 = par_g;
        CHECK_OBJECT(var_mul);
        tmp_called_value_14 = var_mul;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_31 = par_g;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_32 = par_target;
        CHECK_OBJECT(var_log_sig_x);
        tmp_args_element_value_33 = var_log_sig_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_pos_weight == NULL) {
            Py_DECREF(tmp_args_element_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_34 = par_pos_weight;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_34};
            tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mul);
        tmp_called_value_15 = var_mul;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_36 = par_g;
        CHECK_OBJECT(var_sub_1_y);
        tmp_args_element_value_37 = var_sub_1_y;
        CHECK_OBJECT(var_log_1_x);
        tmp_args_element_value_38 = var_log_1_x;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_args_element_value_35 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_35};
            tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_15;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_39;
        CHECK_OBJECT(par_weight);
        tmp_cmp_expr_left_2 = par_weight;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_39 = par_weight;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 115;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[54], tmp_args_element_value_39);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        if (var_mul == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_16 = var_mul;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_40 = par_g;
        if (par_weight == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_41 = par_weight;
        CHECK_OBJECT(var_output);
        tmp_args_element_value_42 = var_output;
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_16, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output;
            assert(old != NULL);
            var_output = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reduction);
        tmp_args_element_value_43 = par_reduction;
        tmp_args_element_value_44 = mod_consts[32];
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reduction;
            assert(old != NULL);
            par_reduction = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_reduction);
        tmp_cmp_expr_left_3 = par_reduction;
        tmp_cmp_expr_right_3 = mod_consts[1];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_reduction);
        tmp_cmp_expr_left_4 = par_reduction;
        tmp_cmp_expr_right_4 = mod_consts[53];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooo";
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
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[57];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_output);
        tmp_tuple_element_1 = var_output;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[58]);
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 122;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_reduction);
        tmp_cmp_expr_left_5 = par_reduction;
        tmp_cmp_expr_right_5 = mod_consts[59];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooo";
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
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[60];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_output);
        tmp_tuple_element_2 = var_output;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[58]);
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 124;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71fc0e37624746af51330a6bea341e1d->m_frame.f_lineno = 126;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[61],
            PyTuple_GET_ITEM(mod_consts[62], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_71fc0e37624746af51330a6bea341e1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71fc0e37624746af51330a6bea341e1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71fc0e37624746af51330a6bea341e1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71fc0e37624746af51330a6bea341e1d,
        type_description_1,
        par_g,
        par_input,
        par_target,
        par_weight,
        par_pos_weight,
        par_reduction,
        var_sigmoid,
        var_log,
        var_sub,
        var_neg,
        var_mul,
        var_add,
        var_p,
        var_sig_x,
        var_log_sig_x,
        var_sub_1_x,
        var_sub_1_y,
        var_log_1_x,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_71fc0e37624746af51330a6bea341e1d == cache_frame_71fc0e37624746af51330a6bea341e1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71fc0e37624746af51330a6bea341e1d);
        cache_frame_71fc0e37624746af51330a6bea341e1d = NULL;
    }

    assertFrameObject(frame_71fc0e37624746af51330a6bea341e1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    par_reduction = NULL;
    CHECK_OBJECT(var_sigmoid);
    Py_DECREF(var_sigmoid);
    var_sigmoid = NULL;
    CHECK_OBJECT(var_log);
    Py_DECREF(var_log);
    var_log = NULL;
    CHECK_OBJECT(var_sub);
    Py_DECREF(var_sub);
    var_sub = NULL;
    Py_XDECREF(var_neg);
    var_neg = NULL;
    Py_XDECREF(var_mul);
    var_mul = NULL;
    Py_XDECREF(var_add);
    var_add = NULL;
    CHECK_OBJECT(var_p);
    Py_DECREF(var_p);
    var_p = NULL;
    CHECK_OBJECT(var_sig_x);
    Py_DECREF(var_sig_x);
    var_sig_x = NULL;
    Py_XDECREF(var_log_sig_x);
    var_log_sig_x = NULL;
    CHECK_OBJECT(var_sub_1_x);
    Py_DECREF(var_sub_1_x);
    var_sub_1_x = NULL;
    Py_XDECREF(var_sub_1_y);
    var_sub_1_y = NULL;
    Py_XDECREF(var_log_1_x);
    var_log_1_x = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(par_reduction);
    par_reduction = NULL;
    Py_XDECREF(var_sigmoid);
    var_sigmoid = NULL;
    Py_XDECREF(var_log);
    var_log = NULL;
    Py_XDECREF(var_sub);
    var_sub = NULL;
    Py_XDECREF(var_neg);
    var_neg = NULL;
    Py_XDECREF(var_mul);
    var_mul = NULL;
    Py_XDECREF(var_add);
    var_add = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_sig_x);
    var_sig_x = NULL;
    Py_XDECREF(var_log_sig_x);
    var_log_sig_x = NULL;
    Py_XDECREF(var_sub_1_x);
    var_sub_1_x = NULL;
    Py_XDECREF(var_sub_1_y);
    var_sub_1_y = NULL;
    Py_XDECREF(var_log_1_x);
    var_log_1_x = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_pos_weight);
    Py_DECREF(par_pos_weight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_pos_weight);
    Py_DECREF(par_pos_weight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__10_celu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_alpha = python_pars[2];
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_e8d637c8102a670b6d56037a3ccc92a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e8d637c8102a670b6d56037a3ccc92a4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e8d637c8102a670b6d56037a3ccc92a4)) {
        Py_XDECREF(cache_frame_e8d637c8102a670b6d56037a3ccc92a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8d637c8102a670b6d56037a3ccc92a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8d637c8102a670b6d56037a3ccc92a4 = MAKE_FUNCTION_FRAME(codeobj_e8d637c8102a670b6d56037a3ccc92a4, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8d637c8102a670b6d56037a3ccc92a4->m_type_description == NULL);
    frame_e8d637c8102a670b6d56037a3ccc92a4 = cache_frame_e8d637c8102a670b6d56037a3ccc92a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8d637c8102a670b6d56037a3ccc92a4);
    assert(Py_REFCNT(frame_e8d637c8102a670b6d56037a3ccc92a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_alpha);
        tmp_args_element_value_1 = par_alpha;
        tmp_args_element_value_2 = mod_consts[41];
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_alpha;
            assert(old != NULL);
            par_alpha = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 132;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 132;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[63];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[7];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[64];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 133;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_self;
            assert(old != NULL);
            par_self = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[65];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(par_alpha);
        tmp_kw_call_dict_value_0_2 = par_alpha;
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 134;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_5 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[7];
        CHECK_OBJECT(var_out);
        tmp_kw_call_arg_value_1_3 = var_out;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[9]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[63];
        tmp_kw_call_dict_value_0_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 135;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        CHECK_OBJECT(par_g);
        tmp_expression_value_8 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[65];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_4 = par_self;
        CHECK_OBJECT(par_alpha);
        tmp_kw_call_dict_value_0_4 = par_alpha;
        frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame.f_lineno = 137;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_e8d637c8102a670b6d56037a3ccc92a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8d637c8102a670b6d56037a3ccc92a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8d637c8102a670b6d56037a3ccc92a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8d637c8102a670b6d56037a3ccc92a4,
        type_description_1,
        par_g,
        par_self,
        par_alpha,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_e8d637c8102a670b6d56037a3ccc92a4 == cache_frame_e8d637c8102a670b6d56037a3ccc92a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8d637c8102a670b6d56037a3ccc92a4);
        cache_frame_e8d637c8102a670b6d56037a3ccc92a4 = NULL;
    }

    assertFrameObject(frame_e8d637c8102a670b6d56037a3ccc92a4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_alpha);
    par_alpha = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_alpha);
    par_alpha = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__11_argmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    PyObject *var_flattened = NULL;
    struct Nuitka_FrameObject *frame_2f9c2d81d5565fd37eb1d571dfe40510;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2f9c2d81d5565fd37eb1d571dfe40510 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f9c2d81d5565fd37eb1d571dfe40510)) {
        Py_XDECREF(cache_frame_2f9c2d81d5565fd37eb1d571dfe40510);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f9c2d81d5565fd37eb1d571dfe40510 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f9c2d81d5565fd37eb1d571dfe40510 = MAKE_FUNCTION_FRAME(codeobj_2f9c2d81d5565fd37eb1d571dfe40510, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f9c2d81d5565fd37eb1d571dfe40510->m_type_description == NULL);
    frame_2f9c2d81d5565fd37eb1d571dfe40510 = cache_frame_2f9c2d81d5565fd37eb1d571dfe40510;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f9c2d81d5565fd37eb1d571dfe40510);
    assert(Py_REFCNT(frame_2f9c2d81d5565fd37eb1d571dfe40510) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 141;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[54], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 141;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_2 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_3 = par_input;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[68]);
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 142;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[24], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 142;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flattened == NULL);
        var_flattened = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[69];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_flattened);
        tmp_tuple_element_1 = var_flattened;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[70]);
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 143;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_5 = par_dim;
        tmp_args_element_value_6 = mod_consts[32];
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dim;
            assert(old != NULL);
            par_dim = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keepdim);
        tmp_args_element_value_7 = par_keepdim;
        tmp_args_element_value_8 = mod_consts[32];
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keepdim;
            assert(old != NULL);
            par_keepdim = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[69];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_1_1 = par_keepdim;
        tmp_kw_call_dict_value_2_1 = Py_False;
        frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame.f_lineno = 147;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f9c2d81d5565fd37eb1d571dfe40510, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f9c2d81d5565fd37eb1d571dfe40510->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f9c2d81d5565fd37eb1d571dfe40510, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f9c2d81d5565fd37eb1d571dfe40510,
        type_description_1,
        par_g,
        par_input,
        par_dim,
        par_keepdim,
        var_flattened
    );


    // Release cached frame if used for exception.
    if (frame_2f9c2d81d5565fd37eb1d571dfe40510 == cache_frame_2f9c2d81d5565fd37eb1d571dfe40510) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f9c2d81d5565fd37eb1d571dfe40510);
        cache_frame_2f9c2d81d5565fd37eb1d571dfe40510 = NULL;
    }

    assertFrameObject(frame_2f9c2d81d5565fd37eb1d571dfe40510);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dim);
    par_dim = NULL;
    Py_XDECREF(par_keepdim);
    par_keepdim = NULL;
    Py_XDECREF(var_flattened);
    var_flattened = NULL;
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

    Py_XDECREF(par_dim);
    par_dim = NULL;
    Py_XDECREF(par_keepdim);
    par_keepdim = NULL;
    Py_XDECREF(var_flattened);
    var_flattened = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__12_argmin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    PyObject *var_flattened = NULL;
    struct Nuitka_FrameObject *frame_2b0443b0a66a28e6ba9de5fa58f89004;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b0443b0a66a28e6ba9de5fa58f89004 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2b0443b0a66a28e6ba9de5fa58f89004)) {
        Py_XDECREF(cache_frame_2b0443b0a66a28e6ba9de5fa58f89004);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b0443b0a66a28e6ba9de5fa58f89004 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b0443b0a66a28e6ba9de5fa58f89004 = MAKE_FUNCTION_FRAME(codeobj_2b0443b0a66a28e6ba9de5fa58f89004, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b0443b0a66a28e6ba9de5fa58f89004->m_type_description == NULL);
    frame_2b0443b0a66a28e6ba9de5fa58f89004 = cache_frame_2b0443b0a66a28e6ba9de5fa58f89004;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b0443b0a66a28e6ba9de5fa58f89004);
    assert(Py_REFCNT(frame_2b0443b0a66a28e6ba9de5fa58f89004) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 151;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[54], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 151;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_2 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_3 = par_input;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[68]);
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 152;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[24], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 152;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flattened == NULL);
        var_flattened = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[73];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_flattened);
        tmp_tuple_element_1 = var_flattened;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[70]);
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 153;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_5 = par_dim;
        tmp_args_element_value_6 = mod_consts[32];
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dim;
            assert(old != NULL);
            par_dim = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keepdim);
        tmp_args_element_value_7 = par_keepdim;
        tmp_args_element_value_8 = mod_consts[32];
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keepdim;
            assert(old != NULL);
            par_keepdim = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[73];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_1_1 = par_keepdim;
        tmp_kw_call_dict_value_2_1 = Py_False;
        frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame.f_lineno = 157;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b0443b0a66a28e6ba9de5fa58f89004, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b0443b0a66a28e6ba9de5fa58f89004->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b0443b0a66a28e6ba9de5fa58f89004, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b0443b0a66a28e6ba9de5fa58f89004,
        type_description_1,
        par_g,
        par_input,
        par_dim,
        par_keepdim,
        var_flattened
    );


    // Release cached frame if used for exception.
    if (frame_2b0443b0a66a28e6ba9de5fa58f89004 == cache_frame_2b0443b0a66a28e6ba9de5fa58f89004) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b0443b0a66a28e6ba9de5fa58f89004);
        cache_frame_2b0443b0a66a28e6ba9de5fa58f89004 = NULL;
    }

    assertFrameObject(frame_2b0443b0a66a28e6ba9de5fa58f89004);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dim);
    par_dim = NULL;
    Py_XDECREF(par_keepdim);
    par_keepdim = NULL;
    Py_XDECREF(var_flattened);
    var_flattened = NULL;
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

    Py_XDECREF(par_dim);
    par_dim = NULL;
    Py_XDECREF(par_keepdim);
    par_keepdim = NULL;
    Py_XDECREF(var_flattened);
    var_flattened = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__13_pow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_exponent = python_pars[2];
    struct Nuitka_FrameObject *frame_4647ca50e7e732c6dca2820fb9ebcb5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e)) {
        Py_XDECREF(cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e = MAKE_FUNCTION_FRAME(codeobj_4647ca50e7e732c6dca2820fb9ebcb5e, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e->m_type_description == NULL);
    frame_4647ca50e7e732c6dca2820fb9ebcb5e = cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4647ca50e7e732c6dca2820fb9ebcb5e);
    assert(Py_REFCNT(frame_4647ca50e7e732c6dca2820fb9ebcb5e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_1 = mod_consts[74];
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_exponent);
        tmp_args_element_value_3 = par_exponent;
        frame_4647ca50e7e732c6dca2820fb9ebcb5e->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_4647ca50e7e732c6dca2820fb9ebcb5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4647ca50e7e732c6dca2820fb9ebcb5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4647ca50e7e732c6dca2820fb9ebcb5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4647ca50e7e732c6dca2820fb9ebcb5e,
        type_description_1,
        par_g,
        par_self,
        par_exponent
    );


    // Release cached frame if used for exception.
    if (frame_4647ca50e7e732c6dca2820fb9ebcb5e == cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e);
        cache_frame_4647ca50e7e732c6dca2820fb9ebcb5e = NULL;
    }

    assertFrameObject(frame_4647ca50e7e732c6dca2820fb9ebcb5e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exponent);
    Py_DECREF(par_exponent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exponent);
    Py_DECREF(par_exponent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__14_ge(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_other = python_pars[2];
    struct Nuitka_FrameObject *frame_f30eef7adfee94f54bd47652a82baaf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f30eef7adfee94f54bd47652a82baaf3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f30eef7adfee94f54bd47652a82baaf3)) {
        Py_XDECREF(cache_frame_f30eef7adfee94f54bd47652a82baaf3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f30eef7adfee94f54bd47652a82baaf3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f30eef7adfee94f54bd47652a82baaf3 = MAKE_FUNCTION_FRAME(codeobj_f30eef7adfee94f54bd47652a82baaf3, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f30eef7adfee94f54bd47652a82baaf3->m_type_description == NULL);
    frame_f30eef7adfee94f54bd47652a82baaf3 = cache_frame_f30eef7adfee94f54bd47652a82baaf3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f30eef7adfee94f54bd47652a82baaf3);
    assert(Py_REFCNT(frame_f30eef7adfee94f54bd47652a82baaf3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_1 = mod_consts[75];
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_f30eef7adfee94f54bd47652a82baaf3->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_f30eef7adfee94f54bd47652a82baaf3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f30eef7adfee94f54bd47652a82baaf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f30eef7adfee94f54bd47652a82baaf3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f30eef7adfee94f54bd47652a82baaf3,
        type_description_1,
        par_g,
        par_input,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_f30eef7adfee94f54bd47652a82baaf3 == cache_frame_f30eef7adfee94f54bd47652a82baaf3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f30eef7adfee94f54bd47652a82baaf3);
        cache_frame_f30eef7adfee94f54bd47652a82baaf3 = NULL;
    }

    assertFrameObject(frame_f30eef7adfee94f54bd47652a82baaf3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__15_le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_other = python_pars[2];
    struct Nuitka_FrameObject *frame_c5f984711e28532666e7720de6465725;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5f984711e28532666e7720de6465725 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5f984711e28532666e7720de6465725)) {
        Py_XDECREF(cache_frame_c5f984711e28532666e7720de6465725);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5f984711e28532666e7720de6465725 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5f984711e28532666e7720de6465725 = MAKE_FUNCTION_FRAME(codeobj_c5f984711e28532666e7720de6465725, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5f984711e28532666e7720de6465725->m_type_description == NULL);
    frame_c5f984711e28532666e7720de6465725 = cache_frame_c5f984711e28532666e7720de6465725;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5f984711e28532666e7720de6465725);
    assert(Py_REFCNT(frame_c5f984711e28532666e7720de6465725) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_1 = mod_consts[76];
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_c5f984711e28532666e7720de6465725->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c5f984711e28532666e7720de6465725, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5f984711e28532666e7720de6465725->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5f984711e28532666e7720de6465725, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5f984711e28532666e7720de6465725,
        type_description_1,
        par_g,
        par_input,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c5f984711e28532666e7720de6465725 == cache_frame_c5f984711e28532666e7720de6465725) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5f984711e28532666e7720de6465725);
        cache_frame_c5f984711e28532666e7720de6465725 = NULL;
    }

    assertFrameObject(frame_c5f984711e28532666e7720de6465725);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__16_unfold(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_dimension = python_pars[2];
    PyObject *par_size = python_pars[3];
    PyObject *par_step = python_pars[4];
    PyObject *var_const_size = NULL;
    PyObject *var_const_step = NULL;
    PyObject *var__unfold = NULL;
    PyObject *var_sizedim = NULL;
    PyObject *var_low_start = NULL;
    PyObject *var_low_end = NULL;
    PyObject *var_hi_end = NULL;
    PyObject *var_low_indices = NULL;
    PyObject *var_hi_indices = NULL;
    PyObject *var_low_size = NULL;
    PyObject *var_hi_size = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_perm = NULL;
    PyObject *var_unsqueeze_list = NULL;
    PyObject *var_loop_condition = NULL;
    PyObject *var_loop_len = NULL;
    PyObject *var_loop = NULL;
    PyObject *var_loop_block = NULL;
    PyObject *var_block_input_iter = NULL;
    PyObject *var_cond = NULL;
    PyObject *var_starts = NULL;
    PyObject *var_ends = NULL;
    PyObject *var_axes = NULL;
    PyObject *var_stack = NULL;
    PyObject *var_unsqueeze = NULL;
    PyObject *var_concat = NULL;
    PyObject *var_cond_out = NULL;
    PyObject *var_loop_output = NULL;
    PyObject *var_transpose = NULL;
    PyObject *var_squeeze = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d74508ada77570897e1f1c3a5cf820a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_d74508ada77570897e1f1c3a5cf820a2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d74508ada77570897e1f1c3a5cf820a2)) {
        Py_XDECREF(cache_frame_d74508ada77570897e1f1c3a5cf820a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d74508ada77570897e1f1c3a5cf820a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d74508ada77570897e1f1c3a5cf820a2 = MAKE_FUNCTION_FRAME(codeobj_d74508ada77570897e1f1c3a5cf820a2, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d74508ada77570897e1f1c3a5cf820a2->m_type_description == NULL);
    frame_d74508ada77570897e1f1c3a5cf820a2 = cache_frame_d74508ada77570897e1f1c3a5cf820a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d74508ada77570897e1f1c3a5cf820a2);
    assert(Py_REFCNT(frame_d74508ada77570897e1f1c3a5cf820a2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_args_element_value_1 = par_size;
        tmp_args_element_value_2 = mod_consts[32];
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_const_size == NULL);
        var_const_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_step);
        tmp_args_element_value_3 = par_step;
        tmp_args_element_value_4 = mod_consts[32];
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_const_step == NULL);
        var_const_step = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_const_size);
        tmp_args_element_value_5 = var_const_size;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 173;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[77], tmp_args_element_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_const_step);
        tmp_args_element_value_6 = var_const_step;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 173;
        tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[77], tmp_args_element_value_6);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[45];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[78];
        tmp_level_value_1 = mod_consts[1];
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 174;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[79],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__unfold == NULL);
        var__unfold = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var__unfold);
        tmp_called_value_1 = var__unfold;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_7 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_8 = par_input;
        CHECK_OBJECT(par_dimension);
        tmp_args_element_value_9 = par_dimension;
        CHECK_OBJECT(var_const_size);
        tmp_args_element_value_10 = var_const_size;
        if (var_const_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_const_step;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[83]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_5 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[85];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        tmp_kw_call_dict_value_0_1 = mod_consts[79];
        CHECK_OBJECT(par_dimension);
        tmp_kw_call_dict_value_1_1 = par_dimension;
        CHECK_OBJECT(par_size);
        tmp_kw_call_dict_value_2_1 = par_size;
        CHECK_OBJECT(par_step);
        tmp_kw_call_dict_value_3_1 = par_step;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 177;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_12 = par_input;
        CHECK_OBJECT(par_dimension);
        tmp_args_element_value_13 = par_dimension;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizedim == NULL);
        var_sizedim = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_sizedim);
        tmp_cmp_expr_left_2 = var_sizedim;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_g);
        tmp_expression_value_6 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 181;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 181;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_low_start == NULL);
        var_low_start = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizedim);
        tmp_args_element_value_14 = var_sizedim;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 182;
        tmp_kw_call_value_0_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[24], tmp_args_element_value_14);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 182;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_low_end == NULL);
        var_low_end = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_8 = par_g;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[6]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[24]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizedim);
        tmp_add_expr_left_1 = var_sizedim;
        tmp_add_expr_right_1 = mod_consts[53];
        tmp_args_element_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 183;
        tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 183;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hi_end == NULL);
        var_hi_end = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_g);
        tmp_called_instance_8 = par_g;
        tmp_args_element_value_16 = mod_consts[89];
        CHECK_OBJECT(var_low_start);
        tmp_args_element_value_17 = var_low_start;
        CHECK_OBJECT(var_low_end);
        tmp_args_element_value_18 = var_low_end;
        CHECK_OBJECT(par_step);
        tmp_args_element_value_19 = par_step;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_8,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_low_indices == NULL);
        var_low_indices = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        CHECK_OBJECT(par_g);
        tmp_called_instance_9 = par_g;
        tmp_args_element_value_20 = mod_consts[89];
        CHECK_OBJECT(par_size);
        tmp_args_element_value_21 = par_size;
        CHECK_OBJECT(var_hi_end);
        tmp_args_element_value_22 = var_hi_end;
        CHECK_OBJECT(par_step);
        tmp_args_element_value_23 = par_step;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_9,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hi_indices == NULL);
        var_hi_indices = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_called_instance_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[90]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_24 = par_g;
        CHECK_OBJECT(var_low_indices);
        tmp_args_element_value_25 = var_low_indices;
        CHECK_OBJECT(par_g);
        tmp_expression_value_11 = par_g;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[6]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 187;
        tmp_kw_call_value_0_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 187;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_26 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_8, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_low_size == NULL);
        var_low_size = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_called_instance_11;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[90]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_27 = par_g;
        CHECK_OBJECT(var_hi_indices);
        tmp_args_element_value_28 = var_hi_indices;
        CHECK_OBJECT(par_g);
        tmp_expression_value_13 = par_g;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[6]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 188;
        tmp_kw_call_value_0_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 188;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_args_element_value_29 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_10, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hi_size == NULL);
        var_hi_size = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_30;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_30 = par_input;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 190;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[91], tmp_args_element_value_30);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ndim == NULL);
        var_ndim = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        tmp_xrange_low_1 = mod_consts[1];
        CHECK_OBJECT(var_ndim);
        tmp_xrange_high_1 = var_ndim;
        tmp_list_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_perm == NULL);
        var_perm = tmp_assign_source_13;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_index_value_1;
        CHECK_OBJECT(var_perm);
        tmp_list_arg_value_1 = var_perm;
        CHECK_OBJECT(var_perm);
        tmp_list_arg_value_2 = var_perm;
        CHECK_OBJECT(par_dimension);
        tmp_index_value_1 = par_dimension;
        tmp_item_value_1 = LIST_POP2(tmp_list_arg_value_2, tmp_index_value_1);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_LIST_EMPTY(0);
        assert(var_unsqueeze_list == NULL);
        var_unsqueeze_list = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_called_instance_13;
        CHECK_OBJECT(par_g);
        tmp_expression_value_14 = par_g;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[6]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 195;
        tmp_kw_call_value_0_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[92], 0)
        );

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 195;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_11, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_condition == NULL);
        var_loop_condition = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_15 = par_g;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[6]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[7];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_loop_condition);
        tmp_tuple_element_1 = var_loop_condition;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[93]);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 196;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_loop_condition;
            assert(old != NULL);
            var_loop_condition = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        CHECK_OBJECT(par_g);
        tmp_called_instance_14 = par_g;
        tmp_args_element_value_31 = mod_consts[94];
        CHECK_OBJECT(var_low_size);
        tmp_args_element_value_32 = var_low_size;
        CHECK_OBJECT(var_hi_size);
        tmp_args_element_value_33 = var_hi_size;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_14,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_len == NULL);
        var_loop_len = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        CHECK_OBJECT(par_g);
        tmp_called_instance_15 = par_g;
        tmp_args_element_value_34 = mod_consts[95];
        CHECK_OBJECT(var_loop_len);
        tmp_args_element_value_35 = var_loop_len;
        CHECK_OBJECT(var_loop_condition);
        tmp_args_element_value_36 = var_loop_condition;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_15,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop == NULL);
        var_loop = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_instance_16;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop);
        tmp_called_instance_16 = var_loop;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 200;
        tmp_args_element_value_37 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[36]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 200;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_block == NULL);
        var_loop_block = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_38 = var_loop_block;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 201;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_38);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_block_input_iter == NULL);
        var_block_input_iter = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_39;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_39 = var_loop_block;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 202;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_39);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cond == NULL);
        var_cond = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        CHECK_OBJECT(var_loop_block);
        tmp_called_instance_17 = var_loop_block;
        tmp_args_element_value_40 = mod_consts[98];
        CHECK_OBJECT(var_low_indices);
        tmp_args_element_value_41 = var_low_indices;
        CHECK_OBJECT(var_block_input_iter);
        tmp_args_element_value_42 = var_block_input_iter;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_17,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_starts == NULL);
        var_starts = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        CHECK_OBJECT(var_loop_block);
        tmp_called_instance_18 = var_loop_block;
        tmp_args_element_value_43 = mod_consts[98];
        CHECK_OBJECT(var_hi_indices);
        tmp_args_element_value_44 = var_hi_indices;
        CHECK_OBJECT(var_block_input_iter);
        tmp_args_element_value_45 = var_block_input_iter;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_18,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ends == NULL);
        var_ends = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_16 = var_loop_block;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[6]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[59]);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 206;
        tmp_kw_call_value_0_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[24], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 206;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_16, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_axes == NULL);
        var_axes = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_46 = var_loop_block;
        CHECK_OBJECT(var_starts);
        tmp_args_element_value_47 = var_starts;
        tmp_args_element_value_48 = MAKE_LIST1(mod_consts[1]);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_20,
                mod_consts[99],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_48);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_starts;
            assert(old != NULL);
            var_starts = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_49 = var_loop_block;
        CHECK_OBJECT(var_ends);
        tmp_args_element_value_50 = var_ends;
        tmp_args_element_value_51 = MAKE_LIST1(mod_consts[1]);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_26 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_21,
                mod_consts[99],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ends;
            assert(old != NULL);
            var_ends = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        CHECK_OBJECT(var_loop_block);
        tmp_called_instance_22 = var_loop_block;
        tmp_args_element_value_52 = mod_consts[100];
        CHECK_OBJECT(par_input);
        tmp_args_element_value_53 = par_input;
        CHECK_OBJECT(var_starts);
        tmp_args_element_value_54 = var_starts;
        CHECK_OBJECT(var_ends);
        tmp_args_element_value_55 = var_ends;
        CHECK_OBJECT(var_axes);
        tmp_args_element_value_56 = var_axes;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS5(
                tmp_called_instance_22,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stack == NULL);
        var_stack = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_list_element_1;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[99]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_57 = var_loop_block;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_18 = var_loop_block;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[6]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[101];
        CHECK_OBJECT(var_stack);
        tmp_kw_call_arg_value_1_2 = var_stack;
        CHECK_OBJECT(var_perm);
        tmp_kw_call_dict_value_0_2 = var_perm;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 211;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_args_element_value_58 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_18, args, kw_values, mod_consts[102]);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dimension);
        tmp_list_element_1 = par_dimension;
        tmp_args_element_value_59 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_59, 0, tmp_list_element_1);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_unsqueeze == NULL);
        var_unsqueeze = tmp_assign_source_28;
    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_2;
        CHECK_OBJECT(var_unsqueeze_list);
        tmp_list_arg_value_3 = var_unsqueeze_list;
        CHECK_OBJECT(var_unsqueeze);
        tmp_item_value_2 = var_unsqueeze;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_19 = var_loop_block;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[6]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[103];
        CHECK_OBJECT(var_unsqueeze_list);
        tmp_dircall_arg3_1 = var_unsqueeze_list;
        tmp_dircall_arg4_1 = DICT_COPY(mod_consts[104]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_29 = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_concat == NULL);
        var_concat = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_20 = var_loop_block;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[6]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[7];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_loop_condition);
        tmp_tuple_element_2 = var_loop_condition;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[93]);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 215;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cond_out == NULL);
        var_cond_out = tmp_assign_source_30;
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_60 = var_loop_block;
        CHECK_OBJECT(var_cond_out);
        tmp_args_element_value_61 = var_cond_out;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_62 = var_loop_block;
        CHECK_OBJECT(var_concat);
        tmp_args_element_value_63 = var_concat;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_called_instance_24;
        CHECK_OBJECT(var_loop);
        tmp_called_instance_24 = var_loop;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 219;
        tmp_called_instance_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_24, mod_consts[36]);
        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 219;
        tmp_assign_source_31 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[106]);
        Py_DECREF(tmp_called_instance_23);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_output == NULL);
        var_loop_output = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_LIST5(mod_consts[107]);
        {
            PyObject *old = var_perm;
            assert(old != NULL);
            var_perm = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_perm);
        tmp_expression_value_21 = var_perm;
        CHECK_OBJECT(par_dimension);
        tmp_add_expr_left_2 = par_dimension;
        tmp_add_expr_right_2 = mod_consts[53];
        tmp_subscript_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_perm);
            tmp_expression_value_22 = var_perm;
            tmp_subscript_value_2 = mod_consts[1];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_2, 0);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_33 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_33 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            exception_lineno = 221;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            exception_lineno = 221;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_35;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 221;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            exception_lineno = 221;
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
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT(var_perm);
        tmp_ass_subscribed_1 = var_perm;
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_ass_subvalue_2 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(var_perm);
        tmp_ass_subscribed_2 = var_perm;
        CHECK_OBJECT(par_dimension);
        tmp_add_expr_left_3 = par_dimension;
        tmp_add_expr_right_3 = mod_consts[53];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
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
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_23 = par_g;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[6]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[101];
        CHECK_OBJECT(var_loop_output);
        tmp_kw_call_arg_value_1_3 = var_loop_output;
        CHECK_OBJECT(var_perm);
        tmp_kw_call_dict_value_0_3 = var_perm;
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 222;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[102]);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_transpose == NULL);
        var_transpose = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_64 = par_g;
        CHECK_OBJECT(var_transpose);
        tmp_args_element_value_65 = var_transpose;
        tmp_args_element_value_66 = MAKE_LIST1(mod_consts[1]);
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_assign_source_37 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_25,
                mod_consts[108],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_66);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_squeeze == NULL);
        var_squeeze = tmp_assign_source_37;
    }
    CHECK_OBJECT(var_squeeze);
    tmp_return_value = var_squeeze;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d74508ada77570897e1f1c3a5cf820a2->m_frame.f_lineno = 227;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[110]);

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d74508ada77570897e1f1c3a5cf820a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d74508ada77570897e1f1c3a5cf820a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d74508ada77570897e1f1c3a5cf820a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d74508ada77570897e1f1c3a5cf820a2,
        type_description_1,
        par_g,
        par_input,
        par_dimension,
        par_size,
        par_step,
        var_const_size,
        var_const_step,
        var__unfold,
        var_sizedim,
        var_low_start,
        var_low_end,
        var_hi_end,
        var_low_indices,
        var_hi_indices,
        var_low_size,
        var_hi_size,
        var_ndim,
        var_perm,
        var_unsqueeze_list,
        var_loop_condition,
        var_loop_len,
        var_loop,
        var_loop_block,
        var_block_input_iter,
        var_cond,
        var_starts,
        var_ends,
        var_axes,
        var_stack,
        var_unsqueeze,
        var_concat,
        var_cond_out,
        var_loop_output,
        var_transpose,
        var_squeeze
    );


    // Release cached frame if used for exception.
    if (frame_d74508ada77570897e1f1c3a5cf820a2 == cache_frame_d74508ada77570897e1f1c3a5cf820a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d74508ada77570897e1f1c3a5cf820a2);
        cache_frame_d74508ada77570897e1f1c3a5cf820a2 = NULL;
    }

    assertFrameObject(frame_d74508ada77570897e1f1c3a5cf820a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_const_size);
    Py_DECREF(var_const_size);
    var_const_size = NULL;
    Py_XDECREF(var_const_step);
    var_const_step = NULL;
    Py_XDECREF(var__unfold);
    var__unfold = NULL;
    Py_XDECREF(var_sizedim);
    var_sizedim = NULL;
    Py_XDECREF(var_low_start);
    var_low_start = NULL;
    Py_XDECREF(var_low_end);
    var_low_end = NULL;
    Py_XDECREF(var_hi_end);
    var_hi_end = NULL;
    Py_XDECREF(var_low_indices);
    var_low_indices = NULL;
    Py_XDECREF(var_hi_indices);
    var_hi_indices = NULL;
    Py_XDECREF(var_low_size);
    var_low_size = NULL;
    Py_XDECREF(var_hi_size);
    var_hi_size = NULL;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    Py_XDECREF(var_perm);
    var_perm = NULL;
    Py_XDECREF(var_unsqueeze_list);
    var_unsqueeze_list = NULL;
    Py_XDECREF(var_loop_condition);
    var_loop_condition = NULL;
    Py_XDECREF(var_loop_len);
    var_loop_len = NULL;
    Py_XDECREF(var_loop);
    var_loop = NULL;
    Py_XDECREF(var_loop_block);
    var_loop_block = NULL;
    Py_XDECREF(var_block_input_iter);
    var_block_input_iter = NULL;
    Py_XDECREF(var_cond);
    var_cond = NULL;
    Py_XDECREF(var_starts);
    var_starts = NULL;
    Py_XDECREF(var_ends);
    var_ends = NULL;
    Py_XDECREF(var_axes);
    var_axes = NULL;
    Py_XDECREF(var_stack);
    var_stack = NULL;
    Py_XDECREF(var_unsqueeze);
    var_unsqueeze = NULL;
    Py_XDECREF(var_concat);
    var_concat = NULL;
    Py_XDECREF(var_cond_out);
    var_cond_out = NULL;
    Py_XDECREF(var_loop_output);
    var_loop_output = NULL;
    Py_XDECREF(var_transpose);
    var_transpose = NULL;
    Py_XDECREF(var_squeeze);
    var_squeeze = NULL;
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

    Py_XDECREF(var_const_size);
    var_const_size = NULL;
    Py_XDECREF(var_const_step);
    var_const_step = NULL;
    Py_XDECREF(var__unfold);
    var__unfold = NULL;
    Py_XDECREF(var_sizedim);
    var_sizedim = NULL;
    Py_XDECREF(var_low_start);
    var_low_start = NULL;
    Py_XDECREF(var_low_end);
    var_low_end = NULL;
    Py_XDECREF(var_hi_end);
    var_hi_end = NULL;
    Py_XDECREF(var_low_indices);
    var_low_indices = NULL;
    Py_XDECREF(var_hi_indices);
    var_hi_indices = NULL;
    Py_XDECREF(var_low_size);
    var_low_size = NULL;
    Py_XDECREF(var_hi_size);
    var_hi_size = NULL;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    Py_XDECREF(var_perm);
    var_perm = NULL;
    Py_XDECREF(var_unsqueeze_list);
    var_unsqueeze_list = NULL;
    Py_XDECREF(var_loop_condition);
    var_loop_condition = NULL;
    Py_XDECREF(var_loop_len);
    var_loop_len = NULL;
    Py_XDECREF(var_loop);
    var_loop = NULL;
    Py_XDECREF(var_loop_block);
    var_loop_block = NULL;
    Py_XDECREF(var_block_input_iter);
    var_block_input_iter = NULL;
    Py_XDECREF(var_cond);
    var_cond = NULL;
    Py_XDECREF(var_starts);
    var_starts = NULL;
    Py_XDECREF(var_ends);
    var_ends = NULL;
    Py_XDECREF(var_axes);
    var_axes = NULL;
    Py_XDECREF(var_stack);
    var_stack = NULL;
    Py_XDECREF(var_unsqueeze);
    var_unsqueeze = NULL;
    Py_XDECREF(var_concat);
    var_concat = NULL;
    Py_XDECREF(var_cond_out);
    var_cond_out = NULL;
    Py_XDECREF(var_loop_output);
    var_loop_output = NULL;
    Py_XDECREF(var_transpose);
    var_transpose = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dimension);
    Py_DECREF(par_dimension);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_step);
    Py_DECREF(par_step);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dimension);
    Py_DECREF(par_dimension);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_step);
    Py_DECREF(par_step);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset12$$$function__17_tensordot(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input_a = python_pars[1];
    PyObject *par_input_b = python_pars[2];
    PyObject *par_dims_a = python_pars[3];
    PyObject *par_dims_b = python_pars[4];
    PyObject *par_out = python_pars[5];
    PyObject *var_dim_count_a = NULL;
    PyObject *var_dim_count_b = NULL;
    PyObject *var_left_dims_a = NULL;
    PyObject *var_left_dims_b = NULL;
    PyObject *var_new_input_a = NULL;
    PyObject *var_new_input_b = NULL;
    PyObject *var_input_shape = NULL;
    PyObject *var_left_sizes_a = NULL;
    PyObject *var_shape_sizes = NULL;
    PyObject *var_output_a = NULL;
    PyObject *var_slices = NULL;
    PyObject *var_left_sizes_b = NULL;
    PyObject *var_output_b = NULL;
    PyObject *var_output = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var_i = NULL;
    PyObject *outline_2_var_i = NULL;
    PyObject *outline_3_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_359085ad5d04db521404a7c8b0f3b5f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_be8289b614c29b87bde8ac86205e304f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_be8289b614c29b87bde8ac86205e304f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_77999bcea1c4a68777c0701e3f2e8f6f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_f77aa0033b0c930bdf603797ec3fe14f_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_346dcd5c25741c2bfb796c0758d8c624_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_346dcd5c25741c2bfb796c0758d8c624_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_359085ad5d04db521404a7c8b0f3b5f0 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_359085ad5d04db521404a7c8b0f3b5f0)) {
        Py_XDECREF(cache_frame_359085ad5d04db521404a7c8b0f3b5f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_359085ad5d04db521404a7c8b0f3b5f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_359085ad5d04db521404a7c8b0f3b5f0 = MAKE_FUNCTION_FRAME(codeobj_359085ad5d04db521404a7c8b0f3b5f0, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_359085ad5d04db521404a7c8b0f3b5f0->m_type_description == NULL);
    frame_359085ad5d04db521404a7c8b0f3b5f0 = cache_frame_359085ad5d04db521404a7c8b0f3b5f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_359085ad5d04db521404a7c8b0f3b5f0);
    assert(Py_REFCNT(frame_359085ad5d04db521404a7c8b0f3b5f0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_out);
        tmp_cmp_expr_left_1 = par_out;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 232;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[111]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input_a);
        tmp_args_element_value_1 = par_input_a;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 234;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[91], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_count_a == NULL);
        var_dim_count_a = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_dim_count_a);
        tmp_cmp_expr_left_2 = var_dim_count_a;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
        tmp_make_exception_arg_1 = mod_consts[112];
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 236;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 236;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input_b);
        tmp_args_element_value_2 = par_input_b;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 238;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[91], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_count_b == NULL);
        var_dim_count_b = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_dim_count_b);
        tmp_cmp_expr_left_3 = var_dim_count_b;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[113];
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 240;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 240;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT(par_dims_a);
            tmp_len_arg_1 = par_dims_a;
            tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_xrange_low_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            Py_DECREF(tmp_xrange_low_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        if (isFrameUnusable(cache_frame_be8289b614c29b87bde8ac86205e304f_2)) {
            Py_XDECREF(cache_frame_be8289b614c29b87bde8ac86205e304f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_be8289b614c29b87bde8ac86205e304f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_be8289b614c29b87bde8ac86205e304f_2 = MAKE_FUNCTION_FRAME(codeobj_be8289b614c29b87bde8ac86205e304f, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_be8289b614c29b87bde8ac86205e304f_2->m_type_description == NULL);
        frame_be8289b614c29b87bde8ac86205e304f_2 = cache_frame_be8289b614c29b87bde8ac86205e304f_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_be8289b614c29b87bde8ac86205e304f_2);
        assert(Py_REFCNT(frame_be8289b614c29b87bde8ac86205e304f_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 242;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_7;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(par_dims_a);
            tmp_expression_value_1 = par_dims_a;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_1 = outline_0_var_i;
            tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_cmp_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_cmp_expr_right_4 = mod_consts[1];
            tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            Py_DECREF(tmp_cmp_expr_left_4);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(par_dims_a);
            tmp_expression_value_2 = par_dims_a;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_2 = outline_0_var_i;
            tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (var_dim_count_a == NULL) {
                Py_DECREF(tmp_add_expr_left_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[114]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_add_expr_right_1 = var_dim_count_a;
            tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(par_dims_a);
            tmp_expression_value_3 = par_dims_a;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_3 = outline_0_var_i;
            tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            condexpr_end_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_3);
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
            exception_tb = MAKE_TRACEBACK(frame_be8289b614c29b87bde8ac86205e304f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_be8289b614c29b87bde8ac86205e304f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_be8289b614c29b87bde8ac86205e304f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_be8289b614c29b87bde8ac86205e304f_2,
            type_description_2,
            outline_0_var_i,
            par_dims_a,
            var_dim_count_a
        );


        // Release cached frame if used for exception.
        if (frame_be8289b614c29b87bde8ac86205e304f_2 == cache_frame_be8289b614c29b87bde8ac86205e304f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_be8289b614c29b87bde8ac86205e304f_2);
            cache_frame_be8289b614c29b87bde8ac86205e304f_2 = NULL;
        }

        assertFrameObject(frame_be8289b614c29b87bde8ac86205e304f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
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

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
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
        exception_lineno = 242;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_dims_a;
            assert(old != NULL);
            par_dims_a = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT(par_dims_b);
            tmp_len_arg_2 = par_dims_b;
            tmp_xrange_low_2 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_xrange_low_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_iter_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_2);
            Py_DECREF(tmp_xrange_low_2);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_10;
        }
        if (isFrameUnusable(cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3)) {
            Py_XDECREF(cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3 = MAKE_FUNCTION_FRAME(codeobj_77999bcea1c4a68777c0701e3f2e8f6f, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3->m_type_description == NULL);
        frame_77999bcea1c4a68777c0701e3f2e8f6f_3 = cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_77999bcea1c4a68777c0701e3f2e8f6f_3);
        assert(Py_REFCNT(frame_77999bcea1c4a68777c0701e3f2e8f6f_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 243;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_12 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_i;
                outline_1_var_i = tmp_assign_source_12;
                Py_INCREF(outline_1_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(par_dims_b);
            tmp_expression_value_4 = par_dims_b;
            CHECK_OBJECT(outline_1_var_i);
            tmp_subscript_value_4 = outline_1_var_i;
            tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_cmp_expr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_cmp_expr_right_5 = mod_consts[1];
            tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            Py_DECREF(tmp_cmp_expr_left_5);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(par_dims_b);
            tmp_expression_value_5 = par_dims_b;
            CHECK_OBJECT(outline_1_var_i);
            tmp_subscript_value_5 = outline_1_var_i;
            tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
            if (tmp_add_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            if (var_dim_count_b == NULL) {
                Py_DECREF(tmp_add_expr_left_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[115]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }

            tmp_add_expr_right_2 = var_dim_count_b;
            tmp_append_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            CHECK_OBJECT(par_dims_b);
            tmp_expression_value_6 = par_dims_b;
            CHECK_OBJECT(outline_1_var_i);
            tmp_subscript_value_6 = outline_1_var_i;
            tmp_append_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            condexpr_end_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_8 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_77999bcea1c4a68777c0701e3f2e8f6f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_77999bcea1c4a68777c0701e3f2e8f6f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_77999bcea1c4a68777c0701e3f2e8f6f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_77999bcea1c4a68777c0701e3f2e8f6f_3,
            type_description_2,
            outline_1_var_i,
            par_dims_b,
            var_dim_count_b
        );


        // Release cached frame if used for exception.
        if (frame_77999bcea1c4a68777c0701e3f2e8f6f_3 == cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3);
            cache_frame_77999bcea1c4a68777c0701e3f2e8f6f_3 = NULL;
        }

        assertFrameObject(frame_77999bcea1c4a68777c0701e3f2e8f6f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_i);
        outline_1_var_i = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_i);
        outline_1_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 243;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = par_dims_b;
            assert(old != NULL);
            par_dims_b = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_xrange_low_3;
            if (var_dim_count_a == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[114]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_xrange_low_3 = var_dim_count_a;
            tmp_iter_arg_3 = BUILTIN_XRANGE1(tmp_xrange_low_3);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_15;
        }
        if (isFrameUnusable(cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4)) {
            Py_XDECREF(cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4 = MAKE_FUNCTION_FRAME(codeobj_f77aa0033b0c930bdf603797ec3fe14f, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4->m_type_description == NULL);
        frame_f77aa0033b0c930bdf603797ec3fe14f_4 = cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f77aa0033b0c930bdf603797ec3fe14f_4);
        assert(Py_REFCNT(frame_f77aa0033b0c930bdf603797ec3fe14f_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 245;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_17 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_i;
                outline_2_var_i = tmp_assign_source_17;
                Py_INCREF(outline_2_var_i);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(outline_2_var_i);
            tmp_cmp_expr_left_6 = outline_2_var_i;
            CHECK_OBJECT(par_dims_a);
            tmp_cmp_expr_right_6 = par_dims_a;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_i);
            tmp_append_value_3 = outline_2_var_i;
            tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        branch_no_4:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_13 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f77aa0033b0c930bdf603797ec3fe14f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f77aa0033b0c930bdf603797ec3fe14f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f77aa0033b0c930bdf603797ec3fe14f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f77aa0033b0c930bdf603797ec3fe14f_4,
            type_description_2,
            outline_2_var_i,
            par_dims_a
        );


        // Release cached frame if used for exception.
        if (frame_f77aa0033b0c930bdf603797ec3fe14f_4 == cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4);
            cache_frame_f77aa0033b0c930bdf603797ec3fe14f_4 = NULL;
        }

        assertFrameObject(frame_f77aa0033b0c930bdf603797ec3fe14f_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_2_var_i);
        outline_2_var_i = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_i);
        outline_2_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 245;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_left_dims_a == NULL);
        var_left_dims_a = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_18;
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_xrange_low_4;
            if (var_dim_count_b == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[115]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_xrange_low_4 = var_dim_count_b;
            tmp_iter_arg_4 = BUILTIN_XRANGE1(tmp_xrange_low_4);
            if (tmp_iter_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_20;
        }
        if (isFrameUnusable(cache_frame_346dcd5c25741c2bfb796c0758d8c624_5)) {
            Py_XDECREF(cache_frame_346dcd5c25741c2bfb796c0758d8c624_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_346dcd5c25741c2bfb796c0758d8c624_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_346dcd5c25741c2bfb796c0758d8c624_5 = MAKE_FUNCTION_FRAME(codeobj_346dcd5c25741c2bfb796c0758d8c624, module_torch$onnx$symbolic_opset12, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_346dcd5c25741c2bfb796c0758d8c624_5->m_type_description == NULL);
        frame_346dcd5c25741c2bfb796c0758d8c624_5 = cache_frame_346dcd5c25741c2bfb796c0758d8c624_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_346dcd5c25741c2bfb796c0758d8c624_5);
        assert(Py_REFCNT(frame_346dcd5c25741c2bfb796c0758d8c624_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_21 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 246;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_22 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_3_var_i;
                outline_3_var_i = tmp_assign_source_22;
                Py_INCREF(outline_3_var_i);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(outline_3_var_i);
            tmp_cmp_expr_left_7 = outline_3_var_i;
            CHECK_OBJECT(par_dims_b);
            tmp_cmp_expr_right_7 = par_dims_b;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "oo";
                goto try_except_handler_9;
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
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_i);
            tmp_append_value_4 = outline_3_var_i;
            tmp_result = LIST_APPEND0(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
        }
        branch_no_5:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_2 = "oo";
            goto try_except_handler_9;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_18 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_5;
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

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_346dcd5c25741c2bfb796c0758d8c624_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_346dcd5c25741c2bfb796c0758d8c624_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_346dcd5c25741c2bfb796c0758d8c624_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_346dcd5c25741c2bfb796c0758d8c624_5,
            type_description_2,
            outline_3_var_i,
            par_dims_b
        );


        // Release cached frame if used for exception.
        if (frame_346dcd5c25741c2bfb796c0758d8c624_5 == cache_frame_346dcd5c25741c2bfb796c0758d8c624_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_346dcd5c25741c2bfb796c0758d8c624_5);
            cache_frame_346dcd5c25741c2bfb796c0758d8c624_5 = NULL;
        }

        assertFrameObject(frame_346dcd5c25741c2bfb796c0758d8c624_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_3_var_i);
        outline_3_var_i = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_3_var_i);
        outline_3_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 246;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_left_dims_b == NULL);
        var_left_dims_b = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_3 = par_g;
        CHECK_OBJECT(par_input_a);
        tmp_args_element_value_4 = par_input_a;
        CHECK_OBJECT(var_left_dims_a);
        tmp_add_expr_left_3 = var_left_dims_a;
        CHECK_OBJECT(par_dims_a);
        tmp_add_expr_right_3 = par_dims_a;
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_input_a == NULL);
        var_new_input_a = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_6 = par_g;
        CHECK_OBJECT(par_input_b);
        tmp_args_element_value_7 = par_input_b;
        CHECK_OBJECT(par_dims_b);
        tmp_add_expr_left_4 = par_dims_b;
        CHECK_OBJECT(var_left_dims_b);
        tmp_add_expr_right_4 = var_left_dims_b;
        tmp_args_element_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_input_b == NULL);
        var_new_input_b = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_g);
        tmp_called_instance_3 = par_g;
        tmp_args_element_value_9 = mod_consts[117];
        CHECK_OBJECT(var_new_input_a);
        tmp_args_element_value_10 = var_new_input_a;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_input_shape == NULL);
        var_input_shape = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_len_arg_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[118]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_1 = par_g;
        CHECK_OBJECT(var_input_shape);
        tmp_kw_call_arg_value_1_1 = var_input_shape;
        tmp_kw_call_dict_value_0_1 = MAKE_LIST1(mod_consts[1]);
        tmp_kw_call_dict_value_1_1 = MAKE_LIST1(mod_consts[1]);
        CHECK_OBJECT(var_left_dims_a);
        tmp_len_arg_3 = var_left_dims_a;
        tmp_list_element_1 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_dict_value_2_1, 0, tmp_list_element_1);
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 252;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_left_sizes_a == NULL);
        var_left_sizes_a = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(var_left_sizes_a);
        tmp_list_element_2 = var_left_sizes_a;
        tmp_assign_source_27 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_call_posargs_values_1;
            PyList_SET_ITEM0(tmp_assign_source_27, 0, tmp_list_element_2);
            CHECK_OBJECT(par_g);
            tmp_expression_value_8 = par_g;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[6]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[24]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[120]);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[121], "l");
            frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 253;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
                tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_6, tmp_call_posargs_values_1, kw_values, mod_consts[122]);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_call_posargs_values_1);
            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 253;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
                tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, mod_consts[25], kw_values, mod_consts[26]);
            }

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_27, 1, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_27);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_shape_sizes == NULL);
        var_shape_sizes = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_11 = par_g;
        CHECK_OBJECT(var_new_input_a);
        tmp_args_element_value_12 = var_new_input_a;
        CHECK_OBJECT(var_shape_sizes);
        tmp_args_element_value_13 = var_shape_sizes;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output_a == NULL);
        var_output_a = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_g);
        tmp_called_instance_4 = par_g;
        tmp_args_element_value_14 = mod_consts[117];
        CHECK_OBJECT(var_output_a);
        tmp_args_element_value_15 = var_output_a;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_29 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_input_shape;
            assert(old != NULL);
            var_input_shape = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_list_element_3;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[118]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_2 = par_g;
        CHECK_OBJECT(var_input_shape);
        tmp_kw_call_arg_value_1_2 = var_input_shape;
        tmp_kw_call_dict_value_0_2 = MAKE_LIST1(mod_consts[1]);
        tmp_kw_call_dict_value_1_2 = MAKE_LIST1(mod_consts[68]);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_list_element_3 == NULL));
        tmp_kw_call_dict_value_2_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_2_2, 0, tmp_list_element_3);
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 257;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_2_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_slices == NULL);
        var_slices = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_posargs_values_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_12 = par_g;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[6]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[24]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[120]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[121], "l");
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 258;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_10, tmp_call_posargs_values_2, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_call_posargs_values_2);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 258;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_9, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assign_source_31, 0, tmp_list_element_4);
        CHECK_OBJECT(var_slices);
        tmp_list_element_4 = var_slices;
        PyList_SET_ITEM0(tmp_assign_source_31, 1, tmp_list_element_4);
        {
            PyObject *old = var_shape_sizes;
            assert(old != NULL);
            var_shape_sizes = tmp_assign_source_31;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_16 = par_g;
        CHECK_OBJECT(var_new_input_a);
        tmp_args_element_value_17 = var_new_input_a;
        CHECK_OBJECT(var_shape_sizes);
        tmp_args_element_value_18 = var_shape_sizes;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output_a;
            assert(old != NULL);
            var_output_a = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(par_g);
        tmp_called_instance_5 = par_g;
        tmp_args_element_value_19 = mod_consts[117];
        CHECK_OBJECT(var_new_input_b);
        tmp_args_element_value_20 = var_new_input_b;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_33 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_input_shape;
            assert(old != NULL);
            var_input_shape = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_list_element_5;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_list_element_6;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[118]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_3 = par_g;
        CHECK_OBJECT(var_input_shape);
        tmp_kw_call_arg_value_1_3 = var_input_shape;
        tmp_kw_call_dict_value_0_3 = MAKE_LIST1(mod_consts[1]);
        CHECK_OBJECT(par_dims_b);
        tmp_len_arg_4 = par_dims_b;
        tmp_list_element_5 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_dict_value_1_3, 0, tmp_list_element_5);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_2_3, 0, tmp_list_element_6);
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 262;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3};
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_2_3);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_left_sizes_b == NULL);
        var_left_sizes_b = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_kw_call_dict_value_2_4;
        PyObject *tmp_list_element_7;
        PyObject *tmp_len_arg_5;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[118]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_4 = par_g;
        CHECK_OBJECT(var_input_shape);
        tmp_kw_call_arg_value_1_4 = var_input_shape;
        tmp_kw_call_dict_value_0_4 = MAKE_LIST1(mod_consts[1]);
        tmp_kw_call_dict_value_1_4 = MAKE_LIST1(mod_consts[1]);
        CHECK_OBJECT(par_dims_b);
        tmp_len_arg_5 = par_dims_b;
        tmp_list_element_7 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_dict_value_0_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);

            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_dict_value_2_4, 0, tmp_list_element_7);
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 263;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_13, args, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_1_4);
        Py_DECREF(tmp_kw_call_dict_value_2_4);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_slices;
            assert(old != NULL);
            var_slices = tmp_assign_source_35;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_list_element_8;
        CHECK_OBJECT(var_slices);
        tmp_list_element_8 = var_slices;
        tmp_assign_source_36 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_call_posargs_values_3;
            PyList_SET_ITEM0(tmp_assign_source_36, 0, tmp_list_element_8);
            CHECK_OBJECT(par_g);
            tmp_expression_value_17 = par_g;
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[6]);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[24]);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[120]);
            if (tmp_kw_call_value_0_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_call_posargs_values_3 = DEEP_COPY_TUPLE_GUIDED(mod_consts[121], "l");
            frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 264;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
                tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_15, tmp_call_posargs_values_3, kw_values, mod_consts[122]);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_call_posargs_values_3);
            Py_DECREF(tmp_kw_call_value_0_6);
            if (tmp_kw_call_value_0_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 264;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
                tmp_list_element_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_14, mod_consts[25], kw_values, mod_consts[26]);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_0_5);
            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_36, 1, tmp_list_element_8);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        {
            PyObject *old = var_shape_sizes;
            assert(old != NULL);
            var_shape_sizes = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_21 = par_g;
        CHECK_OBJECT(var_new_input_b);
        tmp_args_element_value_22 = var_new_input_b;
        CHECK_OBJECT(var_shape_sizes);
        tmp_args_element_value_23 = var_shape_sizes;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_16, call_args);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output_b == NULL);
        var_output_b = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(par_g);
        tmp_called_instance_6 = par_g;
        tmp_args_element_value_24 = mod_consts[117];
        CHECK_OBJECT(var_output_b);
        tmp_args_element_value_25 = var_output_b;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_38 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_input_shape;
            assert(old != NULL);
            var_input_shape = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_kw_call_dict_value_2_5;
        PyObject *tmp_list_element_9;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[118]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_5 = par_g;
        CHECK_OBJECT(var_input_shape);
        tmp_kw_call_arg_value_1_5 = var_input_shape;
        tmp_kw_call_dict_value_0_5 = MAKE_LIST1(mod_consts[1]);
        tmp_kw_call_dict_value_1_5 = MAKE_LIST1(mod_consts[68]);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_kw_call_dict_value_0_5);
            Py_DECREF(tmp_kw_call_dict_value_1_5);

            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_5 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_2_5, 0, tmp_list_element_9);
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 268;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_5};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_17, args, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        Py_DECREF(tmp_kw_call_dict_value_1_5);
        Py_DECREF(tmp_kw_call_dict_value_2_5);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_slices;
            assert(old != NULL);
            var_slices = tmp_assign_source_39;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_posargs_values_4;
        CHECK_OBJECT(par_g);
        tmp_expression_value_21 = par_g;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[6]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[24]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[120]);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_4 = DEEP_COPY_TUPLE_GUIDED(mod_consts[121], "l");
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 269;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_19, tmp_call_posargs_values_4, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_call_posargs_values_4);
        Py_DECREF(tmp_kw_call_value_0_8);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 269;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_list_element_10 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_18, mod_consts[25], kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assign_source_40, 0, tmp_list_element_10);
        CHECK_OBJECT(var_slices);
        tmp_list_element_10 = var_slices;
        PyList_SET_ITEM0(tmp_assign_source_40, 1, tmp_list_element_10);
        {
            PyObject *old = var_shape_sizes;
            assert(old != NULL);
            var_shape_sizes = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_26 = par_g;
        CHECK_OBJECT(var_new_input_b);
        tmp_args_element_value_27 = var_new_input_b;
        CHECK_OBJECT(var_shape_sizes);
        tmp_args_element_value_28 = var_shape_sizes;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_20, call_args);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output_b;
            assert(old != NULL);
            var_output_b = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_list_element_11;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_29 = par_g;
        tmp_args_element_value_30 = mod_consts[126];
        CHECK_OBJECT(par_g);
        tmp_expression_value_24 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[6]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[127];
        CHECK_OBJECT(var_output_a);
        tmp_list_element_11 = var_output_a;
        tmp_dircall_arg3_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_dircall_arg3_1, 0, tmp_list_element_11);
        CHECK_OBJECT(var_output_b);
        tmp_list_element_11 = var_output_b;
        PyList_SET_ITEM0(tmp_dircall_arg3_1, 1, tmp_list_element_11);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_31 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_list_element_12;
        CHECK_OBJECT(var_left_sizes_a);
        tmp_list_element_12 = var_left_sizes_a;
        tmp_assign_source_43 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_43, 0, tmp_list_element_12);
        CHECK_OBJECT(var_left_sizes_b);
        tmp_list_element_12 = var_left_sizes_b;
        PyList_SET_ITEM0(tmp_assign_source_43, 1, tmp_list_element_12);
        {
            PyObject *old = var_shape_sizes;
            assert(old != NULL);
            var_shape_sizes = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_32 = par_g;
        CHECK_OBJECT(var_output);
        tmp_args_element_value_33 = var_output;
        CHECK_OBJECT(var_shape_sizes);
        tmp_args_element_value_34 = var_shape_sizes;
        frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_22, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_359085ad5d04db521404a7c8b0f3b5f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_359085ad5d04db521404a7c8b0f3b5f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_359085ad5d04db521404a7c8b0f3b5f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_359085ad5d04db521404a7c8b0f3b5f0,
        type_description_1,
        par_g,
        par_input_a,
        par_input_b,
        par_dims_a,
        par_dims_b,
        par_out,
        var_dim_count_a,
        var_dim_count_b,
        var_left_dims_a,
        var_left_dims_b,
        var_new_input_a,
        var_new_input_b,
        var_input_shape,
        var_left_sizes_a,
        var_shape_sizes,
        var_output_a,
        var_slices,
        var_left_sizes_b,
        var_output_b,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_359085ad5d04db521404a7c8b0f3b5f0 == cache_frame_359085ad5d04db521404a7c8b0f3b5f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_359085ad5d04db521404a7c8b0f3b5f0);
        cache_frame_359085ad5d04db521404a7c8b0f3b5f0 = NULL;
    }

    assertFrameObject(frame_359085ad5d04db521404a7c8b0f3b5f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dims_a);
    Py_DECREF(par_dims_a);
    par_dims_a = NULL;
    CHECK_OBJECT(par_dims_b);
    Py_DECREF(par_dims_b);
    par_dims_b = NULL;
    Py_XDECREF(var_dim_count_a);
    var_dim_count_a = NULL;
    Py_XDECREF(var_dim_count_b);
    var_dim_count_b = NULL;
    CHECK_OBJECT(var_left_dims_a);
    Py_DECREF(var_left_dims_a);
    var_left_dims_a = NULL;
    CHECK_OBJECT(var_left_dims_b);
    Py_DECREF(var_left_dims_b);
    var_left_dims_b = NULL;
    CHECK_OBJECT(var_new_input_a);
    Py_DECREF(var_new_input_a);
    var_new_input_a = NULL;
    CHECK_OBJECT(var_new_input_b);
    Py_DECREF(var_new_input_b);
    var_new_input_b = NULL;
    CHECK_OBJECT(var_input_shape);
    Py_DECREF(var_input_shape);
    var_input_shape = NULL;
    CHECK_OBJECT(var_left_sizes_a);
    Py_DECREF(var_left_sizes_a);
    var_left_sizes_a = NULL;
    CHECK_OBJECT(var_shape_sizes);
    Py_DECREF(var_shape_sizes);
    var_shape_sizes = NULL;
    CHECK_OBJECT(var_output_a);
    Py_DECREF(var_output_a);
    var_output_a = NULL;
    CHECK_OBJECT(var_slices);
    Py_DECREF(var_slices);
    var_slices = NULL;
    CHECK_OBJECT(var_left_sizes_b);
    Py_DECREF(var_left_sizes_b);
    var_left_sizes_b = NULL;
    CHECK_OBJECT(var_output_b);
    Py_DECREF(var_output_b);
    var_output_b = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_dims_a);
    par_dims_a = NULL;
    Py_XDECREF(par_dims_b);
    par_dims_b = NULL;
    Py_XDECREF(var_dim_count_a);
    var_dim_count_a = NULL;
    Py_XDECREF(var_dim_count_b);
    var_dim_count_b = NULL;
    Py_XDECREF(var_left_dims_a);
    var_left_dims_a = NULL;
    Py_XDECREF(var_left_dims_b);
    var_left_dims_b = NULL;
    Py_XDECREF(var_new_input_a);
    var_new_input_a = NULL;
    Py_XDECREF(var_new_input_b);
    var_new_input_b = NULL;
    Py_XDECREF(var_input_shape);
    var_input_shape = NULL;
    Py_XDECREF(var_left_sizes_a);
    var_left_sizes_a = NULL;
    Py_XDECREF(var_shape_sizes);
    var_shape_sizes = NULL;
    Py_XDECREF(var_output_a);
    var_output_a = NULL;
    Py_XDECREF(var_slices);
    var_slices = NULL;
    Py_XDECREF(var_left_sizes_b);
    var_left_sizes_b = NULL;
    Py_XDECREF(var_output_b);
    var_output_b = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input_a);
    Py_DECREF(par_input_a);
    CHECK_OBJECT(par_input_b);
    Py_DECREF(par_input_b);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input_a);
    Py_DECREF(par_input_a);
    CHECK_OBJECT(par_input_b);
    Py_DECREF(par_input_b);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__10_celu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__10_celu,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e8d637c8102a670b6d56037a3ccc92a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__11_argmax() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__11_argmax,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f9c2d81d5565fd37eb1d571dfe40510,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__12_argmin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__12_argmin,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2b0443b0a66a28e6ba9de5fa58f89004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__13_pow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__13_pow,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4647ca50e7e732c6dca2820fb9ebcb5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__14_ge() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__14_ge,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f30eef7adfee94f54bd47652a82baaf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__15_le() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__15_le,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5f984711e28532666e7720de6465725,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__16_unfold() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__16_unfold,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d74508ada77570897e1f1c3a5cf820a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__17_tensordot(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__17_tensordot,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_359085ad5d04db521404a7c8b0f3b5f0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__1_einsum_helper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__1_einsum_helper,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f23591bbce048cbab8eedd3fb93ff119,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__2_einsum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__2_einsum,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_634759a31acd9fc82a78344190221a4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__3_outer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__3_outer,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_747f22cce046ca439e3a4d4a9906a344,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__4_dropout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__4_dropout,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f45467e97e4c7d39e0af307533c40db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__5_nll_loss() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__5_nll_loss,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f5a4b2b059e0a1fa3d6527b73f332d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__6_nll_loss2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__6_nll_loss2d,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6808a9dd2ac8c87774a0b722e4f55216,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__7_nll_loss_nd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__7_nll_loss_nd,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1762aa7c64e7bd425e411c923fe0e4e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__8_cross_entropy_loss() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__8_cross_entropy_loss,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_56bfb8bd6dab32639323c3944f25d456,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__9_binary_cross_entropy_with_logits() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset12$$$function__9_binary_cross_entropy_with_logits,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_71fc0e37624746af51330a6bea341e1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset12,
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

function_impl_code functable_torch$onnx$symbolic_opset12[] = {
    impl_torch$onnx$symbolic_opset12$$$function__1_einsum_helper,
    impl_torch$onnx$symbolic_opset12$$$function__2_einsum,
    impl_torch$onnx$symbolic_opset12$$$function__3_outer,
    impl_torch$onnx$symbolic_opset12$$$function__4_dropout,
    impl_torch$onnx$symbolic_opset12$$$function__5_nll_loss,
    impl_torch$onnx$symbolic_opset12$$$function__6_nll_loss2d,
    impl_torch$onnx$symbolic_opset12$$$function__7_nll_loss_nd,
    impl_torch$onnx$symbolic_opset12$$$function__8_cross_entropy_loss,
    impl_torch$onnx$symbolic_opset12$$$function__9_binary_cross_entropy_with_logits,
    impl_torch$onnx$symbolic_opset12$$$function__10_celu,
    impl_torch$onnx$symbolic_opset12$$$function__11_argmax,
    impl_torch$onnx$symbolic_opset12$$$function__12_argmin,
    impl_torch$onnx$symbolic_opset12$$$function__13_pow,
    impl_torch$onnx$symbolic_opset12$$$function__14_ge,
    impl_torch$onnx$symbolic_opset12$$$function__15_le,
    impl_torch$onnx$symbolic_opset12$$$function__16_unfold,
    impl_torch$onnx$symbolic_opset12$$$function__17_tensordot,
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

    function_impl_code *current = functable_torch$onnx$symbolic_opset12;
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

    if (offset > sizeof(functable_torch$onnx$symbolic_opset12) || offset < 0) {
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
        functable_torch$onnx$symbolic_opset12[offset],
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
        module_torch$onnx$symbolic_opset12,
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
PyObject *modulecode_torch$onnx$symbolic_opset12(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.onnx.symbolic_opset12");

    // Store the module for future use.
    module_torch$onnx$symbolic_opset12 = module;

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
        PRINT_STRING("torch.onnx.symbolic_opset12: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.onnx.symbolic_opset12: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.onnx.symbolic_opset12: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$onnx$symbolic_opset12\n");

    moduledict_torch$onnx$symbolic_opset12 = MODULE_DICT(module_torch$onnx$symbolic_opset12);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$onnx$symbolic_opset12,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$onnx$symbolic_opset12,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[182]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$onnx$symbolic_opset12,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$onnx$symbolic_opset12,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$onnx$symbolic_opset12,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$onnx$symbolic_opset12);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$onnx$symbolic_opset12);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_58a563dfe8eb1922192bed87f1192feb;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_2);
    }
    frame_58a563dfe8eb1922192bed87f1192feb = MAKE_MODULE_FRAME(codeobj_58a563dfe8eb1922192bed87f1192feb, module_torch$onnx$symbolic_opset12);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_58a563dfe8eb1922192bed87f1192feb);
    assert(Py_REFCNT(frame_58a563dfe8eb1922192bed87f1192feb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[131], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[132], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[23];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[134];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[1];
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[82],
                mod_consts[1]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[135],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[134];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[136];
        tmp_level_value_3 = mod_consts[1];
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[137],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[137]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[71],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[71]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[109],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[109]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[138];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[139];
        tmp_level_value_4 = mod_consts[1];
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 4;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[96],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[96]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[97],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[97]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[105],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[105]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[45];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[141];
        tmp_level_value_5 = mod_consts[1];
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 6;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[116],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[116]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$onnx$symbolic_opset12,
                mod_consts[123],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[123]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_17);
    }
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[20];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$onnx$symbolic_opset12;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[1];
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 7;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__1_einsum_helper();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 25;
        tmp_called_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[142]);

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__2_einsum();

        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 25;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 30;
        tmp_called_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[143]);

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__3_outer();

        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 30;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 37;
        tmp_called_value_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[145]);

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_3 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__4_dropout();

        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 37;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__5_nll_loss();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__6_nll_loss2d();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__7_nll_loss_nd();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__8_cross_entropy_loss();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 101;
        tmp_called_value_7 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_8, mod_consts[149]);

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_4 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__9_binary_cross_entropy_with_logits();

        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 101;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__10_celu();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__11_argmax();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__12_argmin();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__13_pow();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__14_ge();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__15_le();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 169;
        tmp_called_value_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_10, mod_consts[157]);

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__16_unfold();

        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 169;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_1;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 229;
        tmp_called_value_11 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_12, mod_consts[158]);

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[159];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_6 = MAKE_FUNCTION_torch$onnx$symbolic_opset12$$$function__17_tensordot(tmp_defaults_1);

        frame_58a563dfe8eb1922192bed87f1192feb->m_frame.f_lineno = 229;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_35);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_58a563dfe8eb1922192bed87f1192feb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58a563dfe8eb1922192bed87f1192feb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58a563dfe8eb1922192bed87f1192feb, exception_lineno);
    }



    assertFrameObject(frame_58a563dfe8eb1922192bed87f1192feb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.onnx.symbolic_opset12", false);

    Py_INCREF(module_torch$onnx$symbolic_opset12);
    return module_torch$onnx$symbolic_opset12;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset12, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$onnx$symbolic_opset12", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
