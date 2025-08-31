/* Generated code for Python module 'torch.onnx.symbolic_opset13'
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

/* The "module_torch$onnx$symbolic_opset13" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$onnx$symbolic_opset13;
PyDictObject *moduledict_torch$onnx$symbolic_opset13;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[238];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[238];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.onnx.symbolic_opset13"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 238; i++) {
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
void checkModuleConstants_torch$onnx$symbolic_opset13(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 238; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d154f86d2454004c8b4430b811e301b0;
static PyCodeObject *codeobj_d0ac65b4b0c8edb45890d8c5692c2231;
static PyCodeObject *codeobj_158738f645d2abe3379b63f916e66a24;
static PyCodeObject *codeobj_b24539111f5ad87df496c7aacab6a0e1;
static PyCodeObject *codeobj_b2e7c9a0dad7ccb850a4d0808e49f1f7;
static PyCodeObject *codeobj_e0b5db18a271e88ba2af6cc495dec303;
static PyCodeObject *codeobj_ffb7807c10c6e0f4b1276038970f0d6a;
static PyCodeObject *codeobj_4b186c181ebb54d117029387882198c0;
static PyCodeObject *codeobj_d63f5e5e348091f6627b9486846879be;
static PyCodeObject *codeobj_452154cbd8768c227168015661c83745;
static PyCodeObject *codeobj_a5d7a0dda681ed3dda8ca64bc1102915;
static PyCodeObject *codeobj_be9444cef90277d7f22443dc649fff5d;
static PyCodeObject *codeobj_6e3ee2163b385cbdfe331dbc391a85a0;
static PyCodeObject *codeobj_08caf1587eae5968283991ee29f46d6b;
static PyCodeObject *codeobj_4bba3c28f00f64d079f635a95a35363b;
static PyCodeObject *codeobj_bea42d5e9e7f243b50f0da4fe99efc15;
static PyCodeObject *codeobj_0f1a51a13693a1e8f813637df5c6f59c;
static PyCodeObject *codeobj_af89ff0eb238888f869c7c81e6c6f95a;
static PyCodeObject *codeobj_532d25dc4ba7ee32e537ecd5ef228f8e;
static PyCodeObject *codeobj_2151e74e3ba766cb6f2784c8e219e5a6;
static PyCodeObject *codeobj_aeb9979c76d480cdf2826a1deaf21ae7;
static PyCodeObject *codeobj_9ea2de4a045194ab649e1d279f183834;
static PyCodeObject *codeobj_32d9700e63e061b9c83b267a807a3daf;
static PyCodeObject *codeobj_b4d4c368a338ae087db52b3ee5bdf0b3;
static PyCodeObject *codeobj_bfb3d0b4d5e348069d85a11c607b4041;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[209]); CHECK_OBJECT(module_filename_obj);
    codeobj_d154f86d2454004c8b4430b811e301b0 = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[211], NULL, 1, 0, 0);
    codeobj_d0ac65b4b0c8edb45890d8c5692c2231 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[212], NULL, 1, 0, 0);
    codeobj_158738f645d2abe3379b63f916e66a24 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[213], NULL, 1, 0, 0);
    codeobj_b24539111f5ad87df496c7aacab6a0e1 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[214], NULL, 1, 0, 0);
    codeobj_b2e7c9a0dad7ccb850a4d0808e49f1f7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[215], mod_consts[215], NULL, NULL, 0, 0, 0);
    codeobj_e0b5db18a271e88ba2af6cc495dec303 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[216], NULL, 1, 0, 0);
    codeobj_ffb7807c10c6e0f4b1276038970f0d6a = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[217], NULL, 2, 0, 0);
    codeobj_4b186c181ebb54d117029387882198c0 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[218], NULL, 5, 0, 0);
    codeobj_d63f5e5e348091f6627b9486846879be = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[219], NULL, 7, 0, 0);
    codeobj_452154cbd8768c227168015661c83745 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[220], NULL, 4, 0, 0);
    codeobj_a5d7a0dda681ed3dda8ca64bc1102915 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[221], NULL, 4, 0, 0);
    codeobj_be9444cef90277d7f22443dc649fff5d = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[222], NULL, 3, 0, 0);
    codeobj_6e3ee2163b385cbdfe331dbc391a85a0 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[87], mod_consts[87], mod_consts[223], mod_consts[224], 1, 0, 0);
    codeobj_08caf1587eae5968283991ee29f46d6b = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], mod_consts[225], mod_consts[224], 5, 0, 0);
    codeobj_4bba3c28f00f64d079f635a95a35363b = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[91], mod_consts[91], mod_consts[226], mod_consts[224], 3, 0, 0);
    codeobj_bea42d5e9e7f243b50f0da4fe99efc15 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[227], NULL, 5, 0, 0);
    codeobj_0f1a51a13693a1e8f813637df5c6f59c = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[228], NULL, 4, 0, 0);
    codeobj_af89ff0eb238888f869c7c81e6c6f95a = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[229], NULL, 5, 0, 0);
    codeobj_532d25dc4ba7ee32e537ecd5ef228f8e = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[230], NULL, 5, 0, 0);
    codeobj_2151e74e3ba766cb6f2784c8e219e5a6 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[79], mod_consts[79], mod_consts[231], mod_consts[232], 4, 0, 0);
    codeobj_aeb9979c76d480cdf2826a1deaf21ae7 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[233], NULL, 4, 0, 0);
    codeobj_9ea2de4a045194ab649e1d279f183834 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[234], NULL, 5, 0, 0);
    codeobj_32d9700e63e061b9c83b267a807a3daf = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[235], NULL, 5, 0, 0);
    codeobj_b4d4c368a338ae087db52b3ee5bdf0b3 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[230], NULL, 5, 0, 0);
    codeobj_bfb3d0b4d5e348069d85a11c607b4041 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[236], NULL, 5, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__10_where(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__11_fake_quantize_per_channel_affine(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic$$$function__1_symbolic(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__1_reduce_nodim(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__2_reduce_dim(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__14_unsafe_chunk(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__15_repeat_interleave(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__16_diagonal();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__1_softmax(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__2_log_softmax(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__3_frobenius_norm(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__4_split(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__5_split_with_sizes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__6_unsafe_split(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__7_unsafe_split_with_sizes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__8_unbind(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__9_nonzero_numpy(PyObject *defaults);


// The module function definitions.
static PyObject *impl_torch$onnx$symbolic_opset13$$$function__1_softmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *var_softmax = NULL;
    PyObject *var_parsed_dtype = NULL;
    struct Nuitka_FrameObject *frame_0f1a51a13693a1e8f813637df5c6f59c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f1a51a13693a1e8f813637df5c6f59c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0f1a51a13693a1e8f813637df5c6f59c)) {
        Py_XDECREF(cache_frame_0f1a51a13693a1e8f813637df5c6f59c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f1a51a13693a1e8f813637df5c6f59c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f1a51a13693a1e8f813637df5c6f59c = MAKE_FUNCTION_FRAME(codeobj_0f1a51a13693a1e8f813637df5c6f59c, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f1a51a13693a1e8f813637df5c6f59c->m_type_description == NULL);
    frame_0f1a51a13693a1e8f813637df5c6f59c = cache_frame_0f1a51a13693a1e8f813637df5c6f59c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f1a51a13693a1e8f813637df5c6f59c);
    assert(Py_REFCNT(frame_0f1a51a13693a1e8f813637df5c6f59c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[1];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        frame_0f1a51a13693a1e8f813637df5c6f59c->m_frame.f_lineno = 22;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_softmax == NULL);
        var_softmax = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dtype);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dtype);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_2 = par_dtype;
        frame_0f1a51a13693a1e8f813637df5c6f59c->m_frame.f_lineno = 23;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0f1a51a13693a1e8f813637df5c6f59c->m_frame.f_lineno = 23;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[5];
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_dtype;
        tmp_args_element_value_2 = mod_consts[9];
        tmp_args_element_value_3 = mod_consts[8];
        frame_0f1a51a13693a1e8f813637df5c6f59c->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parsed_dtype == NULL);
        var_parsed_dtype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[10];
        CHECK_OBJECT(var_softmax);
        tmp_kw_call_arg_value_1_2 = var_softmax;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parsed_dtype);
        tmp_subscript_value_1 = var_parsed_dtype;
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0f1a51a13693a1e8f813637df5c6f59c->m_frame.f_lineno = 25;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_softmax;
            assert(old != NULL);
            var_softmax = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f1a51a13693a1e8f813637df5c6f59c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f1a51a13693a1e8f813637df5c6f59c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f1a51a13693a1e8f813637df5c6f59c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f1a51a13693a1e8f813637df5c6f59c,
        type_description_1,
        par_g,
        par_input,
        par_dim,
        par_dtype,
        var_softmax,
        var_parsed_dtype
    );


    // Release cached frame if used for exception.
    if (frame_0f1a51a13693a1e8f813637df5c6f59c == cache_frame_0f1a51a13693a1e8f813637df5c6f59c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f1a51a13693a1e8f813637df5c6f59c);
        cache_frame_0f1a51a13693a1e8f813637df5c6f59c = NULL;
    }

    assertFrameObject(frame_0f1a51a13693a1e8f813637df5c6f59c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_softmax);
    tmp_return_value = var_softmax;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_softmax);
    Py_DECREF(var_softmax);
    var_softmax = NULL;
    Py_XDECREF(var_parsed_dtype);
    var_parsed_dtype = NULL;
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

    Py_XDECREF(var_softmax);
    var_softmax = NULL;
    Py_XDECREF(var_parsed_dtype);
    var_parsed_dtype = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__2_log_softmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *var_return_op = NULL;
    PyObject *var_parsed_dtype = NULL;
    struct Nuitka_FrameObject *frame_a5d7a0dda681ed3dda8ca64bc1102915;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5d7a0dda681ed3dda8ca64bc1102915 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a5d7a0dda681ed3dda8ca64bc1102915)) {
        Py_XDECREF(cache_frame_a5d7a0dda681ed3dda8ca64bc1102915);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5d7a0dda681ed3dda8ca64bc1102915 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5d7a0dda681ed3dda8ca64bc1102915 = MAKE_FUNCTION_FRAME(codeobj_a5d7a0dda681ed3dda8ca64bc1102915, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5d7a0dda681ed3dda8ca64bc1102915->m_type_description == NULL);
    frame_a5d7a0dda681ed3dda8ca64bc1102915 = cache_frame_a5d7a0dda681ed3dda8ca64bc1102915;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5d7a0dda681ed3dda8ca64bc1102915);
    assert(Py_REFCNT(frame_a5d7a0dda681ed3dda8ca64bc1102915) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[13];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        frame_a5d7a0dda681ed3dda8ca64bc1102915->m_frame.f_lineno = 32;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_return_op == NULL);
        var_return_op = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dtype);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dtype);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_2 = par_dtype;
        frame_a5d7a0dda681ed3dda8ca64bc1102915->m_frame.f_lineno = 33;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a5d7a0dda681ed3dda8ca64bc1102915->m_frame.f_lineno = 33;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[5];
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_dtype;
        tmp_args_element_value_2 = mod_consts[9];
        tmp_args_element_value_3 = mod_consts[8];
        frame_a5d7a0dda681ed3dda8ca64bc1102915->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parsed_dtype == NULL);
        var_parsed_dtype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[10];
        CHECK_OBJECT(var_return_op);
        tmp_kw_call_arg_value_1_2 = var_return_op;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parsed_dtype);
        tmp_subscript_value_1 = var_parsed_dtype;
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a5d7a0dda681ed3dda8ca64bc1102915->m_frame.f_lineno = 35;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_return_op;
            assert(old != NULL);
            var_return_op = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5d7a0dda681ed3dda8ca64bc1102915, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5d7a0dda681ed3dda8ca64bc1102915->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5d7a0dda681ed3dda8ca64bc1102915, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5d7a0dda681ed3dda8ca64bc1102915,
        type_description_1,
        par_g,
        par_input,
        par_dim,
        par_dtype,
        var_return_op,
        var_parsed_dtype
    );


    // Release cached frame if used for exception.
    if (frame_a5d7a0dda681ed3dda8ca64bc1102915 == cache_frame_a5d7a0dda681ed3dda8ca64bc1102915) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5d7a0dda681ed3dda8ca64bc1102915);
        cache_frame_a5d7a0dda681ed3dda8ca64bc1102915 = NULL;
    }

    assertFrameObject(frame_a5d7a0dda681ed3dda8ca64bc1102915);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_return_op);
    tmp_return_value = var_return_op;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_return_op);
    Py_DECREF(var_return_op);
    var_return_op = NULL;
    Py_XDECREF(var_parsed_dtype);
    var_parsed_dtype = NULL;
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

    Py_XDECREF(var_return_op);
    var_return_op = NULL;
    Py_XDECREF(var_parsed_dtype);
    var_parsed_dtype = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__3_frobenius_norm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    PyObject *var_dim_val = NULL;
    PyObject *var_sqr = NULL;
    PyObject *var_sumsqr = NULL;
    struct Nuitka_FrameObject *frame_452154cbd8768c227168015661c83745;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_452154cbd8768c227168015661c83745 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_452154cbd8768c227168015661c83745)) {
        Py_XDECREF(cache_frame_452154cbd8768c227168015661c83745);

#if _DEBUG_REFCOUNTS
        if (cache_frame_452154cbd8768c227168015661c83745 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_452154cbd8768c227168015661c83745 = MAKE_FUNCTION_FRAME(codeobj_452154cbd8768c227168015661c83745, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_452154cbd8768c227168015661c83745->m_type_description == NULL);
    frame_452154cbd8768c227168015661c83745 = cache_frame_452154cbd8768c227168015661c83745;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_452154cbd8768c227168015661c83745);
    assert(Py_REFCNT(frame_452154cbd8768c227168015661c83745) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        tmp_args_element_value_2 = mod_consts[15];
        frame_452154cbd8768c227168015661c83745->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_val == NULL);
        var_dim_val = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dim_val);
        tmp_args_element_value_3 = var_dim_val;
        frame_452154cbd8768c227168015661c83745->m_frame.f_lineno = 42;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[16], tmp_args_element_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT(var_dim_val);
        tmp_len_arg_1 = var_dim_val;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[17];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[18]);
        frame_452154cbd8768c227168015661c83745->m_frame.f_lineno = 43;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_g);
        tmp_called_instance_3 = par_g;
        tmp_args_element_value_4 = mod_consts[19];
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_6 = par_self;
        frame_452154cbd8768c227168015661c83745->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sqr == NULL);
        var_sqr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_1 = par_g;
        CHECK_OBJECT(var_sqr);
        tmp_kw_call_arg_value_1_1 = var_sqr;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_2_1 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_0_1 = par_keepdim;
        frame_452154cbd8768c227168015661c83745->m_frame.f_lineno = 45;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[21]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sumsqr == NULL);
        var_sumsqr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_g);
        tmp_called_instance_4 = par_g;
        tmp_args_element_value_7 = mod_consts[22];
        CHECK_OBJECT(var_sumsqr);
        tmp_args_element_value_8 = var_sumsqr;
        frame_452154cbd8768c227168015661c83745->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_452154cbd8768c227168015661c83745, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_452154cbd8768c227168015661c83745->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_452154cbd8768c227168015661c83745, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_452154cbd8768c227168015661c83745,
        type_description_1,
        par_g,
        par_self,
        par_dim,
        par_keepdim,
        var_dim_val,
        var_sqr,
        var_sumsqr
    );


    // Release cached frame if used for exception.
    if (frame_452154cbd8768c227168015661c83745 == cache_frame_452154cbd8768c227168015661c83745) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_452154cbd8768c227168015661c83745);
        cache_frame_452154cbd8768c227168015661c83745 = NULL;
    }

    assertFrameObject(frame_452154cbd8768c227168015661c83745);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dim_val);
    Py_DECREF(var_dim_val);
    var_dim_val = NULL;
    Py_XDECREF(var_sqr);
    var_sqr = NULL;
    Py_XDECREF(var_sumsqr);
    var_sumsqr = NULL;
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

    Py_XDECREF(var_dim_val);
    var_dim_val = NULL;
    Py_XDECREF(var_sqr);
    var_sqr = NULL;
    Py_XDECREF(var_sumsqr);
    var_sumsqr = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__4_split(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_split_size_or_sizes = python_pars[2];
    PyObject *par_dim = python_pars[3];
    PyObject *par__outputs = python_pars[4];
    PyObject *var_split_out = NULL;
    PyObject *var_split_sizes = NULL;
    PyObject *var_start = NULL;
    PyObject *var_axis = NULL;
    PyObject *var_res = NULL;
    PyObject *var_i = NULL;
    PyObject *var_end = NULL;
    PyObject *var_split_val = NULL;
    PyObject *var_split_size = NULL;
    PyObject *var_size = NULL;
    PyObject *var_splits = NULL;
    PyObject *var_leftover = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *outline_1_var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_af89ff0eb238888f869c7c81e6c6f95a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_b24539111f5ad87df496c7aacab6a0e1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b24539111f5ad87df496c7aacab6a0e1_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_d0ac65b4b0c8edb45890d8c5692c2231_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_af89ff0eb238888f869c7c81e6c6f95a = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_af89ff0eb238888f869c7c81e6c6f95a)) {
        Py_XDECREF(cache_frame_af89ff0eb238888f869c7c81e6c6f95a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af89ff0eb238888f869c7c81e6c6f95a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af89ff0eb238888f869c7c81e6c6f95a = MAKE_FUNCTION_FRAME(codeobj_af89ff0eb238888f869c7c81e6c6f95a, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af89ff0eb238888f869c7c81e6c6f95a->m_type_description == NULL);
    frame_af89ff0eb238888f869c7c81e6c6f95a = cache_frame_af89ff0eb238888f869c7c81e6c6f95a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af89ff0eb238888f869c7c81e6c6f95a);
    assert(Py_REFCNT(frame_af89ff0eb238888f869c7c81e6c6f95a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_args_element_value_1 = par_split_size_or_sizes;
        CHECK_OBJECT(par__outputs);
        tmp_args_element_value_2 = par__outputs;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[23],
                call_args
            );
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[24];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_kw_call_arg_value_2_1 = par_split_size_or_sizes;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 52;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_out == NULL);
        var_split_out = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par__outputs);
        tmp_cmp_expr_left_1 = par__outputs;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_split_out);
    tmp_return_value = var_split_out;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_args_element_value_3 = par_split_size_or_sizes;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[25], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_args_element_value_4 = par_split_size_or_sizes;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 57;
        tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[26], tmp_args_element_value_4);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__outputs);
        tmp_cmp_expr_right_2 = par__outputs;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_5;
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_split_size_or_sizes);
            tmp_args_element_value_5 = par_split_size_or_sizes;
            frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 58;
            tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[26], tmp_args_element_value_5);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "ooooooooooooooooo";
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
        if (isFrameUnusable(cache_frame_b24539111f5ad87df496c7aacab6a0e1_2)) {
            Py_XDECREF(cache_frame_b24539111f5ad87df496c7aacab6a0e1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b24539111f5ad87df496c7aacab6a0e1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b24539111f5ad87df496c7aacab6a0e1_2 = MAKE_FUNCTION_FRAME(codeobj_b24539111f5ad87df496c7aacab6a0e1, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b24539111f5ad87df496c7aacab6a0e1_2->m_type_description == NULL);
        frame_b24539111f5ad87df496c7aacab6a0e1_2 = cache_frame_b24539111f5ad87df496c7aacab6a0e1_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b24539111f5ad87df496c7aacab6a0e1_2);
        assert(Py_REFCNT(frame_b24539111f5ad87df496c7aacab6a0e1_2) == 2);

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
                    exception_lineno = 58;
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
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_6;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            if (par_g == NULL) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 58;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_6 = par_g;
            CHECK_OBJECT(outline_0_var_v);
            tmp_args_element_value_7 = outline_0_var_v;
            tmp_args_element_value_8 = MAKE_LIST1(mod_consts[29]);
            frame_b24539111f5ad87df496c7aacab6a0e1_2->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
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
            exception_tb = MAKE_TRACEBACK(frame_b24539111f5ad87df496c7aacab6a0e1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b24539111f5ad87df496c7aacab6a0e1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b24539111f5ad87df496c7aacab6a0e1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b24539111f5ad87df496c7aacab6a0e1_2,
            type_description_2,
            outline_0_var_v,
            par_g
        );


        // Release cached frame if used for exception.
        if (frame_b24539111f5ad87df496c7aacab6a0e1_2 == cache_frame_b24539111f5ad87df496c7aacab6a0e1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b24539111f5ad87df496c7aacab6a0e1_2);
            cache_frame_b24539111f5ad87df496c7aacab6a0e1_2 = NULL;
        }

        assertFrameObject(frame_b24539111f5ad87df496c7aacab6a0e1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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

        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 58;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_split_sizes == NULL);
        var_split_sizes = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_posargs_values_1;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[33], "l");
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 60;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, tmp_call_posargs_values_1, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 60;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start == NULL);
        var_start = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_8;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_g;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_list_element_1 = par_dim;
        tmp_kw_call_arg_value_0_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_2, 0, tmp_list_element_1);
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 61;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_axis == NULL);
        var_axis = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
        assert(var_res == NULL);
        var_res = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(par__outputs);
        tmp_xrange_low_1 = par__outputs;
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 63;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_9 = par_g;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[0]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_9 = mod_consts[37];
        if (var_start == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_10 = var_start;
        CHECK_OBJECT(var_split_sizes);
        tmp_expression_value_10 = var_split_sizes;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_1);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_end;
            var_end = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_11 = var_res;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[40]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_12 = par_g;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[0]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_13 = mod_consts[41];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_14 = par_self;
        if (var_start == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_15 = var_start;
        CHECK_OBJECT(var_end);
        tmp_args_element_value_16 = var_end;
        if (var_axis == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_17 = var_axis;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 65;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_end);
        tmp_assign_source_14 = var_end;
        {
            PyObject *old = var_start;
            var_start = tmp_assign_source_14;
            Py_INCREF(var_start);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_res == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 67;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT(par__outputs);
        tmp_xrange_low_2 = par__outputs;
        tmp_iter_arg_3 = BUILTIN_XRANGE1(tmp_xrange_low_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_listcomp_2__$0 == NULL);
        tmp_listcomp_2__$0 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_2__contraction == NULL);
        tmp_listcomp_2__contraction = tmp_assign_source_16;
    }
    if (isFrameUnusable(cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3)) {
        Py_XDECREF(cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3 = MAKE_FUNCTION_FRAME(codeobj_d0ac65b4b0c8edb45890d8c5692c2231, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3->m_type_description == NULL);
    frame_d0ac65b4b0c8edb45890d8c5692c2231_3 = cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0ac65b4b0c8edb45890d8c5692c2231_3);
    assert(Py_REFCNT(frame_d0ac65b4b0c8edb45890d8c5692c2231_3) == 2);

    // Framed code:
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        tmp_next_source_3 = tmp_listcomp_2__$0;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "ooo";
                exception_lineno = 68;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_listcomp_2__iter_value_0;
            tmp_listcomp_2__iter_value_0 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
        tmp_assign_source_18 = tmp_listcomp_2__iter_value_0;
        {
            PyObject *old = outline_1_var_i;
            outline_1_var_i = tmp_assign_source_18;
            Py_INCREF(outline_1_var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_append_list_2 = tmp_listcomp_2__contraction;
        if (par_g == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_13 = par_g;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[0]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_18 = mod_consts[44];
        if (var_split_out == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_19 = var_split_out;
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_14 = par_g;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[0]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[31]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(outline_1_var_i);
        tmp_list_element_2 = outline_1_var_i;
        tmp_kw_call_arg_value_0_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_3, 0, tmp_list_element_2);
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[32]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        frame_d0ac65b4b0c8edb45890d8c5692c2231_3->m_frame.f_lineno = 68;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        frame_d0ac65b4b0c8edb45890d8c5692c2231_3->m_frame.f_lineno = 68;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_20 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_11, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        frame_d0ac65b4b0c8edb45890d8c5692c2231_3->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_append_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 68;
        type_description_2 = "ooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    tmp_return_value = tmp_listcomp_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
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
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_3;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_3:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_5;
    frame_exception_exit_3:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0ac65b4b0c8edb45890d8c5692c2231_3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0ac65b4b0c8edb45890d8c5692c2231_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0ac65b4b0c8edb45890d8c5692c2231_3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0ac65b4b0c8edb45890d8c5692c2231_3,
        type_description_2,
        outline_1_var_i,
        par_g,
        var_split_out
    );


    // Release cached frame if used for exception.
    if (frame_d0ac65b4b0c8edb45890d8c5692c2231_3 == cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3);
        cache_frame_d0ac65b4b0c8edb45890d8c5692c2231_3 = NULL;
    }

    assertFrameObject(frame_d0ac65b4b0c8edb45890d8c5692c2231_3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;
    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
    skip_nested_handling_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF(outline_1_var_i);
    outline_1_var_i = NULL;
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

    Py_XDECREF(outline_1_var_i);
    outline_1_var_i = NULL;
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
    exception_lineno = 68;
    goto frame_exception_exit_1;
    outline_result_2:;
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_called_instance_5 = par_split_size_or_sizes;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 71;
        tmp_expression_value_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[3]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[46];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_val == NULL);
        var_split_val = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_split_val);
        tmp_called_instance_6 = var_split_val;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 72;
        tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[47]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[29];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_18 = par_g;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[0]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[48];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_kw_call_arg_value_2_2 = par_split_size_or_sizes;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_4 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_kw_call_dict_value_1_1 = par__outputs;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 73;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_13, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_args_element_value_21 = par_split_size_or_sizes;
        tmp_args_element_value_22 = mod_consts[9];
        tmp_args_element_value_23 = mod_consts[50];
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_7,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_size == NULL);
        var_split_size = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_24 = par_self;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_25 = par_dim;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_size == NULL);
        var_size = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_size);
        tmp_cmp_expr_left_4 = var_size;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par__outputs);
        tmp_cmp_expr_left_5 = par__outputs;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_split_size);
        tmp_mult_expr_left_1 = var_split_size;
        CHECK_OBJECT(par__outputs);
        tmp_mult_expr_right_1 = par__outputs;
        tmp_assign_source_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_size;
            assert(old != NULL);
            var_size = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[52];
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 81;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 81;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_list_element_3;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        if (var_split_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_3 = var_split_size;
        tmp_mult_expr_left_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mult_expr_left_2, 0, tmp_list_element_3);
        CHECK_OBJECT(var_size);
        tmp_floordiv_expr_left_1 = var_size;
        if (var_split_size == NULL) {
            Py_DECREF(tmp_mult_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_1 = var_split_size;
        tmp_mult_expr_right_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_splits == NULL);
        var_splits = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(var_size);
        tmp_mod_expr_left_1 = var_size;
        if (var_split_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = var_split_size;
        tmp_assign_source_24 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_leftover == NULL);
        var_leftover = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_leftover);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_leftover);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(var_splits);
        tmp_expression_value_19 = var_splits;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[40]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_leftover);
        tmp_args_element_value_26 = var_leftover;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 85;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_g);
        tmp_expression_value_20 = par_g;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[0]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[31]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_splits == NULL) {
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_27 = var_splits;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 86;
        tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_16);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 86;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_15, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_splits;
            var_splits = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_22 = par_g;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[0]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[48];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_3 = par_self;
        CHECK_OBJECT(var_splits);
        tmp_kw_call_arg_value_2_3 = var_splits;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_5 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_kw_call_dict_value_1_2 = par__outputs;
        frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame.f_lineno = 87;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_17, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af89ff0eb238888f869c7c81e6c6f95a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af89ff0eb238888f869c7c81e6c6f95a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af89ff0eb238888f869c7c81e6c6f95a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af89ff0eb238888f869c7c81e6c6f95a,
        type_description_1,
        par_g,
        par_self,
        par_split_size_or_sizes,
        par_dim,
        par__outputs,
        var_split_out,
        var_split_sizes,
        var_start,
        var_axis,
        var_res,
        var_i,
        var_end,
        var_split_val,
        var_split_size,
        var_size,
        var_splits,
        var_leftover
    );


    // Release cached frame if used for exception.
    if (frame_af89ff0eb238888f869c7c81e6c6f95a == cache_frame_af89ff0eb238888f869c7c81e6c6f95a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af89ff0eb238888f869c7c81e6c6f95a);
        cache_frame_af89ff0eb238888f869c7c81e6c6f95a = NULL;
    }

    assertFrameObject(frame_af89ff0eb238888f869c7c81e6c6f95a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_split_out);
    var_split_out = NULL;
    Py_XDECREF(var_split_sizes);
    var_split_sizes = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_axis);
    var_axis = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_split_val);
    var_split_val = NULL;
    Py_XDECREF(var_split_size);
    var_split_size = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_leftover);
    var_leftover = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_split_out);
    var_split_out = NULL;
    Py_XDECREF(var_split_sizes);
    var_split_sizes = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_axis);
    var_axis = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_split_val);
    var_split_val = NULL;
    Py_XDECREF(var_split_size);
    var_split_size = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_leftover);
    var_leftover = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_split_size_or_sizes);
    Py_DECREF(par_split_size_or_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_split_size_or_sizes);
    Py_DECREF(par_split_size_or_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__5_split_with_sizes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_split_sizes = python_pars[2];
    PyObject *par_dim = python_pars[3];
    PyObject *par__outputs = python_pars[4];
    struct Nuitka_FrameObject *frame_532d25dc4ba7ee32e537ecd5ef228f8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e)) {
        Py_XDECREF(cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e = MAKE_FUNCTION_FRAME(codeobj_532d25dc4ba7ee32e537ecd5ef228f8e, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e->m_type_description == NULL);
    frame_532d25dc4ba7ee32e537ecd5ef228f8e = cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_532d25dc4ba7ee32e537ecd5ef228f8e);
    assert(Py_REFCNT(frame_532d25dc4ba7ee32e537ecd5ef228f8e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_split_sizes);
        tmp_args_element_value_3 = par_split_sizes;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_args_element_value_5 = par__outputs;
        frame_532d25dc4ba7ee32e537ecd5ef228f8e->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_532d25dc4ba7ee32e537ecd5ef228f8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_532d25dc4ba7ee32e537ecd5ef228f8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_532d25dc4ba7ee32e537ecd5ef228f8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_532d25dc4ba7ee32e537ecd5ef228f8e,
        type_description_1,
        par_g,
        par_self,
        par_split_sizes,
        par_dim,
        par__outputs
    );


    // Release cached frame if used for exception.
    if (frame_532d25dc4ba7ee32e537ecd5ef228f8e == cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e);
        cache_frame_532d25dc4ba7ee32e537ecd5ef228f8e = NULL;
    }

    assertFrameObject(frame_532d25dc4ba7ee32e537ecd5ef228f8e);

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
    CHECK_OBJECT(par_split_sizes);
    Py_DECREF(par_split_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_split_sizes);
    Py_DECREF(par_split_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__6_unsafe_split(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_split_size_or_sizes = python_pars[2];
    PyObject *par_dim = python_pars[3];
    PyObject *par__outputs = python_pars[4];
    struct Nuitka_FrameObject *frame_32d9700e63e061b9c83b267a807a3daf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32d9700e63e061b9c83b267a807a3daf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32d9700e63e061b9c83b267a807a3daf)) {
        Py_XDECREF(cache_frame_32d9700e63e061b9c83b267a807a3daf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32d9700e63e061b9c83b267a807a3daf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32d9700e63e061b9c83b267a807a3daf = MAKE_FUNCTION_FRAME(codeobj_32d9700e63e061b9c83b267a807a3daf, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32d9700e63e061b9c83b267a807a3daf->m_type_description == NULL);
    frame_32d9700e63e061b9c83b267a807a3daf = cache_frame_32d9700e63e061b9c83b267a807a3daf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32d9700e63e061b9c83b267a807a3daf);
    assert(Py_REFCNT(frame_32d9700e63e061b9c83b267a807a3daf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_split_size_or_sizes);
        tmp_args_element_value_3 = par_split_size_or_sizes;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_args_element_value_5 = par__outputs;
        frame_32d9700e63e061b9c83b267a807a3daf->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_32d9700e63e061b9c83b267a807a3daf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32d9700e63e061b9c83b267a807a3daf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32d9700e63e061b9c83b267a807a3daf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32d9700e63e061b9c83b267a807a3daf,
        type_description_1,
        par_g,
        par_self,
        par_split_size_or_sizes,
        par_dim,
        par__outputs
    );


    // Release cached frame if used for exception.
    if (frame_32d9700e63e061b9c83b267a807a3daf == cache_frame_32d9700e63e061b9c83b267a807a3daf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32d9700e63e061b9c83b267a807a3daf);
        cache_frame_32d9700e63e061b9c83b267a807a3daf = NULL;
    }

    assertFrameObject(frame_32d9700e63e061b9c83b267a807a3daf);

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
    CHECK_OBJECT(par_split_size_or_sizes);
    Py_DECREF(par_split_size_or_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_split_size_or_sizes);
    Py_DECREF(par_split_size_or_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__7_unsafe_split_with_sizes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_split_sizes = python_pars[2];
    PyObject *par_dim = python_pars[3];
    PyObject *par__outputs = python_pars[4];
    struct Nuitka_FrameObject *frame_b4d4c368a338ae087db52b3ee5bdf0b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3)) {
        Py_XDECREF(cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3 = MAKE_FUNCTION_FRAME(codeobj_b4d4c368a338ae087db52b3ee5bdf0b3, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3->m_type_description == NULL);
    frame_b4d4c368a338ae087db52b3ee5bdf0b3 = cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4d4c368a338ae087db52b3ee5bdf0b3);
    assert(Py_REFCNT(frame_b4d4c368a338ae087db52b3ee5bdf0b3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_split_sizes);
        tmp_args_element_value_3 = par_split_sizes;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_args_element_value_5 = par__outputs;
        frame_b4d4c368a338ae087db52b3ee5bdf0b3->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_b4d4c368a338ae087db52b3ee5bdf0b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4d4c368a338ae087db52b3ee5bdf0b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4d4c368a338ae087db52b3ee5bdf0b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4d4c368a338ae087db52b3ee5bdf0b3,
        type_description_1,
        par_g,
        par_self,
        par_split_sizes,
        par_dim,
        par__outputs
    );


    // Release cached frame if used for exception.
    if (frame_b4d4c368a338ae087db52b3ee5bdf0b3 == cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3);
        cache_frame_b4d4c368a338ae087db52b3ee5bdf0b3 = NULL;
    }

    assertFrameObject(frame_b4d4c368a338ae087db52b3ee5bdf0b3);

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
    CHECK_OBJECT(par_split_sizes);
    Py_DECREF(par_split_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_split_sizes);
    Py_DECREF(par_split_sizes);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__8_unbind(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par__outputs = python_pars[3];
    PyObject *var_splits = NULL;
    PyObject *var_outputs = NULL;
    PyObject *var_squeezed_outputs = NULL;
    PyObject *outline_0_var_out = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_aeb9979c76d480cdf2826a1deaf21ae7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_158738f645d2abe3379b63f916e66a24_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_158738f645d2abe3379b63f916e66a24_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_aeb9979c76d480cdf2826a1deaf21ae7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aeb9979c76d480cdf2826a1deaf21ae7)) {
        Py_XDECREF(cache_frame_aeb9979c76d480cdf2826a1deaf21ae7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aeb9979c76d480cdf2826a1deaf21ae7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aeb9979c76d480cdf2826a1deaf21ae7 = MAKE_FUNCTION_FRAME(codeobj_aeb9979c76d480cdf2826a1deaf21ae7, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aeb9979c76d480cdf2826a1deaf21ae7->m_type_description == NULL);
    frame_aeb9979c76d480cdf2826a1deaf21ae7 = cache_frame_aeb9979c76d480cdf2826a1deaf21ae7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aeb9979c76d480cdf2826a1deaf21ae7);
    assert(Py_REFCNT(frame_aeb9979c76d480cdf2826a1deaf21ae7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par__outputs);
        tmp_cmp_expr_left_1 = par__outputs;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[24];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame.f_lineno = 107;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[56], kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame.f_lineno = 107;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        tmp_kw_call_dict_value_1_1 = mod_consts[29];
        frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame.f_lineno = 105;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_5 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[31]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = MAKE_LIST1(mod_consts[58]);
        CHECK_OBJECT(par__outputs);
        tmp_mult_expr_right_1 = par__outputs;
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame.f_lineno = 110;
        tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame.f_lineno = 110;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_splits == NULL);
        var_splits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[48];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(var_splits);
        tmp_kw_call_arg_value_2_2 = var_splits;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_2 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_kw_call_dict_value_1_2 = par__outputs;
        frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame.f_lineno = 111;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par__outputs);
        tmp_cmp_expr_left_2 = par__outputs;
        tmp_cmp_expr_right_2 = mod_consts[58];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_outputs);
        tmp_list_element_1 = var_outputs;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_3, 0, tmp_list_element_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_outputs);
        tmp_assign_source_3 = var_outputs;
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_1:;
        {
            PyObject *old = var_outputs;
            assert(old != NULL);
            var_outputs = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_outputs);
            tmp_iter_arg_1 = var_outputs;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_158738f645d2abe3379b63f916e66a24_2)) {
            Py_XDECREF(cache_frame_158738f645d2abe3379b63f916e66a24_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_158738f645d2abe3379b63f916e66a24_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_158738f645d2abe3379b63f916e66a24_2 = MAKE_FUNCTION_FRAME(codeobj_158738f645d2abe3379b63f916e66a24, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_158738f645d2abe3379b63f916e66a24_2->m_type_description == NULL);
        frame_158738f645d2abe3379b63f916e66a24_2 = cache_frame_158738f645d2abe3379b63f916e66a24_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_158738f645d2abe3379b63f916e66a24_2);
        assert(Py_REFCNT(frame_158738f645d2abe3379b63f916e66a24_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 113;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_out;
                outline_0_var_out = tmp_assign_source_8;
                Py_INCREF(outline_0_var_out);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_list_element_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_g == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_expression_value_8 = par_g;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_2 = mod_consts[59];
            CHECK_OBJECT(outline_0_var_out);
            tmp_args_element_value_3 = outline_0_var_out;
            if (par_g == NULL) {
                Py_DECREF(tmp_called_value_7);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_expression_value_9 = par_g;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[0]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[31]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (par_dim == NULL) {
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_called_value_9);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_list_element_2 = par_dim;
            tmp_args_element_value_5 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_args_element_value_5, 0, tmp_list_element_2);
            frame_158738f645d2abe3379b63f916e66a24_2->m_frame.f_lineno = 113;
            tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_kw_call_value_0_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_158738f645d2abe3379b63f916e66a24_2->m_frame.f_lineno = 113;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
                tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_8, mod_consts[35], kw_values, mod_consts[36]);
            }

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_0_4);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_158738f645d2abe3379b63f916e66a24_2->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_4 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_4);
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
            exception_tb = MAKE_TRACEBACK(frame_158738f645d2abe3379b63f916e66a24_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_158738f645d2abe3379b63f916e66a24_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_158738f645d2abe3379b63f916e66a24_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_158738f645d2abe3379b63f916e66a24_2,
            type_description_2,
            outline_0_var_out,
            par_g,
            par_dim
        );


        // Release cached frame if used for exception.
        if (frame_158738f645d2abe3379b63f916e66a24_2 == cache_frame_158738f645d2abe3379b63f916e66a24_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_158738f645d2abe3379b63f916e66a24_2);
            cache_frame_158738f645d2abe3379b63f916e66a24_2 = NULL;
        }

        assertFrameObject(frame_158738f645d2abe3379b63f916e66a24_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_out);
        outline_0_var_out = NULL;
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

        Py_XDECREF(outline_0_var_out);
        outline_0_var_out = NULL;
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
        exception_lineno = 113;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_squeezed_outputs == NULL);
        var_squeezed_outputs = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_aeb9979c76d480cdf2826a1deaf21ae7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aeb9979c76d480cdf2826a1deaf21ae7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aeb9979c76d480cdf2826a1deaf21ae7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aeb9979c76d480cdf2826a1deaf21ae7,
        type_description_1,
        par_g,
        par_self,
        par_dim,
        par__outputs,
        var_splits,
        var_outputs,
        var_squeezed_outputs
    );


    // Release cached frame if used for exception.
    if (frame_aeb9979c76d480cdf2826a1deaf21ae7 == cache_frame_aeb9979c76d480cdf2826a1deaf21ae7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aeb9979c76d480cdf2826a1deaf21ae7);
        cache_frame_aeb9979c76d480cdf2826a1deaf21ae7 = NULL;
    }

    assertFrameObject(frame_aeb9979c76d480cdf2826a1deaf21ae7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_squeezed_outputs);
    tmp_return_value = var_squeezed_outputs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_outputs);
    var_outputs = NULL;
    Py_XDECREF(var_squeezed_outputs);
    var_squeezed_outputs = NULL;
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

    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_outputs);
    var_outputs = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__9_nonzero_numpy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par__outputs = python_pars[2];
    struct Nuitka_FrameObject *frame_be9444cef90277d7f22443dc649fff5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be9444cef90277d7f22443dc649fff5d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be9444cef90277d7f22443dc649fff5d)) {
        Py_XDECREF(cache_frame_be9444cef90277d7f22443dc649fff5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be9444cef90277d7f22443dc649fff5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be9444cef90277d7f22443dc649fff5d = MAKE_FUNCTION_FRAME(codeobj_be9444cef90277d7f22443dc649fff5d, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be9444cef90277d7f22443dc649fff5d->m_type_description == NULL);
    frame_be9444cef90277d7f22443dc649fff5d = cache_frame_be9444cef90277d7f22443dc649fff5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be9444cef90277d7f22443dc649fff5d);
    assert(Py_REFCNT(frame_be9444cef90277d7f22443dc649fff5d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_1 = par_g;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        frame_be9444cef90277d7f22443dc649fff5d->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_1 = mod_consts[58];
        CHECK_OBJECT(par__outputs);
        tmp_kw_call_dict_value_0_1 = par__outputs;
        frame_be9444cef90277d7f22443dc649fff5d->m_frame.f_lineno = 119;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_be9444cef90277d7f22443dc649fff5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be9444cef90277d7f22443dc649fff5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be9444cef90277d7f22443dc649fff5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be9444cef90277d7f22443dc649fff5d,
        type_description_1,
        par_g,
        par_input,
        par__outputs
    );


    // Release cached frame if used for exception.
    if (frame_be9444cef90277d7f22443dc649fff5d == cache_frame_be9444cef90277d7f22443dc649fff5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be9444cef90277d7f22443dc649fff5d);
        cache_frame_be9444cef90277d7f22443dc649fff5d = NULL;
    }

    assertFrameObject(frame_be9444cef90277d7f22443dc649fff5d);

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
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__10_where(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_condition = python_pars[1];
    PyObject *par_self = python_pars[2];
    PyObject *par_other = python_pars[3];
    PyObject *par__outputs = python_pars[4];
    struct Nuitka_FrameObject *frame_bfb3d0b4d5e348069d85a11c607b4041;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bfb3d0b4d5e348069d85a11c607b4041 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bfb3d0b4d5e348069d85a11c607b4041)) {
        Py_XDECREF(cache_frame_bfb3d0b4d5e348069d85a11c607b4041);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bfb3d0b4d5e348069d85a11c607b4041 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bfb3d0b4d5e348069d85a11c607b4041 = MAKE_FUNCTION_FRAME(codeobj_bfb3d0b4d5e348069d85a11c607b4041, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bfb3d0b4d5e348069d85a11c607b4041->m_type_description == NULL);
    frame_bfb3d0b4d5e348069d85a11c607b4041 = cache_frame_bfb3d0b4d5e348069d85a11c607b4041;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bfb3d0b4d5e348069d85a11c607b4041);
    assert(Py_REFCNT(frame_bfb3d0b4d5e348069d85a11c607b4041) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_condition);
        tmp_called_instance_2 = par_condition;
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 125;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[63]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 125;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[64]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[65];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        CHECK_OBJECT(par_condition);
        tmp_kw_call_arg_value_1_1 = par_condition;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[66]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[65];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 126;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_condition;
            assert(old != NULL);
            par_condition = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_left_2 = par_self;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_g;
        if (par_condition == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_condition;
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_condition;
            par_condition = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[68]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_g;
        CHECK_OBJECT(par_condition);
        tmp_args_element_value_4 = par_condition;
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 129;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 129;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__outputs);
        tmp_args_element_value_6 = par__outputs;
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_g;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[69];
        if (par_condition == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_condition;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_9 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_10 = par_other;
        frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bfb3d0b4d5e348069d85a11c607b4041, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bfb3d0b4d5e348069d85a11c607b4041->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bfb3d0b4d5e348069d85a11c607b4041, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bfb3d0b4d5e348069d85a11c607b4041,
        type_description_1,
        par_g,
        par_condition,
        par_self,
        par_other,
        par__outputs
    );


    // Release cached frame if used for exception.
    if (frame_bfb3d0b4d5e348069d85a11c607b4041 == cache_frame_bfb3d0b4d5e348069d85a11c607b4041) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bfb3d0b4d5e348069d85a11c607b4041);
        cache_frame_bfb3d0b4d5e348069d85a11c607b4041 = NULL;
    }

    assertFrameObject(frame_bfb3d0b4d5e348069d85a11c607b4041);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_condition);
    par_condition = NULL;
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

    Py_XDECREF(par_condition);
    par_condition = NULL;
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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__11_fake_quantize_per_channel_affine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_inputs = python_pars[1];
    PyObject *par_scale = python_pars[2];
    PyObject *par_zero_point = python_pars[3];
    PyObject *par_axis = python_pars[4];
    PyObject *par_quant_min = python_pars[5];
    PyObject *par_quant_max = python_pars[6];
    struct Nuitka_FrameObject *frame_d63f5e5e348091f6627b9486846879be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d63f5e5e348091f6627b9486846879be = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d63f5e5e348091f6627b9486846879be)) {
        Py_XDECREF(cache_frame_d63f5e5e348091f6627b9486846879be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d63f5e5e348091f6627b9486846879be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d63f5e5e348091f6627b9486846879be = MAKE_FUNCTION_FRAME(codeobj_d63f5e5e348091f6627b9486846879be, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d63f5e5e348091f6627b9486846879be->m_type_description == NULL);
    frame_d63f5e5e348091f6627b9486846879be = cache_frame_d63f5e5e348091f6627b9486846879be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d63f5e5e348091f6627b9486846879be);
    assert(Py_REFCNT(frame_d63f5e5e348091f6627b9486846879be) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_quant_min);
        tmp_cmp_expr_left_1 = par_quant_min;
        tmp_cmp_expr_right_1 = MAKE_LIST2(mod_consts[29],mod_consts[70]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT(par_quant_max);
        tmp_cmp_expr_left_2 = par_quant_max;
        tmp_cmp_expr_right_2 = MAKE_LIST2(mod_consts[71],mod_consts[72]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[73];
        CHECK_OBJECT(par_quant_min);
        tmp_kw_call_arg_value_1_1 = par_quant_min;
        CHECK_OBJECT(par_quant_max);
        tmp_kw_call_arg_value_2_1 = par_quant_max;
        frame_d63f5e5e348091f6627b9486846879be->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d63f5e5e348091f6627b9486846879be->m_frame.f_lineno = 135;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 135;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_quant_min);
        tmp_cmp_expr_left_3 = par_quant_min;
        tmp_cmp_expr_right_3 = mod_consts[29];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[10];
        CHECK_OBJECT(par_zero_point);
        tmp_kw_call_arg_value_1_2 = par_zero_point;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[66]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[74];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d63f5e5e348091f6627b9486846879be->m_frame.f_lineno = 140;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_zero_point;
            assert(old != NULL);
            par_zero_point = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[10];
        CHECK_OBJECT(par_zero_point);
        tmp_kw_call_arg_value_1_3 = par_zero_point;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[66]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[75];
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d63f5e5e348091f6627b9486846879be->m_frame.f_lineno = 142;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_zero_point;
            assert(old != NULL);
            par_zero_point = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[76];
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[77];
        CHECK_OBJECT(par_inputs);
        tmp_kw_call_arg_value_1_5 = par_inputs;
        CHECK_OBJECT(par_scale);
        tmp_kw_call_arg_value_2_2 = par_scale;
        CHECK_OBJECT(par_zero_point);
        tmp_kw_call_arg_value_3_1 = par_zero_point;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_dict_value_0_3 = par_axis;
        frame_d63f5e5e348091f6627b9486846879be->m_frame.f_lineno = 145;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_kw_call_arg_value_1_4 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_kw_call_arg_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_kw_call_arg_value_2_3 = par_scale;
        CHECK_OBJECT(par_zero_point);
        tmp_kw_call_arg_value_3_2 = par_zero_point;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_dict_value_0_4 = par_axis;
        frame_d63f5e5e348091f6627b9486846879be->m_frame.f_lineno = 143;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_1_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_d63f5e5e348091f6627b9486846879be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d63f5e5e348091f6627b9486846879be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d63f5e5e348091f6627b9486846879be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d63f5e5e348091f6627b9486846879be,
        type_description_1,
        par_g,
        par_inputs,
        par_scale,
        par_zero_point,
        par_axis,
        par_quant_min,
        par_quant_max
    );


    // Release cached frame if used for exception.
    if (frame_d63f5e5e348091f6627b9486846879be == cache_frame_d63f5e5e348091f6627b9486846879be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d63f5e5e348091f6627b9486846879be);
        cache_frame_d63f5e5e348091f6627b9486846879be = NULL;
    }

    assertFrameObject(frame_d63f5e5e348091f6627b9486846879be);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    par_zero_point = NULL;
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

    Py_XDECREF(par_zero_point);
    par_zero_point = NULL;
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
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_onnx_op_name = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_symbolic = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_defaults_1 = mod_consts[78];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_onnx_op_name;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic$$$function__1_symbolic(tmp_defaults_1, tmp_closure_1);

        assert(var_symbolic == NULL);
        var_symbolic = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_symbolic);
    tmp_return_value = var_symbolic;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_symbolic);
    Py_DECREF(var_symbolic);
    var_symbolic = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_onnx_op_name);
    Py_DECREF(par_onnx_op_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic$$$function__1_symbolic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    struct Nuitka_FrameObject *frame_2151e74e3ba766cb6f2784c8e219e5a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2151e74e3ba766cb6f2784c8e219e5a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2151e74e3ba766cb6f2784c8e219e5a6)) {
        Py_XDECREF(cache_frame_2151e74e3ba766cb6f2784c8e219e5a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2151e74e3ba766cb6f2784c8e219e5a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2151e74e3ba766cb6f2784c8e219e5a6 = MAKE_FUNCTION_FRAME(codeobj_2151e74e3ba766cb6f2784c8e219e5a6, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2151e74e3ba766cb6f2784c8e219e5a6->m_type_description == NULL);
    frame_2151e74e3ba766cb6f2784c8e219e5a6 = cache_frame_2151e74e3ba766cb6f2784c8e219e5a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2151e74e3ba766cb6f2784c8e219e5a6);
    assert(Py_REFCNT(frame_2151e74e3ba766cb6f2784c8e219e5a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_2151e74e3ba766cb6f2784c8e219e5a6->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_self;
            assert(old != NULL);
            par_self = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_dim);
        tmp_cmp_expr_left_1 = par_dim;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_3 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_4 = par_self;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_2151e74e3ba766cb6f2784c8e219e5a6->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keepdim);
        tmp_args_element_value_6 = par_keepdim;
        tmp_args_element_value_7 = mod_consts[9];
        tmp_args_element_value_8 = mod_consts[84];
        frame_2151e74e3ba766cb6f2784c8e219e5a6->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keepdim;
            assert(old != NULL);
            par_keepdim = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_2_1 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_kw_call_dict_value_0_1 = par_keepdim;
        frame_2151e74e3ba766cb6f2784c8e219e5a6->m_frame.f_lineno = 156;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[21]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_2151e74e3ba766cb6f2784c8e219e5a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2151e74e3ba766cb6f2784c8e219e5a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2151e74e3ba766cb6f2784c8e219e5a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2151e74e3ba766cb6f2784c8e219e5a6,
        type_description_1,
        par_g,
        par_self,
        par_dim,
        par_keepdim,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2151e74e3ba766cb6f2784c8e219e5a6 == cache_frame_2151e74e3ba766cb6f2784c8e219e5a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2151e74e3ba766cb6f2784c8e219e5a6);
        cache_frame_2151e74e3ba766cb6f2784c8e219e5a6 = NULL;
    }

    assertFrameObject(frame_2151e74e3ba766cb6f2784c8e219e5a6);

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
    Py_XDECREF(par_keepdim);
    par_keepdim = NULL;
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
    Py_XDECREF(par_keepdim);
    par_keepdim = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_onnx_op = python_pars[0];
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_symbolic = Nuitka_Cell_Empty();
    PyObject *var_reduce = NULL;
    struct Nuitka_FrameObject *frame_ffb7807c10c6e0f4b1276038970f0d6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffb7807c10c6e0f4b1276038970f0d6a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ffb7807c10c6e0f4b1276038970f0d6a)) {
        Py_XDECREF(cache_frame_ffb7807c10c6e0f4b1276038970f0d6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffb7807c10c6e0f4b1276038970f0d6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffb7807c10c6e0f4b1276038970f0d6a = MAKE_FUNCTION_FRAME(codeobj_ffb7807c10c6e0f4b1276038970f0d6a, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffb7807c10c6e0f4b1276038970f0d6a->m_type_description == NULL);
    frame_ffb7807c10c6e0f4b1276038970f0d6a = cache_frame_ffb7807c10c6e0f4b1276038970f0d6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffb7807c10c6e0f4b1276038970f0d6a);
    assert(Py_REFCNT(frame_ffb7807c10c6e0f4b1276038970f0d6a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_onnx_op);
        tmp_args_element_value_1 = par_onnx_op;
        frame_ffb7807c10c6e0f4b1276038970f0d6a->m_frame.f_lineno = 160;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_symbolic) == NULL);
        PyCell_SET(var_symbolic, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_name;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_symbolic;
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_value_2 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce(tmp_closure_1);

        frame_ffb7807c10c6e0f4b1276038970f0d6a->m_frame.f_lineno = 162;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(var_reduce == NULL);
        var_reduce = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffb7807c10c6e0f4b1276038970f0d6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffb7807c10c6e0f4b1276038970f0d6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffb7807c10c6e0f4b1276038970f0d6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffb7807c10c6e0f4b1276038970f0d6a,
        type_description_1,
        par_onnx_op,
        par_name,
        var_symbolic,
        var_reduce
    );


    // Release cached frame if used for exception.
    if (frame_ffb7807c10c6e0f4b1276038970f0d6a == cache_frame_ffb7807c10c6e0f4b1276038970f0d6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffb7807c10c6e0f4b1276038970f0d6a);
        cache_frame_ffb7807c10c6e0f4b1276038970f0d6a = NULL;
    }

    assertFrameObject(frame_ffb7807c10c6e0f4b1276038970f0d6a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_reduce);
    tmp_return_value = var_reduce;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_symbolic);
    Py_DECREF(var_symbolic);
    var_symbolic = NULL;
    CHECK_OBJECT(var_reduce);
    Py_DECREF(var_reduce);
    var_reduce = NULL;
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

    CHECK_OBJECT(var_symbolic);
    Py_DECREF(var_symbolic);
    var_symbolic = NULL;
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
    CHECK_OBJECT(par_onnx_op);
    Py_DECREF(par_onnx_op);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_onnx_op);
    Py_DECREF(par_onnx_op);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_reduce_nodim = NULL;
    PyObject *var_reduce_dim = NULL;
    struct Nuitka_FrameObject *frame_6e3ee2163b385cbdfe331dbc391a85a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e3ee2163b385cbdfe331dbc391a85a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e3ee2163b385cbdfe331dbc391a85a0)) {
        Py_XDECREF(cache_frame_6e3ee2163b385cbdfe331dbc391a85a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e3ee2163b385cbdfe331dbc391a85a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e3ee2163b385cbdfe331dbc391a85a0 = MAKE_FUNCTION_FRAME(codeobj_6e3ee2163b385cbdfe331dbc391a85a0, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e3ee2163b385cbdfe331dbc391a85a0->m_type_description == NULL);
    frame_6e3ee2163b385cbdfe331dbc391a85a0 = cache_frame_6e3ee2163b385cbdfe331dbc391a85a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e3ee2163b385cbdfe331dbc391a85a0);
    assert(Py_REFCNT(frame_6e3ee2163b385cbdfe331dbc391a85a0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6e3ee2163b385cbdfe331dbc391a85a0->m_frame.f_lineno = 164;
        tmp_called_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[90]);

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_value_1 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__1_reduce_nodim(tmp_closure_1);

        frame_6e3ee2163b385cbdfe331dbc391a85a0->m_frame.f_lineno = 164;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reduce_nodim == NULL);
        var_reduce_nodim = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_2[2];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6e3ee2163b385cbdfe331dbc391a85a0->m_frame.f_lineno = 173;
        tmp_called_value_3 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_4, mod_consts[93]);

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_2[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = self->m_closure[1];
        Py_INCREF(tmp_closure_2[1]);

        tmp_args_element_value_2 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__2_reduce_dim(tmp_closure_2);

        frame_6e3ee2163b385cbdfe331dbc391a85a0->m_frame.f_lineno = 173;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reduce_dim == NULL);
        var_reduce_dim = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e3ee2163b385cbdfe331dbc391a85a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e3ee2163b385cbdfe331dbc391a85a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e3ee2163b385cbdfe331dbc391a85a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e3ee2163b385cbdfe331dbc391a85a0,
        type_description_1,
        par_g,
        par_args,
        par_kwargs,
        var_reduce_nodim,
        var_reduce_dim
    );


    // Release cached frame if used for exception.
    if (frame_6e3ee2163b385cbdfe331dbc391a85a0 == cache_frame_6e3ee2163b385cbdfe331dbc391a85a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e3ee2163b385cbdfe331dbc391a85a0);
        cache_frame_6e3ee2163b385cbdfe331dbc391a85a0 = NULL;
    }

    assertFrameObject(frame_6e3ee2163b385cbdfe331dbc391a85a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_reduce_nodim);
        tmp_tuple_element_1 = var_reduce_nodim;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_reduce_dim);
        tmp_tuple_element_1 = var_reduce_dim;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reduce_nodim);
    Py_DECREF(var_reduce_nodim);
    var_reduce_nodim = NULL;
    CHECK_OBJECT(var_reduce_dim);
    Py_DECREF(var_reduce_dim);
    var_reduce_dim = NULL;
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

    Py_XDECREF(var_reduce_nodim);
    var_reduce_nodim = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__1_reduce_nodim(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    struct Nuitka_FrameObject *frame_4bba3c28f00f64d079f635a95a35363b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4bba3c28f00f64d079f635a95a35363b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4bba3c28f00f64d079f635a95a35363b)) {
        Py_XDECREF(cache_frame_4bba3c28f00f64d079f635a95a35363b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4bba3c28f00f64d079f635a95a35363b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4bba3c28f00f64d079f635a95a35363b = MAKE_FUNCTION_FRAME(codeobj_4bba3c28f00f64d079f635a95a35363b, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4bba3c28f00f64d079f635a95a35363b->m_type_description == NULL);
    frame_4bba3c28f00f64d079f635a95a35363b = cache_frame_4bba3c28f00f64d079f635a95a35363b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4bba3c28f00f64d079f635a95a35363b);
    assert(Py_REFCNT(frame_4bba3c28f00f64d079f635a95a35363b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_2 = par_dtype;
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 166;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 166;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[96];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooocc";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_1 = par_dtype;
        tmp_args_element_value_2 = mod_consts[9];
        tmp_args_element_value_3 = mod_consts[8];
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 168;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 168;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_subscript_value_1 = par_dtype;
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 168;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 168;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_self;
            assert(old != NULL);
            par_self = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_5 = par_dtype;
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 169;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[3]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 169;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[4]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_5 = mod_consts[8];
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_6 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_7 = par_self;
        frame_4bba3c28f00f64d079f635a95a35363b->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4bba3c28f00f64d079f635a95a35363b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4bba3c28f00f64d079f635a95a35363b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4bba3c28f00f64d079f635a95a35363b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4bba3c28f00f64d079f635a95a35363b,
        type_description_1,
        par_g,
        par_self,
        par_dtype,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_4bba3c28f00f64d079f635a95a35363b == cache_frame_4bba3c28f00f64d079f635a95a35363b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4bba3c28f00f64d079f635a95a35363b);
        cache_frame_4bba3c28f00f64d079f635a95a35363b = NULL;
    }

    assertFrameObject(frame_4bba3c28f00f64d079f635a95a35363b);

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
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
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
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
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


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__2_reduce_dim(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_keepdim = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    struct Nuitka_FrameObject *frame_08caf1587eae5968283991ee29f46d6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_08caf1587eae5968283991ee29f46d6b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_08caf1587eae5968283991ee29f46d6b)) {
        Py_XDECREF(cache_frame_08caf1587eae5968283991ee29f46d6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08caf1587eae5968283991ee29f46d6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08caf1587eae5968283991ee29f46d6b = MAKE_FUNCTION_FRAME(codeobj_08caf1587eae5968283991ee29f46d6b, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08caf1587eae5968283991ee29f46d6b->m_type_description == NULL);
    frame_08caf1587eae5968283991ee29f46d6b = cache_frame_08caf1587eae5968283991ee29f46d6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08caf1587eae5968283991ee29f46d6b);
    assert(Py_REFCNT(frame_08caf1587eae5968283991ee29f46d6b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_2 = par_dtype;
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 175;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 175;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[96];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooocc";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_1 = par_dtype;
        tmp_args_element_value_2 = mod_consts[9];
        tmp_args_element_value_3 = mod_consts[8];
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 177;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 177;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_subscript_value_1 = par_dtype;
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 177;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 177;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_self;
            assert(old != NULL);
            par_self = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_5 = par_dtype;
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 178;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[3]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 178;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[4]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooocc";
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
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_5 = mod_consts[8];
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_6 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_7 = par_self;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_8 = par_dim;
        CHECK_OBJECT(par_keepdim);
        tmp_args_element_value_9 = par_keepdim;
        frame_08caf1587eae5968283991ee29f46d6b->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooocc";
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
        exception_tb = MAKE_TRACEBACK(frame_08caf1587eae5968283991ee29f46d6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08caf1587eae5968283991ee29f46d6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08caf1587eae5968283991ee29f46d6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08caf1587eae5968283991ee29f46d6b,
        type_description_1,
        par_g,
        par_self,
        par_dim,
        par_keepdim,
        par_dtype,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_08caf1587eae5968283991ee29f46d6b == cache_frame_08caf1587eae5968283991ee29f46d6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08caf1587eae5968283991ee29f46d6b);
        cache_frame_08caf1587eae5968283991ee29f46d6b = NULL;
    }

    assertFrameObject(frame_08caf1587eae5968283991ee29f46d6b);

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
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
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
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_keepdim);
    Py_DECREF(par_keepdim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__14_unsafe_chunk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_chunks = python_pars[2];
    PyObject *par_dim = python_pars[3];
    PyObject *par__outputs = python_pars[4];
    PyObject *var_size = NULL;
    PyObject *var_split_size = NULL;
    PyObject *var_splits = NULL;
    PyObject *var_leftover = NULL;
    struct Nuitka_FrameObject *frame_9ea2de4a045194ab649e1d279f183834;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9ea2de4a045194ab649e1d279f183834 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9ea2de4a045194ab649e1d279f183834)) {
        Py_XDECREF(cache_frame_9ea2de4a045194ab649e1d279f183834);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ea2de4a045194ab649e1d279f183834 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ea2de4a045194ab649e1d279f183834 = MAKE_FUNCTION_FRAME(codeobj_9ea2de4a045194ab649e1d279f183834, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ea2de4a045194ab649e1d279f183834->m_type_description == NULL);
    frame_9ea2de4a045194ab649e1d279f183834 = cache_frame_9ea2de4a045194ab649e1d279f183834;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ea2de4a045194ab649e1d279f183834);
    assert(Py_REFCNT(frame_9ea2de4a045194ab649e1d279f183834) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par__outputs);
        tmp_cmp_expr_left_1 = par__outputs;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[24];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 191;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[56], kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 191;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 191;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_1 = par_dim;
        tmp_kw_call_dict_value_1_1 = mod_consts[29];
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 189;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_2 = par_dim;
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_size == NULL);
        var_size = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_size);
        tmp_cmp_expr_left_2 = var_size;
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
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 196;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[99]);

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_size);
        tmp_add_expr_left_1 = var_size;
        CHECK_OBJECT(par_chunks);
        tmp_add_expr_right_1 = par_chunks;
        tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[58];
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_chunks);
        tmp_floordiv_expr_right_1 = par_chunks;
        tmp_assign_source_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_size == NULL);
        var_split_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        CHECK_OBJECT(var_split_size);
        tmp_list_element_1 = var_split_size;
        tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(var_size);
        tmp_floordiv_expr_left_2 = var_size;
        CHECK_OBJECT(var_split_size);
        tmp_floordiv_expr_right_2 = var_split_size;
        tmp_mult_expr_right_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 198;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_splits == NULL);
        var_splits = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(var_size);
        tmp_mod_expr_left_1 = var_size;
        CHECK_OBJECT(var_split_size);
        tmp_mod_expr_right_1 = var_split_size;
        tmp_assign_source_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_leftover == NULL);
        var_leftover = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_leftover);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_leftover);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_splits);
        tmp_expression_value_5 = var_splits;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_leftover);
        tmp_args_element_value_3 = var_leftover;
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 201;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_g);
        tmp_expression_value_6 = par_g;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_splits == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = var_splits;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 206;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 206;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_6, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_splits;
            var_splits = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_9 = par_g;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[48];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(var_splits);
        tmp_kw_call_arg_value_2_2 = var_splits;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_3 = par_dim;
        CHECK_OBJECT(par__outputs);
        tmp_kw_call_dict_value_1_2 = par__outputs;
        frame_9ea2de4a045194ab649e1d279f183834->m_frame.f_lineno = 207;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9ea2de4a045194ab649e1d279f183834, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ea2de4a045194ab649e1d279f183834->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ea2de4a045194ab649e1d279f183834, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ea2de4a045194ab649e1d279f183834,
        type_description_1,
        par_g,
        par_self,
        par_chunks,
        par_dim,
        par__outputs,
        var_size,
        var_split_size,
        var_splits,
        var_leftover
    );


    // Release cached frame if used for exception.
    if (frame_9ea2de4a045194ab649e1d279f183834 == cache_frame_9ea2de4a045194ab649e1d279f183834) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ea2de4a045194ab649e1d279f183834);
        cache_frame_9ea2de4a045194ab649e1d279f183834 = NULL;
    }

    assertFrameObject(frame_9ea2de4a045194ab649e1d279f183834);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_split_size);
    var_split_size = NULL;
    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_leftover);
    var_leftover = NULL;
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

    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_split_size);
    var_split_size = NULL;
    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_leftover);
    var_leftover = NULL;
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
    CHECK_OBJECT(par_chunks);
    Py_DECREF(par_chunks);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_chunks);
    Py_DECREF(par_chunks);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par__outputs);
    Py_DECREF(par__outputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__15_repeat_interleave(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_repeats = python_pars[2];
    PyObject *par_dim = python_pars[3];
    PyObject *par_output_size = python_pars[4];
    PyObject *var_input = NULL;
    PyObject *var_final_dim = NULL;
    PyObject *var_repeats_dim = NULL;
    PyObject *var_repeats_sizes = NULL;
    PyObject *var_input_sizes = NULL;
    PyObject *var_output_sizes = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_input_size = NULL;
    PyObject *var_cond_dynamic_repeats = NULL;
    PyObject *var_reps = NULL;
    PyObject *var_repeat_dim = NULL;
    PyObject *var_repeat_cond = NULL;
    PyObject *var_reps_like = NULL;
    PyObject *var_r_splits = NULL;
    PyObject *var_i_splits = NULL;
    PyObject *var_loop_condition = NULL;
    PyObject *var_loop_len = NULL;
    PyObject *var_final_splits = NULL;
    PyObject *var_loop = NULL;
    PyObject *var_loop_block = NULL;
    PyObject *var_block_input_iter = NULL;
    PyObject *var_cond = NULL;
    PyObject *var_r_split = NULL;
    PyObject *var_i_split = NULL;
    PyObject *var_r_concat = NULL;
    PyObject *var_cond_out = NULL;
    PyObject *var_loop_out = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bea42d5e9e7f243b50f0da4fe99efc15;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_bea42d5e9e7f243b50f0da4fe99efc15 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_self);
        tmp_assign_source_1 = par_self;
        assert(var_input == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_input = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_dim);
        tmp_assign_source_2 = par_dim;
        assert(var_final_dim == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_final_dim = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_bea42d5e9e7f243b50f0da4fe99efc15)) {
        Py_XDECREF(cache_frame_bea42d5e9e7f243b50f0da4fe99efc15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bea42d5e9e7f243b50f0da4fe99efc15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bea42d5e9e7f243b50f0da4fe99efc15 = MAKE_FUNCTION_FRAME(codeobj_bea42d5e9e7f243b50f0da4fe99efc15, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bea42d5e9e7f243b50f0da4fe99efc15->m_type_description == NULL);
    frame_bea42d5e9e7f243b50f0da4fe99efc15 = cache_frame_bea42d5e9e7f243b50f0da4fe99efc15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bea42d5e9e7f243b50f0da4fe99efc15);
    assert(Py_REFCNT(frame_bea42d5e9e7f243b50f0da4fe99efc15) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_1 = par_dim;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 214;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[100], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_3;
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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_2 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[102]);
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 215;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[31], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 215;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_input;
            assert(old != NULL);
            var_input = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[29];
        {
            PyObject *old = par_dim;
            assert(old != NULL);
            par_dim = tmp_assign_source_4;
            Py_INCREF(par_dim);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_5 = par_dim;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 218;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[103], tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dim;
            assert(old != NULL);
            par_dim = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_6 = par_repeats;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 220;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[104], tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_repeats_dim == NULL);
        var_repeats_dim = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_7 = par_repeats;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 221;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[105], tmp_args_element_value_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_repeats_sizes == NULL);
        var_repeats_sizes = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_input);
        tmp_args_element_value_8 = var_input;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 222;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[105], tmp_args_element_value_8);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_input_sizes == NULL);
        var_input_sizes = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_repeats_dim);
        tmp_cmp_expr_left_1 = var_repeats_dim;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[106];
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 224;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 224;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_repeats_sizes);
        tmp_cmp_expr_left_2 = var_repeats_sizes;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
        tmp_make_exception_arg_2 = mod_consts[107];
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 227;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 227;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_input_sizes);
        tmp_cmp_expr_left_3 = var_input_sizes;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[108];
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 230;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 230;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_dim);
        tmp_cmp_expr_left_4 = par_dim;
        tmp_cmp_expr_right_4 = mod_consts[29];
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_dim);
        tmp_iadd_expr_left_1 = par_dim;
        CHECK_OBJECT(var_input_sizes);
        tmp_len_arg_1 = var_input_sizes;
        tmp_iadd_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        par_dim = tmp_assign_source_9;

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        if (var_input_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_input_sizes;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[110]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 236;
        tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output_sizes == NULL);
        var_output_sizes = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_4 = (PyObject *)&PyEnum_Type;
        if (var_input_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_input_sizes;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 237;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_9);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                exception_lineno = 237;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 237;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 237;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooo";
                    exception_lineno = 237;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[111];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 237;
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
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_16;
            Py_INCREF(var_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_input_size;
            var_input_size = tmp_assign_source_17;
            Py_INCREF(var_input_size);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_input_size);
        tmp_cmp_expr_left_5 = var_input_size;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[112];
        tmp_assign_source_18 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_18 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 239;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 239;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooo";
                    exception_lineno = 239;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[111];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 239;
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
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_ass_subvalue_1 = tmp_tuple_unpack_2__element_1;
        if (var_output_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = var_output_sizes;
        CHECK_OBJECT(var_idx);
        tmp_ass_subscript_1 = var_idx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_ass_subvalue_2 = tmp_tuple_unpack_2__element_2;
        if (var_input_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_2 = var_input_sizes;
        CHECK_OBJECT(var_idx);
        tmp_ass_subscript_2 = var_idx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_no_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 237;
        type_description_1 = "oooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[114]);
        assert(tmp_called_value_5 != NULL);
        if (var_output_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_output_sizes;
        if (var_input_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_input_sizes;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_21;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_repeats_dim);
        tmp_cmp_expr_left_6 = var_repeats_dim;
        tmp_cmp_expr_right_6 = mod_consts[58];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(var_repeats_sizes);
        tmp_expression_value_4 = var_repeats_sizes;
        tmp_subscript_value_1 = mod_consts[29];
        tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_INCREF(tmp_and_right_value_1);
        tmp_assign_source_21 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_21 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_cond_dynamic_repeats == NULL);
        var_cond_dynamic_repeats = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        int tmp_truth_name_2;
        if (var_output_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_output_sizes;
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_2 = par_dim;
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[29];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_cond_dynamic_repeats);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_cond_dynamic_repeats);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_7 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_12 = par_g;
        CHECK_OBJECT(var_input);
        tmp_args_element_value_13 = var_input;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_14 = par_dim;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_7,
                mod_consts[115],
                call_args
            );
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reps == NULL);
        var_reps = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_15 = par_g;
        CHECK_OBJECT(var_reps);
        tmp_args_element_value_16 = var_reps;
        tmp_args_element_value_17 = mod_consts[29];
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_reps;
            assert(old != NULL);
            var_reps = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_repeats_dim);
        tmp_cmp_expr_left_9 = var_repeats_dim;
        tmp_cmp_expr_right_9 = mod_consts[29];
        tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_repeats_dim);
        tmp_cmp_expr_left_10 = var_repeats_dim;
        tmp_cmp_expr_right_10 = mod_consts[58];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_repeats_sizes);
        tmp_expression_value_6 = var_repeats_sizes;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_3, 0);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = mod_consts[58];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_2 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_8 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_8 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_18;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_18 = par_repeats;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 250;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[117], tmp_args_element_value_18);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 251;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_19 = par_repeats;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 251;
        tmp_kw_call_value_0_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[118], tmp_args_element_value_19);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 251;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 251;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_7, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_repeats;
            assert(old != NULL);
            par_repeats = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(par_g);
        tmp_expression_value_8 = par_g;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = mod_consts[119];
        if (par_repeats == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = par_repeats;
        CHECK_OBJECT(var_reps);
        tmp_args_element_value_22 = var_reps;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_repeats;
            par_repeats = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_cond_dynamic_repeats);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_cond_dynamic_repeats);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_arg_element_2;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[115]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_23 = par_g;
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_24 = par_repeats;
        CHECK_OBJECT(par_g);
        tmp_expression_value_10 = par_g;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[0]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_2 = MAKE_LIST1(mod_consts[29]);
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 257;
        tmp_kw_call_value_0_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[118], tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 257;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_10, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_repeat_dim == NULL);
        var_repeat_dim = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_arg_element_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_11 = par_g;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[0]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[121];
        CHECK_OBJECT(var_repeat_dim);
        tmp_args_element_value_27 = var_repeat_dim;
        CHECK_OBJECT(par_g);
        tmp_expression_value_12 = par_g;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[0]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = MAKE_LIST1(mod_consts[58]);
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 258;
        tmp_kw_call_value_0_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[118], tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 258;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_28 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_12, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_repeat_cond == NULL);
        var_repeat_cond = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_29 = par_g;
        CHECK_OBJECT(var_repeat_cond);
        tmp_args_element_value_30 = var_repeat_cond;
        CHECK_OBJECT(par_g);
        tmp_called_instance_12 = par_g;
        tmp_args_element_value_32 = mod_consts[119];
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_33 = par_repeats;
        CHECK_OBJECT(var_reps);
        tmp_args_element_value_34 = var_reps;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_args_element_value_31 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_12,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_35 = par_repeats;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_35};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_repeats;
            assert(old != NULL);
            par_repeats = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }
    branch_no_10:;
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[123]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[124]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_36 = par_g;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_37 = par_self;
        CHECK_OBJECT(par_repeats);
        tmp_args_element_value_38 = par_repeats;
        CHECK_OBJECT(var_final_dim);
        tmp_args_element_value_39 = var_final_dim;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_13,
                mod_consts[125],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_posargs_values_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_15 = par_g;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[0]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[126];
        CHECK_OBJECT(par_g);
        tmp_expression_value_16 = par_g;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[0]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[127];
        if (par_repeats == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_41 = par_repeats;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[31]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[32]);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[128], "l");
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 270;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_16, tmp_call_posargs_values_1, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 269;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_14, args, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reps_like == NULL);
        var_reps_like = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_42 = par_g;
        if (par_repeats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_43 = par_repeats;
        CHECK_OBJECT(var_reps_like);
        tmp_args_element_value_44 = var_reps_like;
        tmp_args_element_value_45 = mod_consts[29];
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_17, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r_splits == NULL);
        var_r_splits = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_46 = par_g;
        CHECK_OBJECT(var_input);
        tmp_args_element_value_47 = var_input;
        CHECK_OBJECT(var_reps_like);
        tmp_args_element_value_48 = var_reps_like;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_49 = par_dim;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_18, call_args);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_i_splits == NULL);
        var_i_splits = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = mod_consts[129];
        tmp_assign_source_32 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        assert(!(tmp_assign_source_32 == NULL));
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_32;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 274;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 274;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_34;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooo";
                    exception_lineno = 274;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[111];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooo";
            exception_lineno = 274;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_ass_subvalue_3 = tmp_tuple_unpack_3__element_1;
        if (var_output_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_3 = var_output_sizes;
        CHECK_OBJECT(par_dim);
        tmp_ass_subscript_3 = par_dim;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_ass_subvalue_4 = tmp_tuple_unpack_3__element_2;
        if (var_input_sizes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_4 = var_input_sizes;
        CHECK_OBJECT(par_dim);
        tmp_ass_subscript_4 = par_dim;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_called_instance_14;
        CHECK_OBJECT(par_g);
        tmp_expression_value_19 = par_g;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[0]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 287;
        tmp_kw_call_value_0_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 287;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_19, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_condition == NULL);
        var_loop_condition = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_20 = par_g;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[0]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[10];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_loop_condition);
        tmp_tuple_element_1 = var_loop_condition;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[130]);
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 288;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_loop_condition;
            assert(old != NULL);
            var_loop_condition = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        if (var_reps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_37 = var_reps;
        assert(var_loop_len == NULL);
        Py_INCREF(tmp_assign_source_37);
        var_loop_len = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(par_g);
        tmp_called_instance_15 = par_g;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 292;
        tmp_assign_source_38 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[132], 0)
        );

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_final_splits == NULL);
        var_final_splits = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        CHECK_OBJECT(par_g);
        tmp_called_instance_16 = par_g;
        tmp_args_element_value_50 = mod_consts[133];
        CHECK_OBJECT(var_loop_len);
        tmp_args_element_value_51 = var_loop_len;
        CHECK_OBJECT(var_loop_condition);
        tmp_args_element_value_52 = var_loop_condition;
        CHECK_OBJECT(var_final_splits);
        tmp_args_element_value_53 = var_final_splits;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_assign_source_39 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_16,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop == NULL);
        var_loop = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_instance_17;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop);
        tmp_called_instance_17 = var_loop;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 296;
        tmp_args_element_value_54 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[3]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 296;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_block == NULL);
        var_loop_block = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_55;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_55 = var_loop_block;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 297;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_55);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_block_input_iter == NULL);
        var_block_input_iter = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_56 = var_loop_block;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 298;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_56);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cond == NULL);
        var_cond = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_57 = var_loop_block;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 299;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_57);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_final_splits;
            assert(old != NULL);
            var_final_splits = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        CHECK_OBJECT(var_loop_block);
        tmp_called_instance_18 = var_loop_block;
        tmp_args_element_value_58 = mod_consts[44];
        CHECK_OBJECT(var_r_splits);
        tmp_args_element_value_59 = var_r_splits;
        CHECK_OBJECT(var_block_input_iter);
        tmp_args_element_value_60 = var_block_input_iter;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_assign_source_44 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_18,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r_split == NULL);
        var_r_split = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        CHECK_OBJECT(var_loop_block);
        tmp_called_instance_19 = var_loop_block;
        tmp_args_element_value_61 = mod_consts[44];
        CHECK_OBJECT(var_i_splits);
        tmp_args_element_value_62 = var_i_splits;
        CHECK_OBJECT(var_block_input_iter);
        tmp_args_element_value_63 = var_block_input_iter;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_assign_source_45 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_19,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_i_split == NULL);
        var_i_split = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_64 = var_loop_block;
        CHECK_OBJECT(var_i_split);
        tmp_args_element_value_65 = var_i_split;
        CHECK_OBJECT(par_dim);
        tmp_add_expr_left_1 = par_dim;
        tmp_add_expr_right_1 = mod_consts[58];
        tmp_args_element_value_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_args_element_value_66);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_split;
            assert(old != NULL);
            var_i_split = tmp_assign_source_46;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_21 = var_loop_block;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[0]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[118]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_input_sizes == NULL) {
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = var_input_sizes;
        CHECK_OBJECT(par_dim);
        tmp_add_expr_left_2 = par_dim;
        tmp_add_expr_right_2 = mod_consts[58];
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_args_element_value_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 305;
        tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 305;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_26, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_start_value_1;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_stop_value_2;
            PyList_SET_ITEM(tmp_assign_source_47, 0, tmp_list_element_1);
            CHECK_OBJECT(var_r_split);
            tmp_list_element_1 = var_r_split;
            PyList_SET_ITEM0(tmp_assign_source_47, 1, tmp_list_element_1);
            CHECK_OBJECT(var_loop_block);
            tmp_expression_value_24 = var_loop_block;
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[0]);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[118]);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            if (var_input_sizes == NULL) {
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_called_value_29);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_expression_value_26 = var_input_sizes;
            CHECK_OBJECT(par_dim);
            tmp_add_expr_left_3 = par_dim;
            tmp_add_expr_right_3 = mod_consts[58];
            tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
            if (tmp_start_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_stop_value_2 = Py_None;
            tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
            Py_DECREF(tmp_start_value_1);
            assert(!(tmp_subscript_value_5 == NULL));
            tmp_args_element_value_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_args_element_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 307;
            tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_68);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_68);
            if (tmp_kw_call_value_0_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 307;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
                tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_28, mod_consts[35], kw_values, mod_consts[36]);
            }

            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_value_0_8);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_47, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_47);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_r_concat == NULL);
        var_r_concat = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_27 = var_loop_block;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[0]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[136];
        CHECK_OBJECT(var_r_concat);
        tmp_dircall_arg3_1 = var_r_concat;
        tmp_dircall_arg4_1 = DICT_COPY(mod_consts[137]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_48 = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r_concat;
            assert(old != NULL);
            var_r_concat = tmp_assign_source_48;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_69 = var_loop_block;
        CHECK_OBJECT(var_i_split);
        tmp_args_element_value_70 = var_i_split;
        CHECK_OBJECT(var_r_concat);
        tmp_args_element_value_71 = var_r_concat;
        tmp_args_element_value_72 = Py_None;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_30, call_args);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_split;
            assert(old != NULL);
            var_i_split = tmp_assign_source_49;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_76;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[101]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_73 = var_loop_block;
        CHECK_OBJECT(var_i_split);
        tmp_args_element_value_74 = var_i_split;
        CHECK_OBJECT(par_g);
        tmp_expression_value_29 = par_g;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[0]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[118]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_output_sizes == NULL) {
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_76 = var_output_sizes;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 311;
        tmp_kw_call_value_0_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_33);
        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 311;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_args_element_value_75 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_32, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_split;
            assert(old != NULL);
            var_i_split = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        CHECK_OBJECT(var_loop_block);
        tmp_called_instance_20 = var_loop_block;
        tmp_args_element_value_77 = mod_consts[139];
        CHECK_OBJECT(var_final_splits);
        tmp_args_element_value_78 = var_final_splits;
        CHECK_OBJECT(var_i_split);
        tmp_args_element_value_79 = var_i_split;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_assign_source_51 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_20,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_final_splits;
            assert(old != NULL);
            var_final_splits = tmp_assign_source_51;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(var_loop_block);
        tmp_expression_value_31 = var_loop_block;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[0]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[10];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_loop_condition);
        tmp_tuple_element_2 = var_loop_condition;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[130]);
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 315;
        tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cond_out == NULL);
        var_cond_out = tmp_assign_source_52;
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_80 = var_loop_block;
        CHECK_OBJECT(var_cond_out);
        tmp_args_element_value_81 = var_cond_out;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_loop_block);
        tmp_args_element_value_82 = var_loop_block;
        CHECK_OBJECT(var_final_splits);
        tmp_args_element_value_83 = var_final_splits;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_called_instance_22;
        CHECK_OBJECT(var_loop);
        tmp_called_instance_22 = var_loop;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 319;
        tmp_called_instance_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[3]);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 319;
        tmp_assign_source_53 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[141]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop_out == NULL);
        var_loop_out = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_32 = par_g;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[0]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[142];
        CHECK_OBJECT(var_loop_out);
        tmp_kw_call_arg_value_1_2 = var_loop_out;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_0_2 = par_dim;
        frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame.f_lineno = 320;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_37, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_37);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_loop_out;
            assert(old != NULL);
            var_loop_out = tmp_assign_source_54;
            Py_DECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_bea42d5e9e7f243b50f0da4fe99efc15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bea42d5e9e7f243b50f0da4fe99efc15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bea42d5e9e7f243b50f0da4fe99efc15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bea42d5e9e7f243b50f0da4fe99efc15,
        type_description_1,
        par_g,
        par_self,
        par_repeats,
        par_dim,
        par_output_size,
        var_input,
        var_final_dim,
        var_repeats_dim,
        var_repeats_sizes,
        var_input_sizes,
        var_output_sizes,
        var_idx,
        var_input_size,
        var_cond_dynamic_repeats,
        var_reps,
        var_repeat_dim,
        var_repeat_cond,
        var_reps_like,
        var_r_splits,
        var_i_splits,
        var_loop_condition,
        var_loop_len,
        var_final_splits,
        var_loop,
        var_loop_block,
        var_block_input_iter,
        var_cond,
        var_r_split,
        var_i_split,
        var_r_concat,
        var_cond_out,
        var_loop_out
    );


    // Release cached frame if used for exception.
    if (frame_bea42d5e9e7f243b50f0da4fe99efc15 == cache_frame_bea42d5e9e7f243b50f0da4fe99efc15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bea42d5e9e7f243b50f0da4fe99efc15);
        cache_frame_bea42d5e9e7f243b50f0da4fe99efc15 = NULL;
    }

    assertFrameObject(frame_bea42d5e9e7f243b50f0da4fe99efc15);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_loop_out);
    tmp_return_value = var_loop_out;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_repeats);
    par_repeats = NULL;
    Py_XDECREF(par_dim);
    par_dim = NULL;
    CHECK_OBJECT(var_input);
    Py_DECREF(var_input);
    var_input = NULL;
    CHECK_OBJECT(var_final_dim);
    Py_DECREF(var_final_dim);
    var_final_dim = NULL;
    CHECK_OBJECT(var_repeats_dim);
    Py_DECREF(var_repeats_dim);
    var_repeats_dim = NULL;
    CHECK_OBJECT(var_repeats_sizes);
    Py_DECREF(var_repeats_sizes);
    var_repeats_sizes = NULL;
    Py_XDECREF(var_input_sizes);
    var_input_sizes = NULL;
    Py_XDECREF(var_output_sizes);
    var_output_sizes = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_input_size);
    var_input_size = NULL;
    CHECK_OBJECT(var_cond_dynamic_repeats);
    Py_DECREF(var_cond_dynamic_repeats);
    var_cond_dynamic_repeats = NULL;
    Py_XDECREF(var_reps);
    var_reps = NULL;
    Py_XDECREF(var_repeat_dim);
    var_repeat_dim = NULL;
    Py_XDECREF(var_repeat_cond);
    var_repeat_cond = NULL;
    Py_XDECREF(var_reps_like);
    var_reps_like = NULL;
    Py_XDECREF(var_r_splits);
    var_r_splits = NULL;
    Py_XDECREF(var_i_splits);
    var_i_splits = NULL;
    Py_XDECREF(var_loop_condition);
    var_loop_condition = NULL;
    Py_XDECREF(var_loop_len);
    var_loop_len = NULL;
    Py_XDECREF(var_final_splits);
    var_final_splits = NULL;
    Py_XDECREF(var_loop);
    var_loop = NULL;
    Py_XDECREF(var_loop_block);
    var_loop_block = NULL;
    Py_XDECREF(var_block_input_iter);
    var_block_input_iter = NULL;
    Py_XDECREF(var_cond);
    var_cond = NULL;
    Py_XDECREF(var_r_split);
    var_r_split = NULL;
    Py_XDECREF(var_i_split);
    var_i_split = NULL;
    Py_XDECREF(var_r_concat);
    var_r_concat = NULL;
    Py_XDECREF(var_cond_out);
    var_cond_out = NULL;
    Py_XDECREF(var_loop_out);
    var_loop_out = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_repeats);
    par_repeats = NULL;
    Py_XDECREF(par_dim);
    par_dim = NULL;
    Py_XDECREF(var_input);
    var_input = NULL;
    CHECK_OBJECT(var_final_dim);
    Py_DECREF(var_final_dim);
    var_final_dim = NULL;
    Py_XDECREF(var_repeats_dim);
    var_repeats_dim = NULL;
    Py_XDECREF(var_repeats_sizes);
    var_repeats_sizes = NULL;
    Py_XDECREF(var_input_sizes);
    var_input_sizes = NULL;
    Py_XDECREF(var_output_sizes);
    var_output_sizes = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_input_size);
    var_input_size = NULL;
    Py_XDECREF(var_cond_dynamic_repeats);
    var_cond_dynamic_repeats = NULL;
    Py_XDECREF(var_reps);
    var_reps = NULL;
    Py_XDECREF(var_repeat_dim);
    var_repeat_dim = NULL;
    Py_XDECREF(var_repeat_cond);
    var_repeat_cond = NULL;
    Py_XDECREF(var_reps_like);
    var_reps_like = NULL;
    Py_XDECREF(var_r_splits);
    var_r_splits = NULL;
    Py_XDECREF(var_i_splits);
    var_i_splits = NULL;
    Py_XDECREF(var_loop_condition);
    var_loop_condition = NULL;
    Py_XDECREF(var_loop_len);
    var_loop_len = NULL;
    Py_XDECREF(var_final_splits);
    var_final_splits = NULL;
    Py_XDECREF(var_loop);
    var_loop = NULL;
    Py_XDECREF(var_loop_block);
    var_loop_block = NULL;
    Py_XDECREF(var_block_input_iter);
    var_block_input_iter = NULL;
    Py_XDECREF(var_cond);
    var_cond = NULL;
    Py_XDECREF(var_r_split);
    var_r_split = NULL;
    Py_XDECREF(var_i_split);
    var_i_split = NULL;
    Py_XDECREF(var_r_concat);
    var_r_concat = NULL;
    Py_XDECREF(var_cond_out);
    var_cond_out = NULL;
    Py_XDECREF(var_loop_out);
    var_loop_out = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_output_size);
    Py_DECREF(par_output_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_output_size);
    Py_DECREF(par_output_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_opset13$$$function__16_diagonal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_self = python_pars[1];
    PyObject *par_offset = python_pars[2];
    PyObject *par_dim1 = python_pars[3];
    PyObject *par_dim2 = python_pars[4];
    PyObject *var_dim1_size = NULL;
    PyObject *var_dim2_size = NULL;
    PyObject *var_mask_shape = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_axes = NULL;
    PyObject *var_result = NULL;
    PyObject *var_offset_op = NULL;
    PyObject *var_diag_size = NULL;
    PyObject *var_select_window_ones_fill = NULL;
    PyObject *var_select_window = NULL;
    PyObject *var_gather_shape = NULL;
    PyObject *var_gather_indices = NULL;
    PyObject *var_overrun_cond = NULL;
    PyObject *var_if_op = NULL;
    PyObject *var_if_node = NULL;
    PyObject *var_if_block = NULL;
    PyObject *var_gather_indices_if_block = NULL;
    PyObject *var_final_non_overrun_ = NULL;
    PyObject *var_else_block = NULL;
    PyObject *var_final_overrun_ = NULL;
    PyObject *outline_0_var_axis = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4b186c181ebb54d117029387882198c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_d154f86d2454004c8b4430b811e301b0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d154f86d2454004c8b4430b811e301b0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4b186c181ebb54d117029387882198c0 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4b186c181ebb54d117029387882198c0)) {
        Py_XDECREF(cache_frame_4b186c181ebb54d117029387882198c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b186c181ebb54d117029387882198c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b186c181ebb54d117029387882198c0 = MAKE_FUNCTION_FRAME(codeobj_4b186c181ebb54d117029387882198c0, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b186c181ebb54d117029387882198c0->m_type_description == NULL);
    frame_4b186c181ebb54d117029387882198c0 = cache_frame_4b186c181ebb54d117029387882198c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4b186c181ebb54d117029387882198c0);
    assert(Py_REFCNT(frame_4b186c181ebb54d117029387882198c0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_1 = par_g;
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_1 = par_self;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim1);
        tmp_list_element_1 = par_dim1;
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 326;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[118], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 326;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 326;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 326;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim1_size == NULL);
        var_dim1_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_kw_call_arg_value_0_2 = par_g;
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_2 = par_self;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim2);
        tmp_list_element_2 = par_dim2;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_2);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 327;
        tmp_kw_call_value_0_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[118], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 327;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_kw_call_dict_value_0_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 327;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim2_size == NULL);
        var_dim2_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[145];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_dim1_size);
        tmp_tuple_element_1 = var_dim1_size;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_dim2_size);
        tmp_tuple_element_1 = var_dim2_size;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[137]);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 330;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_shape == NULL);
        var_mask_shape = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_3 = par_g;
        CHECK_OBJECT(var_mask_shape);
        tmp_args_element_value_4 = var_mask_shape;
        tmp_args_element_value_5 = Py_None;
        tmp_args_element_value_6 = Py_None;
        tmp_args_element_value_7 = Py_None;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[147];
        CHECK_OBJECT(var_mask);
        tmp_kw_call_arg_value_1_3 = var_mask;
        CHECK_OBJECT(par_offset);
        tmp_kw_call_dict_value_0_3 = par_offset;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 332;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[148]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert(old != NULL);
            var_mask = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_8 = par_self;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 335;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[104], tmp_args_element_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rank == NULL);
        var_rank = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_rank);
        tmp_cmp_expr_left_1 = var_rank;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(var_rank);
        tmp_xrange_low_1 = var_rank;
        tmp_list_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_axes == NULL);
        var_axes = tmp_assign_source_7;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_list_remove_result_1;
        CHECK_OBJECT(var_axes);
        tmp_list_arg_value_1 = var_axes;
        CHECK_OBJECT(par_dim1);
        tmp_value_value_1 = par_dim1;
        assert(PyList_CheckExact(tmp_list_arg_value_1));
        tmp_list_remove_result_1 = PyObject_CallMethod(tmp_list_arg_value_1, (char *)"remove", "O", tmp_value_value_1);
        if (tmp_list_remove_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_list_remove_result_1);
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_value_value_2;
        PyObject *tmp_list_remove_result_2;
        CHECK_OBJECT(var_axes);
        tmp_list_arg_value_2 = var_axes;
        CHECK_OBJECT(par_dim2);
        tmp_value_value_2 = par_dim2;
        assert(PyList_CheckExact(tmp_list_arg_value_2));
        tmp_list_remove_result_2 = PyObject_CallMethod(tmp_list_arg_value_2, (char *)"remove", "O", tmp_value_value_2);
        if (tmp_list_remove_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_list_remove_result_2);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_5 = par_g;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[149];
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_1_4 = par_self;
        CHECK_OBJECT(var_axes);
        tmp_add_expr_left_1 = var_axes;
        CHECK_OBJECT(par_dim1);
        tmp_list_element_3 = par_dim1;
        tmp_add_expr_right_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_add_expr_right_1, 0, tmp_list_element_3);
        CHECK_OBJECT(par_dim2);
        tmp_list_element_3 = par_dim2;
        PyList_SET_ITEM0(tmp_add_expr_right_1, 1, tmp_list_element_3);
        tmp_kw_call_dict_value_0_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 340;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_self;
            assert(old != NULL);
            par_self = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 342;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[151]);

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_g);
        tmp_called_instance_4 = par_g;
        tmp_args_element_value_9 = mod_consts[19];
        CHECK_OBJECT(par_self);
        tmp_args_element_value_10 = par_self;
        CHECK_OBJECT(var_mask);
        tmp_args_element_value_11 = var_mask;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_tuple_element_2 = par_g;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_result);
        tmp_tuple_element_2 = var_result;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DEEP_COPY_DICT(mod_consts[152]);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 351;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_list_element_4;
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_offset);
        tmp_list_element_4 = par_offset;
        tmp_args_element_value_12 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_12, 0, tmp_list_element_4);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 356;
        tmp_kw_call_value_0_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[118], tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 356;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_11, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_offset_op == NULL);
        var_offset_op = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_offset);
        tmp_cmp_expr_left_2 = par_offset;
        tmp_cmp_expr_right_2 = mod_consts[29];
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_8 = par_g;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[153];
        CHECK_OBJECT(par_g);
        tmp_expression_value_9 = par_g;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[0]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[154];
        CHECK_OBJECT(var_dim1_size);
        tmp_args_element_value_16 = var_dim1_size;
        CHECK_OBJECT(par_g);
        tmp_called_instance_6 = par_g;
        tmp_args_element_value_18 = mod_consts[155];
        CHECK_OBJECT(var_dim2_size);
        tmp_args_element_value_19 = var_dim2_size;
        CHECK_OBJECT(var_offset_op);
        tmp_args_element_value_20 = var_offset_op;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_args_element_value_17 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_6,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_expression_value_10 = par_g;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[0]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[29]);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 359;
        tmp_kw_call_value_0_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[118], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 359;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_14, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_21};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_diag_size == NULL);
        var_diag_size = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[29];
        {
            PyObject *old = par_offset;
            assert(old != NULL);
            par_offset = tmp_assign_source_13;
            Py_INCREF(par_offset);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_g);
        tmp_expression_value_11 = par_g;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[0]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[153];
        CHECK_OBJECT(par_g);
        tmp_expression_value_12 = par_g;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[0]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[154];
        CHECK_OBJECT(par_g);
        tmp_called_instance_8 = par_g;
        tmp_args_element_value_26 = mod_consts[37];
        CHECK_OBJECT(var_dim1_size);
        tmp_args_element_value_27 = var_dim1_size;
        CHECK_OBJECT(var_offset_op);
        tmp_args_element_value_28 = var_offset_op;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_args_element_value_25 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_8,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dim2_size);
        tmp_args_element_value_29 = var_dim2_size;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_29};
            tmp_args_element_value_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_expression_value_13 = par_g;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[0]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_2 = MAKE_LIST1(mod_consts[29]);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 363;
        tmp_kw_call_value_0_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[118], tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 363;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_17, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_30};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_diag_size == NULL);
        var_diag_size = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_14 = par_g;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[0]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[145];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_diag_size);
        tmp_tuple_element_3 = var_diag_size;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[137]);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 364;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_diag_size;
            assert(old != NULL);
            var_diag_size = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_31 = par_g;
        CHECK_OBJECT(var_diag_size);
        tmp_args_element_value_32 = var_diag_size;
        tmp_args_element_value_33 = mod_consts[157];
        tmp_args_element_value_34 = Py_None;
        tmp_args_element_value_35 = Py_None;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_19, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_select_window_ones_fill == NULL);
        var_select_window_ones_fill = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_arg_element_3;
        CHECK_OBJECT(par_g);
        tmp_expression_value_15 = par_g;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[0]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = mod_consts[158];
        CHECK_OBJECT(var_select_window_ones_fill);
        tmp_args_element_value_37 = var_select_window_ones_fill;
        CHECK_OBJECT(par_g);
        tmp_expression_value_16 = par_g;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[0]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = MAKE_LIST1(mod_consts[29]);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 374;
        tmp_kw_call_value_0_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[118], tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 374;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_args_element_value_38 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_21, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_select_window == NULL);
        var_select_window = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_list_element_5;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_17 = par_g;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[0]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = mod_consts[37];
        CHECK_OBJECT(var_select_window);
        tmp_args_element_value_40 = var_select_window;
        CHECK_OBJECT(par_g);
        tmp_expression_value_18 = par_g;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[0]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[118]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_offset == NULL) {
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[159]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_abs_arg_1 = par_offset;
        tmp_sub_expr_left_1 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[58];
        tmp_list_element_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_42, 0, tmp_list_element_5);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 375;
        tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 375;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_args_element_value_41 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_23, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_select_window;
            assert(old != NULL);
            var_select_window = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_list_arg_2;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(var_rank);
            tmp_xrange_low_2 = var_rank;
            tmp_list_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_2);
            if (tmp_list_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_expression_value_20 = MAKE_LIST(tmp_list_arg_2);
            Py_DECREF(tmp_list_arg_2);
            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_subscript_value_1 = mod_consts[160];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_21;
        }
        if (isFrameUnusable(cache_frame_d154f86d2454004c8b4430b811e301b0_2)) {
            Py_XDECREF(cache_frame_d154f86d2454004c8b4430b811e301b0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d154f86d2454004c8b4430b811e301b0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d154f86d2454004c8b4430b811e301b0_2 = MAKE_FUNCTION_FRAME(codeobj_d154f86d2454004c8b4430b811e301b0, module_torch$onnx$symbolic_opset13, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d154f86d2454004c8b4430b811e301b0_2->m_type_description == NULL);
        frame_d154f86d2454004c8b4430b811e301b0_2 = cache_frame_d154f86d2454004c8b4430b811e301b0_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d154f86d2454004c8b4430b811e301b0_2);
        assert(Py_REFCNT(frame_d154f86d2454004c8b4430b811e301b0_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 377;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_23 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_axis;
                outline_0_var_axis = tmp_assign_source_23;
                Py_INCREF(outline_0_var_axis);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_25;
            PyObject *tmp_kw_call_arg_value_0_5;
            PyObject *tmp_kw_call_arg_value_1_5;
            PyObject *tmp_kw_call_dict_value_0_5;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_list_element_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (par_g == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 377;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_kw_call_arg_value_0_5 = par_g;
            if (var_result == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[161]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 377;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_kw_call_arg_value_1_5 = var_result;
            if (par_g == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 378;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_expression_value_21 = par_g;
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[0]);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 378;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_axis);
            tmp_list_element_6 = outline_0_var_axis;
            tmp_args_element_value_43 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_args_element_value_43, 0, tmp_list_element_6);
            frame_d154f86d2454004c8b4430b811e301b0_2->m_frame.f_lineno = 378;
            tmp_kw_call_value_0_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[118], tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_kw_call_value_0_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 378;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_d154f86d2454004c8b4430b811e301b0_2->m_frame.f_lineno = 378;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
                tmp_kw_call_dict_value_0_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_26, mod_consts[35], kw_values, mod_consts[36]);
            }

            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_0_8);
            if (tmp_kw_call_dict_value_0_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_d154f86d2454004c8b4430b811e301b0_2->m_frame.f_lineno = 377;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_25, args, kw_values, mod_consts[144]);
            }

            Py_DECREF(tmp_kw_call_dict_value_0_5);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_19 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_19);
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
            exception_tb = MAKE_TRACEBACK(frame_d154f86d2454004c8b4430b811e301b0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d154f86d2454004c8b4430b811e301b0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d154f86d2454004c8b4430b811e301b0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d154f86d2454004c8b4430b811e301b0_2,
            type_description_2,
            outline_0_var_axis,
            par_g,
            var_result
        );


        // Release cached frame if used for exception.
        if (frame_d154f86d2454004c8b4430b811e301b0_2 == cache_frame_d154f86d2454004c8b4430b811e301b0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d154f86d2454004c8b4430b811e301b0_2);
            cache_frame_d154f86d2454004c8b4430b811e301b0_2 = NULL;
        }

        assertFrameObject(frame_d154f86d2454004c8b4430b811e301b0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_axis);
        outline_0_var_axis = NULL;
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

        Py_XDECREF(outline_0_var_axis);
        outline_0_var_axis = NULL;
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
        exception_lineno = 377;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_gather_shape == NULL);
        var_gather_shape = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_44;
        CHECK_OBJECT(var_gather_shape);
        tmp_expression_value_22 = var_gather_shape;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[40]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_diag_size);
        tmp_args_element_value_44 = var_diag_size;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 379;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[0]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[136];
        CHECK_OBJECT(var_gather_shape);
        tmp_dircall_arg3_1 = var_gather_shape;
        tmp_dircall_arg4_1 = DICT_COPY(mod_consts[137]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_24 = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gather_shape;
            assert(old != NULL);
            var_gather_shape = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_45 = par_g;
        CHECK_OBJECT(var_gather_shape);
        tmp_args_element_value_46 = var_gather_shape;
        tmp_args_element_value_47 = mod_consts[157];
        tmp_args_element_value_48 = Py_None;
        tmp_args_element_value_49 = Py_None;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_28, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gather_indices == NULL);
        var_gather_indices = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_expression_value_28;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_g;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[0]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = mod_consts[162];
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_g;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[0]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[121];
        CHECK_OBJECT(var_diag_size);
        tmp_args_element_value_53 = var_diag_size;
        if (par_g == NULL) {
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_g;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[0]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[31]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[163]);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 393;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_kw_call_value_0_9 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_32, mod_consts[164], kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 393;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_args_element_value_54 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_31, mod_consts[35], kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_args_element_value_51 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_overrun_cond == NULL);
        var_overrun_cond = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        if (par_g == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = par_g;
        tmp_args_element_value_55 = mod_consts[165];
        CHECK_OBJECT(var_overrun_cond);
        tmp_args_element_value_56 = var_overrun_cond;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_12,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_if_op == NULL);
        var_if_op = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_13;
        CHECK_OBJECT(var_if_op);
        tmp_called_instance_13 = var_if_op;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 395;
        tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[3]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_if_node == NULL);
        var_if_node = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_if_node);
        tmp_args_element_value_57 = var_if_node;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 397;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_57);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_if_block == NULL);
        var_if_block = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        CHECK_OBJECT(var_if_block);
        tmp_called_instance_14 = var_if_block;
        tmp_args_element_value_58 = mod_consts[37];
        CHECK_OBJECT(var_gather_indices);
        tmp_args_element_value_59 = var_gather_indices;
        CHECK_OBJECT(var_select_window);
        tmp_args_element_value_60 = var_select_window;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_assign_source_30 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_14,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gather_indices_if_block == NULL);
        var_gather_indices_if_block = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_list_element_7;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[27]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_if_block);
        tmp_args_element_value_61 = var_if_block;
        CHECK_OBJECT(var_gather_indices_if_block);
        tmp_args_element_value_62 = var_gather_indices_if_block;
        CHECK_OBJECT(var_rank);
        tmp_sub_expr_left_2 = var_rank;
        tmp_sub_expr_right_2 = mod_consts[58];
        tmp_list_element_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_63, 0, tmp_list_element_7);
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gather_indices_if_block;
            assert(old != NULL);
            var_gather_indices_if_block = tmp_assign_source_31;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_if_block);
        tmp_expression_value_30 = var_if_block;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[0]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_6 = mod_consts[166];
        if (var_result == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[161]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_6 = var_result;
        CHECK_OBJECT(var_gather_indices_if_block);
        tmp_kw_call_arg_value_2_1 = var_gather_indices_if_block;
        CHECK_OBJECT(var_rank);
        tmp_sub_expr_left_3 = var_rank;
        tmp_sub_expr_right_3 = mod_consts[167];
        tmp_kw_call_dict_value_0_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 400;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_35, args, kw_values, mod_consts[168]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_final_non_overrun_ == NULL);
        var_final_non_overrun_ = tmp_assign_source_32;
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_if_block);
        tmp_args_element_value_64 = var_if_block;
        CHECK_OBJECT(var_final_non_overrun_);
        tmp_args_element_value_65 = var_final_non_overrun_;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_if_node);
        tmp_args_element_value_66 = var_if_node;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 403;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_66);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_else_block == NULL);
        var_else_block = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_else_block);
        tmp_args_element_value_67 = var_else_block;
        CHECK_OBJECT(var_gather_shape);
        tmp_args_element_value_68 = var_gather_shape;
        tmp_args_element_value_69 = mod_consts[169];
        tmp_args_element_value_70 = Py_None;
        tmp_args_element_value_71 = Py_None;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_38, call_args);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_final_overrun_ == NULL);
        var_final_overrun_ = tmp_assign_source_34;
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_else_block);
        tmp_args_element_value_72 = var_else_block;
        CHECK_OBJECT(var_final_overrun_);
        tmp_args_element_value_73 = var_final_overrun_;
        frame_4b186c181ebb54d117029387882198c0->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_4b186c181ebb54d117029387882198c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b186c181ebb54d117029387882198c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b186c181ebb54d117029387882198c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b186c181ebb54d117029387882198c0,
        type_description_1,
        par_g,
        par_self,
        par_offset,
        par_dim1,
        par_dim2,
        var_dim1_size,
        var_dim2_size,
        var_mask_shape,
        var_mask,
        var_rank,
        var_axes,
        var_result,
        var_offset_op,
        var_diag_size,
        var_select_window_ones_fill,
        var_select_window,
        var_gather_shape,
        var_gather_indices,
        var_overrun_cond,
        var_if_op,
        var_if_node,
        var_if_block,
        var_gather_indices_if_block,
        var_final_non_overrun_,
        var_else_block,
        var_final_overrun_
    );


    // Release cached frame if used for exception.
    if (frame_4b186c181ebb54d117029387882198c0 == cache_frame_4b186c181ebb54d117029387882198c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b186c181ebb54d117029387882198c0);
        cache_frame_4b186c181ebb54d117029387882198c0 = NULL;
    }

    assertFrameObject(frame_4b186c181ebb54d117029387882198c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_if_op);
    tmp_return_value = var_if_op;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_offset);
    par_offset = NULL;
    CHECK_OBJECT(var_dim1_size);
    Py_DECREF(var_dim1_size);
    var_dim1_size = NULL;
    CHECK_OBJECT(var_dim2_size);
    Py_DECREF(var_dim2_size);
    var_dim2_size = NULL;
    CHECK_OBJECT(var_mask_shape);
    Py_DECREF(var_mask_shape);
    var_mask_shape = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_rank);
    var_rank = NULL;
    Py_XDECREF(var_axes);
    var_axes = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_offset_op);
    var_offset_op = NULL;
    Py_XDECREF(var_diag_size);
    var_diag_size = NULL;
    Py_XDECREF(var_select_window_ones_fill);
    var_select_window_ones_fill = NULL;
    Py_XDECREF(var_select_window);
    var_select_window = NULL;
    Py_XDECREF(var_gather_shape);
    var_gather_shape = NULL;
    Py_XDECREF(var_gather_indices);
    var_gather_indices = NULL;
    Py_XDECREF(var_overrun_cond);
    var_overrun_cond = NULL;
    Py_XDECREF(var_if_op);
    var_if_op = NULL;
    Py_XDECREF(var_if_node);
    var_if_node = NULL;
    Py_XDECREF(var_if_block);
    var_if_block = NULL;
    Py_XDECREF(var_gather_indices_if_block);
    var_gather_indices_if_block = NULL;
    Py_XDECREF(var_final_non_overrun_);
    var_final_non_overrun_ = NULL;
    Py_XDECREF(var_else_block);
    var_else_block = NULL;
    Py_XDECREF(var_final_overrun_);
    var_final_overrun_ = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_offset);
    par_offset = NULL;
    Py_XDECREF(var_dim1_size);
    var_dim1_size = NULL;
    Py_XDECREF(var_dim2_size);
    var_dim2_size = NULL;
    Py_XDECREF(var_mask_shape);
    var_mask_shape = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_rank);
    var_rank = NULL;
    Py_XDECREF(var_axes);
    var_axes = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_offset_op);
    var_offset_op = NULL;
    Py_XDECREF(var_diag_size);
    var_diag_size = NULL;
    Py_XDECREF(var_select_window_ones_fill);
    var_select_window_ones_fill = NULL;
    Py_XDECREF(var_select_window);
    var_select_window = NULL;
    Py_XDECREF(var_gather_shape);
    var_gather_shape = NULL;
    Py_XDECREF(var_gather_indices);
    var_gather_indices = NULL;
    Py_XDECREF(var_overrun_cond);
    var_overrun_cond = NULL;
    Py_XDECREF(var_if_op);
    var_if_op = NULL;
    Py_XDECREF(var_if_node);
    var_if_node = NULL;
    Py_XDECREF(var_if_block);
    var_if_block = NULL;
    Py_XDECREF(var_gather_indices_if_block);
    var_gather_indices_if_block = NULL;
    Py_XDECREF(var_final_non_overrun_);
    var_final_non_overrun_ = NULL;
    Py_XDECREF(var_else_block);
    var_else_block = NULL;
    Py_XDECREF(var_final_overrun_);
    var_final_overrun_ = NULL;
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
    CHECK_OBJECT(par_dim1);
    Py_DECREF(par_dim1);
    CHECK_OBJECT(par_dim2);
    Py_DECREF(par_dim2);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_dim1);
    Py_DECREF(par_dim1);
    CHECK_OBJECT(par_dim2);
    Py_DECREF(par_dim2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__10_where(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__10_where,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bfb3d0b4d5e348069d85a11c607b4041,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__11_fake_quantize_per_channel_affine(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__11_fake_quantize_per_channel_affine,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d63f5e5e348091f6627b9486846879be,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e0b5db18a271e88ba2af6cc495dec303,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic$$$function__1_symbolic(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic$$$function__1_symbolic,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_2151e74e3ba766cb6f2784c8e219e5a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ffb7807c10c6e0f4b1276038970f0d6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_6e3ee2163b385cbdfe331dbc391a85a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__1_reduce_nodim(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__1_reduce_nodim,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_4bba3c28f00f64d079f635a95a35363b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__2_reduce_dim(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__2_reduce_dim,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_08caf1587eae5968283991ee29f46d6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__14_unsafe_chunk(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__14_unsafe_chunk,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ea2de4a045194ab649e1d279f183834,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__15_repeat_interleave(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__15_repeat_interleave,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bea42d5e9e7f243b50f0da4fe99efc15,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__16_diagonal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__16_diagonal,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b186c181ebb54d117029387882198c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__1_softmax(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__1_softmax,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f1a51a13693a1e8f813637df5c6f59c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__2_log_softmax(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__2_log_softmax,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5d7a0dda681ed3dda8ca64bc1102915,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__3_frobenius_norm(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__3_frobenius_norm,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_452154cbd8768c227168015661c83745,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__4_split(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__4_split,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af89ff0eb238888f869c7c81e6c6f95a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__5_split_with_sizes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__5_split_with_sizes,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_532d25dc4ba7ee32e537ecd5ef228f8e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__6_unsafe_split(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__6_unsafe_split,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32d9700e63e061b9c83b267a807a3daf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__7_unsafe_split_with_sizes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__7_unsafe_split_with_sizes,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4d4c368a338ae087db52b3ee5bdf0b3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__8_unbind(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__8_unbind,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aeb9979c76d480cdf2826a1deaf21ae7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__9_nonzero_numpy(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_opset13$$$function__9_nonzero_numpy,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be9444cef90277d7f22443dc649fff5d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_opset13,
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

function_impl_code functable_torch$onnx$symbolic_opset13[] = {
    impl_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic$$$function__1_symbolic,
    impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce,
    impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__1_reduce_nodim,
    impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype$$$function__1_reduce$$$function__2_reduce_dim,
    impl_torch$onnx$symbolic_opset13$$$function__1_softmax,
    impl_torch$onnx$symbolic_opset13$$$function__2_log_softmax,
    impl_torch$onnx$symbolic_opset13$$$function__3_frobenius_norm,
    impl_torch$onnx$symbolic_opset13$$$function__4_split,
    impl_torch$onnx$symbolic_opset13$$$function__5_split_with_sizes,
    impl_torch$onnx$symbolic_opset13$$$function__6_unsafe_split,
    impl_torch$onnx$symbolic_opset13$$$function__7_unsafe_split_with_sizes,
    impl_torch$onnx$symbolic_opset13$$$function__8_unbind,
    impl_torch$onnx$symbolic_opset13$$$function__9_nonzero_numpy,
    impl_torch$onnx$symbolic_opset13$$$function__10_where,
    impl_torch$onnx$symbolic_opset13$$$function__11_fake_quantize_per_channel_affine,
    impl_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic,
    impl_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype,
    impl_torch$onnx$symbolic_opset13$$$function__14_unsafe_chunk,
    impl_torch$onnx$symbolic_opset13$$$function__15_repeat_interleave,
    impl_torch$onnx$symbolic_opset13$$$function__16_diagonal,
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

    function_impl_code *current = functable_torch$onnx$symbolic_opset13;
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

    if (offset > sizeof(functable_torch$onnx$symbolic_opset13) || offset < 0) {
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
        functable_torch$onnx$symbolic_opset13[offset],
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
        module_torch$onnx$symbolic_opset13,
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
PyObject *modulecode_torch$onnx$symbolic_opset13(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.onnx.symbolic_opset13");

    // Store the module for future use.
    module_torch$onnx$symbolic_opset13 = module;

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
        PRINT_STRING("torch.onnx.symbolic_opset13: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.onnx.symbolic_opset13: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.onnx.symbolic_opset13: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$onnx$symbolic_opset13\n");

    moduledict_torch$onnx$symbolic_opset13 = MODULE_DICT(module_torch$onnx$symbolic_opset13);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$onnx$symbolic_opset13,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$onnx$symbolic_opset13,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[237]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$onnx$symbolic_opset13,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$onnx$symbolic_opset13,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$onnx$symbolic_opset13,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$onnx$symbolic_opset13);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$onnx$symbolic_opset13);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_b2e7c9a0dad7ccb850a4d0808e49f1f7;
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
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_2);
    }
    frame_b2e7c9a0dad7ccb850a4d0808e49f1f7 = MAKE_MODULE_FRAME(codeobj_b2e7c9a0dad7ccb850a4d0808e49f1f7, module_torch$onnx$symbolic_opset13);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2e7c9a0dad7ccb850a4d0808e49f1f7);
    assert(Py_REFCNT(frame_b2e7c9a0dad7ccb850a4d0808e49f1f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[173], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[174], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[30];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_opset13;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[29];
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_4);
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
        tmp_name_value_2 = mod_consts[176];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$onnx$symbolic_opset13;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[29];
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[123],
                mod_consts[29]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[177],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[177]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[176];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$onnx$symbolic_opset13;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[178];
        tmp_level_value_3 = mod_consts[29];
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

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
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[89],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[89]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[97],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[97]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[179];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$onnx$symbolic_opset13;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[180];
        tmp_level_value_4 = mod_consts[29];
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[86],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[86]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[81],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[81]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[61],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[61]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[138],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[138]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[146],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[146]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[156],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[156]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[143],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[143]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[181];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$onnx$symbolic_opset13;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[182];
        tmp_level_value_5 = mod_consts[29];
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 10;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[116],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[183];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$onnx$symbolic_opset13;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[184];
        tmp_level_value_6 = mod_consts[29];
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 11;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[134],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[134]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[135],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[135]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_torch$onnx$symbolic_opset13,
                mod_consts[140],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[140]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 20;
        tmp_called_value_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[185]);

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[186];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__1_softmax(tmp_defaults_1);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 20;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 30;
        tmp_called_value_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[185]);

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[186];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_2 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__2_log_softmax(tmp_defaults_2);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 30;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_defaults_3;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 39;
        tmp_called_value_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[189]);

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[190];
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_3 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__3_frobenius_norm(tmp_defaults_3);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 39;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_4;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 49;
        tmp_called_value_7 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_8, mod_consts[192]);

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[186];
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_value_4 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__4_split(tmp_defaults_4);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 49;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[186];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_26 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__5_split_with_sizes(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[186];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_27 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__6_unsafe_split(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[186];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_28 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__7_unsafe_split_with_sizes(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_8;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 102;
        tmp_called_value_9 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[195]);

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_defaults_8 = mod_consts[196];
        Py_INCREF(tmp_defaults_8);


        tmp_args_element_value_5 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__8_unbind(tmp_defaults_8);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 102;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = mod_consts[186];
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_30 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__9_nonzero_numpy(tmp_defaults_9);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_10;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 122;
        tmp_called_value_11 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_12, mod_consts[198]);

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_defaults_10 = mod_consts[199];
        Py_INCREF(tmp_defaults_10);


        tmp_args_element_value_6 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__10_where(tmp_defaults_10);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 122;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_defaults_11;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 132;
        tmp_called_value_13 = CALL_FUNCTION_WITH_POSARGS6(tmp_called_value_14, mod_consts[200]);

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = mod_consts[201];
        Py_INCREF(tmp_defaults_11);


        tmp_args_element_value_7 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__11_fake_quantize_per_channel_affine(tmp_defaults_11);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 132;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__12__reduce_op_symbolic();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__13__reduce_with_dtype();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        assert(!(tmp_called_value_15 == NULL));
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 184;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[204]);

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_defaults_12;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 186;
        tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_17, mod_consts[206]);

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = mod_consts[186];
        Py_INCREF(tmp_defaults_12);


        tmp_args_element_value_8 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__14_unsafe_chunk(tmp_defaults_12);

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 186;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = mod_consts[78];
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_37 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__15_repeat_interleave(tmp_defaults_13);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 324;
        tmp_called_value_18 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_19, mod_consts[206]);

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_9 = MAKE_FUNCTION_torch$onnx$symbolic_opset13$$$function__16_diagonal();

        frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame.f_lineno = 324;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_38);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2e7c9a0dad7ccb850a4d0808e49f1f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2e7c9a0dad7ccb850a4d0808e49f1f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2e7c9a0dad7ccb850a4d0808e49f1f7, exception_lineno);
    }



    assertFrameObject(frame_b2e7c9a0dad7ccb850a4d0808e49f1f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.onnx.symbolic_opset13", false);

    Py_INCREF(module_torch$onnx$symbolic_opset13);
    return module_torch$onnx$symbolic_opset13;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_opset13, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$onnx$symbolic_opset13", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
