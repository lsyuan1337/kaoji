/* Generated code for Python module 'torch.ao.quantization.fuser_method_mappings'
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

/* The "module_torch$ao$quantization$fuser_method_mappings" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$ao$quantization$fuser_method_mappings;
PyDictObject *moduledict_torch$ao$quantization$fuser_method_mappings;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[125];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[125];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.ao.quantization.fuser_method_mappings"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 125; i++) {
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
void checkModuleConstants_torch$ao$quantization$fuser_method_mappings(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 125; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_669c1477c9acb39335c4f952ce434110;
static PyCodeObject *codeobj_8305fd361da9d9404978e53b7899ac17;
static PyCodeObject *codeobj_5ae7b88629c813ccfce891737f0598aa;
static PyCodeObject *codeobj_51a5763117094b60382114ef366c2b4d;
static PyCodeObject *codeobj_bf164dd99c10cf86f749303de4342091;
static PyCodeObject *codeobj_3561f8028b7efabeee3d82ab70e6f019;
static PyCodeObject *codeobj_4a8f29448048e02d245fa3c06ba07272;
static PyCodeObject *codeobj_08b83337a06ab3255c23d4bd62b3f68f;
static PyCodeObject *codeobj_49a0c29ebcc55b8837c2a8a964383780;
static PyCodeObject *codeobj_ec288401334c7700f4b8f9b712235cc2;
static PyCodeObject *codeobj_700326d274683a1c01d80d73a28fadb3;
static PyCodeObject *codeobj_cab5da9663deb810b3e1eab11e6ddee6;
static PyCodeObject *codeobj_49b6fbb1d91a47f8b578cb37b68c9004;
static PyCodeObject *codeobj_2aa87c440a03436c1ecdf5690d3f0f40;
static PyCodeObject *codeobj_d906b67f8e9e478e2e3b6b16ccc88744;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[109]); CHECK_OBJECT(module_filename_obj);
    codeobj_669c1477c9acb39335c4f952ce434110 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[110], mod_consts[110], NULL, NULL, 0, 0, 0);
    codeobj_8305fd361da9d9404978e53b7899ac17 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[111], NULL, 3, 0, 0);
    codeobj_5ae7b88629c813ccfce891737f0598aa = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[112], NULL, 4, 0, 0);
    codeobj_51a5763117094b60382114ef366c2b4d = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[113], NULL, 3, 0, 0);
    codeobj_bf164dd99c10cf86f749303de4342091 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[114], NULL, 3, 0, 0);
    codeobj_3561f8028b7efabeee3d82ab70e6f019 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[115], mod_consts[116], 3, 0, 0);
    codeobj_4a8f29448048e02d245fa3c06ba07272 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[115], mod_consts[116], 3, 0, 0);
    codeobj_08b83337a06ab3255c23d4bd62b3f68f = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[117], NULL, 2, 0, 0);
    codeobj_49a0c29ebcc55b8837c2a8a964383780 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[118], NULL, 2, 0, 0);
    codeobj_ec288401334c7700f4b8f9b712235cc2 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[119], NULL, 1, 0, 0);
    codeobj_700326d274683a1c01d80d73a28fadb3 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[119], NULL, 1, 0, 0);
    codeobj_cab5da9663deb810b3e1eab11e6ddee6 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[120], NULL, 1, 0, 0);
    codeobj_49b6fbb1d91a47f8b578cb37b68c9004 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[56], mod_consts[56], mod_consts[121], mod_consts[122], 3, 0, 0);
    codeobj_2aa87c440a03436c1ecdf5690d3f0f40 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[56], mod_consts[56], mod_consts[123], mod_consts[122], 3, 0, 0);
    codeobj_d906b67f8e9e478e2e3b6b16ccc88744 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[120], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__10_get_fuser_method_new(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__1_fuse_conv_bn();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__2_fuse_conv_bn_relu();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__3_fuse_linear_bn();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__4_fuse_convtranspose_bn();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2$$$function__1_fuser_method(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__6_get_fuser_method(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2$$$function__1_fuser_method(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2$$$function__1_reversed(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3$$$function__1_reversed(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__1_fuse_conv_bn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_conv = python_pars[1];
    PyObject *par_bn = python_pars[2];
    PyObject *var_fused_module_class_map = NULL;
    PyObject *var_fused_module_class = NULL;
    struct Nuitka_FrameObject *frame_8305fd361da9d9404978e53b7899ac17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8305fd361da9d9404978e53b7899ac17 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8305fd361da9d9404978e53b7899ac17)) {
        Py_XDECREF(cache_frame_8305fd361da9d9404978e53b7899ac17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8305fd361da9d9404978e53b7899ac17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8305fd361da9d9404978e53b7899ac17 = MAKE_FUNCTION_FRAME(codeobj_8305fd361da9d9404978e53b7899ac17, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8305fd361da9d9404978e53b7899ac17->m_type_description == NULL);
    frame_8305fd361da9d9404978e53b7899ac17 = cache_frame_8305fd361da9d9404978e53b7899ac17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8305fd361da9d9404978e53b7899ac17);
    assert(Py_REFCNT(frame_8305fd361da9d9404978e53b7899ac17) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_conv);
        tmp_expression_value_1 = par_conv;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bn);
        tmp_expression_value_2 = par_bn;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[1];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 25;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 30;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[7]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 30;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[8]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 31;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 31;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_fused_module_class_map == NULL);
        var_fused_module_class_map = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_qat);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_qat);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooo";
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
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_conv);
        tmp_expression_value_9 = par_conv;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[0]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[10];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 36;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_bn);
        tmp_expression_value_10 = par_bn;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_conv);
        tmp_expression_value_11 = par_conv;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[12]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
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
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        tmp_raise_value_3 = mod_consts[13];
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        exception_lineno = 37;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_bn);
        tmp_expression_value_12 = par_bn;
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[14]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooo";
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
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        tmp_raise_value_4 = mod_consts[15];
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        Py_INCREF(tmp_raise_value_4);
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_bn);
        tmp_expression_value_13 = par_bn;
        tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[16]);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
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
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        tmp_raise_type_5 = PyExc_AssertionError;
        tmp_raise_value_5 = mod_consts[17];
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        Py_INCREF(tmp_raise_value_5);
        exception_lineno = 39;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(var_fused_module_class_map);
        tmp_dict_arg_value_1 = var_fused_module_class_map;
        CHECK_OBJECT(par_conv);
        tmp_type_arg_1 = par_conv;
        tmp_key_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_key_value_1 == NULL));
        tmp_default_value_1 = Py_None;
        tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_2 == NULL && !ERROR_OCCURRED()) {
            tmp_assign_source_2 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_2);
        }
        Py_DECREF(tmp_key_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fused_module_class == NULL);
        var_fused_module_class = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_fused_module_class);
        tmp_cmp_expr_left_3 = var_fused_module_class;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_fused_module_class);
        tmp_called_value_1 = var_fused_module_class;
        CHECK_OBJECT(par_conv);
        tmp_args_element_value_1 = par_conv;
        CHECK_OBJECT(par_bn);
        tmp_args_element_value_2 = par_bn;
        frame_8305fd361da9d9404978e53b7899ac17->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_tuple_element_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[18];
        CHECK_OBJECT(par_conv);
        tmp_tuple_element_1 = par_conv;
        tmp_kw_call_arg_value_1_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_bn);
        tmp_tuple_element_1 = par_bn;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 1, tmp_tuple_element_1);
        frame_8305fd361da9d9404978e53b7899ac17->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8305fd361da9d9404978e53b7899ac17->m_frame.f_lineno = 44;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 44;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_7:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_conv);
        tmp_args_element_value_3 = par_conv;
        CHECK_OBJECT(par_bn);
        tmp_args_element_value_4 = par_bn;
        frame_8305fd361da9d9404978e53b7899ac17->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[20],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8305fd361da9d9404978e53b7899ac17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8305fd361da9d9404978e53b7899ac17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8305fd361da9d9404978e53b7899ac17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8305fd361da9d9404978e53b7899ac17,
        type_description_1,
        par_is_qat,
        par_conv,
        par_bn,
        var_fused_module_class_map,
        var_fused_module_class
    );


    // Release cached frame if used for exception.
    if (frame_8305fd361da9d9404978e53b7899ac17 == cache_frame_8305fd361da9d9404978e53b7899ac17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8305fd361da9d9404978e53b7899ac17);
        cache_frame_8305fd361da9d9404978e53b7899ac17 = NULL;
    }

    assertFrameObject(frame_8305fd361da9d9404978e53b7899ac17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fused_module_class_map);
    Py_DECREF(var_fused_module_class_map);
    var_fused_module_class_map = NULL;
    Py_XDECREF(var_fused_module_class);
    var_fused_module_class = NULL;
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

    Py_XDECREF(var_fused_module_class_map);
    var_fused_module_class_map = NULL;
    Py_XDECREF(var_fused_module_class);
    var_fused_module_class = NULL;
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
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_conv);
    Py_DECREF(par_conv);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_conv);
    Py_DECREF(par_conv);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__2_fuse_conv_bn_relu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_conv = python_pars[1];
    PyObject *par_bn = python_pars[2];
    PyObject *par_relu = python_pars[3];
    PyObject *var_fused_module = NULL;
    PyObject *var_map_to_fused_module_train = NULL;
    PyObject *var_map_to_fused_module_eval = NULL;
    PyObject *var_fused_conv = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_5ae7b88629c813ccfce891737f0598aa;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ae7b88629c813ccfce891737f0598aa = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5ae7b88629c813ccfce891737f0598aa)) {
        Py_XDECREF(cache_frame_5ae7b88629c813ccfce891737f0598aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ae7b88629c813ccfce891737f0598aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ae7b88629c813ccfce891737f0598aa = MAKE_FUNCTION_FRAME(codeobj_5ae7b88629c813ccfce891737f0598aa, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ae7b88629c813ccfce891737f0598aa->m_type_description == NULL);
    frame_5ae7b88629c813ccfce891737f0598aa = cache_frame_5ae7b88629c813ccfce891737f0598aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ae7b88629c813ccfce891737f0598aa);
    assert(Py_REFCNT(frame_5ae7b88629c813ccfce891737f0598aa) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_bn);
            tmp_expression_value_1 = par_bn;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_conv);
            tmp_expression_value_2 = par_conv;
            tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_2;
        branch_no_2:;
        {
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
            CHECK_OBJECT(par_relu);
            tmp_expression_value_3 = par_relu;
            tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
            if (tmp_cmp_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            Py_DECREF(tmp_cmp_expr_right_2);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooo";
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
        tmp_raise_value_1 = mod_consts[1];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 64;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_qat);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_qat);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooo";
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
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_conv);
        tmp_expression_value_4 = par_conv;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[10];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 69;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[22]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[6]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[23]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[8]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 73;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[24]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 73;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_map_to_fused_module_train == NULL);
        var_map_to_fused_module_train = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_bn);
        tmp_expression_value_11 = par_bn;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_conv);
        tmp_expression_value_12 = par_conv;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[12]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        tmp_raise_value_3 = mod_consts[25];
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        exception_lineno = 75;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_bn);
        tmp_expression_value_13 = par_bn;
        tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[14]);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        tmp_raise_value_4 = mod_consts[26];
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        Py_INCREF(tmp_raise_value_4);
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_bn);
        tmp_expression_value_14 = par_bn;
        tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[16]);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        tmp_raise_type_5 = PyExc_AssertionError;
        tmp_raise_value_5 = mod_consts[27];
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        Py_INCREF(tmp_raise_value_5);
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(var_map_to_fused_module_train);
        tmp_dict_arg_value_1 = var_map_to_fused_module_train;
        CHECK_OBJECT(par_conv);
        tmp_type_arg_1 = par_conv;
        tmp_key_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_key_value_1 == NULL));
        tmp_default_value_1 = Py_None;
        tmp_assign_source_4 = DICT_GET_ITEM_WITH_HASH_ERROR1(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_4 == NULL && !ERROR_OCCURRED()) {
            tmp_assign_source_4 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_4);
        }
        Py_DECREF(tmp_key_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fused_module == NULL);
        var_fused_module = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_fused_module);
        tmp_cmp_expr_left_4 = var_fused_module;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_fused_module);
        tmp_called_value_1 = var_fused_module;
        CHECK_OBJECT(par_conv);
        tmp_args_element_value_1 = par_conv;
        CHECK_OBJECT(par_bn);
        tmp_args_element_value_2 = par_bn;
        if (par_relu == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_relu;
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_tuple_element_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[18];
        CHECK_OBJECT(par_conv);
        tmp_tuple_element_1 = par_conv;
        tmp_kw_call_arg_value_1_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_bn);
        tmp_tuple_element_1 = par_bn;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 1, tmp_tuple_element_1);
        if (par_relu == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_relu;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 82;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 82;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_8:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[3]);
        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[29]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[6]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 86;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[30]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 86;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[8]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 87;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[31]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 87;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "oooooooo";
                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(var_map_to_fused_module_eval == NULL);
        var_map_to_fused_module_eval = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_default_value_2;
        CHECK_OBJECT(var_map_to_fused_module_eval);
        tmp_dict_arg_value_2 = var_map_to_fused_module_eval;
        CHECK_OBJECT(par_conv);
        tmp_type_arg_2 = par_conv;
        tmp_key_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_key_value_2 == NULL));
        tmp_default_value_2 = Py_None;
        tmp_assign_source_6 = DICT_GET_ITEM_WITH_HASH_ERROR1(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_6 == NULL && !ERROR_OCCURRED()) {
            tmp_assign_source_6 = tmp_default_value_2;
            Py_INCREF(tmp_assign_source_6);
        }
        Py_DECREF(tmp_key_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fused_module == NULL);
        var_fused_module = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_fused_module);
        tmp_cmp_expr_left_5 = var_fused_module;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[19]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[32]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_conv);
        tmp_args_element_value_4 = par_conv;
        CHECK_OBJECT(par_bn);
        tmp_args_element_value_5 = par_bn;
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[20],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fused_conv == NULL);
        var_fused_conv = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_fused_module);
        tmp_called_value_2 = var_fused_module;
        CHECK_OBJECT(var_fused_conv);
        tmp_args_element_value_6 = var_fused_conv;
        if (par_relu == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_relu;
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_tuple_element_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[33];
        CHECK_OBJECT(par_conv);
        tmp_tuple_element_2 = par_conv;
        tmp_kw_call_arg_value_1_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_bn);
        tmp_tuple_element_2 = par_bn;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_2, 1, tmp_tuple_element_2);
        if (par_relu == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = par_relu;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_2, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ae7b88629c813ccfce891737f0598aa->m_frame.f_lineno = 94;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_7 == NULL));
        exception_type = tmp_raise_type_7;
        exception_lineno = 94;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_9:;
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
        exception_tb = MAKE_TRACEBACK(frame_5ae7b88629c813ccfce891737f0598aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ae7b88629c813ccfce891737f0598aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ae7b88629c813ccfce891737f0598aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ae7b88629c813ccfce891737f0598aa,
        type_description_1,
        par_is_qat,
        par_conv,
        par_bn,
        par_relu,
        var_fused_module,
        var_map_to_fused_module_train,
        var_map_to_fused_module_eval,
        var_fused_conv
    );


    // Release cached frame if used for exception.
    if (frame_5ae7b88629c813ccfce891737f0598aa == cache_frame_5ae7b88629c813ccfce891737f0598aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ae7b88629c813ccfce891737f0598aa);
        cache_frame_5ae7b88629c813ccfce891737f0598aa = NULL;
    }

    assertFrameObject(frame_5ae7b88629c813ccfce891737f0598aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fused_module);
    var_fused_module = NULL;
    Py_XDECREF(var_map_to_fused_module_train);
    var_map_to_fused_module_train = NULL;
    Py_XDECREF(var_map_to_fused_module_eval);
    var_map_to_fused_module_eval = NULL;
    Py_XDECREF(var_fused_conv);
    var_fused_conv = NULL;
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

    Py_XDECREF(var_fused_module);
    var_fused_module = NULL;
    Py_XDECREF(var_map_to_fused_module_train);
    var_map_to_fused_module_train = NULL;
    Py_XDECREF(var_map_to_fused_module_eval);
    var_map_to_fused_module_eval = NULL;
    Py_XDECREF(var_fused_conv);
    var_fused_conv = NULL;
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
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_conv);
    Py_DECREF(par_conv);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);
    CHECK_OBJECT(par_relu);
    Py_DECREF(par_relu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_conv);
    Py_DECREF(par_conv);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);
    CHECK_OBJECT(par_relu);
    Py_DECREF(par_relu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__3_fuse_linear_bn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_linear = python_pars[1];
    PyObject *par_bn = python_pars[2];
    struct Nuitka_FrameObject *frame_bf164dd99c10cf86f749303de4342091;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf164dd99c10cf86f749303de4342091 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf164dd99c10cf86f749303de4342091)) {
        Py_XDECREF(cache_frame_bf164dd99c10cf86f749303de4342091);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf164dd99c10cf86f749303de4342091 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf164dd99c10cf86f749303de4342091 = MAKE_FUNCTION_FRAME(codeobj_bf164dd99c10cf86f749303de4342091, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf164dd99c10cf86f749303de4342091->m_type_description == NULL);
    frame_bf164dd99c10cf86f749303de4342091 = cache_frame_bf164dd99c10cf86f749303de4342091;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf164dd99c10cf86f749303de4342091);
    assert(Py_REFCNT(frame_bf164dd99c10cf86f749303de4342091) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_linear);
        tmp_expression_value_1 = par_linear;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bn);
        tmp_expression_value_2 = par_bn;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[35];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 111;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_qat);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_qat);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooo";
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
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_linear);
        tmp_expression_value_3 = par_linear;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[36];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 116;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[37];
        frame_bf164dd99c10cf86f749303de4342091->m_frame.f_lineno = 117;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 117;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_linear);
        tmp_args_element_value_1 = par_linear;
        CHECK_OBJECT(par_bn);
        tmp_args_element_value_2 = par_bn;
        frame_bf164dd99c10cf86f749303de4342091->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[38],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf164dd99c10cf86f749303de4342091, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf164dd99c10cf86f749303de4342091->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf164dd99c10cf86f749303de4342091, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf164dd99c10cf86f749303de4342091,
        type_description_1,
        par_is_qat,
        par_linear,
        par_bn
    );


    // Release cached frame if used for exception.
    if (frame_bf164dd99c10cf86f749303de4342091 == cache_frame_bf164dd99c10cf86f749303de4342091) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf164dd99c10cf86f749303de4342091);
        cache_frame_bf164dd99c10cf86f749303de4342091 = NULL;
    }

    assertFrameObject(frame_bf164dd99c10cf86f749303de4342091);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_linear);
    Py_DECREF(par_linear);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_linear);
    Py_DECREF(par_linear);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__4_fuse_convtranspose_bn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_convt = python_pars[1];
    PyObject *par_bn = python_pars[2];
    struct Nuitka_FrameObject *frame_51a5763117094b60382114ef366c2b4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_51a5763117094b60382114ef366c2b4d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51a5763117094b60382114ef366c2b4d)) {
        Py_XDECREF(cache_frame_51a5763117094b60382114ef366c2b4d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51a5763117094b60382114ef366c2b4d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51a5763117094b60382114ef366c2b4d = MAKE_FUNCTION_FRAME(codeobj_51a5763117094b60382114ef366c2b4d, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51a5763117094b60382114ef366c2b4d->m_type_description == NULL);
    frame_51a5763117094b60382114ef366c2b4d = cache_frame_51a5763117094b60382114ef366c2b4d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51a5763117094b60382114ef366c2b4d);
    assert(Py_REFCNT(frame_51a5763117094b60382114ef366c2b4d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_convt);
        tmp_expression_value_1 = par_convt;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bn);
        tmp_expression_value_2 = par_bn;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[40];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 135;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_qat);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_qat);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
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
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_convt);
        tmp_expression_value_3 = par_convt;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[41];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 139;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[42];
        frame_51a5763117094b60382114ef366c2b4d->m_frame.f_lineno = 140;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 140;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_convt);
        tmp_tuple_element_1 = par_convt;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_bn);
        tmp_tuple_element_1 = par_bn;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[43]);
        frame_51a5763117094b60382114ef366c2b4d->m_frame.f_lineno = 142;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51a5763117094b60382114ef366c2b4d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51a5763117094b60382114ef366c2b4d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51a5763117094b60382114ef366c2b4d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51a5763117094b60382114ef366c2b4d,
        type_description_1,
        par_is_qat,
        par_convt,
        par_bn
    );


    // Release cached frame if used for exception.
    if (frame_51a5763117094b60382114ef366c2b4d == cache_frame_51a5763117094b60382114ef366c2b4d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51a5763117094b60382114ef366c2b4d);
        cache_frame_51a5763117094b60382114ef366c2b4d = NULL;
    }

    assertFrameObject(frame_51a5763117094b60382114ef366c2b4d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_convt);
    Py_DECREF(par_convt);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_convt);
    Py_DECREF(par_convt);
    CHECK_OBJECT(par_bn);
    Py_DECREF(par_bn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_sequential = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_fuser_method = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_sequential;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2$$$function__1_fuser_method(tmp_closure_1);

        assert(var_fuser_method == NULL);
        var_fuser_method = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_fuser_method);
    tmp_return_value = var_fuser_method;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fuser_method);
    Py_DECREF(var_fuser_method);
    var_fuser_method = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sequential);
    Py_DECREF(par_sequential);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2$$$function__1_fuser_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_m1 = python_pars[1];
    PyObject *par_m2 = python_pars[2];
    struct Nuitka_FrameObject *frame_3561f8028b7efabeee3d82ab70e6f019;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3561f8028b7efabeee3d82ab70e6f019 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3561f8028b7efabeee3d82ab70e6f019)) {
        Py_XDECREF(cache_frame_3561f8028b7efabeee3d82ab70e6f019);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3561f8028b7efabeee3d82ab70e6f019 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3561f8028b7efabeee3d82ab70e6f019 = MAKE_FUNCTION_FRAME(codeobj_3561f8028b7efabeee3d82ab70e6f019, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3561f8028b7efabeee3d82ab70e6f019->m_type_description == NULL);
    frame_3561f8028b7efabeee3d82ab70e6f019 = cache_frame_3561f8028b7efabeee3d82ab70e6f019;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3561f8028b7efabeee3d82ab70e6f019);
    assert(Py_REFCNT(frame_3561f8028b7efabeee3d82ab70e6f019) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_m1);
        tmp_args_element_value_1 = par_m1;
        CHECK_OBJECT(par_m2);
        tmp_args_element_value_2 = par_m2;
        frame_3561f8028b7efabeee3d82ab70e6f019->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_3561f8028b7efabeee3d82ab70e6f019, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3561f8028b7efabeee3d82ab70e6f019->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3561f8028b7efabeee3d82ab70e6f019, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3561f8028b7efabeee3d82ab70e6f019,
        type_description_1,
        par_is_qat,
        par_m1,
        par_m2,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3561f8028b7efabeee3d82ab70e6f019 == cache_frame_3561f8028b7efabeee3d82ab70e6f019) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3561f8028b7efabeee3d82ab70e6f019);
        cache_frame_3561f8028b7efabeee3d82ab70e6f019 = NULL;
    }

    assertFrameObject(frame_3561f8028b7efabeee3d82ab70e6f019);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_m2);
    Py_DECREF(par_m2);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_m2);
    Py_DECREF(par_m2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__6_get_fuser_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_op_list = python_pars[0];
    PyObject *par_additional_fuser_method_mapping = python_pars[1];
    PyObject *var_all_mappings = NULL;
    PyObject *var_fuser_method = NULL;
    struct Nuitka_FrameObject *frame_08b83337a06ab3255c23d4bd62b3f68f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08b83337a06ab3255c23d4bd62b3f68f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_additional_fuser_method_mapping);
        tmp_cmp_expr_left_1 = par_additional_fuser_method_mapping;
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
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        {
            PyObject *old = par_additional_fuser_method_mapping;
            assert(old != NULL);
            par_additional_fuser_method_mapping = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_08b83337a06ab3255c23d4bd62b3f68f)) {
        Py_XDECREF(cache_frame_08b83337a06ab3255c23d4bd62b3f68f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08b83337a06ab3255c23d4bd62b3f68f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08b83337a06ab3255c23d4bd62b3f68f = MAKE_FUNCTION_FRAME(codeobj_08b83337a06ab3255c23d4bd62b3f68f, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08b83337a06ab3255c23d4bd62b3f68f->m_type_description == NULL);
    frame_08b83337a06ab3255c23d4bd62b3f68f = cache_frame_08b83337a06ab3255c23d4bd62b3f68f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08b83337a06ab3255c23d4bd62b3f68f);
    assert(Py_REFCNT(frame_08b83337a06ab3255c23d4bd62b3f68f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_additional_fuser_method_mapping);
        tmp_args_element_value_2 = par_additional_fuser_method_mapping;
        frame_08b83337a06ab3255c23d4bd62b3f68f->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_all_mappings == NULL);
        var_all_mappings = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_all_mappings);
        tmp_expression_value_1 = var_all_mappings;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_op_list);
        tmp_args_element_value_3 = par_op_list;
        tmp_args_element_value_4 = Py_None;
        frame_08b83337a06ab3255c23d4bd62b3f68f->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_fuser_method == NULL);
        var_fuser_method = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_fuser_method);
        tmp_cmp_expr_left_2 = var_fuser_method;
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
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[52];
        CHECK_OBJECT(par_op_list);
        tmp_kw_call_arg_value_1_1 = par_op_list;
        frame_08b83337a06ab3255c23d4bd62b3f68f->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 181;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08b83337a06ab3255c23d4bd62b3f68f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08b83337a06ab3255c23d4bd62b3f68f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08b83337a06ab3255c23d4bd62b3f68f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08b83337a06ab3255c23d4bd62b3f68f,
        type_description_1,
        par_op_list,
        par_additional_fuser_method_mapping,
        var_all_mappings,
        var_fuser_method
    );


    // Release cached frame if used for exception.
    if (frame_08b83337a06ab3255c23d4bd62b3f68f == cache_frame_08b83337a06ab3255c23d4bd62b3f68f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08b83337a06ab3255c23d4bd62b3f68f);
        cache_frame_08b83337a06ab3255c23d4bd62b3f68f = NULL;
    }

    assertFrameObject(frame_08b83337a06ab3255c23d4bd62b3f68f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_fuser_method);
    tmp_return_value = var_fuser_method;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_additional_fuser_method_mapping);
    Py_DECREF(par_additional_fuser_method_mapping);
    par_additional_fuser_method_mapping = NULL;
    CHECK_OBJECT(var_all_mappings);
    Py_DECREF(var_all_mappings);
    var_all_mappings = NULL;
    CHECK_OBJECT(var_fuser_method);
    Py_DECREF(var_fuser_method);
    var_fuser_method = NULL;
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

    CHECK_OBJECT(par_additional_fuser_method_mapping);
    Py_DECREF(par_additional_fuser_method_mapping);
    par_additional_fuser_method_mapping = NULL;
    Py_XDECREF(var_all_mappings);
    var_all_mappings = NULL;
    Py_XDECREF(var_fuser_method);
    var_fuser_method = NULL;
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
    CHECK_OBJECT(par_op_list);
    Py_DECREF(par_op_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_op_list);
    Py_DECREF(par_op_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_sequential = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_fuser_method = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_sequential;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2$$$function__1_fuser_method(tmp_closure_1);

        assert(var_fuser_method == NULL);
        var_fuser_method = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_fuser_method);
    tmp_return_value = var_fuser_method;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fuser_method);
    Py_DECREF(var_fuser_method);
    var_fuser_method = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sequential);
    Py_DECREF(par_sequential);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2$$$function__1_fuser_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_m1 = python_pars[1];
    PyObject *par_m2 = python_pars[2];
    struct Nuitka_FrameObject *frame_4a8f29448048e02d245fa3c06ba07272;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a8f29448048e02d245fa3c06ba07272 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a8f29448048e02d245fa3c06ba07272)) {
        Py_XDECREF(cache_frame_4a8f29448048e02d245fa3c06ba07272);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a8f29448048e02d245fa3c06ba07272 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a8f29448048e02d245fa3c06ba07272 = MAKE_FUNCTION_FRAME(codeobj_4a8f29448048e02d245fa3c06ba07272, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a8f29448048e02d245fa3c06ba07272->m_type_description == NULL);
    frame_4a8f29448048e02d245fa3c06ba07272 = cache_frame_4a8f29448048e02d245fa3c06ba07272;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a8f29448048e02d245fa3c06ba07272);
    assert(Py_REFCNT(frame_4a8f29448048e02d245fa3c06ba07272) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_m2);
        tmp_args_element_value_1 = par_m2;
        CHECK_OBJECT(par_m1);
        tmp_args_element_value_2 = par_m1;
        frame_4a8f29448048e02d245fa3c06ba07272->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_4a8f29448048e02d245fa3c06ba07272, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a8f29448048e02d245fa3c06ba07272->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a8f29448048e02d245fa3c06ba07272, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a8f29448048e02d245fa3c06ba07272,
        type_description_1,
        par_is_qat,
        par_m1,
        par_m2,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4a8f29448048e02d245fa3c06ba07272 == cache_frame_4a8f29448048e02d245fa3c06ba07272) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a8f29448048e02d245fa3c06ba07272);
        cache_frame_4a8f29448048e02d245fa3c06ba07272 = NULL;
    }

    assertFrameObject(frame_4a8f29448048e02d245fa3c06ba07272);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_m2);
    Py_DECREF(par_m2);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_m1);
    Py_DECREF(par_m1);
    CHECK_OBJECT(par_m2);
    Py_DECREF(par_m2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_reversed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2$$$function__1_reversed(tmp_closure_1);

        assert(var_reversed == NULL);
        var_reversed = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_reversed);
    tmp_return_value = var_reversed;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reversed);
    Py_DECREF(var_reversed);
    var_reversed = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2$$$function__1_reversed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_2aa87c440a03436c1ecdf5690d3f0f40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2aa87c440a03436c1ecdf5690d3f0f40 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2aa87c440a03436c1ecdf5690d3f0f40)) {
        Py_XDECREF(cache_frame_2aa87c440a03436c1ecdf5690d3f0f40);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2aa87c440a03436c1ecdf5690d3f0f40 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2aa87c440a03436c1ecdf5690d3f0f40 = MAKE_FUNCTION_FRAME(codeobj_2aa87c440a03436c1ecdf5690d3f0f40, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2aa87c440a03436c1ecdf5690d3f0f40->m_type_description == NULL);
    frame_2aa87c440a03436c1ecdf5690d3f0f40 = cache_frame_2aa87c440a03436c1ecdf5690d3f0f40;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2aa87c440a03436c1ecdf5690d3f0f40);
    assert(Py_REFCNT(frame_2aa87c440a03436c1ecdf5690d3f0f40) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_is_qat);
        tmp_args_element_value_1 = par_is_qat;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_2aa87c440a03436c1ecdf5690d3f0f40->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_2aa87c440a03436c1ecdf5690d3f0f40, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2aa87c440a03436c1ecdf5690d3f0f40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2aa87c440a03436c1ecdf5690d3f0f40, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2aa87c440a03436c1ecdf5690d3f0f40,
        type_description_1,
        par_is_qat,
        par_x,
        par_y,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2aa87c440a03436c1ecdf5690d3f0f40 == cache_frame_2aa87c440a03436c1ecdf5690d3f0f40) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2aa87c440a03436c1ecdf5690d3f0f40);
        cache_frame_2aa87c440a03436c1ecdf5690d3f0f40 = NULL;
    }

    assertFrameObject(frame_2aa87c440a03436c1ecdf5690d3f0f40);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_reversed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3$$$function__1_reversed(tmp_closure_1);

        assert(var_reversed == NULL);
        var_reversed = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_reversed);
    tmp_return_value = var_reversed;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reversed);
    Py_DECREF(var_reversed);
    var_reversed = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3$$$function__1_reversed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_is_qat = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_w = python_pars[2];
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_49b6fbb1d91a47f8b578cb37b68c9004;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_49b6fbb1d91a47f8b578cb37b68c9004 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49b6fbb1d91a47f8b578cb37b68c9004)) {
        Py_XDECREF(cache_frame_49b6fbb1d91a47f8b578cb37b68c9004);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49b6fbb1d91a47f8b578cb37b68c9004 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49b6fbb1d91a47f8b578cb37b68c9004 = MAKE_FUNCTION_FRAME(codeobj_49b6fbb1d91a47f8b578cb37b68c9004, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49b6fbb1d91a47f8b578cb37b68c9004->m_type_description == NULL);
    frame_49b6fbb1d91a47f8b578cb37b68c9004 = cache_frame_49b6fbb1d91a47f8b578cb37b68c9004;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49b6fbb1d91a47f8b578cb37b68c9004);
    assert(Py_REFCNT(frame_49b6fbb1d91a47f8b578cb37b68c9004) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_w);
        tmp_iter_arg_1 = par_w;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooc";
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


            type_description_1 = "oooooc";
            exception_lineno = 201;
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


            type_description_1 = "oooooc";
            exception_lineno = 201;
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

                    type_description_1 = "oooooc";
                    exception_lineno = 201;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[60];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooc";
            exception_lineno = 201;
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
        assert(var_y == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_y = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_z == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_z = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_is_qat);
        tmp_args_element_value_1 = par_is_qat;
        CHECK_OBJECT(var_z);
        tmp_args_element_value_2 = var_z;
        CHECK_OBJECT(var_y);
        tmp_args_element_value_3 = var_y;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        frame_49b6fbb1d91a47f8b578cb37b68c9004->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_49b6fbb1d91a47f8b578cb37b68c9004, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49b6fbb1d91a47f8b578cb37b68c9004->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49b6fbb1d91a47f8b578cb37b68c9004, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49b6fbb1d91a47f8b578cb37b68c9004,
        type_description_1,
        par_is_qat,
        par_x,
        par_w,
        var_y,
        var_z,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_49b6fbb1d91a47f8b578cb37b68c9004 == cache_frame_49b6fbb1d91a47f8b578cb37b68c9004) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49b6fbb1d91a47f8b578cb37b68c9004);
        cache_frame_49b6fbb1d91a47f8b578cb37b68c9004 = NULL;
    }

    assertFrameObject(frame_49b6fbb1d91a47f8b578cb37b68c9004);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
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

    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
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
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_is_qat);
    Py_DECREF(par_is_qat);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fuser_method_mappings$$$function__10_get_fuser_method_new(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_op_pattern = python_pars[0];
    PyObject *par_fuser_method_mapping = python_pars[1];
    PyObject *var_fuser_method = NULL;
    struct Nuitka_FrameObject *frame_49a0c29ebcc55b8837c2a8a964383780;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_49a0c29ebcc55b8837c2a8a964383780 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49a0c29ebcc55b8837c2a8a964383780)) {
        Py_XDECREF(cache_frame_49a0c29ebcc55b8837c2a8a964383780);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49a0c29ebcc55b8837c2a8a964383780 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49a0c29ebcc55b8837c2a8a964383780 = MAKE_FUNCTION_FRAME(codeobj_49a0c29ebcc55b8837c2a8a964383780, module_torch$ao$quantization$fuser_method_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49a0c29ebcc55b8837c2a8a964383780->m_type_description == NULL);
    frame_49a0c29ebcc55b8837c2a8a964383780 = cache_frame_49a0c29ebcc55b8837c2a8a964383780;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49a0c29ebcc55b8837c2a8a964383780);
    assert(Py_REFCNT(frame_49a0c29ebcc55b8837c2a8a964383780) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_fuser_method_mapping);
        tmp_cmp_expr_left_1 = par_fuser_method_mapping;
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fuser_method_mapping;
            assert(old != NULL);
            par_fuser_method_mapping = tmp_assign_source_1;
            Py_INCREF(par_fuser_method_mapping);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_fuser_method_mapping);
        tmp_expression_value_1 = par_fuser_method_mapping;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_op_pattern);
        tmp_args_element_value_1 = par_op_pattern;
        tmp_args_element_value_2 = Py_None;
        frame_49a0c29ebcc55b8837c2a8a964383780->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_fuser_method == NULL);
        var_fuser_method = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_fuser_method);
        tmp_cmp_expr_left_2 = var_fuser_method;
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
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[52];
        CHECK_OBJECT(par_op_pattern);
        tmp_kw_call_arg_value_1_1 = par_op_pattern;
        frame_49a0c29ebcc55b8837c2a8a964383780->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 234;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49a0c29ebcc55b8837c2a8a964383780, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49a0c29ebcc55b8837c2a8a964383780->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49a0c29ebcc55b8837c2a8a964383780, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49a0c29ebcc55b8837c2a8a964383780,
        type_description_1,
        par_op_pattern,
        par_fuser_method_mapping,
        var_fuser_method
    );


    // Release cached frame if used for exception.
    if (frame_49a0c29ebcc55b8837c2a8a964383780 == cache_frame_49a0c29ebcc55b8837c2a8a964383780) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49a0c29ebcc55b8837c2a8a964383780);
        cache_frame_49a0c29ebcc55b8837c2a8a964383780 = NULL;
    }

    assertFrameObject(frame_49a0c29ebcc55b8837c2a8a964383780);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_fuser_method);
    tmp_return_value = var_fuser_method;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_fuser_method_mapping);
    Py_DECREF(par_fuser_method_mapping);
    par_fuser_method_mapping = NULL;
    CHECK_OBJECT(var_fuser_method);
    Py_DECREF(var_fuser_method);
    var_fuser_method = NULL;
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

    Py_XDECREF(par_fuser_method_mapping);
    par_fuser_method_mapping = NULL;
    Py_XDECREF(var_fuser_method);
    var_fuser_method = NULL;
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
    CHECK_OBJECT(par_op_pattern);
    Py_DECREF(par_op_pattern);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_op_pattern);
    Py_DECREF(par_op_pattern);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__10_get_fuser_method_new(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__10_get_fuser_method_new,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_49a0c29ebcc55b8837c2a8a964383780,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__1_fuse_conv_bn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__1_fuse_conv_bn,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8305fd361da9d9404978e53b7899ac17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__2_fuse_conv_bn_relu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__2_fuse_conv_bn_relu,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ae7b88629c813ccfce891737f0598aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__3_fuse_linear_bn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__3_fuse_linear_bn,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf164dd99c10cf86f749303de4342091,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__4_fuse_convtranspose_bn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__4_fuse_convtranspose_bn,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51a5763117094b60382114ef366c2b4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d906b67f8e9e478e2e3b6b16ccc88744,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2$$$function__1_fuser_method(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2$$$function__1_fuser_method,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_3561f8028b7efabeee3d82ab70e6f019,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__6_get_fuser_method(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__6_get_fuser_method,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08b83337a06ab3255c23d4bd62b3f68f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cab5da9663deb810b3e1eab11e6ddee6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2$$$function__1_fuser_method(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2$$$function__1_fuser_method,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_4a8f29448048e02d245fa3c06ba07272,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec288401334c7700f4b8f9b712235cc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2$$$function__1_reversed(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2$$$function__1_reversed,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_2aa87c440a03436c1ecdf5690d3f0f40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_700326d274683a1c01d80d73a28fadb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3$$$function__1_reversed(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3$$$function__1_reversed,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_49b6fbb1d91a47f8b578cb37b68c9004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fuser_method_mappings,
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

function_impl_code functable_torch$ao$quantization$fuser_method_mappings[] = {
    impl_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2$$$function__1_fuser_method,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2$$$function__1_fuser_method,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2$$$function__1_reversed,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3$$$function__1_reversed,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__1_fuse_conv_bn,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__2_fuse_conv_bn_relu,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__3_fuse_linear_bn,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__4_fuse_convtranspose_bn,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__6_get_fuser_method,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3,
    impl_torch$ao$quantization$fuser_method_mappings$$$function__10_get_fuser_method_new,
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

    function_impl_code *current = functable_torch$ao$quantization$fuser_method_mappings;
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

    if (offset > sizeof(functable_torch$ao$quantization$fuser_method_mappings) || offset < 0) {
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
        functable_torch$ao$quantization$fuser_method_mappings[offset],
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
        module_torch$ao$quantization$fuser_method_mappings,
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
PyObject *modulecode_torch$ao$quantization$fuser_method_mappings(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.ao.quantization.fuser_method_mappings");

    // Store the module for future use.
    module_torch$ao$quantization$fuser_method_mappings = module;

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
        PRINT_STRING("torch.ao.quantization.fuser_method_mappings: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.fuser_method_mappings: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.fuser_method_mappings: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$ao$quantization$fuser_method_mappings\n");

    moduledict_torch$ao$quantization$fuser_method_mappings = MODULE_DICT(module_torch$ao$quantization$fuser_method_mappings);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$ao$quantization$fuser_method_mappings,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$fuser_method_mappings,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[124]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$fuser_method_mappings,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$fuser_method_mappings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$fuser_method_mappings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$ao$quantization$fuser_method_mappings);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$ao$quantization$fuser_method_mappings);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_669c1477c9acb39335c4f952ce434110;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_2);
    }
    frame_669c1477c9acb39335c4f952ce434110 = MAKE_MODULE_FRAME(codeobj_669c1477c9acb39335c4f952ce434110, module_torch$ao$quantization$fuser_method_mappings);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_669c1477c9acb39335c4f952ce434110);
    assert(Py_REFCNT(frame_669c1477c9acb39335c4f952ce434110) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[67], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[70];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[71];
        frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[2],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[72];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[71];
        frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[2],
                mod_consts[71]
            );
        } else {
            tmp_import_name_from_2 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[73],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[74],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[74]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[75],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[75]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[76],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[76]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[77],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[77]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[78],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[78]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[79],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[79]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[80];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[81];
        tmp_level_value_3 = mod_consts[71];
        frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 5;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[82],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[80];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[83];
        tmp_level_value_4 = mod_consts[71];
        frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 7;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$ao$quantization$fuser_method_mappings,
                mod_consts[49],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__1_fuse_conv_bn();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__2_fuse_conv_bn_relu();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__3_fuse_linear_bn();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__4_fuse_convtranspose_bn();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__5_sequential_wrapper2();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dict_key_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_expression_value_40;
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_4;
                PyObject *tmp_expression_value_5;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_2);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[89]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_2);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[90]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_7;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_3);
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;

                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[91]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[6]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_expression_value_10;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_4);
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[91]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_4);
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[90]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[8]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_12;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_5);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;

                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[92]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 158;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[8]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_expression_value_15;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_6);
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;

                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[92]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_6);
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;

                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[90]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 159;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_1;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[3]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_17;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_7);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;

                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[90]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[29]);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 160;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[6]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_20;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_8);
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;

                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[90]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[30]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 161;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[8]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_23;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_9);
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;

                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[90]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[31]);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 162;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[93]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_26;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_10);
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_10;
                }
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[89]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[93]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_28;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_11);
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_11;
                }
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[90]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[94]);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 164;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[91]);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_31;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_12);
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;

                    goto tuple_build_exception_12;
                }
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[90]);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;

                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[95]);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 165;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[92]);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_34;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_13);
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_13;
                }
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[90]);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[96]);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 166;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[97]);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_14);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;

                    goto tuple_build_exception_14;
                }
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[89]);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[98]);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_39;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_15);
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[91]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[99]);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_41;
                PyTuple_SET_ITEM(tmp_dict_key_1, 0, tmp_tuple_element_16);
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_16;
                }
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[92]);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_dict_key_1, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_dict_key_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_21);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_expression_value_44;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_17);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_17;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_17;
            }
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[100]);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_17;
            }
            tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_18);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_subscript_value_2);
            goto tuple_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[50];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[101];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_22 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__6_get_fuser_method(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__7_reverse_sequential_wrapper2();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__8_reverse2();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__9_reverse3();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[89]);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_19);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_19;
            }
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[3]);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_dict_key_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 206;
        tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_22;
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[90]);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_expression_value_48;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_20);
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;

                    goto tuple_build_exception_20;
                }
                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[89]);
                if (tmp_tuple_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;

                    goto tuple_build_exception_20;
                }
                tmp_tuple_element_20 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_49;
                    PyTuple_SET_ITEM(tmp_tuple_element_20, 0, tmp_tuple_element_21);
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;

                        goto tuple_build_exception_21;
                    }
                    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[3]);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;

                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_20, 1, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_tuple_element_20);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 207;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[91]);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_51;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_22);
                tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_51 == NULL)) {
                    tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_22;
                }
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[6]);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_args_element_value_9 == NULL)) {
                tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
            }

            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 208;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[90]);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_expression_value_53;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_23);
                tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_53 == NULL)) {
                    tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;

                    goto tuple_build_exception_23;
                }
                tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[91]);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;

                    goto tuple_build_exception_23;
                }
                tmp_tuple_element_23 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_54;
                    PyTuple_SET_ITEM(tmp_tuple_element_23, 0, tmp_tuple_element_24);
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;

                        goto tuple_build_exception_24;
                    }
                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[6]);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;

                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_23, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_tuple_element_23);
                goto tuple_build_exception_23;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_args_element_value_10 == NULL)) {
                tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 209;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[92]);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_56;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_25);
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;

                    goto tuple_build_exception_25;
                }
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[8]);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;

                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_args_element_value_11 == NULL)) {
                tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
            }

            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 210;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[90]);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_expression_value_58;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_26);
                tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_58 == NULL)) {
                    tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;

                    goto tuple_build_exception_26;
                }
                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[92]);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;

                    goto tuple_build_exception_26;
                }
                tmp_tuple_element_26 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_59;
                    PyTuple_SET_ITEM(tmp_tuple_element_26, 0, tmp_tuple_element_27);
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 211;

                        goto tuple_build_exception_27;
                    }
                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[8]);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 211;

                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_26, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_tuple_element_26);
                goto tuple_build_exception_26;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_26);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_args_element_value_12 == NULL)) {
                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 211;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[90]);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_61;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_28);
                tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_61 == NULL)) {
                    tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;

                    goto tuple_build_exception_28;
                }
                tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[3]);
                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;

                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[29]);
            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 212;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[90]);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_64;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_29);
                tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_64 == NULL)) {
                    tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_29;
                }
                tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[6]);
                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_29;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[30]);
            if (tmp_args_element_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 213;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[90]);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_67;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_30);
                tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_67 == NULL)) {
                    tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;

                    goto tuple_build_exception_30;
                }
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[8]);
                if (tmp_tuple_element_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;

                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[31]);
            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 214;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[89]);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_70;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_31);
                tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_70 == NULL)) {
                    tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;

                    goto tuple_build_exception_31;
                }
                tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[93]);
                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;

                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_args_element_value_16 == NULL)) {
                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 215;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[90]);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_72;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_32);
                tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_72 == NULL)) {
                    tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_72 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_32;
                }
                tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[93]);
                if (tmp_tuple_element_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[94]);
            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 216;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[90]);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_75;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_33);
                tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_75 == NULL)) {
                    tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_75 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;

                    goto tuple_build_exception_33;
                }
                tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[91]);
                if (tmp_tuple_element_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;

                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_33);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[95]);
            if (tmp_args_element_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 217;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[90]);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_78;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_34);
                tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_78 == NULL)) {
                    tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;

                    goto tuple_build_exception_34;
                }
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[92]);
                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;

                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[96]);
            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 218;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[89]);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_81;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_35);
                tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_81 == NULL)) {
                    tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_35;
                }
                tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[97]);
                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_35;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_35);
            }
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_args_element_value_20 == NULL)) {
                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 219;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[91]);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_83;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_36);
                tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_83 == NULL)) {
                    tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;

                    goto tuple_build_exception_36;
                }
                tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[98]);
                if (tmp_tuple_element_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;

                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_36);
            }
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_args_element_value_21 == NULL)) {
                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 220;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[92]);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_85;
                PyTuple_SET_ITEM(tmp_dict_key_2, 0, tmp_tuple_element_37);
                tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_85 == NULL)) {
                    tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;

                    goto tuple_build_exception_37;
                }
                tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[99]);
                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;

                    goto tuple_build_exception_37;
                }
                PyTuple_SET_ITEM(tmp_dict_key_2, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_dict_key_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            frame_669c1477c9acb39335c4f952ce434110->m_frame.f_lineno = 221;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_26);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_tuple_element_38 == NULL)) {
            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_expression_value_88;
            PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_38);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_38;
            }
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_38;
            }
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[100]);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_38;
            }
            tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_39);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_subscript_value_4);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_subscript_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[61];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_defaults_2 = mod_consts[101];
        tmp_dict_key_3 = mod_consts[106];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_89;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_40;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[107];
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_3;
            }
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_91;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_expression_value_92;
                PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_40);
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[74]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                }

                if (tmp_expression_value_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_40;
                }
                tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_value_92 == NULL)) {
                    tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_value_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_40;
                }
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[100]);
                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_40;
                }
                tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_41);
                tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_tuple_element_41 == NULL)) {
                    tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_41;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_41);
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_subscript_value_7);
                goto tuple_build_exception_40;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_7);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_tuple_element_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_40;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_subscript_value_6);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_27 = MAKE_FUNCTION_torch$ao$quantization$fuser_method_mappings$$$function__10_get_fuser_method_new(tmp_defaults_2, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_27);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_669c1477c9acb39335c4f952ce434110, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_669c1477c9acb39335c4f952ce434110->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_669c1477c9acb39335c4f952ce434110, exception_lineno);
    }



    assertFrameObject(frame_669c1477c9acb39335c4f952ce434110);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.ao.quantization.fuser_method_mappings", false);

    Py_INCREF(module_torch$ao$quantization$fuser_method_mappings);
    return module_torch$ao$quantization$fuser_method_mappings;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fuser_method_mappings, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$ao$quantization$fuser_method_mappings", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
