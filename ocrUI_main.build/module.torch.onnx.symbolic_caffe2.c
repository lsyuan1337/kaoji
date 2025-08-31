/* Generated code for Python module 'torch.onnx.symbolic_caffe2'
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

/* The "module_torch$onnx$symbolic_caffe2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$onnx$symbolic_caffe2;
PyDictObject *moduledict_torch$onnx$symbolic_caffe2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[142];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[142];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.onnx.symbolic_caffe2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 142; i++) {
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
void checkModuleConstants_torch$onnx$symbolic_caffe2(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 142; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ad1f2bb347d96a8fbf58d2a46174cd9e;
static PyCodeObject *codeobj_df13bfa9b3e8928eeca5c5eaaacd0e0e;
static PyCodeObject *codeobj_76b4449302d4b0a4e39c6a24a71c7e49;
static PyCodeObject *codeobj_dca736957ad0ec32db293b83a2de6567;
static PyCodeObject *codeobj_46f26053770f410525b9d215f87153f9;
static PyCodeObject *codeobj_6579070ad3eea33bba30304fa2ad6bf0;
static PyCodeObject *codeobj_dbefd1386a1dd73d4d2d25ce00654197;
static PyCodeObject *codeobj_2950a2f8062553a26a20d95dbf272cd1;
static PyCodeObject *codeobj_cbb3d9e1cd503ff6454b53d7c3cf8a55;
static PyCodeObject *codeobj_89207779465cc1ee70de29b8de8a0f3e;
static PyCodeObject *codeobj_71cdfb5c71df33939003f6e07fc2dcbe;
static PyCodeObject *codeobj_dc735cf1c52b34715affaddf1bbca6e2;
static PyCodeObject *codeobj_9af48f2f2253208e13a34b2f8d0fd5bb;
static PyCodeObject *codeobj_26e496d3bda12e0089a5a153d1716176;
static PyCodeObject *codeobj_1d9f1db55ebefe0738d642bb8bfb3532;
static PyCodeObject *codeobj_857fdec33beb00edbf5a9b1de6ab2c7d;
static PyCodeObject *codeobj_cffb88651a364b5cb169223d90ce465f;
static PyCodeObject *codeobj_6d8ce68580fbd2ab75264b960a6392fe;
static PyCodeObject *codeobj_e788a4cbf0876db22be955bd15446679;
static PyCodeObject *codeobj_94873d33ba1e2e4d51426eaa012bed5f;
static PyCodeObject *codeobj_c5bb5a825d9750a9684a34d970c3465a;
static PyCodeObject *codeobj_afe04a69ccb2b53e30cd956799a38598;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[121]); CHECK_OBJECT(module_filename_obj);
    codeobj_ad1f2bb347d96a8fbf58d2a46174cd9e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[122], mod_consts[122], NULL, NULL, 0, 0, 0);
    codeobj_df13bfa9b3e8928eeca5c5eaaacd0e0e = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[123], NULL, 9, 0, 0);
    codeobj_76b4449302d4b0a4e39c6a24a71c7e49 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[124], NULL, 3, 0, 0);
    codeobj_dca736957ad0ec32db293b83a2de6567 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[125], NULL, 5, 0, 0);
    codeobj_46f26053770f410525b9d215f87153f9 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[126], NULL, 8, 0, 0);
    codeobj_6579070ad3eea33bba30304fa2ad6bf0 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[127], NULL, 5, 0, 0);
    codeobj_dbefd1386a1dd73d4d2d25ce00654197 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[128], NULL, 10, 0, 0);
    codeobj_2950a2f8062553a26a20d95dbf272cd1 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[128], NULL, 10, 0, 0);
    codeobj_cbb3d9e1cd503ff6454b53d7c3cf8a55 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[129], NULL, 8, 0, 0);
    codeobj_89207779465cc1ee70de29b8de8a0f3e = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[130], NULL, 2, 0, 0);
    codeobj_71cdfb5c71df33939003f6e07fc2dcbe = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[131], NULL, 6, 0, 0);
    codeobj_dc735cf1c52b34715affaddf1bbca6e2 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[132], NULL, 3, 0, 0);
    codeobj_9af48f2f2253208e13a34b2f8d0fd5bb = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[133], NULL, 7, 0, 0);
    codeobj_26e496d3bda12e0089a5a153d1716176 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[134], NULL, 2, 0, 0);
    codeobj_1d9f1db55ebefe0738d642bb8bfb3532 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[134], NULL, 2, 0, 0);
    codeobj_857fdec33beb00edbf5a9b1de6ab2c7d = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[135], NULL, 5, 0, 0);
    codeobj_cffb88651a364b5cb169223d90ce465f = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[136], NULL, 2, 0, 0);
    codeobj_6d8ce68580fbd2ab75264b960a6392fe = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[137], NULL, 2, 0, 0);
    codeobj_e788a4cbf0876db22be955bd15446679 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[138], NULL, 3, 0, 0);
    codeobj_94873d33ba1e2e4d51426eaa012bed5f = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[139], NULL, 2, 0, 0);
    codeobj_c5bb5a825d9750a9684a34d970c3465a = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[140], NULL, 6, 0, 0);
    codeobj_afe04a69ccb2b53e30cd956799a38598 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[141], NULL, 6, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_pos_keywords_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__10_add();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__11_relu();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__12_quantize_per_tensor();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__13_dequantize();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__14__empty_affine_quantized();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__15_upsample_nearest2d(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__16_max_pool2d();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__17_avg_pool2d(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__18_reshape();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__19_slice();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__1_register_quantized_ops();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__20_cat(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__21_sigmoid();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__2__permute_helper();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__3_nchw2nhwc();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__4_nhwc2nchw();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__5_linear_prepack();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__6_linear();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__7_conv_prepack();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__8_conv2d();


static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__9_conv2d_relu();


// The module function definitions.
static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__1_register_quantized_ops(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_domain = python_pars[0];
    PyObject *par_version = python_pars[1];
    PyObject *var_module = NULL;
    PyObject *var_quant_version_ops = NULL;
    PyObject *var_op = NULL;
    PyObject *var_aten_q_ops = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_cffb88651a364b5cb169223d90ce465f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_cffb88651a364b5cb169223d90ce465f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cffb88651a364b5cb169223d90ce465f)) {
        Py_XDECREF(cache_frame_cffb88651a364b5cb169223d90ce465f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cffb88651a364b5cb169223d90ce465f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cffb88651a364b5cb169223d90ce465f = MAKE_FUNCTION_FRAME(codeobj_cffb88651a364b5cb169223d90ce465f, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cffb88651a364b5cb169223d90ce465f->m_type_description == NULL);
    frame_cffb88651a364b5cb169223d90ce465f = cache_frame_cffb88651a364b5cb169223d90ce465f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cffb88651a364b5cb169223d90ce465f);
    assert(Py_REFCNT(frame_cffb88651a364b5cb169223d90ce465f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        CHECK_OBJECT(par_version);
        tmp_args_element_value_2 = par_version;
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 11;
        tmp_assign_source_1 = IMPORT_MODULE1(mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_assign_source_1);
        tmp_assign_source_1 = Nuitka_GetModule(mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_module == NULL);
        var_module = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_module);
        tmp_ass_subvalue_1 = var_module;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[5];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 13;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_quant_version_ops == NULL);
        var_quant_version_ops = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_quant_version_ops);
        tmp_iter_arg_1 = var_quant_version_ops;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 14;
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
            PyObject *old = var_op;
            var_op = tmp_assign_source_5;
            Py_INCREF(var_op);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_op);
        tmp_expression_value_4 = var_op;
        tmp_subscript_value_2 = mod_consts[8];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 15;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_op);
        tmp_expression_value_6 = var_op;
        tmp_subscript_value_3 = mod_consts[10];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_domain == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_domain;
        if (par_version == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_version;
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST11(mod_consts[13]);
        {
            PyObject *old = var_aten_q_ops;
            var_aten_q_ops = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_op);
        tmp_expression_value_7 = var_op;
        tmp_subscript_value_4 = mod_consts[10];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_4, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_aten_q_ops);
        tmp_cmp_expr_right_1 = var_aten_q_ops;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[14]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_op);
        tmp_expression_value_9 = var_op;
        tmp_subscript_value_5 = mod_consts[10];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_5, 0);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_op);
        tmp_expression_value_10 = var_op;
        tmp_subscript_value_6 = mod_consts[8];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_6, 1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_10 = mod_consts[2];
        if (par_version == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_11 = par_version;
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[14]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_op);
        tmp_expression_value_12 = var_op;
        tmp_subscript_value_7 = mod_consts[10];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_7, 0);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_op);
        tmp_expression_value_13 = var_op;
        tmp_subscript_value_8 = mod_consts[8];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_8, 1);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_domain == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_14 = par_domain;
        if (par_version == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_15 = par_version;
        frame_cffb88651a364b5cb169223d90ce465f->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 14;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cffb88651a364b5cb169223d90ce465f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cffb88651a364b5cb169223d90ce465f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cffb88651a364b5cb169223d90ce465f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cffb88651a364b5cb169223d90ce465f,
        type_description_1,
        par_domain,
        par_version,
        var_module,
        var_quant_version_ops,
        var_op,
        var_aten_q_ops
    );


    // Release cached frame if used for exception.
    if (frame_cffb88651a364b5cb169223d90ce465f == cache_frame_cffb88651a364b5cb169223d90ce465f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cffb88651a364b5cb169223d90ce465f);
        cache_frame_cffb88651a364b5cb169223d90ce465f = NULL;
    }

    assertFrameObject(frame_cffb88651a364b5cb169223d90ce465f);

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
    CHECK_OBJECT(var_module);
    Py_DECREF(var_module);
    var_module = NULL;
    CHECK_OBJECT(var_quant_version_ops);
    Py_DECREF(var_quant_version_ops);
    var_quant_version_ops = NULL;
    Py_XDECREF(var_op);
    var_op = NULL;
    Py_XDECREF(var_aten_q_ops);
    var_aten_q_ops = NULL;
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

    Py_XDECREF(var_module);
    var_module = NULL;
    Py_XDECREF(var_quant_version_ops);
    var_quant_version_ops = NULL;
    Py_XDECREF(var_op);
    var_op = NULL;
    Py_XDECREF(var_aten_q_ops);
    var_aten_q_ops = NULL;
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
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__2__permute_helper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *var_quant_args = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_76b4449302d4b0a4e39c6a24a71c7e49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_76b4449302d4b0a4e39c6a24a71c7e49 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_76b4449302d4b0a4e39c6a24a71c7e49)) {
        Py_XDECREF(cache_frame_76b4449302d4b0a4e39c6a24a71c7e49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76b4449302d4b0a4e39c6a24a71c7e49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76b4449302d4b0a4e39c6a24a71c7e49 = MAKE_FUNCTION_FRAME(codeobj_76b4449302d4b0a4e39c6a24a71c7e49, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76b4449302d4b0a4e39c6a24a71c7e49->m_type_description == NULL);
    frame_76b4449302d4b0a4e39c6a24a71c7e49 = cache_frame_76b4449302d4b0a4e39c6a24a71c7e49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76b4449302d4b0a4e39c6a24a71c7e49);
    assert(Py_REFCNT(frame_76b4449302d4b0a4e39c6a24a71c7e49) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_axes);
        tmp_dict_value_1 = par_axes;
        tmp_assign_source_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_input);
            tmp_called_instance_1 = par_input;
            frame_76b4449302d4b0a4e39c6a24a71c7e49->m_frame.f_lineno = 26;
            tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[18];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_2 = par_input;
            frame_76b4449302d4b0a4e39c6a24a71c7e49->m_frame.f_lineno = 27;
            tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_quant_args == NULL);
        var_quant_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[22];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_quant_args);
        tmp_dircall_arg3_1 = var_quant_args;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[24]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_1 = var_output;
        frame_76b4449302d4b0a4e39c6a24a71c7e49->m_frame.f_lineno = 30;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[25], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76b4449302d4b0a4e39c6a24a71c7e49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76b4449302d4b0a4e39c6a24a71c7e49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76b4449302d4b0a4e39c6a24a71c7e49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76b4449302d4b0a4e39c6a24a71c7e49,
        type_description_1,
        par_g,
        par_input,
        par_axes,
        var_quant_args,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_76b4449302d4b0a4e39c6a24a71c7e49 == cache_frame_76b4449302d4b0a4e39c6a24a71c7e49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76b4449302d4b0a4e39c6a24a71c7e49);
        cache_frame_76b4449302d4b0a4e39c6a24a71c7e49 = NULL;
    }

    assertFrameObject(frame_76b4449302d4b0a4e39c6a24a71c7e49);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_quant_args);
    Py_DECREF(var_quant_args);
    var_quant_args = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_quant_args);
    var_quant_args = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__3_nchw2nhwc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_axes = NULL;
    struct Nuitka_FrameObject *frame_26e496d3bda12e0089a5a153d1716176;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_26e496d3bda12e0089a5a153d1716176 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST4(mod_consts[26]);
        assert(var_axes == NULL);
        var_axes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_26e496d3bda12e0089a5a153d1716176)) {
        Py_XDECREF(cache_frame_26e496d3bda12e0089a5a153d1716176);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26e496d3bda12e0089a5a153d1716176 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26e496d3bda12e0089a5a153d1716176 = MAKE_FUNCTION_FRAME(codeobj_26e496d3bda12e0089a5a153d1716176, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26e496d3bda12e0089a5a153d1716176->m_type_description == NULL);
    frame_26e496d3bda12e0089a5a153d1716176 = cache_frame_26e496d3bda12e0089a5a153d1716176;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26e496d3bda12e0089a5a153d1716176);
    assert(Py_REFCNT(frame_26e496d3bda12e0089a5a153d1716176) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(var_axes);
        tmp_args_element_value_3 = var_axes;
        frame_26e496d3bda12e0089a5a153d1716176->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

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
        exception_tb = MAKE_TRACEBACK(frame_26e496d3bda12e0089a5a153d1716176, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26e496d3bda12e0089a5a153d1716176->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26e496d3bda12e0089a5a153d1716176, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26e496d3bda12e0089a5a153d1716176,
        type_description_1,
        par_g,
        par_input,
        var_axes
    );


    // Release cached frame if used for exception.
    if (frame_26e496d3bda12e0089a5a153d1716176 == cache_frame_26e496d3bda12e0089a5a153d1716176) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26e496d3bda12e0089a5a153d1716176);
        cache_frame_26e496d3bda12e0089a5a153d1716176 = NULL;
    }

    assertFrameObject(frame_26e496d3bda12e0089a5a153d1716176);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_axes);
    Py_DECREF(var_axes);
    var_axes = NULL;
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

    CHECK_OBJECT(var_axes);
    Py_DECREF(var_axes);
    var_axes = NULL;
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


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__4_nhwc2nchw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_axes = NULL;
    struct Nuitka_FrameObject *frame_1d9f1db55ebefe0738d642bb8bfb3532;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d9f1db55ebefe0738d642bb8bfb3532 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST4(mod_consts[28]);
        assert(var_axes == NULL);
        var_axes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1d9f1db55ebefe0738d642bb8bfb3532)) {
        Py_XDECREF(cache_frame_1d9f1db55ebefe0738d642bb8bfb3532);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d9f1db55ebefe0738d642bb8bfb3532 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d9f1db55ebefe0738d642bb8bfb3532 = MAKE_FUNCTION_FRAME(codeobj_1d9f1db55ebefe0738d642bb8bfb3532, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d9f1db55ebefe0738d642bb8bfb3532->m_type_description == NULL);
    frame_1d9f1db55ebefe0738d642bb8bfb3532 = cache_frame_1d9f1db55ebefe0738d642bb8bfb3532;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d9f1db55ebefe0738d642bb8bfb3532);
    assert(Py_REFCNT(frame_1d9f1db55ebefe0738d642bb8bfb3532) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(var_axes);
        tmp_args_element_value_3 = var_axes;
        frame_1d9f1db55ebefe0738d642bb8bfb3532->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_1d9f1db55ebefe0738d642bb8bfb3532, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d9f1db55ebefe0738d642bb8bfb3532->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d9f1db55ebefe0738d642bb8bfb3532, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d9f1db55ebefe0738d642bb8bfb3532,
        type_description_1,
        par_g,
        par_input,
        var_axes
    );


    // Release cached frame if used for exception.
    if (frame_1d9f1db55ebefe0738d642bb8bfb3532 == cache_frame_1d9f1db55ebefe0738d642bb8bfb3532) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d9f1db55ebefe0738d642bb8bfb3532);
        cache_frame_1d9f1db55ebefe0738d642bb8bfb3532 = NULL;
    }

    assertFrameObject(frame_1d9f1db55ebefe0738d642bb8bfb3532);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_axes);
    Py_DECREF(var_axes);
    var_axes = NULL;
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

    CHECK_OBJECT(var_axes);
    Py_DECREF(var_axes);
    var_axes = NULL;
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


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__5_linear_prepack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_weight = python_pars[1];
    PyObject *par_bias = python_pars[2];
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_dc735cf1c52b34715affaddf1bbca6e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dc735cf1c52b34715affaddf1bbca6e2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dc735cf1c52b34715affaddf1bbca6e2)) {
        Py_XDECREF(cache_frame_dc735cf1c52b34715affaddf1bbca6e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc735cf1c52b34715affaddf1bbca6e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc735cf1c52b34715affaddf1bbca6e2 = MAKE_FUNCTION_FRAME(codeobj_dc735cf1c52b34715affaddf1bbca6e2, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc735cf1c52b34715affaddf1bbca6e2->m_type_description == NULL);
    frame_dc735cf1c52b34715affaddf1bbca6e2 = cache_frame_dc735cf1c52b34715affaddf1bbca6e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc735cf1c52b34715affaddf1bbca6e2);
    assert(Py_REFCNT(frame_dc735cf1c52b34715affaddf1bbca6e2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_1 = mod_consts[29];
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_2 = par_weight;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_3 = par_bias;
        frame_dc735cf1c52b34715affaddf1bbca6e2->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[21],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_4 = var_output;
        frame_dc735cf1c52b34715affaddf1bbca6e2->m_frame.f_lineno = 46;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[25], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc735cf1c52b34715affaddf1bbca6e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc735cf1c52b34715affaddf1bbca6e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc735cf1c52b34715affaddf1bbca6e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc735cf1c52b34715affaddf1bbca6e2,
        type_description_1,
        par_g,
        par_weight,
        par_bias,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_dc735cf1c52b34715affaddf1bbca6e2 == cache_frame_dc735cf1c52b34715affaddf1bbca6e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc735cf1c52b34715affaddf1bbca6e2);
        cache_frame_dc735cf1c52b34715affaddf1bbca6e2 = NULL;
    }

    assertFrameObject(frame_dc735cf1c52b34715affaddf1bbca6e2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__6_linear(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_weight = python_pars[2];
    PyObject *par_bias = python_pars[3];
    PyObject *par_scale = python_pars[4];
    PyObject *par_zero_point = python_pars[5];
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_71cdfb5c71df33939003f6e07fc2dcbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_71cdfb5c71df33939003f6e07fc2dcbe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_scale);
        tmp_dict_value_1 = par_scale;
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_zero_point);
        tmp_dict_value_1 = par_zero_point;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_71cdfb5c71df33939003f6e07fc2dcbe)) {
        Py_XDECREF(cache_frame_71cdfb5c71df33939003f6e07fc2dcbe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71cdfb5c71df33939003f6e07fc2dcbe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71cdfb5c71df33939003f6e07fc2dcbe = MAKE_FUNCTION_FRAME(codeobj_71cdfb5c71df33939003f6e07fc2dcbe, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71cdfb5c71df33939003f6e07fc2dcbe->m_type_description == NULL);
    frame_71cdfb5c71df33939003f6e07fc2dcbe = cache_frame_71cdfb5c71df33939003f6e07fc2dcbe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71cdfb5c71df33939003f6e07fc2dcbe);
    assert(Py_REFCNT(frame_71cdfb5c71df33939003f6e07fc2dcbe) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[30];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_weight);
        tmp_tuple_element_1 = par_weight;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_bias);
        tmp_tuple_element_1 = par_bias;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_1 = var_output;
        frame_71cdfb5c71df33939003f6e07fc2dcbe->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_71cdfb5c71df33939003f6e07fc2dcbe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71cdfb5c71df33939003f6e07fc2dcbe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71cdfb5c71df33939003f6e07fc2dcbe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71cdfb5c71df33939003f6e07fc2dcbe,
        type_description_1,
        par_g,
        par_input,
        par_weight,
        par_bias,
        par_scale,
        par_zero_point,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_71cdfb5c71df33939003f6e07fc2dcbe == cache_frame_71cdfb5c71df33939003f6e07fc2dcbe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71cdfb5c71df33939003f6e07fc2dcbe);
        cache_frame_71cdfb5c71df33939003f6e07fc2dcbe = NULL;
    }

    assertFrameObject(frame_71cdfb5c71df33939003f6e07fc2dcbe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__7_conv_prepack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_weight = python_pars[2];
    PyObject *par_bias = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_cbb3d9e1cd503ff6454b53d7c3cf8a55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55)) {
        Py_XDECREF(cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55 = MAKE_FUNCTION_FRAME(codeobj_cbb3d9e1cd503ff6454b53d7c3cf8a55, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55->m_type_description == NULL);
    frame_cbb3d9e1cd503ff6454b53d7c3cf8a55 = cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cbb3d9e1cd503ff6454b53d7c3cf8a55);
    assert(Py_REFCNT(frame_cbb3d9e1cd503ff6454b53d7c3cf8a55) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_1 = mod_consts[29];
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_3 = par_weight;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_4 = par_bias;
        frame_cbb3d9e1cd503ff6454b53d7c3cf8a55->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_1,
                mod_consts[21],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_5 = var_output;
        frame_cbb3d9e1cd503ff6454b53d7c3cf8a55->m_frame.f_lineno = 64;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[25], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbb3d9e1cd503ff6454b53d7c3cf8a55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbb3d9e1cd503ff6454b53d7c3cf8a55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbb3d9e1cd503ff6454b53d7c3cf8a55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbb3d9e1cd503ff6454b53d7c3cf8a55,
        type_description_1,
        par_g,
        par_input,
        par_weight,
        par_bias,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_cbb3d9e1cd503ff6454b53d7c3cf8a55 == cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55);
        cache_frame_cbb3d9e1cd503ff6454b53d7c3cf8a55 = NULL;
    }

    assertFrameObject(frame_cbb3d9e1cd503ff6454b53d7c3cf8a55);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__8_conv2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_weight = python_pars[2];
    PyObject *par_bias = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_scale = python_pars[8];
    PyObject *par_zero_point = python_pars[9];
    PyObject *var_kernel_size = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_dbefd1386a1dd73d4d2d25ce00654197;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dbefd1386a1dd73d4d2d25ce00654197 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dbefd1386a1dd73d4d2d25ce00654197)) {
        Py_XDECREF(cache_frame_dbefd1386a1dd73d4d2d25ce00654197);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dbefd1386a1dd73d4d2d25ce00654197 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dbefd1386a1dd73d4d2d25ce00654197 = MAKE_FUNCTION_FRAME(codeobj_dbefd1386a1dd73d4d2d25ce00654197, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dbefd1386a1dd73d4d2d25ce00654197->m_type_description == NULL);
    frame_dbefd1386a1dd73d4d2d25ce00654197 = cache_frame_dbefd1386a1dd73d4d2d25ce00654197;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dbefd1386a1dd73d4d2d25ce00654197);
    assert(Py_REFCNT(frame_dbefd1386a1dd73d4d2d25ce00654197) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_weight);
        tmp_called_instance_1 = par_weight;
        frame_dbefd1386a1dd73d4d2d25ce00654197->m_frame.f_lineno = 69;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[32];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_kernel_size == NULL);
        var_kernel_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[33];
        CHECK_OBJECT(par_stride);
        tmp_dict_value_1 = par_stride;
        tmp_assign_source_2 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[34];
            CHECK_OBJECT(par_padding);
            tmp_add_expr_left_1 = par_padding;
            CHECK_OBJECT(par_padding);
            tmp_add_expr_right_1 = par_padding;
            tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[35];
            CHECK_OBJECT(par_dilation);
            tmp_dict_value_1 = par_dilation;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[36];
            CHECK_OBJECT(par_groups);
            tmp_dict_value_1 = par_groups;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            CHECK_OBJECT(var_kernel_size);
            tmp_dict_value_1 = var_kernel_size;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            tmp_dict_value_1 = mod_consts[39];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_scale);
            tmp_dict_value_1 = par_scale;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_zero_point);
            tmp_dict_value_1 = par_zero_point;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[40];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_weight);
        tmp_tuple_element_1 = par_weight;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_bias);
        tmp_tuple_element_1 = par_bias;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[24]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_1 = var_output;
        frame_dbefd1386a1dd73d4d2d25ce00654197->m_frame.f_lineno = 81;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[25], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dbefd1386a1dd73d4d2d25ce00654197, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dbefd1386a1dd73d4d2d25ce00654197->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dbefd1386a1dd73d4d2d25ce00654197, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dbefd1386a1dd73d4d2d25ce00654197,
        type_description_1,
        par_g,
        par_input,
        par_weight,
        par_bias,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_scale,
        par_zero_point,
        var_kernel_size,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_dbefd1386a1dd73d4d2d25ce00654197 == cache_frame_dbefd1386a1dd73d4d2d25ce00654197) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dbefd1386a1dd73d4d2d25ce00654197);
        cache_frame_dbefd1386a1dd73d4d2d25ce00654197 = NULL;
    }

    assertFrameObject(frame_dbefd1386a1dd73d4d2d25ce00654197);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kernel_size);
    Py_DECREF(var_kernel_size);
    var_kernel_size = NULL;
    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_kernel_size);
    var_kernel_size = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__9_conv2d_relu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_weight = python_pars[2];
    PyObject *par_bias = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_scale = python_pars[8];
    PyObject *par_zero_point = python_pars[9];
    PyObject *var_kernel_size = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_2950a2f8062553a26a20d95dbf272cd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2950a2f8062553a26a20d95dbf272cd1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2950a2f8062553a26a20d95dbf272cd1)) {
        Py_XDECREF(cache_frame_2950a2f8062553a26a20d95dbf272cd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2950a2f8062553a26a20d95dbf272cd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2950a2f8062553a26a20d95dbf272cd1 = MAKE_FUNCTION_FRAME(codeobj_2950a2f8062553a26a20d95dbf272cd1, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2950a2f8062553a26a20d95dbf272cd1->m_type_description == NULL);
    frame_2950a2f8062553a26a20d95dbf272cd1 = cache_frame_2950a2f8062553a26a20d95dbf272cd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2950a2f8062553a26a20d95dbf272cd1);
    assert(Py_REFCNT(frame_2950a2f8062553a26a20d95dbf272cd1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_weight);
        tmp_called_instance_1 = par_weight;
        frame_2950a2f8062553a26a20d95dbf272cd1->m_frame.f_lineno = 86;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[32];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_kernel_size == NULL);
        var_kernel_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[33];
        CHECK_OBJECT(par_stride);
        tmp_dict_value_1 = par_stride;
        tmp_assign_source_2 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[34];
            CHECK_OBJECT(par_padding);
            tmp_add_expr_left_1 = par_padding;
            CHECK_OBJECT(par_padding);
            tmp_add_expr_right_1 = par_padding;
            tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[35];
            CHECK_OBJECT(par_dilation);
            tmp_dict_value_1 = par_dilation;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[36];
            CHECK_OBJECT(par_groups);
            tmp_dict_value_1 = par_groups;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            CHECK_OBJECT(var_kernel_size);
            tmp_dict_value_1 = var_kernel_size;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            tmp_dict_value_1 = mod_consts[39];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_scale);
            tmp_dict_value_1 = par_scale;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_zero_point);
            tmp_dict_value_1 = par_zero_point;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_3 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[41];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_weight);
        tmp_tuple_element_1 = par_weight;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_bias);
        tmp_tuple_element_1 = par_bias;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[24]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_1 = var_output;
        frame_2950a2f8062553a26a20d95dbf272cd1->m_frame.f_lineno = 98;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[25], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2950a2f8062553a26a20d95dbf272cd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2950a2f8062553a26a20d95dbf272cd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2950a2f8062553a26a20d95dbf272cd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2950a2f8062553a26a20d95dbf272cd1,
        type_description_1,
        par_g,
        par_input,
        par_weight,
        par_bias,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_scale,
        par_zero_point,
        var_kernel_size,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_2950a2f8062553a26a20d95dbf272cd1 == cache_frame_2950a2f8062553a26a20d95dbf272cd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2950a2f8062553a26a20d95dbf272cd1);
        cache_frame_2950a2f8062553a26a20d95dbf272cd1 = NULL;
    }

    assertFrameObject(frame_2950a2f8062553a26a20d95dbf272cd1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kernel_size);
    Py_DECREF(var_kernel_size);
    var_kernel_size = NULL;
    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_kernel_size);
    var_kernel_size = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__10_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input_a = python_pars[1];
    PyObject *par_input_b = python_pars[2];
    PyObject *par_scale = python_pars[3];
    PyObject *par_zero_point = python_pars[4];
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_dca736957ad0ec32db293b83a2de6567;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dca736957ad0ec32db293b83a2de6567 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_scale);
        tmp_dict_value_1 = par_scale;
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_zero_point);
        tmp_dict_value_1 = par_zero_point;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_dca736957ad0ec32db293b83a2de6567)) {
        Py_XDECREF(cache_frame_dca736957ad0ec32db293b83a2de6567);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dca736957ad0ec32db293b83a2de6567 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dca736957ad0ec32db293b83a2de6567 = MAKE_FUNCTION_FRAME(codeobj_dca736957ad0ec32db293b83a2de6567, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dca736957ad0ec32db293b83a2de6567->m_type_description == NULL);
    frame_dca736957ad0ec32db293b83a2de6567 = cache_frame_dca736957ad0ec32db293b83a2de6567;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dca736957ad0ec32db293b83a2de6567);
    assert(Py_REFCNT(frame_dca736957ad0ec32db293b83a2de6567) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[42];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input_a);
        tmp_tuple_element_1 = par_input_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_input_b);
        tmp_tuple_element_1 = par_input_b;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_1 = var_output;
        frame_dca736957ad0ec32db293b83a2de6567->m_frame.f_lineno = 108;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dca736957ad0ec32db293b83a2de6567, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dca736957ad0ec32db293b83a2de6567->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dca736957ad0ec32db293b83a2de6567, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dca736957ad0ec32db293b83a2de6567,
        type_description_1,
        par_g,
        par_input_a,
        par_input_b,
        par_scale,
        par_zero_point,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_dca736957ad0ec32db293b83a2de6567 == cache_frame_dca736957ad0ec32db293b83a2de6567) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dca736957ad0ec32db293b83a2de6567);
        cache_frame_dca736957ad0ec32db293b83a2de6567 = NULL;
    }

    assertFrameObject(frame_dca736957ad0ec32db293b83a2de6567);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_input_a);
    Py_DECREF(par_input_a);
    CHECK_OBJECT(par_input_b);
    Py_DECREF(par_input_b);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__11_relu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_relu = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_6d8ce68580fbd2ab75264b960a6392fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6d8ce68580fbd2ab75264b960a6392fe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6d8ce68580fbd2ab75264b960a6392fe)) {
        Py_XDECREF(cache_frame_6d8ce68580fbd2ab75264b960a6392fe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d8ce68580fbd2ab75264b960a6392fe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d8ce68580fbd2ab75264b960a6392fe = MAKE_FUNCTION_FRAME(codeobj_6d8ce68580fbd2ab75264b960a6392fe, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d8ce68580fbd2ab75264b960a6392fe->m_type_description == NULL);
    frame_6d8ce68580fbd2ab75264b960a6392fe = cache_frame_6d8ce68580fbd2ab75264b960a6392fe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d8ce68580fbd2ab75264b960a6392fe);
    assert(Py_REFCNT(frame_6d8ce68580fbd2ab75264b960a6392fe) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
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
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[44];
        tmp_level_value_1 = mod_consts[10];
        frame_6d8ce68580fbd2ab75264b960a6392fe->m_frame.f_lineno = 114;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[45],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_relu == NULL);
        var_relu = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_relu);
        tmp_called_value_1 = var_relu;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        frame_6d8ce68580fbd2ab75264b960a6392fe->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_input);
        tmp_called_instance_1 = par_input;
        frame_6d8ce68580fbd2ab75264b960a6392fe->m_frame.f_lineno = 117;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[18];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_2 = par_input;
            frame_6d8ce68580fbd2ab75264b960a6392fe->m_frame.f_lineno = 118;
            tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[46];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_3 = var_output;
        frame_6d8ce68580fbd2ab75264b960a6392fe->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[25], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_6d8ce68580fbd2ab75264b960a6392fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d8ce68580fbd2ab75264b960a6392fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d8ce68580fbd2ab75264b960a6392fe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d8ce68580fbd2ab75264b960a6392fe,
        type_description_1,
        par_g,
        par_input,
        var_relu,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_6d8ce68580fbd2ab75264b960a6392fe == cache_frame_6d8ce68580fbd2ab75264b960a6392fe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d8ce68580fbd2ab75264b960a6392fe);
        cache_frame_6d8ce68580fbd2ab75264b960a6392fe = NULL;
    }

    assertFrameObject(frame_6d8ce68580fbd2ab75264b960a6392fe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_relu);
    var_relu = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_relu);
    var_relu = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__12_quantize_per_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_scale = python_pars[2];
    PyObject *par_zero_point = python_pars[3];
    PyObject *par_dtype = python_pars[4];
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_857fdec33beb00edbf5a9b1de6ab2c7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_scale);
        tmp_dict_value_1 = par_scale;
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_zero_point);
        tmp_dict_value_1 = par_zero_point;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d)) {
        Py_XDECREF(cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d = MAKE_FUNCTION_FRAME(codeobj_857fdec33beb00edbf5a9b1de6ab2c7d, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d->m_type_description == NULL);
    frame_857fdec33beb00edbf5a9b1de6ab2c7d = cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_857fdec33beb00edbf5a9b1de6ab2c7d);
    assert(Py_REFCNT(frame_857fdec33beb00edbf5a9b1de6ab2c7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[47];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_1 = var_output;
        frame_857fdec33beb00edbf5a9b1de6ab2c7d->m_frame.f_lineno = 131;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_857fdec33beb00edbf5a9b1de6ab2c7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_857fdec33beb00edbf5a9b1de6ab2c7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_857fdec33beb00edbf5a9b1de6ab2c7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_857fdec33beb00edbf5a9b1de6ab2c7d,
        type_description_1,
        par_g,
        par_input,
        par_scale,
        par_zero_point,
        par_dtype,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_857fdec33beb00edbf5a9b1de6ab2c7d == cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d);
        cache_frame_857fdec33beb00edbf5a9b1de6ab2c7d = NULL;
    }

    assertFrameObject(frame_857fdec33beb00edbf5a9b1de6ab2c7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
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

    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__13_dequantize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_89207779465cc1ee70de29b8de8a0f3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89207779465cc1ee70de29b8de8a0f3e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_89207779465cc1ee70de29b8de8a0f3e)) {
        Py_XDECREF(cache_frame_89207779465cc1ee70de29b8de8a0f3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89207779465cc1ee70de29b8de8a0f3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89207779465cc1ee70de29b8de8a0f3e = MAKE_FUNCTION_FRAME(codeobj_89207779465cc1ee70de29b8de8a0f3e, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89207779465cc1ee70de29b8de8a0f3e->m_type_description == NULL);
    frame_89207779465cc1ee70de29b8de8a0f3e = cache_frame_89207779465cc1ee70de29b8de8a0f3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_89207779465cc1ee70de29b8de8a0f3e);
    assert(Py_REFCNT(frame_89207779465cc1ee70de29b8de8a0f3e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_1 = mod_consts[48];
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        frame_89207779465cc1ee70de29b8de8a0f3e->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[21],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_89207779465cc1ee70de29b8de8a0f3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89207779465cc1ee70de29b8de8a0f3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89207779465cc1ee70de29b8de8a0f3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89207779465cc1ee70de29b8de8a0f3e,
        type_description_1,
        par_g,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_89207779465cc1ee70de29b8de8a0f3e == cache_frame_89207779465cc1ee70de29b8de8a0f3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89207779465cc1ee70de29b8de8a0f3e);
        cache_frame_89207779465cc1ee70de29b8de8a0f3e = NULL;
    }

    assertFrameObject(frame_89207779465cc1ee70de29b8de8a0f3e);

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


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__14__empty_affine_quantized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_shape = python_pars[2];
    PyObject *par_scale = python_pars[3];
    PyObject *par_zero_point = python_pars[4];
    PyObject *par_dtype = python_pars[5];
    PyObject *par_pin_memory = python_pars[6];
    PyObject *par_memory_format = python_pars[7];
    PyObject *par_layout = python_pars[8];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_input);
    tmp_return_value = par_input;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_pin_memory);
    Py_DECREF(par_pin_memory);
    CHECK_OBJECT(par_memory_format);
    Py_DECREF(par_memory_format);
    CHECK_OBJECT(par_layout);
    Py_DECREF(par_layout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__15_upsample_nearest2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_output_size = python_pars[2];
    PyObject *par_align_corners = python_pars[3];
    PyObject *par_scales_h = python_pars[4];
    PyObject *par_scales_w = python_pars[5];
    PyObject *var_upsample_nearest2d_impl = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_afe04a69ccb2b53e30cd956799a38598;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_afe04a69ccb2b53e30cd956799a38598 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_afe04a69ccb2b53e30cd956799a38598)) {
        Py_XDECREF(cache_frame_afe04a69ccb2b53e30cd956799a38598);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afe04a69ccb2b53e30cd956799a38598 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afe04a69ccb2b53e30cd956799a38598 = MAKE_FUNCTION_FRAME(codeobj_afe04a69ccb2b53e30cd956799a38598, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afe04a69ccb2b53e30cd956799a38598->m_type_description == NULL);
    frame_afe04a69ccb2b53e30cd956799a38598 = cache_frame_afe04a69ccb2b53e30cd956799a38598;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_afe04a69ccb2b53e30cd956799a38598);
    assert(Py_REFCNT(frame_afe04a69ccb2b53e30cd956799a38598) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[49];
        tmp_level_value_1 = mod_consts[10];
        frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 144;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[50],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_upsample_nearest2d_impl == NULL);
        var_upsample_nearest2d_impl = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_upsample_nearest2d_impl);
        tmp_called_value_1 = var_upsample_nearest2d_impl;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_output_size);
        tmp_args_element_value_3 = par_output_size;
        CHECK_OBJECT(par_align_corners);
        tmp_args_element_value_4 = par_align_corners;
        frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output_size);
        tmp_args_element_value_5 = par_output_size;
        tmp_args_element_value_6 = mod_consts[52];
        frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_output_size;
            assert(old != NULL);
            par_output_size = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[53];
        CHECK_OBJECT(par_output_size);
        tmp_dict_value_1 = par_output_size;
        tmp_assign_source_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_input);
            tmp_called_instance_2 = par_input;
            frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 150;
            tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[18];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_3 = par_input;
            frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 151;
            tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[17]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_7 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_8 = par_input;
        frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input;
            assert(old != NULL);
            par_input = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[55];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_5 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_9 = par_g;
        CHECK_OBJECT(var_output);
        tmp_args_element_value_10 = var_output;
        frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output;
            assert(old != NULL);
            var_output = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_11 = var_output;
        frame_afe04a69ccb2b53e30cd956799a38598->m_frame.f_lineno = 156;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[25], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_afe04a69ccb2b53e30cd956799a38598, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afe04a69ccb2b53e30cd956799a38598->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afe04a69ccb2b53e30cd956799a38598, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afe04a69ccb2b53e30cd956799a38598,
        type_description_1,
        par_g,
        par_input,
        par_output_size,
        par_align_corners,
        par_scales_h,
        par_scales_w,
        var_upsample_nearest2d_impl,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_afe04a69ccb2b53e30cd956799a38598 == cache_frame_afe04a69ccb2b53e30cd956799a38598) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afe04a69ccb2b53e30cd956799a38598);
        cache_frame_afe04a69ccb2b53e30cd956799a38598 = NULL;
    }

    assertFrameObject(frame_afe04a69ccb2b53e30cd956799a38598);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(par_output_size);
    par_output_size = NULL;
    Py_XDECREF(var_upsample_nearest2d_impl);
    var_upsample_nearest2d_impl = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(par_output_size);
    par_output_size = NULL;
    Py_XDECREF(var_upsample_nearest2d_impl);
    var_upsample_nearest2d_impl = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_align_corners);
    Py_DECREF(par_align_corners);
    CHECK_OBJECT(par_scales_h);
    Py_DECREF(par_scales_h);
    CHECK_OBJECT(par_scales_w);
    Py_DECREF(par_scales_w);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_align_corners);
    Py_DECREF(par_align_corners);
    CHECK_OBJECT(par_scales_h);
    Py_DECREF(par_scales_h);
    CHECK_OBJECT(par_scales_w);
    Py_DECREF(par_scales_w);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__16_max_pool2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_kernel_size = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_padding = python_pars[4];
    PyObject *par_dilation = python_pars[5];
    PyObject *par_ceil_mode = python_pars[6];
    PyObject *var_max_pool2d = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_9af48f2f2253208e13a34b2f8d0fd5bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb)) {
        Py_XDECREF(cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb = MAKE_FUNCTION_FRAME(codeobj_9af48f2f2253208e13a34b2f8d0fd5bb, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_type_description == NULL);
    frame_9af48f2f2253208e13a34b2f8d0fd5bb = cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9af48f2f2253208e13a34b2f8d0fd5bb);
    assert(Py_REFCNT(frame_9af48f2f2253208e13a34b2f8d0fd5bb) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[57];
        tmp_level_value_1 = mod_consts[10];
        frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 161;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[58],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_pool2d == NULL);
        var_max_pool2d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_max_pool2d);
        tmp_called_value_1 = var_max_pool2d;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_3 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_5 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_6 = par_dilation;
        CHECK_OBJECT(par_ceil_mode);
        tmp_args_element_value_7 = par_ceil_mode;
        frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[33];
        CHECK_OBJECT(par_stride);
        tmp_dict_value_1 = par_stride;
        tmp_assign_source_2 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_value_3;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[34];
            CHECK_OBJECT(par_padding);
            tmp_add_expr_left_1 = par_padding;
            CHECK_OBJECT(par_padding);
            tmp_add_expr_right_1 = par_padding;
            tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            CHECK_OBJECT(par_kernel_size);
            tmp_expression_value_2 = par_kernel_size;
            tmp_subscript_value_1 = mod_consts[10];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            tmp_dict_value_1 = mod_consts[39];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_input);
            tmp_called_instance_1 = par_input;
            frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 168;
            tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[18];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_2 = par_input;
            frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 169;
            tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_8 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_9 = par_input;
        frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input;
            assert(old != NULL);
            par_input = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_5 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[60];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_4 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_10 = par_g;
        CHECK_OBJECT(var_output);
        tmp_args_element_value_11 = var_output;
        frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output;
            assert(old != NULL);
            var_output = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[24]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_12 = var_output;
        frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame.f_lineno = 174;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[25], tmp_args_element_value_12);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_9af48f2f2253208e13a34b2f8d0fd5bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9af48f2f2253208e13a34b2f8d0fd5bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9af48f2f2253208e13a34b2f8d0fd5bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9af48f2f2253208e13a34b2f8d0fd5bb,
        type_description_1,
        par_g,
        par_input,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_ceil_mode,
        var_max_pool2d,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_9af48f2f2253208e13a34b2f8d0fd5bb == cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb);
        cache_frame_9af48f2f2253208e13a34b2f8d0fd5bb = NULL;
    }

    assertFrameObject(frame_9af48f2f2253208e13a34b2f8d0fd5bb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(var_max_pool2d);
    var_max_pool2d = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(var_max_pool2d);
    var_max_pool2d = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_ceil_mode);
    Py_DECREF(par_ceil_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_ceil_mode);
    Py_DECREF(par_ceil_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__17_avg_pool2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_kernel_size = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_padding = python_pars[4];
    PyObject *par_ceil_mode = python_pars[5];
    PyObject *par_count_include_pad = python_pars[6];
    PyObject *par_divisor_override = python_pars[7];
    PyObject *var_avg_pool2d = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_46f26053770f410525b9d215f87153f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_46f26053770f410525b9d215f87153f9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_46f26053770f410525b9d215f87153f9)) {
        Py_XDECREF(cache_frame_46f26053770f410525b9d215f87153f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46f26053770f410525b9d215f87153f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46f26053770f410525b9d215f87153f9 = MAKE_FUNCTION_FRAME(codeobj_46f26053770f410525b9d215f87153f9, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46f26053770f410525b9d215f87153f9->m_type_description == NULL);
    frame_46f26053770f410525b9d215f87153f9 = cache_frame_46f26053770f410525b9d215f87153f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_46f26053770f410525b9d215f87153f9);
    assert(Py_REFCNT(frame_46f26053770f410525b9d215f87153f9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[61];
        tmp_level_value_1 = mod_consts[10];
        frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 180;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[62],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_avg_pool2d == NULL);
        var_avg_pool2d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_avg_pool2d);
        tmp_called_value_1 = var_avg_pool2d;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_3 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_5 = par_padding;
        CHECK_OBJECT(par_ceil_mode);
        tmp_args_element_value_6 = par_ceil_mode;
        CHECK_OBJECT(par_count_include_pad);
        tmp_args_element_value_7 = par_count_include_pad;
        CHECK_OBJECT(par_divisor_override);
        tmp_args_element_value_8 = par_divisor_override;
        frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[33];
        CHECK_OBJECT(par_stride);
        tmp_dict_value_1 = par_stride;
        tmp_assign_source_2 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_value_3;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[34];
            CHECK_OBJECT(par_padding);
            tmp_add_expr_left_1 = par_padding;
            CHECK_OBJECT(par_padding);
            tmp_add_expr_right_1 = par_padding;
            tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            CHECK_OBJECT(par_kernel_size);
            tmp_expression_value_2 = par_kernel_size;
            tmp_subscript_value_1 = mod_consts[10];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            tmp_dict_value_1 = mod_consts[39];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_input);
            tmp_called_instance_1 = par_input;
            frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 187;
            tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[18];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_2 = par_input;
            frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 188;
            tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_9 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_10 = par_input;
        frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input;
            assert(old != NULL);
            par_input = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_5 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[63];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_4 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_g);
        tmp_args_element_value_11 = par_g;
        CHECK_OBJECT(var_output);
        tmp_args_element_value_12 = var_output;
        frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output;
            assert(old != NULL);
            var_output = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[24]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_13 = var_output;
        frame_46f26053770f410525b9d215f87153f9->m_frame.f_lineno = 193;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[25], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_46f26053770f410525b9d215f87153f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46f26053770f410525b9d215f87153f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46f26053770f410525b9d215f87153f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46f26053770f410525b9d215f87153f9,
        type_description_1,
        par_g,
        par_input,
        par_kernel_size,
        par_stride,
        par_padding,
        par_ceil_mode,
        par_count_include_pad,
        par_divisor_override,
        var_avg_pool2d,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_46f26053770f410525b9d215f87153f9 == cache_frame_46f26053770f410525b9d215f87153f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46f26053770f410525b9d215f87153f9);
        cache_frame_46f26053770f410525b9d215f87153f9 = NULL;
    }

    assertFrameObject(frame_46f26053770f410525b9d215f87153f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(var_avg_pool2d);
    var_avg_pool2d = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(var_avg_pool2d);
    var_avg_pool2d = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_ceil_mode);
    Py_DECREF(par_ceil_mode);
    CHECK_OBJECT(par_count_include_pad);
    Py_DECREF(par_count_include_pad);
    CHECK_OBJECT(par_divisor_override);
    Py_DECREF(par_divisor_override);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_ceil_mode);
    Py_DECREF(par_ceil_mode);
    CHECK_OBJECT(par_count_include_pad);
    Py_DECREF(par_count_include_pad);
    CHECK_OBJECT(par_divisor_override);
    Py_DECREF(par_divisor_override);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__18_reshape(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_shape = python_pars[2];
    PyObject *var_reshape = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_e788a4cbf0876db22be955bd15446679;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e788a4cbf0876db22be955bd15446679 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e788a4cbf0876db22be955bd15446679)) {
        Py_XDECREF(cache_frame_e788a4cbf0876db22be955bd15446679);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e788a4cbf0876db22be955bd15446679 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e788a4cbf0876db22be955bd15446679 = MAKE_FUNCTION_FRAME(codeobj_e788a4cbf0876db22be955bd15446679, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e788a4cbf0876db22be955bd15446679->m_type_description == NULL);
    frame_e788a4cbf0876db22be955bd15446679 = cache_frame_e788a4cbf0876db22be955bd15446679;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e788a4cbf0876db22be955bd15446679);
    assert(Py_REFCNT(frame_e788a4cbf0876db22be955bd15446679) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[64];
        tmp_level_value_1 = mod_consts[10];
        frame_e788a4cbf0876db22be955bd15446679->m_frame.f_lineno = 198;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[65],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reshape == NULL);
        var_reshape = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_reshape);
        tmp_called_value_1 = var_reshape;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_shape);
        tmp_args_element_value_3 = par_shape;
        frame_e788a4cbf0876db22be955bd15446679->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_input);
        tmp_called_instance_1 = par_input;
        frame_e788a4cbf0876db22be955bd15446679->m_frame.f_lineno = 202;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[18];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_2 = par_input;
            frame_e788a4cbf0876db22be955bd15446679->m_frame.f_lineno = 203;
            tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[66];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_shape);
        tmp_tuple_element_1 = par_shape;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_4 = var_output;
        frame_e788a4cbf0876db22be955bd15446679->m_frame.f_lineno = 206;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[25], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_e788a4cbf0876db22be955bd15446679, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e788a4cbf0876db22be955bd15446679->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e788a4cbf0876db22be955bd15446679, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e788a4cbf0876db22be955bd15446679,
        type_description_1,
        par_g,
        par_input,
        par_shape,
        var_reshape,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_e788a4cbf0876db22be955bd15446679 == cache_frame_e788a4cbf0876db22be955bd15446679) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e788a4cbf0876db22be955bd15446679);
        cache_frame_e788a4cbf0876db22be955bd15446679 = NULL;
    }

    assertFrameObject(frame_e788a4cbf0876db22be955bd15446679);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_reshape);
    var_reshape = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_reshape);
    var_reshape = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__19_slice(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_start = python_pars[3];
    PyObject *par_end = python_pars[4];
    PyObject *par_step = python_pars[5];
    PyObject *var_slice = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_c5bb5a825d9750a9684a34d970c3465a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c5bb5a825d9750a9684a34d970c3465a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c5bb5a825d9750a9684a34d970c3465a)) {
        Py_XDECREF(cache_frame_c5bb5a825d9750a9684a34d970c3465a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5bb5a825d9750a9684a34d970c3465a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5bb5a825d9750a9684a34d970c3465a = MAKE_FUNCTION_FRAME(codeobj_c5bb5a825d9750a9684a34d970c3465a, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5bb5a825d9750a9684a34d970c3465a->m_type_description == NULL);
    frame_c5bb5a825d9750a9684a34d970c3465a = cache_frame_c5bb5a825d9750a9684a34d970c3465a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5bb5a825d9750a9684a34d970c3465a);
    assert(Py_REFCNT(frame_c5bb5a825d9750a9684a34d970c3465a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[67];
        tmp_level_value_1 = mod_consts[10];
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 212;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[68],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_slice == NULL);
        var_slice = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_slice);
        tmp_called_value_1 = var_slice;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_3 = par_dim;
        CHECK_OBJECT(par_start);
        tmp_args_element_value_4 = par_start;
        CHECK_OBJECT(par_end);
        tmp_args_element_value_5 = par_end;
        CHECK_OBJECT(par_step);
        tmp_args_element_value_6 = par_step;
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_step);
        tmp_cmp_expr_left_2 = par_step;
        tmp_cmp_expr_right_2 = mod_consts[8];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[69];
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 216;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 216;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_start);
        tmp_args_element_value_7 = par_start;
        tmp_args_element_value_8 = mod_consts[70];
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_start;
            assert(old != NULL);
            par_start = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_end);
        tmp_args_element_value_9 = par_end;
        tmp_args_element_value_10 = mod_consts[70];
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_end;
            assert(old != NULL);
            par_end = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_11 = par_dim;
        tmp_args_element_value_12 = mod_consts[70];
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dim;
            assert(old != NULL);
            par_dim = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[71];
        CHECK_OBJECT(par_start);
        tmp_dict_value_1 = par_start;
        tmp_assign_source_5 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[72];
            CHECK_OBJECT(par_end);
            tmp_dict_value_1 = par_end;
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[73];
            CHECK_OBJECT(par_dim);
            tmp_dict_value_1 = par_dim;
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_input);
            tmp_called_instance_4 = par_input;
            frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 225;
            tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[17]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[18];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_input);
            tmp_called_instance_5 = par_input;
            frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 226;
            tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[17]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[74];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_6 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_13 = var_output;
        frame_c5bb5a825d9750a9684a34d970c3465a->m_frame.f_lineno = 229;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[25], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_c5bb5a825d9750a9684a34d970c3465a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5bb5a825d9750a9684a34d970c3465a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5bb5a825d9750a9684a34d970c3465a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5bb5a825d9750a9684a34d970c3465a,
        type_description_1,
        par_g,
        par_input,
        par_dim,
        par_start,
        par_end,
        par_step,
        var_slice,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_c5bb5a825d9750a9684a34d970c3465a == cache_frame_c5bb5a825d9750a9684a34d970c3465a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5bb5a825d9750a9684a34d970c3465a);
        cache_frame_c5bb5a825d9750a9684a34d970c3465a = NULL;
    }

    assertFrameObject(frame_c5bb5a825d9750a9684a34d970c3465a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dim);
    par_dim = NULL;
    Py_XDECREF(par_start);
    par_start = NULL;
    Py_XDECREF(par_end);
    par_end = NULL;
    Py_XDECREF(var_slice);
    var_slice = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    Py_XDECREF(par_start);
    par_start = NULL;
    Py_XDECREF(par_end);
    par_end = NULL;
    Py_XDECREF(var_slice);
    var_slice = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_step);
    Py_DECREF(par_step);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__20_cat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_tensor_list = python_pars[1];
    PyObject *par_dim = python_pars[2];
    PyObject *par_scale = python_pars[3];
    PyObject *par_zero_point = python_pars[4];
    PyObject *var_tensors = NULL;
    PyObject *var_input = NULL;
    PyObject *var_cat = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_6579070ad3eea33bba30304fa2ad6bf0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6579070ad3eea33bba30304fa2ad6bf0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6579070ad3eea33bba30304fa2ad6bf0)) {
        Py_XDECREF(cache_frame_6579070ad3eea33bba30304fa2ad6bf0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6579070ad3eea33bba30304fa2ad6bf0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6579070ad3eea33bba30304fa2ad6bf0 = MAKE_FUNCTION_FRAME(codeobj_6579070ad3eea33bba30304fa2ad6bf0, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6579070ad3eea33bba30304fa2ad6bf0->m_type_description == NULL);
    frame_6579070ad3eea33bba30304fa2ad6bf0 = cache_frame_6579070ad3eea33bba30304fa2ad6bf0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6579070ad3eea33bba30304fa2ad6bf0);
    assert(Py_REFCNT(frame_6579070ad3eea33bba30304fa2ad6bf0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor_list);
        tmp_args_element_value_1 = par_tensor_list;
        frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 233;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[75], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensors == NULL);
        var_tensors = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_tensors);
        tmp_expression_value_1 = var_tensors;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_input == NULL);
        var_input = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_input);
        tmp_cmp_expr_left_1 = var_input;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
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
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[76];
        tmp_level_value_1 = mod_consts[10];
        frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 236;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[77],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cat == NULL);
        var_cat = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_cat);
        tmp_called_value_1 = var_cat;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_2 = par_g;
        CHECK_OBJECT(par_tensor_list);
        tmp_args_element_value_3 = par_tensor_list;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_5 = par_dim;
        tmp_args_element_value_6 = mod_consts[70];
        frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dim;
            assert(old != NULL);
            par_dim = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(var_tensors);
        tmp_expression_value_4 = var_tensors;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 241;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[17]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[18];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(var_tensors);
            tmp_expression_value_6 = var_tensors;
            tmp_subscript_value_4 = mod_consts[10];
            tmp_called_instance_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 0);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 242;
            tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[17]);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg5_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[78];
        CHECK_OBJECT(var_tensors);
        tmp_dircall_arg3_1 = var_tensors;
        tmp_dict_key_2 = mod_consts[79];
        CHECK_OBJECT(par_dim);
        tmp_dict_value_2 = par_dim;
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg5_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg5_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1, tmp_dircall_arg5_1};
            tmp_assign_source_6 = impl___main__$$$function__15_complex_call_helper_pos_keywords_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[24]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_7 = var_output;
        frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame.f_lineno = 245;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[25], tmp_args_element_value_7);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_6579070ad3eea33bba30304fa2ad6bf0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6579070ad3eea33bba30304fa2ad6bf0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6579070ad3eea33bba30304fa2ad6bf0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6579070ad3eea33bba30304fa2ad6bf0,
        type_description_1,
        par_g,
        par_tensor_list,
        par_dim,
        par_scale,
        par_zero_point,
        var_tensors,
        var_input,
        var_cat,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_6579070ad3eea33bba30304fa2ad6bf0 == cache_frame_6579070ad3eea33bba30304fa2ad6bf0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6579070ad3eea33bba30304fa2ad6bf0);
        cache_frame_6579070ad3eea33bba30304fa2ad6bf0 = NULL;
    }

    assertFrameObject(frame_6579070ad3eea33bba30304fa2ad6bf0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dim);
    par_dim = NULL;
    CHECK_OBJECT(var_tensors);
    Py_DECREF(var_tensors);
    var_tensors = NULL;
    CHECK_OBJECT(var_input);
    Py_DECREF(var_input);
    var_input = NULL;
    Py_XDECREF(var_cat);
    var_cat = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    Py_XDECREF(var_tensors);
    var_tensors = NULL;
    Py_XDECREF(var_input);
    var_input = NULL;
    Py_XDECREF(var_cat);
    var_cat = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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
    CHECK_OBJECT(par_tensor_list);
    Py_DECREF(par_tensor_list);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_tensor_list);
    Py_DECREF(par_tensor_list);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_zero_point);
    Py_DECREF(par_zero_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$onnx$symbolic_caffe2$$$function__21_sigmoid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_sigmoid = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_94873d33ba1e2e4d51426eaa012bed5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_94873d33ba1e2e4d51426eaa012bed5f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94873d33ba1e2e4d51426eaa012bed5f)) {
        Py_XDECREF(cache_frame_94873d33ba1e2e4d51426eaa012bed5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94873d33ba1e2e4d51426eaa012bed5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94873d33ba1e2e4d51426eaa012bed5f = MAKE_FUNCTION_FRAME(codeobj_94873d33ba1e2e4d51426eaa012bed5f, module_torch$onnx$symbolic_caffe2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94873d33ba1e2e4d51426eaa012bed5f->m_type_description == NULL);
    frame_94873d33ba1e2e4d51426eaa012bed5f = cache_frame_94873d33ba1e2e4d51426eaa012bed5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94873d33ba1e2e4d51426eaa012bed5f);
    assert(Py_REFCNT(frame_94873d33ba1e2e4d51426eaa012bed5f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_1 = par_input;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooNNoo";
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
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[80];
        tmp_level_value_1 = mod_consts[10];
        frame_94873d33ba1e2e4d51426eaa012bed5f->m_frame.f_lineno = 251;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[81],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        assert(var_sigmoid == NULL);
        var_sigmoid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_sigmoid);
        tmp_called_value_1 = var_sigmoid;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        frame_94873d33ba1e2e4d51426eaa012bed5f->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = DICT_COPY(mod_consts[82]);
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_2 = par_g;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[83];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_input);
        tmp_tuple_element_1 = par_input;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[24]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_output);
        tmp_args_element_value_3 = var_output;
        frame_94873d33ba1e2e4d51426eaa012bed5f->m_frame.f_lineno = 262;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooNNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_94873d33ba1e2e4d51426eaa012bed5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94873d33ba1e2e4d51426eaa012bed5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94873d33ba1e2e4d51426eaa012bed5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94873d33ba1e2e4d51426eaa012bed5f,
        type_description_1,
        par_g,
        par_input,
        var_sigmoid,
        NULL,
        NULL,
        var_kwargs,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_94873d33ba1e2e4d51426eaa012bed5f == cache_frame_94873d33ba1e2e4d51426eaa012bed5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94873d33ba1e2e4d51426eaa012bed5f);
        cache_frame_94873d33ba1e2e4d51426eaa012bed5f = NULL;
    }

    assertFrameObject(frame_94873d33ba1e2e4d51426eaa012bed5f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigmoid);
    var_sigmoid = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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

    Py_XDECREF(var_sigmoid);
    var_sigmoid = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
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



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__10_add() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__10_add,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dca736957ad0ec32db293b83a2de6567,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__11_relu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__11_relu,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d8ce68580fbd2ab75264b960a6392fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__12_quantize_per_tensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__12_quantize_per_tensor,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_857fdec33beb00edbf5a9b1de6ab2c7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__13_dequantize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__13_dequantize,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89207779465cc1ee70de29b8de8a0f3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__14__empty_affine_quantized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__14__empty_affine_quantized,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df13bfa9b3e8928eeca5c5eaaacd0e0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__15_upsample_nearest2d(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__15_upsample_nearest2d,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_afe04a69ccb2b53e30cd956799a38598,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__16_max_pool2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__16_max_pool2d,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9af48f2f2253208e13a34b2f8d0fd5bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__17_avg_pool2d(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__17_avg_pool2d,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46f26053770f410525b9d215f87153f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__18_reshape() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__18_reshape,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e788a4cbf0876db22be955bd15446679,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__19_slice() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__19_slice,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5bb5a825d9750a9684a34d970c3465a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__1_register_quantized_ops() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__1_register_quantized_ops,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cffb88651a364b5cb169223d90ce465f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__20_cat(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__20_cat,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6579070ad3eea33bba30304fa2ad6bf0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__21_sigmoid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__21_sigmoid,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_94873d33ba1e2e4d51426eaa012bed5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__2__permute_helper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__2__permute_helper,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76b4449302d4b0a4e39c6a24a71c7e49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__3_nchw2nhwc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__3_nchw2nhwc,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26e496d3bda12e0089a5a153d1716176,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__4_nhwc2nchw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__4_nhwc2nchw,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d9f1db55ebefe0738d642bb8bfb3532,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__5_linear_prepack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__5_linear_prepack,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc735cf1c52b34715affaddf1bbca6e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__6_linear() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__6_linear,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_71cdfb5c71df33939003f6e07fc2dcbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__7_conv_prepack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__7_conv_prepack,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cbb3d9e1cd503ff6454b53d7c3cf8a55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__8_conv2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__8_conv2d,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dbefd1386a1dd73d4d2d25ce00654197,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__9_conv2d_relu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$onnx$symbolic_caffe2$$$function__9_conv2d_relu,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2950a2f8062553a26a20d95dbf272cd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$onnx$symbolic_caffe2,
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

function_impl_code functable_torch$onnx$symbolic_caffe2[] = {
    impl_torch$onnx$symbolic_caffe2$$$function__1_register_quantized_ops,
    impl_torch$onnx$symbolic_caffe2$$$function__2__permute_helper,
    impl_torch$onnx$symbolic_caffe2$$$function__3_nchw2nhwc,
    impl_torch$onnx$symbolic_caffe2$$$function__4_nhwc2nchw,
    impl_torch$onnx$symbolic_caffe2$$$function__5_linear_prepack,
    impl_torch$onnx$symbolic_caffe2$$$function__6_linear,
    impl_torch$onnx$symbolic_caffe2$$$function__7_conv_prepack,
    impl_torch$onnx$symbolic_caffe2$$$function__8_conv2d,
    impl_torch$onnx$symbolic_caffe2$$$function__9_conv2d_relu,
    impl_torch$onnx$symbolic_caffe2$$$function__10_add,
    impl_torch$onnx$symbolic_caffe2$$$function__11_relu,
    impl_torch$onnx$symbolic_caffe2$$$function__12_quantize_per_tensor,
    impl_torch$onnx$symbolic_caffe2$$$function__13_dequantize,
    impl_torch$onnx$symbolic_caffe2$$$function__14__empty_affine_quantized,
    impl_torch$onnx$symbolic_caffe2$$$function__15_upsample_nearest2d,
    impl_torch$onnx$symbolic_caffe2$$$function__16_max_pool2d,
    impl_torch$onnx$symbolic_caffe2$$$function__17_avg_pool2d,
    impl_torch$onnx$symbolic_caffe2$$$function__18_reshape,
    impl_torch$onnx$symbolic_caffe2$$$function__19_slice,
    impl_torch$onnx$symbolic_caffe2$$$function__20_cat,
    impl_torch$onnx$symbolic_caffe2$$$function__21_sigmoid,
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

    function_impl_code *current = functable_torch$onnx$symbolic_caffe2;
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

    if (offset > sizeof(functable_torch$onnx$symbolic_caffe2) || offset < 0) {
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
        functable_torch$onnx$symbolic_caffe2[offset],
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
        module_torch$onnx$symbolic_caffe2,
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
PyObject *modulecode_torch$onnx$symbolic_caffe2(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.onnx.symbolic_caffe2");

    // Store the module for future use.
    module_torch$onnx$symbolic_caffe2 = module;

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
        PRINT_STRING("torch.onnx.symbolic_caffe2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.onnx.symbolic_caffe2: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.onnx.symbolic_caffe2: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$onnx$symbolic_caffe2\n");

    moduledict_torch$onnx$symbolic_caffe2 = MODULE_DICT(module_torch$onnx$symbolic_caffe2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$onnx$symbolic_caffe2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$onnx$symbolic_caffe2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$onnx$symbolic_caffe2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$onnx$symbolic_caffe2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$onnx$symbolic_caffe2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$onnx$symbolic_caffe2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$onnx$symbolic_caffe2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ad1f2bb347d96a8fbf58d2a46174cd9e;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_2);
    }
    frame_ad1f2bb347d96a8fbf58d2a46174cd9e = MAKE_MODULE_FRAME(codeobj_ad1f2bb347d96a8fbf58d2a46174cd9e, module_torch$onnx$symbolic_caffe2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad1f2bb347d96a8fbf58d2a46174cd9e);
    assert(Py_REFCNT(frame_ad1f2bb347d96a8fbf58d2a46174cd9e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[87], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[88], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[90];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[91];
        tmp_level_value_1 = mod_consts[10];
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[92],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[90];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[10];
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 2;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_import_name_from_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[93],
                mod_consts[10]
            );
        } else {
            tmp_import_name_from_2 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[94],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[95];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[10];
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 3;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_import_name_from_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[93],
                mod_consts[10]
            );
        } else {
            tmp_import_name_from_4 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[96],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[98];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$onnx$symbolic_caffe2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[99];
        tmp_level_value_4 = mod_consts[10];
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[6],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[6]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$onnx$symbolic_caffe2,
                mod_consts[7],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[7]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__1_register_quantized_ops();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__2__permute_helper();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__3_nchw2nhwc();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__4_nhwc2nchw();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__5_linear_prepack();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 49;
        tmp_called_value_1 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_2, mod_consts[102]);

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__6_linear();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 49;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__7_conv_prepack();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 67;
        tmp_called_value_3 = CALL_FUNCTION_WITH_POSARGS9(tmp_called_value_4, mod_consts[105]);

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__8_conv2d();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 67;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 84;
        tmp_called_value_5 = CALL_FUNCTION_WITH_POSARGS9(tmp_called_value_6, mod_consts[105]);

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_3 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__9_conv2d_relu();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 84;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 101;
        tmp_called_value_7 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_8, mod_consts[108]);

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_4 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__10_add();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 101;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 111;
        tmp_called_value_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[109]);

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__11_relu();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 111;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 124;
        tmp_called_value_11 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_12, mod_consts[110]);

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_6 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__12_quantize_per_tensor();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 124;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 134;
        tmp_called_value_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[109]);

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_7 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__13_dequantize();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 134;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 138;
        tmp_called_value_15 = CALL_FUNCTION_WITH_POSARGS8(tmp_called_value_16, mod_consts[113]);

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_8 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__14__empty_affine_quantized();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 138;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[115];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_25 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__15_upsample_nearest2d(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 158;
        tmp_called_value_17 = CALL_FUNCTION_WITH_POSARGS6(tmp_called_value_18, mod_consts[116]);

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_9 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__16_max_pool2d();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 158;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_defaults_2;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 177;
        tmp_called_value_19 = CALL_FUNCTION_WITH_POSARGS7(tmp_called_value_20, mod_consts[117]);

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[118];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_10 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__17_avg_pool2d(tmp_defaults_2);

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 177;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__18_reshape();

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 209;
        tmp_called_value_21 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_22, mod_consts[119]);

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_11 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__19_slice();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 209;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[120];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_30 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__20_cat(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 248;
        tmp_called_value_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[109]);

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_12 = MAKE_FUNCTION_torch$onnx$symbolic_caffe2$$$function__21_sigmoid();

        frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame.f_lineno = 248;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_31);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad1f2bb347d96a8fbf58d2a46174cd9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad1f2bb347d96a8fbf58d2a46174cd9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad1f2bb347d96a8fbf58d2a46174cd9e, exception_lineno);
    }



    assertFrameObject(frame_ad1f2bb347d96a8fbf58d2a46174cd9e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.onnx.symbolic_caffe2", false);

    Py_INCREF(module_torch$onnx$symbolic_caffe2);
    return module_torch$onnx$symbolic_caffe2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$onnx$symbolic_caffe2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$onnx$symbolic_caffe2", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
