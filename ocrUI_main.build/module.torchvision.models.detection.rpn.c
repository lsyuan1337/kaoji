/* Generated code for Python module 'torchvision.models.detection.rpn'
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

/* The "module_torchvision$models$detection$rpn" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$models$detection$rpn;
PyDictObject *moduledict_torchvision$models$detection$rpn;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[242];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[242];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.models.detection.rpn"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 242; i++) {
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
void checkModuleConstants_torchvision$models$detection$rpn(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 242; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0bad3bbe1d946d5c1349321c2a7444d1;
static PyCodeObject *codeobj_0e2807a2376fd99be462bf59ede1ed1c;
static PyCodeObject *codeobj_8f734ad25268905d6c26d82f8d68d399;
static PyCodeObject *codeobj_84e0f48ee891004810d06393f68cd3e5;
static PyCodeObject *codeobj_8230c3d3828c3609820ae559899b9fc2;
static PyCodeObject *codeobj_11b16a9365d702a47f274cc1827fc5d6;
static PyCodeObject *codeobj_69d96fda90dfd3e3587bd08f86bc868c;
static PyCodeObject *codeobj_e06028e51ba9d3952db55e482ae88d0d;
static PyCodeObject *codeobj_86a9c4753fd1cfacfbf4bd8698e84932;
static PyCodeObject *codeobj_be6d4a6ba30d1eb1dd94c54b8edd7abd;
static PyCodeObject *codeobj_d40cc5e58f715d49274d9e9553d45333;
static PyCodeObject *codeobj_ef4b3e59a61bd711bf7d5f01d4dc088c;
static PyCodeObject *codeobj_722a0f2197bcf3fcb7c328b9181222b0;
static PyCodeObject *codeobj_c34e3f92e6b3fe911518ab6872c397c4;
static PyCodeObject *codeobj_8d3723c2d7e56f9199146bce024bd2a7;
static PyCodeObject *codeobj_e54793b3e28f480985e12fc50da1109c;
static PyCodeObject *codeobj_be986489043cdb50518b1c544423b55c;
static PyCodeObject *codeobj_31687d95369f004b1cf46baf0947286a;
static PyCodeObject *codeobj_6ab1e668dd2f9c6db17b17b48799b8b7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[223]); CHECK_OBJECT(module_filename_obj);
    codeobj_0bad3bbe1d946d5c1349321c2a7444d1 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[224], mod_consts[225], NULL, 1, 0, 0);
    codeobj_0e2807a2376fd99be462bf59ede1ed1c = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[224], mod_consts[226], NULL, 1, 0, 0);
    codeobj_8f734ad25268905d6c26d82f8d68d399 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[224], mod_consts[227], NULL, 1, 0, 0);
    codeobj_84e0f48ee891004810d06393f68cd3e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[228], mod_consts[228], NULL, NULL, 0, 0, 0);
    codeobj_8230c3d3828c3609820ae559899b9fc2 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[229], NULL, 0, 0, 0);
    codeobj_11b16a9365d702a47f274cc1827fc5d6 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[229], NULL, 0, 0, 0);
    codeobj_69d96fda90dfd3e3587bd08f86bc868c = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[230], mod_consts[229], 11, 0, 0);
    codeobj_e06028e51ba9d3952db55e482ae88d0d = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[231], mod_consts[229], 3, 0, 0);
    codeobj_86a9c4753fd1cfacfbf4bd8698e84932 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[232], NULL, 3, 0, 0);
    codeobj_be6d4a6ba30d1eb1dd94c54b8edd7abd = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[233], NULL, 2, 0, 0);
    codeobj_d40cc5e58f715d49274d9e9553d45333 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[234], NULL, 3, 0, 0);
    codeobj_ef4b3e59a61bd711bf7d5f01d4dc088c = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[235], NULL, 5, 0, 0);
    codeobj_722a0f2197bcf3fcb7c328b9181222b0 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[236], NULL, 2, 0, 0);
    codeobj_c34e3f92e6b3fe911518ab6872c397c4 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[237], NULL, 5, 0, 0);
    codeobj_8d3723c2d7e56f9199146bce024bd2a7 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[238], NULL, 4, 0, 0);
    codeobj_e54793b3e28f480985e12fc50da1109c = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[239], NULL, 2, 0, 0);
    codeobj_be986489043cdb50518b1c544423b55c = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[240], NULL, 6, 0, 0);
    codeobj_31687d95369f004b1cf46baf0947286a = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[241], NULL, 1, 0, 0);
    codeobj_6ab1e668dd2f9c6db17b17b48799b8b7 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[241], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__10__get_top_n_idx(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__11_filter_proposals(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__12_compute_loss(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__13_forward(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__1__onnx_get_num_anchors_and_pre_nms_top_n(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__2___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__3_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__4_permute_and_flatten(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__5_concat_box_prediction_layers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__6___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__7_pre_nms_top_n(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__8_post_nms_top_n(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__9_assign_targets_to_anchors(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$models$detection$rpn$$$function__1__onnx_get_num_anchors_and_pre_nms_top_n(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ob = python_pars[0];
    PyObject *par_orig_pre_nms_top_n = python_pars[1];
    PyObject *var_operators = NULL;
    PyObject *var_num_anchors = NULL;
    PyObject *var_pre_nms_top_n = NULL;
    struct Nuitka_FrameObject *frame_be6d4a6ba30d1eb1dd94c54b8edd7abd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd)) {
        Py_XDECREF(cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd = MAKE_FUNCTION_FRAME(codeobj_be6d4a6ba30d1eb1dd94c54b8edd7abd, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_type_description == NULL);
    frame_be6d4a6ba30d1eb1dd94c54b8edd7abd = cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be6d4a6ba30d1eb1dd94c54b8edd7abd);
    assert(Py_REFCNT(frame_be6d4a6ba30d1eb1dd94c54b8edd7abd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_operators == NULL);
        var_operators = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_operators);
        tmp_called_instance_2 = var_operators;
        CHECK_OBJECT(par_ob);
        tmp_args_element_value_1 = par_ob;
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 20;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[4], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 20;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_anchors == NULL);
        var_num_anchors = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_orig_pre_nms_top_n);
        tmp_list_element_1 = par_orig_pre_nms_top_n;
        tmp_kw_call_arg_value_0_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_1, 0, tmp_list_element_1);
        CHECK_OBJECT(var_num_anchors);
        tmp_expression_value_5 = var_num_anchors;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 21;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_num_anchors);
        tmp_tuple_element_1 = var_num_anchors;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        tmp_args_element_value_4 = mod_consts[2];
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 21;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pre_nms_top_n == NULL);
        var_pre_nms_top_n = tmp_assign_source_3;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = (PyObject *)&PyLong_Type;
        CHECK_OBJECT(var_num_anchors);
        tmp_args_element_value_6 = var_num_anchors;
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_7 = (PyObject *)&PyLong_Type;
            CHECK_OBJECT(var_pre_nms_top_n);
            tmp_args_element_value_8 = var_pre_nms_top_n;
            frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame.f_lineno = 24;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_be6d4a6ba30d1eb1dd94c54b8edd7abd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be6d4a6ba30d1eb1dd94c54b8edd7abd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be6d4a6ba30d1eb1dd94c54b8edd7abd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be6d4a6ba30d1eb1dd94c54b8edd7abd,
        type_description_1,
        par_ob,
        par_orig_pre_nms_top_n,
        var_operators,
        var_num_anchors,
        var_pre_nms_top_n
    );


    // Release cached frame if used for exception.
    if (frame_be6d4a6ba30d1eb1dd94c54b8edd7abd == cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd);
        cache_frame_be6d4a6ba30d1eb1dd94c54b8edd7abd = NULL;
    }

    assertFrameObject(frame_be6d4a6ba30d1eb1dd94c54b8edd7abd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_operators);
    Py_DECREF(var_operators);
    var_operators = NULL;
    CHECK_OBJECT(var_num_anchors);
    Py_DECREF(var_num_anchors);
    var_num_anchors = NULL;
    CHECK_OBJECT(var_pre_nms_top_n);
    Py_DECREF(var_pre_nms_top_n);
    var_pre_nms_top_n = NULL;
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

    Py_XDECREF(var_operators);
    var_operators = NULL;
    Py_XDECREF(var_num_anchors);
    var_num_anchors = NULL;
    Py_XDECREF(var_pre_nms_top_n);
    var_pre_nms_top_n = NULL;
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
    CHECK_OBJECT(par_ob);
    Py_DECREF(par_ob);
    CHECK_OBJECT(par_orig_pre_nms_top_n);
    Py_DECREF(par_orig_pre_nms_top_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ob);
    Py_DECREF(par_ob);
    CHECK_OBJECT(par_orig_pre_nms_top_n);
    Py_DECREF(par_orig_pre_nms_top_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_num_anchors = python_pars[2];
    PyObject *var_layer = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e06028e51ba9d3952db55e482ae88d0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e06028e51ba9d3952db55e482ae88d0d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e06028e51ba9d3952db55e482ae88d0d)) {
        Py_XDECREF(cache_frame_e06028e51ba9d3952db55e482ae88d0d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e06028e51ba9d3952db55e482ae88d0d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e06028e51ba9d3952db55e482ae88d0d = MAKE_FUNCTION_FRAME(codeobj_e06028e51ba9d3952db55e482ae88d0d, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e06028e51ba9d3952db55e482ae88d0d->m_type_description == NULL);
    frame_e06028e51ba9d3952db55e482ae88d0d = cache_frame_e06028e51ba9d3952db55e482ae88d0d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e06028e51ba9d3952db55e482ae88d0d);
    assert(Py_REFCNT(frame_e06028e51ba9d3952db55e482ae88d0d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$rpn, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_1 = par_in_channels;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[19]);
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 38;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_2 = par_in_channels;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_num_anchors);
        tmp_tuple_element_2 = par_num_anchors;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[21]);
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 39;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[22], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_tuple_element_3 = par_in_channels;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_num_anchors);
            tmp_mult_expr_left_1 = par_num_anchors;
            tmp_mult_expr_right_1 = mod_consts[23];
            tmp_tuple_element_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "ooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[21]);
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 40;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[24], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 42;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[25]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
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
                type_description_1 = "ooooc";
                exception_lineno = 42;
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
            PyObject *old = var_layer;
            var_layer = tmp_assign_source_3;
            Py_INCREF(var_layer);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kwargs_value_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[27]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_layer);
        tmp_expression_value_7 = var_layer;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[29]);
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 43;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[26]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_layer);
        tmp_expression_value_11 = var_layer;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[31]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = mod_consts[2];
        frame_e06028e51ba9d3952db55e482ae88d0d->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;
        type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_e06028e51ba9d3952db55e482ae88d0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e06028e51ba9d3952db55e482ae88d0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e06028e51ba9d3952db55e482ae88d0d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e06028e51ba9d3952db55e482ae88d0d,
        type_description_1,
        par_self,
        par_in_channels,
        par_num_anchors,
        var_layer,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e06028e51ba9d3952db55e482ae88d0d == cache_frame_e06028e51ba9d3952db55e482ae88d0d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e06028e51ba9d3952db55e482ae88d0d);
        cache_frame_e06028e51ba9d3952db55e482ae88d0d = NULL;
    }

    assertFrameObject(frame_e06028e51ba9d3952db55e482ae88d0d);

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
    Py_XDECREF(var_layer);
    var_layer = NULL;
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

    Py_XDECREF(var_layer);
    var_layer = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_num_anchors);
    Py_DECREF(par_num_anchors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_num_anchors);
    Py_DECREF(par_num_anchors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__3_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_logits = NULL;
    PyObject *var_bbox_reg = NULL;
    PyObject *var_feature = NULL;
    PyObject *var_t = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e54793b3e28f480985e12fc50da1109c;
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
    static struct Nuitka_FrameObject *cache_frame_e54793b3e28f480985e12fc50da1109c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_logits == NULL);
        var_logits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_bbox_reg == NULL);
        var_bbox_reg = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e54793b3e28f480985e12fc50da1109c)) {
        Py_XDECREF(cache_frame_e54793b3e28f480985e12fc50da1109c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e54793b3e28f480985e12fc50da1109c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e54793b3e28f480985e12fc50da1109c = MAKE_FUNCTION_FRAME(codeobj_e54793b3e28f480985e12fc50da1109c, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e54793b3e28f480985e12fc50da1109c->m_type_description == NULL);
    frame_e54793b3e28f480985e12fc50da1109c = cache_frame_e54793b3e28f480985e12fc50da1109c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e54793b3e28f480985e12fc50da1109c);
    assert(Py_REFCNT(frame_e54793b3e28f480985e12fc50da1109c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_x);
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
                exception_lineno = 49;
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
            PyObject *old = var_feature;
            var_feature = tmp_assign_source_5;
            Py_INCREF(var_feature);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_feature);
        tmp_args_element_value_2 = var_feature;
        frame_e54793b3e28f480985e12fc50da1109c->m_frame.f_lineno = 50;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[20], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_e54793b3e28f480985e12fc50da1109c->m_frame.f_lineno = 50;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        if (var_logits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_logits;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_t);
        tmp_args_element_value_4 = var_t;
        frame_e54793b3e28f480985e12fc50da1109c->m_frame.f_lineno = 51;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[22], tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 51;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_e54793b3e28f480985e12fc50da1109c->m_frame.f_lineno = 51;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        if (var_bbox_reg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_bbox_reg;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_t);
        tmp_args_element_value_6 = var_t;
        frame_e54793b3e28f480985e12fc50da1109c->m_frame.f_lineno = 52;
        tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[24], tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_e54793b3e28f480985e12fc50da1109c->m_frame.f_lineno = 52;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 49;
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
        PyObject *tmp_tuple_element_1;
        if (var_logits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_logits;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_bbox_reg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_bbox_reg;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_e54793b3e28f480985e12fc50da1109c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e54793b3e28f480985e12fc50da1109c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e54793b3e28f480985e12fc50da1109c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e54793b3e28f480985e12fc50da1109c,
        type_description_1,
        par_self,
        par_x,
        var_logits,
        var_bbox_reg,
        var_feature,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_e54793b3e28f480985e12fc50da1109c == cache_frame_e54793b3e28f480985e12fc50da1109c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e54793b3e28f480985e12fc50da1109c);
        cache_frame_e54793b3e28f480985e12fc50da1109c = NULL;
    }

    assertFrameObject(frame_e54793b3e28f480985e12fc50da1109c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_logits);
    var_logits = NULL;
    Py_XDECREF(var_bbox_reg);
    var_bbox_reg = NULL;
    Py_XDECREF(var_feature);
    var_feature = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
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

    Py_XDECREF(var_logits);
    var_logits = NULL;
    Py_XDECREF(var_bbox_reg);
    var_bbox_reg = NULL;
    Py_XDECREF(var_feature);
    var_feature = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__4_permute_and_flatten(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_layer = python_pars[0];
    PyObject *par_N = python_pars[1];
    PyObject *par_A = python_pars[2];
    PyObject *par_C = python_pars[3];
    PyObject *par_H = python_pars[4];
    PyObject *par_W = python_pars[5];
    struct Nuitka_FrameObject *frame_be986489043cdb50518b1c544423b55c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be986489043cdb50518b1c544423b55c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be986489043cdb50518b1c544423b55c)) {
        Py_XDECREF(cache_frame_be986489043cdb50518b1c544423b55c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be986489043cdb50518b1c544423b55c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be986489043cdb50518b1c544423b55c = MAKE_FUNCTION_FRAME(codeobj_be986489043cdb50518b1c544423b55c, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be986489043cdb50518b1c544423b55c->m_type_description == NULL);
    frame_be986489043cdb50518b1c544423b55c = cache_frame_be986489043cdb50518b1c544423b55c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be986489043cdb50518b1c544423b55c);
    assert(Py_REFCNT(frame_be986489043cdb50518b1c544423b55c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_layer);
        tmp_called_instance_1 = par_layer;
        CHECK_OBJECT(par_N);
        tmp_args_element_value_1 = par_N;
        tmp_args_element_value_2 = mod_consts[39];
        CHECK_OBJECT(par_C);
        tmp_args_element_value_3 = par_C;
        CHECK_OBJECT(par_H);
        tmp_args_element_value_4 = par_H;
        CHECK_OBJECT(par_W);
        tmp_args_element_value_5 = par_W;
        frame_be986489043cdb50518b1c544423b55c->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS5(
                tmp_called_instance_1,
                mod_consts[38],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_layer;
            assert(old != NULL);
            par_layer = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_layer);
        tmp_called_instance_2 = par_layer;
        frame_be986489043cdb50518b1c544423b55c->m_frame.f_lineno = 58;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS5(
            tmp_called_instance_2,
            mod_consts[40],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_layer;
            assert(old != NULL);
            par_layer = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_layer);
        tmp_called_instance_3 = par_layer;
        CHECK_OBJECT(par_N);
        tmp_args_element_value_6 = par_N;
        tmp_args_element_value_7 = mod_consts[39];
        CHECK_OBJECT(par_C);
        tmp_args_element_value_8 = par_C;
        frame_be986489043cdb50518b1c544423b55c->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_layer;
            assert(old != NULL);
            par_layer = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be986489043cdb50518b1c544423b55c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be986489043cdb50518b1c544423b55c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be986489043cdb50518b1c544423b55c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be986489043cdb50518b1c544423b55c,
        type_description_1,
        par_layer,
        par_N,
        par_A,
        par_C,
        par_H,
        par_W
    );


    // Release cached frame if used for exception.
    if (frame_be986489043cdb50518b1c544423b55c == cache_frame_be986489043cdb50518b1c544423b55c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be986489043cdb50518b1c544423b55c);
        cache_frame_be986489043cdb50518b1c544423b55c = NULL;
    }

    assertFrameObject(frame_be986489043cdb50518b1c544423b55c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_layer);
    tmp_return_value = par_layer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_layer);
    Py_DECREF(par_layer);
    par_layer = NULL;
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

    Py_XDECREF(par_layer);
    par_layer = NULL;
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
    CHECK_OBJECT(par_N);
    Py_DECREF(par_N);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_H);
    Py_DECREF(par_H);
    CHECK_OBJECT(par_W);
    Py_DECREF(par_W);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_N);
    Py_DECREF(par_N);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_C);
    Py_DECREF(par_C);
    CHECK_OBJECT(par_H);
    Py_DECREF(par_H);
    CHECK_OBJECT(par_W);
    Py_DECREF(par_W);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__5_concat_box_prediction_layers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_box_cls = python_pars[0];
    PyObject *par_box_regression = python_pars[1];
    PyObject *var_box_cls_flattened = NULL;
    PyObject *var_box_regression_flattened = NULL;
    PyObject *var_box_cls_per_level = NULL;
    PyObject *var_box_regression_per_level = NULL;
    PyObject *var_N = NULL;
    PyObject *var_AxC = NULL;
    PyObject *var_H = NULL;
    PyObject *var_W = NULL;
    PyObject *var_Ax4 = NULL;
    PyObject *var_A = NULL;
    PyObject *var_C = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_722a0f2197bcf3fcb7c328b9181222b0;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_722a0f2197bcf3fcb7c328b9181222b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_box_cls_flattened == NULL);
        var_box_cls_flattened = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_box_regression_flattened == NULL);
        var_box_regression_flattened = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_722a0f2197bcf3fcb7c328b9181222b0)) {
        Py_XDECREF(cache_frame_722a0f2197bcf3fcb7c328b9181222b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_722a0f2197bcf3fcb7c328b9181222b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_722a0f2197bcf3fcb7c328b9181222b0 = MAKE_FUNCTION_FRAME(codeobj_722a0f2197bcf3fcb7c328b9181222b0, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_722a0f2197bcf3fcb7c328b9181222b0->m_type_description == NULL);
    frame_722a0f2197bcf3fcb7c328b9181222b0 = cache_frame_722a0f2197bcf3fcb7c328b9181222b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_722a0f2197bcf3fcb7c328b9181222b0);
    assert(Py_REFCNT(frame_722a0f2197bcf3fcb7c328b9181222b0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_box_cls);
        tmp_args_element_value_1 = par_box_cls;
        CHECK_OBJECT(par_box_regression);
        tmp_args_element_value_2 = par_box_regression;
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooo";
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
                type_description_1 = "ooooooooooooo";
                exception_lineno = 70;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 70;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 70;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 70;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 70;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_box_cls_per_level;
            var_box_cls_per_level = tmp_assign_source_8;
            Py_INCREF(var_box_cls_per_level);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_box_regression_per_level;
            var_box_regression_per_level = tmp_assign_source_9;
            Py_INCREF(var_box_regression_per_level);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_box_cls_per_level);
        tmp_expression_value_1 = var_box_cls_per_level;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_4;
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_14;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 71;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 71;
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
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_N;
            var_N = tmp_assign_source_15;
            Py_INCREF(var_N);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_AxC;
            var_AxC = tmp_assign_source_16;
            Py_INCREF(var_AxC);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_H;
            var_H = tmp_assign_source_17;
            Py_INCREF(var_H);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_4;
        {
            PyObject *old = var_W;
            var_W = tmp_assign_source_18;
            Py_INCREF(var_W);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_box_regression_per_level);
        tmp_expression_value_3 = var_box_regression_per_level;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_Ax4;
            var_Ax4 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        CHECK_OBJECT(var_Ax4);
        tmp_floordiv_expr_left_1 = var_Ax4;
        tmp_floordiv_expr_right_1 = mod_consts[23];
        tmp_assign_source_20 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_A;
            var_A = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        CHECK_OBJECT(var_AxC);
        tmp_floordiv_expr_left_2 = var_AxC;
        CHECK_OBJECT(var_A);
        tmp_floordiv_expr_right_2 = var_A;
        tmp_assign_source_21 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_C;
            var_C = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_box_cls_per_level);
        tmp_args_element_value_3 = var_box_cls_per_level;
        CHECK_OBJECT(var_N);
        tmp_args_element_value_4 = var_N;
        CHECK_OBJECT(var_A);
        tmp_args_element_value_5 = var_A;
        CHECK_OBJECT(var_C);
        tmp_args_element_value_6 = var_C;
        CHECK_OBJECT(var_H);
        tmp_args_element_value_7 = var_H;
        CHECK_OBJECT(var_W);
        tmp_args_element_value_8 = var_W;
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_box_cls_per_level;
            assert(old != NULL);
            var_box_cls_per_level = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_9;
        if (var_box_cls_flattened == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = var_box_cls_flattened;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_box_cls_per_level);
        tmp_args_element_value_9 = var_box_cls_per_level;
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 76;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_box_regression_per_level);
        tmp_args_element_value_10 = var_box_regression_per_level;
        CHECK_OBJECT(var_N);
        tmp_args_element_value_11 = var_N;
        CHECK_OBJECT(var_A);
        tmp_args_element_value_12 = var_A;
        tmp_args_element_value_13 = mod_consts[23];
        CHECK_OBJECT(var_H);
        tmp_args_element_value_14 = var_H;
        CHECK_OBJECT(var_W);
        tmp_args_element_value_15 = var_W;
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_box_regression_per_level;
            assert(old != NULL);
            var_box_regression_per_level = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_16;
        if (var_box_regression_flattened == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_box_regression_flattened;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_box_regression_per_level);
        tmp_args_element_value_16 = var_box_regression_per_level;
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 79;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;
        type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_box_cls_flattened == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_box_cls_flattened;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 83;
        tmp_called_instance_1 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 83;
        tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[50],
            &PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_box_cls;
            assert(old != NULL);
            par_box_cls = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_box_regression_flattened == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_box_regression_flattened;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[49]);
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 84;
        tmp_called_instance_2 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame.f_lineno = 84;
        tmp_assign_source_25 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[42],
            &PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_box_regression;
            assert(old != NULL);
            par_box_regression = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_722a0f2197bcf3fcb7c328b9181222b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_722a0f2197bcf3fcb7c328b9181222b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_722a0f2197bcf3fcb7c328b9181222b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_722a0f2197bcf3fcb7c328b9181222b0,
        type_description_1,
        par_box_cls,
        par_box_regression,
        var_box_cls_flattened,
        var_box_regression_flattened,
        var_box_cls_per_level,
        var_box_regression_per_level,
        var_N,
        var_AxC,
        var_H,
        var_W,
        var_Ax4,
        var_A,
        var_C
    );


    // Release cached frame if used for exception.
    if (frame_722a0f2197bcf3fcb7c328b9181222b0 == cache_frame_722a0f2197bcf3fcb7c328b9181222b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_722a0f2197bcf3fcb7c328b9181222b0);
        cache_frame_722a0f2197bcf3fcb7c328b9181222b0 = NULL;
    }

    assertFrameObject(frame_722a0f2197bcf3fcb7c328b9181222b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_box_cls);
        tmp_tuple_element_3 = par_box_cls;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_box_regression);
        tmp_tuple_element_3 = par_box_regression;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_box_cls);
    Py_DECREF(par_box_cls);
    par_box_cls = NULL;
    CHECK_OBJECT(par_box_regression);
    Py_DECREF(par_box_regression);
    par_box_regression = NULL;
    Py_XDECREF(var_box_cls_flattened);
    var_box_cls_flattened = NULL;
    Py_XDECREF(var_box_regression_flattened);
    var_box_regression_flattened = NULL;
    Py_XDECREF(var_box_cls_per_level);
    var_box_cls_per_level = NULL;
    Py_XDECREF(var_box_regression_per_level);
    var_box_regression_per_level = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_AxC);
    var_AxC = NULL;
    Py_XDECREF(var_H);
    var_H = NULL;
    Py_XDECREF(var_W);
    var_W = NULL;
    Py_XDECREF(var_Ax4);
    var_Ax4 = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_C);
    var_C = NULL;
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

    Py_XDECREF(par_box_cls);
    par_box_cls = NULL;
    CHECK_OBJECT(par_box_regression);
    Py_DECREF(par_box_regression);
    par_box_regression = NULL;
    Py_XDECREF(var_box_cls_flattened);
    var_box_cls_flattened = NULL;
    Py_XDECREF(var_box_regression_flattened);
    var_box_regression_flattened = NULL;
    Py_XDECREF(var_box_cls_per_level);
    var_box_cls_per_level = NULL;
    Py_XDECREF(var_box_regression_per_level);
    var_box_regression_per_level = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_AxC);
    var_AxC = NULL;
    Py_XDECREF(var_H);
    var_H = NULL;
    Py_XDECREF(var_W);
    var_W = NULL;
    Py_XDECREF(var_Ax4);
    var_Ax4 = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_C);
    var_C = NULL;
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


static PyObject *impl_torchvision$models$detection$rpn$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_anchor_generator = python_pars[1];
    PyObject *par_head = python_pars[2];
    PyObject *par_fg_iou_thresh = python_pars[3];
    PyObject *par_bg_iou_thresh = python_pars[4];
    PyObject *par_batch_size_per_image = python_pars[5];
    PyObject *par_positive_fraction = python_pars[6];
    PyObject *par_pre_nms_top_n = python_pars[7];
    PyObject *par_post_nms_top_n = python_pars[8];
    PyObject *par_nms_thresh = python_pars[9];
    PyObject *par_score_thresh = python_pars[10];
    struct Nuitka_FrameObject *frame_69d96fda90dfd3e3587bd08f86bc868c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_69d96fda90dfd3e3587bd08f86bc868c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69d96fda90dfd3e3587bd08f86bc868c)) {
        Py_XDECREF(cache_frame_69d96fda90dfd3e3587bd08f86bc868c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69d96fda90dfd3e3587bd08f86bc868c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69d96fda90dfd3e3587bd08f86bc868c = MAKE_FUNCTION_FRAME(codeobj_69d96fda90dfd3e3587bd08f86bc868c, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69d96fda90dfd3e3587bd08f86bc868c->m_type_description == NULL);
    frame_69d96fda90dfd3e3587bd08f86bc868c = cache_frame_69d96fda90dfd3e3587bd08f86bc868c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69d96fda90dfd3e3587bd08f86bc868c);
    assert(Py_REFCNT(frame_69d96fda90dfd3e3587bd08f86bc868c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$rpn, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_69d96fda90dfd3e3587bd08f86bc868c->m_frame.f_lineno = 135;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_anchor_generator);
        tmp_assattr_value_1 = par_anchor_generator;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_head);
        tmp_assattr_value_2 = par_head;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_69d96fda90dfd3e3587bd08f86bc868c->m_frame.f_lineno = 138;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[59], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[62], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg_iou_thresh);
        tmp_tuple_element_1 = par_fg_iou_thresh;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_bg_iou_thresh);
        tmp_tuple_element_1 = par_bg_iou_thresh;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[64]);
        frame_69d96fda90dfd3e3587bd08f86bc868c->m_frame.f_lineno = 143;
        tmp_assattr_value_5 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[65], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_batch_size_per_image);
        tmp_args_element_value_1 = par_batch_size_per_image;
        CHECK_OBJECT(par_positive_fraction);
        tmp_args_element_value_2 = par_positive_fraction;
        frame_69d96fda90dfd3e3587bd08f86bc868c->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[66],
                call_args
            );
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[67], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_pre_nms_top_n);
        tmp_assattr_value_7 = par_pre_nms_top_n;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[68], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_post_nms_top_n);
        tmp_assattr_value_8 = par_post_nms_top_n;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[69], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_nms_thresh);
        tmp_assattr_value_9 = par_nms_thresh;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[70], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_score_thresh);
        tmp_assattr_value_10 = par_score_thresh;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[71], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = mod_consts[72];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[73], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69d96fda90dfd3e3587bd08f86bc868c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69d96fda90dfd3e3587bd08f86bc868c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69d96fda90dfd3e3587bd08f86bc868c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69d96fda90dfd3e3587bd08f86bc868c,
        type_description_1,
        par_self,
        par_anchor_generator,
        par_head,
        par_fg_iou_thresh,
        par_bg_iou_thresh,
        par_batch_size_per_image,
        par_positive_fraction,
        par_pre_nms_top_n,
        par_post_nms_top_n,
        par_nms_thresh,
        par_score_thresh,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_69d96fda90dfd3e3587bd08f86bc868c == cache_frame_69d96fda90dfd3e3587bd08f86bc868c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69d96fda90dfd3e3587bd08f86bc868c);
        cache_frame_69d96fda90dfd3e3587bd08f86bc868c = NULL;
    }

    assertFrameObject(frame_69d96fda90dfd3e3587bd08f86bc868c);

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
    CHECK_OBJECT(par_anchor_generator);
    Py_DECREF(par_anchor_generator);
    CHECK_OBJECT(par_head);
    Py_DECREF(par_head);
    CHECK_OBJECT(par_fg_iou_thresh);
    Py_DECREF(par_fg_iou_thresh);
    CHECK_OBJECT(par_bg_iou_thresh);
    Py_DECREF(par_bg_iou_thresh);
    CHECK_OBJECT(par_batch_size_per_image);
    Py_DECREF(par_batch_size_per_image);
    CHECK_OBJECT(par_positive_fraction);
    Py_DECREF(par_positive_fraction);
    CHECK_OBJECT(par_pre_nms_top_n);
    Py_DECREF(par_pre_nms_top_n);
    CHECK_OBJECT(par_post_nms_top_n);
    Py_DECREF(par_post_nms_top_n);
    CHECK_OBJECT(par_nms_thresh);
    Py_DECREF(par_nms_thresh);
    CHECK_OBJECT(par_score_thresh);
    Py_DECREF(par_score_thresh);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_anchor_generator);
    Py_DECREF(par_anchor_generator);
    CHECK_OBJECT(par_head);
    Py_DECREF(par_head);
    CHECK_OBJECT(par_fg_iou_thresh);
    Py_DECREF(par_fg_iou_thresh);
    CHECK_OBJECT(par_bg_iou_thresh);
    Py_DECREF(par_bg_iou_thresh);
    CHECK_OBJECT(par_batch_size_per_image);
    Py_DECREF(par_batch_size_per_image);
    CHECK_OBJECT(par_positive_fraction);
    Py_DECREF(par_positive_fraction);
    CHECK_OBJECT(par_pre_nms_top_n);
    Py_DECREF(par_pre_nms_top_n);
    CHECK_OBJECT(par_post_nms_top_n);
    Py_DECREF(par_post_nms_top_n);
    CHECK_OBJECT(par_nms_thresh);
    Py_DECREF(par_nms_thresh);
    CHECK_OBJECT(par_score_thresh);
    Py_DECREF(par_score_thresh);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__7_pre_nms_top_n(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6ab1e668dd2f9c6db17b17b48799b8b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7)) {
        Py_XDECREF(cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7 = MAKE_FUNCTION_FRAME(codeobj_6ab1e668dd2f9c6db17b17b48799b8b7, module_torchvision$models$detection$rpn, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7->m_type_description == NULL);
    frame_6ab1e668dd2f9c6db17b17b48799b8b7 = cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6ab1e668dd2f9c6db17b17b48799b8b7);
    assert(Py_REFCNT(frame_6ab1e668dd2f9c6db17b17b48799b8b7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 158;
            type_description_1 = "o";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[68]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[74];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[68]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[75];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_6ab1e668dd2f9c6db17b17b48799b8b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ab1e668dd2f9c6db17b17b48799b8b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ab1e668dd2f9c6db17b17b48799b8b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ab1e668dd2f9c6db17b17b48799b8b7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6ab1e668dd2f9c6db17b17b48799b8b7 == cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7);
        cache_frame_6ab1e668dd2f9c6db17b17b48799b8b7 = NULL;
    }

    assertFrameObject(frame_6ab1e668dd2f9c6db17b17b48799b8b7);

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


static PyObject *impl_torchvision$models$detection$rpn$$$function__8_post_nms_top_n(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_31687d95369f004b1cf46baf0947286a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_31687d95369f004b1cf46baf0947286a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31687d95369f004b1cf46baf0947286a)) {
        Py_XDECREF(cache_frame_31687d95369f004b1cf46baf0947286a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31687d95369f004b1cf46baf0947286a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31687d95369f004b1cf46baf0947286a = MAKE_FUNCTION_FRAME(codeobj_31687d95369f004b1cf46baf0947286a, module_torchvision$models$detection$rpn, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31687d95369f004b1cf46baf0947286a->m_type_description == NULL);
    frame_31687d95369f004b1cf46baf0947286a = cache_frame_31687d95369f004b1cf46baf0947286a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31687d95369f004b1cf46baf0947286a);
    assert(Py_REFCNT(frame_31687d95369f004b1cf46baf0947286a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 163;
            type_description_1 = "o";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[69]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[74];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[69]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[75];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_31687d95369f004b1cf46baf0947286a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31687d95369f004b1cf46baf0947286a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31687d95369f004b1cf46baf0947286a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31687d95369f004b1cf46baf0947286a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_31687d95369f004b1cf46baf0947286a == cache_frame_31687d95369f004b1cf46baf0947286a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31687d95369f004b1cf46baf0947286a);
        cache_frame_31687d95369f004b1cf46baf0947286a = NULL;
    }

    assertFrameObject(frame_31687d95369f004b1cf46baf0947286a);

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


static PyObject *impl_torchvision$models$detection$rpn$$$function__9_assign_targets_to_anchors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_anchors = python_pars[1];
    PyObject *par_targets = python_pars[2];
    PyObject *var_labels = NULL;
    PyObject *var_matched_gt_boxes = NULL;
    PyObject *var_anchors_per_image = NULL;
    PyObject *var_targets_per_image = NULL;
    PyObject *var_gt_boxes = NULL;
    PyObject *var_device = NULL;
    PyObject *var_matched_gt_boxes_per_image = NULL;
    PyObject *var_labels_per_image = NULL;
    PyObject *var_match_quality_matrix = NULL;
    PyObject *var_matched_idxs = NULL;
    PyObject *var_bg_indices = NULL;
    PyObject *var_inds_to_discard = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d40cc5e58f715d49274d9e9553d45333;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d40cc5e58f715d49274d9e9553d45333 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_labels == NULL);
        var_labels = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_matched_gt_boxes == NULL);
        var_matched_gt_boxes = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d40cc5e58f715d49274d9e9553d45333)) {
        Py_XDECREF(cache_frame_d40cc5e58f715d49274d9e9553d45333);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d40cc5e58f715d49274d9e9553d45333 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d40cc5e58f715d49274d9e9553d45333 = MAKE_FUNCTION_FRAME(codeobj_d40cc5e58f715d49274d9e9553d45333, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d40cc5e58f715d49274d9e9553d45333->m_type_description == NULL);
    frame_d40cc5e58f715d49274d9e9553d45333 = cache_frame_d40cc5e58f715d49274d9e9553d45333;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d40cc5e58f715d49274d9e9553d45333);
    assert(Py_REFCNT(frame_d40cc5e58f715d49274d9e9553d45333) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_anchors);
        tmp_args_element_value_1 = par_anchors;
        CHECK_OBJECT(par_targets);
        tmp_args_element_value_2 = par_targets;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
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
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 173;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 173;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 173;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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
            exception_value = mod_consts[43];
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_anchors_per_image;
            var_anchors_per_image = tmp_assign_source_8;
            Py_INCREF(var_anchors_per_image);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_targets_per_image;
            var_targets_per_image = tmp_assign_source_9;
            Py_INCREF(var_targets_per_image);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_targets_per_image);
        tmp_expression_value_1 = var_targets_per_image;
        tmp_subscript_value_1 = mod_consts[76];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_gt_boxes;
            var_gt_boxes = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_gt_boxes);
        tmp_called_instance_1 = var_gt_boxes;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 176;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[77]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_anchors_per_image);
        tmp_expression_value_2 = var_anchors_per_image;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_device;
            var_device = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[79]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_anchors_per_image);
        tmp_expression_value_4 = var_anchors_per_image;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[44]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[80]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_1 = var_device;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 179;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[81]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_matched_gt_boxes_per_image;
            var_matched_gt_boxes_per_image = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[79]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_anchors_per_image);
        tmp_expression_value_8 = var_anchors_per_image;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[44]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[2];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_0_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_2, 0, tmp_tuple_element_1);
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[80]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_2 = var_device;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 180;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[81]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_labels_per_image;
            var_labels_per_image = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_gt_boxes);
        tmp_args_element_value_3 = var_gt_boxes;
        CHECK_OBJECT(var_anchors_per_image);
        tmp_args_element_value_4 = var_anchors_per_image;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_match_quality_matrix;
            var_match_quality_matrix = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_match_quality_matrix);
        tmp_args_element_value_5 = var_match_quality_matrix;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 183;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[65], tmp_args_element_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_matched_idxs;
            var_matched_idxs = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_gt_boxes);
        tmp_expression_value_10 = var_gt_boxes;
        CHECK_OBJECT(var_matched_idxs);
        tmp_expression_value_11 = var_matched_idxs;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[82]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 188;
        tmp_subscript_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[7], 0), mod_consts[83]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_matched_gt_boxes_per_image;
            var_matched_gt_boxes_per_image = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_matched_idxs);
        tmp_cmp_expr_left_2 = var_matched_idxs;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_assign_source_17 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_labels_per_image;
            var_labels_per_image = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_labels_per_image);
        tmp_expression_value_12 = var_labels_per_image;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[84]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[80]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 191;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_labels_per_image;
            assert(old != NULL);
            var_labels_per_image = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_matched_idxs);
        tmp_cmp_expr_left_3 = var_matched_idxs;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[65]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[85]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_19 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bg_indices;
            var_bg_indices = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[86];
        CHECK_OBJECT(var_labels_per_image);
        tmp_ass_subscribed_1 = var_labels_per_image;
        CHECK_OBJECT(var_bg_indices);
        tmp_ass_subscript_1 = var_bg_indices;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_matched_idxs);
        tmp_cmp_expr_left_4 = var_matched_idxs;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[65]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[87]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_20 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_inds_to_discard;
            var_inds_to_discard = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[88];
        CHECK_OBJECT(var_labels_per_image);
        tmp_ass_subscribed_2 = var_labels_per_image;
        CHECK_OBJECT(var_inds_to_discard);
        tmp_ass_subscript_2 = var_inds_to_discard;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        if (var_labels == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_18 = var_labels;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[36]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_labels_per_image == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = var_labels_per_image;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 201;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        if (var_matched_gt_boxes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_19 = var_matched_gt_boxes;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[36]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_matched_gt_boxes_per_image);
        tmp_args_element_value_7 = var_matched_gt_boxes_per_image;
        frame_d40cc5e58f715d49274d9e9553d45333->m_frame.f_lineno = 202;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 173;
        type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_tuple_element_2;
        if (var_labels == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_labels;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (var_matched_gt_boxes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_matched_gt_boxes;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_d40cc5e58f715d49274d9e9553d45333, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d40cc5e58f715d49274d9e9553d45333->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d40cc5e58f715d49274d9e9553d45333, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d40cc5e58f715d49274d9e9553d45333,
        type_description_1,
        par_self,
        par_anchors,
        par_targets,
        var_labels,
        var_matched_gt_boxes,
        var_anchors_per_image,
        var_targets_per_image,
        var_gt_boxes,
        var_device,
        var_matched_gt_boxes_per_image,
        var_labels_per_image,
        var_match_quality_matrix,
        var_matched_idxs,
        var_bg_indices,
        var_inds_to_discard
    );


    // Release cached frame if used for exception.
    if (frame_d40cc5e58f715d49274d9e9553d45333 == cache_frame_d40cc5e58f715d49274d9e9553d45333) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d40cc5e58f715d49274d9e9553d45333);
        cache_frame_d40cc5e58f715d49274d9e9553d45333 = NULL;
    }

    assertFrameObject(frame_d40cc5e58f715d49274d9e9553d45333);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_labels);
    var_labels = NULL;
    Py_XDECREF(var_matched_gt_boxes);
    var_matched_gt_boxes = NULL;
    Py_XDECREF(var_anchors_per_image);
    var_anchors_per_image = NULL;
    Py_XDECREF(var_targets_per_image);
    var_targets_per_image = NULL;
    Py_XDECREF(var_gt_boxes);
    var_gt_boxes = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_matched_gt_boxes_per_image);
    var_matched_gt_boxes_per_image = NULL;
    Py_XDECREF(var_labels_per_image);
    var_labels_per_image = NULL;
    Py_XDECREF(var_match_quality_matrix);
    var_match_quality_matrix = NULL;
    Py_XDECREF(var_matched_idxs);
    var_matched_idxs = NULL;
    Py_XDECREF(var_bg_indices);
    var_bg_indices = NULL;
    Py_XDECREF(var_inds_to_discard);
    var_inds_to_discard = NULL;
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

    Py_XDECREF(var_labels);
    var_labels = NULL;
    Py_XDECREF(var_matched_gt_boxes);
    var_matched_gt_boxes = NULL;
    Py_XDECREF(var_anchors_per_image);
    var_anchors_per_image = NULL;
    Py_XDECREF(var_targets_per_image);
    var_targets_per_image = NULL;
    Py_XDECREF(var_gt_boxes);
    var_gt_boxes = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_matched_gt_boxes_per_image);
    var_matched_gt_boxes_per_image = NULL;
    Py_XDECREF(var_labels_per_image);
    var_labels_per_image = NULL;
    Py_XDECREF(var_match_quality_matrix);
    var_match_quality_matrix = NULL;
    Py_XDECREF(var_matched_idxs);
    var_matched_idxs = NULL;
    Py_XDECREF(var_bg_indices);
    var_bg_indices = NULL;
    Py_XDECREF(var_inds_to_discard);
    var_inds_to_discard = NULL;
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
    CHECK_OBJECT(par_anchors);
    Py_DECREF(par_anchors);
    CHECK_OBJECT(par_targets);
    Py_DECREF(par_targets);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_anchors);
    Py_DECREF(par_anchors);
    CHECK_OBJECT(par_targets);
    Py_DECREF(par_targets);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__10__get_top_n_idx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_objectness = python_pars[1];
    PyObject *par_num_anchors_per_level = python_pars[2];
    PyObject *var_r = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_ob = NULL;
    PyObject *var_num_anchors = NULL;
    PyObject *var_pre_nms_top_n = NULL;
    PyObject *var__ = NULL;
    PyObject *var_top_n_idx = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_86a9c4753fd1cfacfbf4bd8698e84932;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_86a9c4753fd1cfacfbf4bd8698e84932 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_r == NULL);
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[2];
        assert(var_offset == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_offset = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_86a9c4753fd1cfacfbf4bd8698e84932)) {
        Py_XDECREF(cache_frame_86a9c4753fd1cfacfbf4bd8698e84932);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86a9c4753fd1cfacfbf4bd8698e84932 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86a9c4753fd1cfacfbf4bd8698e84932 = MAKE_FUNCTION_FRAME(codeobj_86a9c4753fd1cfacfbf4bd8698e84932, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86a9c4753fd1cfacfbf4bd8698e84932->m_type_description == NULL);
    frame_86a9c4753fd1cfacfbf4bd8698e84932 = cache_frame_86a9c4753fd1cfacfbf4bd8698e84932;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_86a9c4753fd1cfacfbf4bd8698e84932);
    assert(Py_REFCNT(frame_86a9c4753fd1cfacfbf4bd8698e84932) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_objectness);
        tmp_expression_value_1 = par_objectness;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[92]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_anchors_per_level);
        tmp_args_element_value_1 = par_num_anchors_per_level;
        tmp_args_element_value_2 = mod_consts[5];
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
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
                type_description_1 = "oooooooooo";
                exception_lineno = 208;
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
            PyObject *old = var_ob;
            var_ob = tmp_assign_source_5;
            Py_INCREF(var_ob);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 209;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[94]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 209;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_ob);
        tmp_args_element_value_3 = var_ob;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = par_self;
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 210;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[96]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
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
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
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
            exception_lineno = 210;
            goto try_except_handler_4;
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
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 210;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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
                    exception_lineno = 210;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 210;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_num_anchors;
            var_num_anchors = tmp_assign_source_9;
            Py_INCREF(var_num_anchors);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_pre_nms_top_n;
            var_pre_nms_top_n = tmp_assign_source_10;
            Py_INCREF(var_pre_nms_top_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_ob);
        tmp_expression_value_3 = var_ob;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_num_anchors;
            var_num_anchors = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_3 != NULL);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_self;
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 213;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[96]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_anchors);
        tmp_args_element_value_6 = var_num_anchors;
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pre_nms_top_n;
            var_pre_nms_top_n = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        if (var_ob == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_4 = var_ob;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[98]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_pre_nms_top_n);
        tmp_tuple_element_1 = var_pre_nms_top_n;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 214;
        tmp_iter_arg_3 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 214;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 214;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 214;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 214;
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_16;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_top_n_idx;
            var_top_n_idx = tmp_assign_source_17;
            Py_INCREF(var_top_n_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_r;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_top_n_idx);
        tmp_add_expr_left_1 = var_top_n_idx;
        if (var_offset == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_1 = var_offset;
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 215;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 215;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_offset;
        CHECK_OBJECT(var_num_anchors);
        tmp_iadd_expr_right_1 = var_num_anchors;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_1;
        var_offset = tmp_assign_source_18;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 208;
        type_description_1 = "oooooooooo";
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_r == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_r;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[49]);
        frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame.f_lineno = 217;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
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
        exception_tb = MAKE_TRACEBACK(frame_86a9c4753fd1cfacfbf4bd8698e84932, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86a9c4753fd1cfacfbf4bd8698e84932->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86a9c4753fd1cfacfbf4bd8698e84932, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86a9c4753fd1cfacfbf4bd8698e84932,
        type_description_1,
        par_self,
        par_objectness,
        par_num_anchors_per_level,
        var_r,
        var_offset,
        var_ob,
        var_num_anchors,
        var_pre_nms_top_n,
        var__,
        var_top_n_idx
    );


    // Release cached frame if used for exception.
    if (frame_86a9c4753fd1cfacfbf4bd8698e84932 == cache_frame_86a9c4753fd1cfacfbf4bd8698e84932) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86a9c4753fd1cfacfbf4bd8698e84932);
        cache_frame_86a9c4753fd1cfacfbf4bd8698e84932 = NULL;
    }

    assertFrameObject(frame_86a9c4753fd1cfacfbf4bd8698e84932);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_ob);
    var_ob = NULL;
    Py_XDECREF(var_num_anchors);
    var_num_anchors = NULL;
    Py_XDECREF(var_pre_nms_top_n);
    var_pre_nms_top_n = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_top_n_idx);
    var_top_n_idx = NULL;
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

    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_ob);
    var_ob = NULL;
    Py_XDECREF(var_num_anchors);
    var_num_anchors = NULL;
    Py_XDECREF(var_pre_nms_top_n);
    var_pre_nms_top_n = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_top_n_idx);
    var_top_n_idx = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_objectness);
    Py_DECREF(par_objectness);
    CHECK_OBJECT(par_num_anchors_per_level);
    Py_DECREF(par_num_anchors_per_level);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_objectness);
    Py_DECREF(par_objectness);
    CHECK_OBJECT(par_num_anchors_per_level);
    Py_DECREF(par_num_anchors_per_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__11_filter_proposals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proposals = python_pars[1];
    PyObject *par_objectness = python_pars[2];
    PyObject *par_image_shapes = python_pars[3];
    PyObject *par_num_anchors_per_level = python_pars[4];
    PyObject *var_num_images = NULL;
    PyObject *var_device = NULL;
    PyObject *var_levels = NULL;
    PyObject *var_top_n_idx = NULL;
    PyObject *var_image_range = NULL;
    PyObject *var_batch_idx = NULL;
    PyObject *var_objectness_prob = NULL;
    PyObject *var_final_boxes = NULL;
    PyObject *var_final_scores = NULL;
    PyObject *var_boxes = NULL;
    PyObject *var_scores = NULL;
    PyObject *var_lvl = NULL;
    PyObject *var_img_shape = NULL;
    PyObject *var_keep = NULL;
    PyObject *outline_0_var_idx = NULL;
    PyObject *outline_0_var_n = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c34e3f92e6b3fe911518ab6872c397c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_0bad3bbe1d946d5c1349321c2a7444d1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c34e3f92e6b3fe911518ab6872c397c4 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c34e3f92e6b3fe911518ab6872c397c4)) {
        Py_XDECREF(cache_frame_c34e3f92e6b3fe911518ab6872c397c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c34e3f92e6b3fe911518ab6872c397c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c34e3f92e6b3fe911518ab6872c397c4 = MAKE_FUNCTION_FRAME(codeobj_c34e3f92e6b3fe911518ab6872c397c4, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c34e3f92e6b3fe911518ab6872c397c4->m_type_description == NULL);
    frame_c34e3f92e6b3fe911518ab6872c397c4 = cache_frame_c34e3f92e6b3fe911518ab6872c397c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c34e3f92e6b3fe911518ab6872c397c4);
    assert(Py_REFCNT(frame_c34e3f92e6b3fe911518ab6872c397c4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_2 = par_proposals;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_images == NULL);
        var_num_images = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_3 = par_proposals;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_objectness);
        tmp_called_instance_1 = par_objectness;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 230;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_objectness;
            assert(old != NULL);
            par_objectness = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_objectness);
        tmp_called_instance_2 = par_objectness;
        CHECK_OBJECT(var_num_images);
        tmp_args_element_value_1 = var_num_images;
        tmp_args_element_value_2 = mod_consts[39];
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_objectness;
            assert(old != NULL);
            par_objectness = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_1 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(par_num_anchors_per_level);
            tmp_args_element_value_3 = par_num_anchors_per_level;
            frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 234;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2)) {
            Py_XDECREF(cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2 = MAKE_FUNCTION_FRAME(codeobj_0bad3bbe1d946d5c1349321c2a7444d1, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2->m_type_description == NULL);
        frame_0bad3bbe1d946d5c1349321c2a7444d1_2 = cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0bad3bbe1d946d5c1349321c2a7444d1_2);
        assert(Py_REFCNT(frame_0bad3bbe1d946d5c1349321c2a7444d1_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 234;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "ooo";
                exception_lineno = 234;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "ooo";
                exception_lineno = 234;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 234;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[43];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 234;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_12 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_idx;
                outline_0_var_idx = tmp_assign_source_12;
                Py_INCREF(outline_0_var_idx);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_n;
                outline_0_var_n = tmp_assign_source_13;
                Py_INCREF(outline_0_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_kw_call_dict_value_1_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[102]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_n);
            tmp_tuple_element_1 = outline_0_var_n;
            tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(outline_0_var_idx);
            tmp_kw_call_arg_value_1_1 = outline_0_var_idx;
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[103]);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (var_device == NULL) {
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_kw_call_arg_value_0_1);
                Py_DECREF(tmp_kw_call_dict_value_0_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[78]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_kw_call_dict_value_1_1 = var_device;
            frame_0bad3bbe1d946d5c1349321c2a7444d1_2->m_frame.f_lineno = 234;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[81]);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_5);
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

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0bad3bbe1d946d5c1349321c2a7444d1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0bad3bbe1d946d5c1349321c2a7444d1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0bad3bbe1d946d5c1349321c2a7444d1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0bad3bbe1d946d5c1349321c2a7444d1_2,
            type_description_2,
            outline_0_var_idx,
            outline_0_var_n,
            var_device
        );


        // Release cached frame if used for exception.
        if (frame_0bad3bbe1d946d5c1349321c2a7444d1_2 == cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2);
            cache_frame_0bad3bbe1d946d5c1349321c2a7444d1_2 = NULL;
        }

        assertFrameObject(frame_0bad3bbe1d946d5c1349321c2a7444d1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_idx);
        outline_0_var_idx = NULL;
        Py_XDECREF(outline_0_var_n);
        outline_0_var_n = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_idx);
        outline_0_var_idx = NULL;
        Py_XDECREF(outline_0_var_n);
        outline_0_var_n = NULL;
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
        exception_lineno = 234;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_levels == NULL);
        var_levels = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_levels);
        tmp_args_element_value_4 = var_levels;
        tmp_args_element_value_5 = mod_consts[2];
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_levels;
            assert(old != NULL);
            var_levels = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_levels);
        tmp_called_instance_5 = var_levels;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 237;
        tmp_called_instance_4 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_5,
            mod_consts[42],
            &PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_objectness);
        tmp_args_element_value_6 = par_objectness;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 237;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[105], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_levels;
            assert(old != NULL);
            var_levels = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(par_objectness);
        tmp_args_element_value_7 = par_objectness;
        CHECK_OBJECT(par_num_anchors_per_level);
        tmp_args_element_value_8 = par_num_anchors_per_level;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[106],
                call_args
            );
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_top_n_idx == NULL);
        var_top_n_idx = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[107]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_images);
        tmp_kw_call_arg_value_0_2 = var_num_images;
        if (var_device == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = var_device;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 242;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[108]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image_range == NULL);
        var_image_range = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_image_range);
        tmp_expression_value_7 = var_image_range;
        tmp_subscript_value_2 = mod_consts[109];
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_batch_idx == NULL);
        var_batch_idx = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_objectness);
        tmp_expression_value_8 = par_objectness;
        CHECK_OBJECT(var_batch_idx);
        tmp_tuple_element_2 = var_batch_idx;
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_top_n_idx);
        tmp_tuple_element_2 = var_top_n_idx;
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_objectness;
            assert(old != NULL);
            par_objectness = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_levels);
        tmp_expression_value_9 = var_levels;
        CHECK_OBJECT(var_batch_idx);
        tmp_tuple_element_3 = var_batch_idx;
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_top_n_idx);
        tmp_tuple_element_3 = var_top_n_idx;
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_levels;
            assert(old != NULL);
            var_levels = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_10 = par_proposals;
        CHECK_OBJECT(var_batch_idx);
        tmp_tuple_element_4 = var_batch_idx;
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_top_n_idx);
        tmp_tuple_element_4 = var_top_n_idx;
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_4);
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_proposals;
            assert(old != NULL);
            par_proposals = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_objectness);
        tmp_args_element_value_9 = par_objectness;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 249;
        tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[110], tmp_args_element_value_9);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_objectness_prob == NULL);
        var_objectness_prob = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_LIST_EMPTY(0);
        assert(var_final_boxes == NULL);
        var_final_boxes = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_LIST_EMPTY(0);
        assert(var_final_scores == NULL);
        var_final_scores = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_4 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_proposals);
        tmp_args_element_value_10 = par_proposals;
        CHECK_OBJECT(var_objectness_prob);
        tmp_args_element_value_11 = var_objectness_prob;
        CHECK_OBJECT(var_levels);
        tmp_args_element_value_12 = var_levels;
        CHECK_OBJECT(par_image_shapes);
        tmp_args_element_value_13 = par_image_shapes;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 253;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
        tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_3, 0, 4);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 253;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_4, 1, 4);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 253;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_5, 2, 4);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 253;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_6, 3, 4);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 253;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 253;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[45];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 253;
            goto try_except_handler_8;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_boxes;
            var_boxes = tmp_assign_source_32;
            Py_INCREF(var_boxes);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_scores;
            var_scores = tmp_assign_source_33;
            Py_INCREF(var_scores);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_34 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_lvl;
            var_lvl = tmp_assign_source_34;
            Py_INCREF(var_lvl);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_35 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_img_shape;
            var_img_shape = tmp_assign_source_35;
            Py_INCREF(var_img_shape);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_boxes);
        tmp_args_element_value_14 = var_boxes;
        CHECK_OBJECT(var_img_shape);
        tmp_args_element_value_15 = var_img_shape;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_36 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[111],
                call_args
            );
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_boxes;
            assert(old != NULL);
            var_boxes = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[112]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_boxes);
        tmp_args_element_value_16 = var_boxes;
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_12 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[73]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_keep;
            var_keep = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_boxes);
        tmp_expression_value_13 = var_boxes;
        CHECK_OBJECT(var_keep);
        tmp_subscript_value_6 = var_keep;
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_iter_arg_5 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_8;
            PyTuple_SET_ITEM(tmp_iter_arg_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_scores);
            tmp_expression_value_14 = var_scores;
            CHECK_OBJECT(var_keep);
            tmp_subscript_value_7 = var_keep;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_7);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_5, 1, tmp_tuple_element_5);
            CHECK_OBJECT(var_lvl);
            tmp_expression_value_15 = var_lvl;
            CHECK_OBJECT(var_keep);
            tmp_subscript_value_8 = var_keep;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_5);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_38 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        assert(!(tmp_assign_source_38 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_7, 0, 3);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 258;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_8, 1, 3);
        if (tmp_assign_source_40 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 258;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT(tmp_unpack_9, 2, 3);
        if (tmp_assign_source_41 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 258;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 258;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[113];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 258;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_42 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_boxes;
            assert(old != NULL);
            var_boxes = tmp_assign_source_42;
            Py_INCREF(var_boxes);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_43 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_scores;
            assert(old != NULL);
            var_scores = tmp_assign_source_43;
            Py_INCREF(var_scores);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_44 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_lvl;
            assert(old != NULL);
            var_lvl = tmp_assign_source_44;
            Py_INCREF(var_lvl);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[114]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_scores);
        tmp_cmp_expr_left_1 = var_scores;
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_18 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[71]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_18 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 262;
        tmp_expression_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_9 = mod_consts[2];
        tmp_assign_source_45 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_9, 0);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_keep;
            assert(old != NULL);
            var_keep = tmp_assign_source_45;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_boxes);
        tmp_expression_value_19 = var_boxes;
        CHECK_OBJECT(var_keep);
        tmp_subscript_value_10 = var_keep;
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_10);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_12;
            PyTuple_SET_ITEM(tmp_iter_arg_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_scores);
            tmp_expression_value_20 = var_scores;
            CHECK_OBJECT(var_keep);
            tmp_subscript_value_11 = var_keep;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_11);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_6, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var_lvl);
            tmp_expression_value_21 = var_lvl;
            CHECK_OBJECT(var_keep);
            tmp_subscript_value_12 = var_keep;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_12);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_6, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_6);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_46 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        assert(!(tmp_assign_source_46 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tmp_unpack_10, 0, 3);
        if (tmp_assign_source_47 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 263;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tmp_unpack_11, 1, 3);
        if (tmp_assign_source_48 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 263;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tmp_unpack_12, 2, 3);
        if (tmp_assign_source_49 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 263;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 263;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[113];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 263;
            goto try_except_handler_12;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_11;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_50 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_boxes;
            assert(old != NULL);
            var_boxes = tmp_assign_source_50;
            Py_INCREF(var_boxes);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_51 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_scores;
            assert(old != NULL);
            var_scores = tmp_assign_source_51;
            Py_INCREF(var_scores);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_52 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_lvl;
            assert(old != NULL);
            var_lvl = tmp_assign_source_52;
            Py_INCREF(var_lvl);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[115]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_boxes);
        tmp_args_element_value_19 = var_boxes;
        CHECK_OBJECT(var_scores);
        tmp_args_element_value_20 = var_scores;
        CHECK_OBJECT(var_lvl);
        tmp_args_element_value_21 = var_lvl;
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_23 = par_self;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[70]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_keep;
            assert(old != NULL);
            var_keep = tmp_assign_source_53;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_keep);
        tmp_expression_value_24 = var_keep;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_9 = par_self;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 269;
        tmp_stop_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[116]);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_13 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_13 == NULL));
        tmp_assign_source_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_keep;
            assert(old != NULL);
            var_keep = tmp_assign_source_54;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(var_boxes);
        tmp_expression_value_25 = var_boxes;
        CHECK_OBJECT(var_keep);
        tmp_subscript_value_14 = var_keep;
        tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_14);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_iter_arg_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_15;
            PyTuple_SET_ITEM(tmp_iter_arg_7, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_scores);
            tmp_expression_value_26 = var_scores;
            CHECK_OBJECT(var_keep);
            tmp_subscript_value_15 = var_keep;
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_15);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_7, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_iter_arg_7);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_55 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        assert(!(tmp_assign_source_55 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_56 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_56 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 270;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_57 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_57 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 270;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_4__source_iter;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 270;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 270;
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

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_6;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_58 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_boxes;
            assert(old != NULL);
            var_boxes = tmp_assign_source_58;
            Py_INCREF(var_boxes);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_59 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_scores;
            assert(old != NULL);
            var_scores = tmp_assign_source_59;
            Py_INCREF(var_scores);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_23;
        if (var_final_boxes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_27 = var_final_boxes;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[36]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_boxes);
        tmp_args_element_value_23 = var_boxes;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_24;
        if (var_final_scores == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_28 = var_final_scores;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[36]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_scores);
        tmp_args_element_value_24 = var_scores;
        frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame.f_lineno = 273;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 253;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_8;
        if (var_final_boxes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = var_final_boxes;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_8);
        if (var_final_scores == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_8 = var_final_scores;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_8);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_c34e3f92e6b3fe911518ab6872c397c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c34e3f92e6b3fe911518ab6872c397c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c34e3f92e6b3fe911518ab6872c397c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c34e3f92e6b3fe911518ab6872c397c4,
        type_description_1,
        par_self,
        par_proposals,
        par_objectness,
        par_image_shapes,
        par_num_anchors_per_level,
        var_num_images,
        var_device,
        var_levels,
        var_top_n_idx,
        var_image_range,
        var_batch_idx,
        var_objectness_prob,
        var_final_boxes,
        var_final_scores,
        var_boxes,
        var_scores,
        var_lvl,
        var_img_shape,
        var_keep
    );


    // Release cached frame if used for exception.
    if (frame_c34e3f92e6b3fe911518ab6872c397c4 == cache_frame_c34e3f92e6b3fe911518ab6872c397c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c34e3f92e6b3fe911518ab6872c397c4);
        cache_frame_c34e3f92e6b3fe911518ab6872c397c4 = NULL;
    }

    assertFrameObject(frame_c34e3f92e6b3fe911518ab6872c397c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);
    par_proposals = NULL;
    CHECK_OBJECT(par_objectness);
    Py_DECREF(par_objectness);
    par_objectness = NULL;
    CHECK_OBJECT(var_num_images);
    Py_DECREF(var_num_images);
    var_num_images = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    CHECK_OBJECT(var_levels);
    Py_DECREF(var_levels);
    var_levels = NULL;
    CHECK_OBJECT(var_top_n_idx);
    Py_DECREF(var_top_n_idx);
    var_top_n_idx = NULL;
    CHECK_OBJECT(var_image_range);
    Py_DECREF(var_image_range);
    var_image_range = NULL;
    CHECK_OBJECT(var_batch_idx);
    Py_DECREF(var_batch_idx);
    var_batch_idx = NULL;
    CHECK_OBJECT(var_objectness_prob);
    Py_DECREF(var_objectness_prob);
    var_objectness_prob = NULL;
    Py_XDECREF(var_final_boxes);
    var_final_boxes = NULL;
    Py_XDECREF(var_final_scores);
    var_final_scores = NULL;
    Py_XDECREF(var_boxes);
    var_boxes = NULL;
    Py_XDECREF(var_scores);
    var_scores = NULL;
    Py_XDECREF(var_lvl);
    var_lvl = NULL;
    Py_XDECREF(var_img_shape);
    var_img_shape = NULL;
    Py_XDECREF(var_keep);
    var_keep = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_proposals);
    par_proposals = NULL;
    Py_XDECREF(par_objectness);
    par_objectness = NULL;
    Py_XDECREF(var_num_images);
    var_num_images = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_levels);
    var_levels = NULL;
    Py_XDECREF(var_top_n_idx);
    var_top_n_idx = NULL;
    Py_XDECREF(var_image_range);
    var_image_range = NULL;
    Py_XDECREF(var_batch_idx);
    var_batch_idx = NULL;
    Py_XDECREF(var_objectness_prob);
    var_objectness_prob = NULL;
    Py_XDECREF(var_final_boxes);
    var_final_boxes = NULL;
    Py_XDECREF(var_final_scores);
    var_final_scores = NULL;
    Py_XDECREF(var_boxes);
    var_boxes = NULL;
    Py_XDECREF(var_scores);
    var_scores = NULL;
    Py_XDECREF(var_lvl);
    var_lvl = NULL;
    Py_XDECREF(var_img_shape);
    var_img_shape = NULL;
    Py_XDECREF(var_keep);
    var_keep = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_image_shapes);
    Py_DECREF(par_image_shapes);
    CHECK_OBJECT(par_num_anchors_per_level);
    Py_DECREF(par_num_anchors_per_level);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_image_shapes);
    Py_DECREF(par_image_shapes);
    CHECK_OBJECT(par_num_anchors_per_level);
    Py_DECREF(par_num_anchors_per_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__12_compute_loss(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_objectness = python_pars[1];
    PyObject *par_pred_bbox_deltas = python_pars[2];
    PyObject *par_labels = python_pars[3];
    PyObject *par_regression_targets = python_pars[4];
    PyObject *var_sampled_pos_inds = NULL;
    PyObject *var_sampled_neg_inds = NULL;
    PyObject *var_sampled_inds = NULL;
    PyObject *var_box_loss = NULL;
    PyObject *var_objectness_loss = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ef4b3e59a61bd711bf7d5f01d4dc088c;
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
    static struct Nuitka_FrameObject *cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c)) {
        Py_XDECREF(cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c = MAKE_FUNCTION_FRAME(codeobj_ef4b3e59a61bd711bf7d5f01d4dc088c, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_type_description == NULL);
    frame_ef4b3e59a61bd711bf7d5f01d4dc088c = cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef4b3e59a61bd711bf7d5f01d4dc088c);
    assert(Py_REFCNT(frame_ef4b3e59a61bd711bf7d5f01d4dc088c) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_labels);
        tmp_args_element_value_1 = par_labels;
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 291;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooo";
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


            type_description_1 = "oooooooooo";
            exception_lineno = 291;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 291;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 291;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 291;
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
        assert(var_sampled_pos_inds == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_sampled_pos_inds = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_sampled_neg_inds == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_sampled_neg_inds = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[114]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sampled_pos_inds);
        tmp_tuple_element_1 = var_sampled_pos_inds;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[119]);
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 292;
        tmp_args_element_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 292;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sampled_pos_inds;
            assert(old != NULL);
            var_sampled_pos_inds = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[114]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sampled_neg_inds);
        tmp_tuple_element_2 = var_sampled_neg_inds;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[119]);
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 293;
        tmp_args_element_value_3 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 293;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[2];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sampled_neg_inds;
            assert(old != NULL);
            var_sampled_neg_inds = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sampled_pos_inds);
        tmp_list_element_1 = var_sampled_pos_inds;
        tmp_tuple_element_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_tuple_element_3, 0, tmp_list_element_1);
        CHECK_OBJECT(var_sampled_neg_inds);
        tmp_list_element_1 = var_sampled_neg_inds;
        PyList_SET_ITEM0(tmp_tuple_element_3, 1, tmp_list_element_1);
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[119]);
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 295;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sampled_inds == NULL);
        var_sampled_inds = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_objectness);
        tmp_called_instance_2 = par_objectness;
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 297;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[50]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_objectness;
            assert(old != NULL);
            par_objectness = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_labels);
        tmp_tuple_element_4 = par_labels;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[119]);
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 299;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_labels;
            assert(old != NULL);
            par_labels = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_5;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_regression_targets);
        tmp_tuple_element_5 = par_regression_targets;
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_5);
        tmp_kwargs_value_5 = DICT_COPY(mod_consts[119]);
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 300;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regression_targets;
            assert(old != NULL);
            par_regression_targets = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kwargs_value_6;
        PyObject *tmp_called_instance_3;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[120]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pred_bbox_deltas);
        tmp_expression_value_11 = par_pred_bbox_deltas;
        CHECK_OBJECT(var_sampled_pos_inds);
        tmp_subscript_value_3 = var_sampled_pos_inds;
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 304;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_args_value_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(par_regression_targets);
            tmp_expression_value_12 = par_regression_targets;
            CHECK_OBJECT(var_sampled_pos_inds);
            tmp_subscript_value_4 = var_sampled_pos_inds;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_6, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_6 = DICT_COPY(mod_consts[121]);
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 303;
        tmp_truediv_expr_left_1 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sampled_inds);
        tmp_called_instance_3 = var_sampled_inds;
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 309;
        tmp_truediv_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[77]);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 309;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_box_loss == NULL);
        var_box_loss = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[122]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_objectness);
        tmp_expression_value_14 = par_objectness;
        CHECK_OBJECT(var_sampled_inds);
        tmp_subscript_value_5 = var_sampled_inds;
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 312;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_labels);
        tmp_expression_value_15 = par_labels;
        CHECK_OBJECT(var_sampled_inds);
        tmp_subscript_value_6 = var_sampled_inds;
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 312;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_objectness_loss == NULL);
        var_objectness_loss = tmp_assign_source_13;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef4b3e59a61bd711bf7d5f01d4dc088c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef4b3e59a61bd711bf7d5f01d4dc088c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef4b3e59a61bd711bf7d5f01d4dc088c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef4b3e59a61bd711bf7d5f01d4dc088c,
        type_description_1,
        par_self,
        par_objectness,
        par_pred_bbox_deltas,
        par_labels,
        par_regression_targets,
        var_sampled_pos_inds,
        var_sampled_neg_inds,
        var_sampled_inds,
        var_box_loss,
        var_objectness_loss
    );


    // Release cached frame if used for exception.
    if (frame_ef4b3e59a61bd711bf7d5f01d4dc088c == cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c);
        cache_frame_ef4b3e59a61bd711bf7d5f01d4dc088c = NULL;
    }

    assertFrameObject(frame_ef4b3e59a61bd711bf7d5f01d4dc088c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT(var_objectness_loss);
        tmp_tuple_element_7 = var_objectness_loss;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_box_loss);
        tmp_tuple_element_7 = var_box_loss;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_7);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_objectness);
    Py_DECREF(par_objectness);
    par_objectness = NULL;
    CHECK_OBJECT(par_labels);
    Py_DECREF(par_labels);
    par_labels = NULL;
    CHECK_OBJECT(par_regression_targets);
    Py_DECREF(par_regression_targets);
    par_regression_targets = NULL;
    CHECK_OBJECT(var_sampled_pos_inds);
    Py_DECREF(var_sampled_pos_inds);
    var_sampled_pos_inds = NULL;
    CHECK_OBJECT(var_sampled_neg_inds);
    Py_DECREF(var_sampled_neg_inds);
    var_sampled_neg_inds = NULL;
    CHECK_OBJECT(var_sampled_inds);
    Py_DECREF(var_sampled_inds);
    var_sampled_inds = NULL;
    CHECK_OBJECT(var_box_loss);
    Py_DECREF(var_box_loss);
    var_box_loss = NULL;
    CHECK_OBJECT(var_objectness_loss);
    Py_DECREF(var_objectness_loss);
    var_objectness_loss = NULL;
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

    Py_XDECREF(par_objectness);
    par_objectness = NULL;
    Py_XDECREF(par_labels);
    par_labels = NULL;
    Py_XDECREF(par_regression_targets);
    par_regression_targets = NULL;
    Py_XDECREF(var_sampled_pos_inds);
    var_sampled_pos_inds = NULL;
    Py_XDECREF(var_sampled_neg_inds);
    var_sampled_neg_inds = NULL;
    Py_XDECREF(var_sampled_inds);
    var_sampled_inds = NULL;
    Py_XDECREF(var_box_loss);
    var_box_loss = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pred_bbox_deltas);
    Py_DECREF(par_pred_bbox_deltas);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pred_bbox_deltas);
    Py_DECREF(par_pred_bbox_deltas);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$rpn$$$function__13_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_images = python_pars[1];
    PyObject *par_features = python_pars[2];
    PyObject *par_targets = python_pars[3];
    PyObject *var_objectness = NULL;
    PyObject *var_pred_bbox_deltas = NULL;
    PyObject *var_anchors = NULL;
    PyObject *var_num_images = NULL;
    PyObject *var_num_anchors_per_level_shape_tensors = NULL;
    PyObject *var_num_anchors_per_level = NULL;
    PyObject *var_proposals = NULL;
    PyObject *var_boxes = NULL;
    PyObject *var_scores = NULL;
    PyObject *var_losses = NULL;
    PyObject *var_labels = NULL;
    PyObject *var_matched_gt_boxes = NULL;
    PyObject *var_regression_targets = NULL;
    PyObject *var_loss_objectness = NULL;
    PyObject *var_loss_rpn_box_reg = NULL;
    PyObject *outline_0_var_o = NULL;
    PyObject *outline_1_var_s = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
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
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8d3723c2d7e56f9199146bce024bd2a7;
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
    struct Nuitka_FrameObject *frame_0e2807a2376fd99be462bf59ede1ed1c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_8f734ad25268905d6c26d82f8d68d399_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_8f734ad25268905d6c26d82f8d68d399_3 = NULL;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8d3723c2d7e56f9199146bce024bd2a7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8d3723c2d7e56f9199146bce024bd2a7)) {
        Py_XDECREF(cache_frame_8d3723c2d7e56f9199146bce024bd2a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d3723c2d7e56f9199146bce024bd2a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d3723c2d7e56f9199146bce024bd2a7 = MAKE_FUNCTION_FRAME(codeobj_8d3723c2d7e56f9199146bce024bd2a7, module_torchvision$models$detection$rpn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d3723c2d7e56f9199146bce024bd2a7->m_type_description == NULL);
    frame_8d3723c2d7e56f9199146bce024bd2a7 = cache_frame_8d3723c2d7e56f9199146bce024bd2a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8d3723c2d7e56f9199146bce024bd2a7);
    assert(Py_REFCNT(frame_8d3723c2d7e56f9199146bce024bd2a7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_features);
        tmp_expression_value_1 = par_features;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[124]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 340;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_features;
            assert(old != NULL);
            par_features = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_features);
        tmp_args_element_value_1 = par_features;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 341;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[54], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 341;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 341;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 341;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 341;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_objectness == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_objectness = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_pred_bbox_deltas == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_pred_bbox_deltas = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_images);
        tmp_args_element_value_2 = par_images;
        CHECK_OBJECT(par_features);
        tmp_args_element_value_3 = par_features;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[53],
                call_args
            );
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_anchors == NULL);
        var_anchors = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_anchors);
        tmp_len_arg_1 = var_anchors;
        tmp_assign_source_8 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_images == NULL);
        var_num_images = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_objectness);
            tmp_iter_arg_2 = var_objectness;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_11;
        }
        if (isFrameUnusable(cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2)) {
            Py_XDECREF(cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2 = MAKE_FUNCTION_FRAME(codeobj_0e2807a2376fd99be462bf59ede1ed1c, module_torchvision$models$detection$rpn, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2->m_type_description == NULL);
        frame_0e2807a2376fd99be462bf59ede1ed1c_2 = cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0e2807a2376fd99be462bf59ede1ed1c_2);
        assert(Py_REFCNT(frame_0e2807a2376fd99be462bf59ede1ed1c_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 345;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_13 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_o;
                outline_0_var_o = tmp_assign_source_13;
                Py_INCREF(outline_0_var_o);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_o);
            tmp_expression_value_3 = outline_0_var_o;
            tmp_subscript_value_1 = mod_consts[2];
            tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_9 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_9);
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
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e2807a2376fd99be462bf59ede1ed1c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e2807a2376fd99be462bf59ede1ed1c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e2807a2376fd99be462bf59ede1ed1c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e2807a2376fd99be462bf59ede1ed1c_2,
            type_description_2,
            outline_0_var_o
        );


        // Release cached frame if used for exception.
        if (frame_0e2807a2376fd99be462bf59ede1ed1c_2 == cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2);
            cache_frame_0e2807a2376fd99be462bf59ede1ed1c_2 = NULL;
        }

        assertFrameObject(frame_0e2807a2376fd99be462bf59ede1ed1c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_o);
        outline_0_var_o = NULL;
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

        Py_XDECREF(outline_0_var_o);
        outline_0_var_o = NULL;
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
        exception_lineno = 345;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_num_anchors_per_level_shape_tensors == NULL);
        var_num_anchors_per_level_shape_tensors = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_num_anchors_per_level_shape_tensors);
            tmp_iter_arg_3 = var_num_anchors_per_level_shape_tensors;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_6;
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
        if (isFrameUnusable(cache_frame_8f734ad25268905d6c26d82f8d68d399_3)) {
            Py_XDECREF(cache_frame_8f734ad25268905d6c26d82f8d68d399_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8f734ad25268905d6c26d82f8d68d399_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8f734ad25268905d6c26d82f8d68d399_3 = MAKE_FUNCTION_FRAME(codeobj_8f734ad25268905d6c26d82f8d68d399, module_torchvision$models$detection$rpn, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_8f734ad25268905d6c26d82f8d68d399_3->m_type_description == NULL);
        frame_8f734ad25268905d6c26d82f8d68d399_3 = cache_frame_8f734ad25268905d6c26d82f8d68d399_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8f734ad25268905d6c26d82f8d68d399_3);
        assert(Py_REFCNT(frame_8f734ad25268905d6c26d82f8d68d399_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 346;
                    goto try_except_handler_7;
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
                PyObject *old = outline_1_var_s;
                outline_1_var_s = tmp_assign_source_18;
                Py_INCREF(outline_1_var_s);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_s);
            tmp_expression_value_4 = outline_1_var_s;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
            if (tmp_mult_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_s);
            tmp_expression_value_5 = outline_1_var_s;
            tmp_subscript_value_3 = mod_consts[5];
            tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 1);
            if (tmp_mult_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_mult_expr_left_2);

                exception_lineno = 346;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            Py_DECREF(tmp_mult_expr_left_2);
            Py_DECREF(tmp_mult_expr_right_2);
            if (tmp_mult_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_s);
            tmp_expression_value_6 = outline_1_var_s;
            tmp_subscript_value_4 = mod_consts[125];
            tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 2);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_mult_expr_left_1);

                exception_lineno = 346;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_append_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_14 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8f734ad25268905d6c26d82f8d68d399_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8f734ad25268905d6c26d82f8d68d399_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8f734ad25268905d6c26d82f8d68d399_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8f734ad25268905d6c26d82f8d68d399_3,
            type_description_2,
            outline_1_var_s
        );


        // Release cached frame if used for exception.
        if (frame_8f734ad25268905d6c26d82f8d68d399_3 == cache_frame_8f734ad25268905d6c26d82f8d68d399_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_8f734ad25268905d6c26d82f8d68d399_3);
            cache_frame_8f734ad25268905d6c26d82f8d68d399_3 = NULL;
        }

        assertFrameObject(frame_8f734ad25268905d6c26d82f8d68d399_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 346;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_num_anchors_per_level == NULL);
        var_num_anchors_per_level = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_objectness);
        tmp_args_element_value_4 = var_objectness;
        CHECK_OBJECT(var_pred_bbox_deltas);
        tmp_args_element_value_5 = var_pred_bbox_deltas;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 347;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 347;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 347;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 347;
            goto try_except_handler_9;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_objectness;
            assert(old != NULL);
            var_objectness = tmp_assign_source_22;
            Py_INCREF(var_objectness);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_pred_bbox_deltas;
            assert(old != NULL);
            var_pred_bbox_deltas = tmp_assign_source_23;
            Py_INCREF(var_pred_bbox_deltas);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[59]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[127]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_bbox_deltas);
        tmp_called_instance_3 = var_pred_bbox_deltas;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 351;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[101]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_anchors);
        tmp_args_element_value_7 = var_anchors;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proposals == NULL);
        var_proposals = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_proposals);
        tmp_called_instance_4 = var_proposals;
        CHECK_OBJECT(var_num_images);
        tmp_args_element_value_8 = var_num_images;
        tmp_args_element_value_9 = mod_consts[39];
        tmp_args_element_value_10 = mod_consts[23];
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[38],
                call_args
            );
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_proposals;
            assert(old != NULL);
            var_proposals = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[128]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_proposals);
        tmp_args_element_value_11 = var_proposals;
        CHECK_OBJECT(var_objectness);
        tmp_args_element_value_12 = var_objectness;
        CHECK_OBJECT(par_images);
        tmp_expression_value_10 = par_images;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[129]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_num_anchors_per_level);
        tmp_args_element_value_14 = var_num_anchors_per_level;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 353;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 353;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 353;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 353;
            goto try_except_handler_11;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;
        assert(var_boxes == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_boxes = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_2;
        assert(var_scores == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_scores = tmp_assign_source_30;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(var_losses == NULL);
        var_losses = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[74]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_targets);
        tmp_cmp_expr_left_1 = par_targets;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 357;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(var_anchors);
        tmp_args_element_value_15 = var_anchors;
        CHECK_OBJECT(par_targets);
        tmp_args_element_value_16 = par_targets;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_iter_arg_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[130],
                call_args
            );
        }

        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 358;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 358;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_34;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 358;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 358;
            goto try_except_handler_13;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_35 = tmp_tuple_unpack_4__element_1;
        assert(var_labels == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_labels = tmp_assign_source_35;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_36 = tmp_tuple_unpack_4__element_2;
        assert(var_matched_gt_boxes == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_matched_gt_boxes = tmp_assign_source_36;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[59]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[131]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_matched_gt_boxes);
        tmp_args_element_value_17 = var_matched_gt_boxes;
        CHECK_OBJECT(var_anchors);
        tmp_args_element_value_18 = var_anchors;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_regression_targets == NULL);
        var_regression_targets = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_objectness);
        tmp_args_element_value_19 = var_objectness;
        CHECK_OBJECT(var_pred_bbox_deltas);
        tmp_args_element_value_20 = var_pred_bbox_deltas;
        CHECK_OBJECT(var_labels);
        tmp_args_element_value_21 = var_labels;
        CHECK_OBJECT(var_regression_targets);
        tmp_args_element_value_22 = var_regression_targets;
        frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_iter_arg_7 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_6,
                mod_consts[132],
                call_args
            );
        }

        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 360;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 360;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_40;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 360;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 360;
            goto try_except_handler_15;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_41 = tmp_tuple_unpack_5__element_1;
        assert(var_loss_objectness == NULL);
        Py_INCREF(tmp_assign_source_41);
        var_loss_objectness = tmp_assign_source_41;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_42 = tmp_tuple_unpack_5__element_2;
        assert(var_loss_rpn_box_reg == NULL);
        Py_INCREF(tmp_assign_source_42);
        var_loss_rpn_box_reg = tmp_assign_source_42;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[133];
        CHECK_OBJECT(var_loss_objectness);
        tmp_dict_value_1 = var_loss_objectness;
        tmp_assign_source_43 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[134];
        CHECK_OBJECT(var_loss_rpn_box_reg);
        tmp_dict_value_1 = var_loss_rpn_box_reg;
        tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_losses;
            assert(old != NULL);
            var_losses = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d3723c2d7e56f9199146bce024bd2a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d3723c2d7e56f9199146bce024bd2a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d3723c2d7e56f9199146bce024bd2a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d3723c2d7e56f9199146bce024bd2a7,
        type_description_1,
        par_self,
        par_images,
        par_features,
        par_targets,
        var_objectness,
        var_pred_bbox_deltas,
        var_anchors,
        var_num_images,
        var_num_anchors_per_level_shape_tensors,
        var_num_anchors_per_level,
        var_proposals,
        var_boxes,
        var_scores,
        var_losses,
        var_labels,
        var_matched_gt_boxes,
        var_regression_targets,
        var_loss_objectness,
        var_loss_rpn_box_reg
    );


    // Release cached frame if used for exception.
    if (frame_8d3723c2d7e56f9199146bce024bd2a7 == cache_frame_8d3723c2d7e56f9199146bce024bd2a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d3723c2d7e56f9199146bce024bd2a7);
        cache_frame_8d3723c2d7e56f9199146bce024bd2a7 = NULL;
    }

    assertFrameObject(frame_8d3723c2d7e56f9199146bce024bd2a7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_boxes);
        tmp_tuple_element_1 = var_boxes;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_losses);
        tmp_tuple_element_1 = var_losses;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_features);
    Py_DECREF(par_features);
    par_features = NULL;
    CHECK_OBJECT(var_objectness);
    Py_DECREF(var_objectness);
    var_objectness = NULL;
    CHECK_OBJECT(var_pred_bbox_deltas);
    Py_DECREF(var_pred_bbox_deltas);
    var_pred_bbox_deltas = NULL;
    CHECK_OBJECT(var_anchors);
    Py_DECREF(var_anchors);
    var_anchors = NULL;
    CHECK_OBJECT(var_num_images);
    Py_DECREF(var_num_images);
    var_num_images = NULL;
    CHECK_OBJECT(var_num_anchors_per_level_shape_tensors);
    Py_DECREF(var_num_anchors_per_level_shape_tensors);
    var_num_anchors_per_level_shape_tensors = NULL;
    CHECK_OBJECT(var_num_anchors_per_level);
    Py_DECREF(var_num_anchors_per_level);
    var_num_anchors_per_level = NULL;
    CHECK_OBJECT(var_proposals);
    Py_DECREF(var_proposals);
    var_proposals = NULL;
    CHECK_OBJECT(var_boxes);
    Py_DECREF(var_boxes);
    var_boxes = NULL;
    CHECK_OBJECT(var_scores);
    Py_DECREF(var_scores);
    var_scores = NULL;
    CHECK_OBJECT(var_losses);
    Py_DECREF(var_losses);
    var_losses = NULL;
    Py_XDECREF(var_labels);
    var_labels = NULL;
    Py_XDECREF(var_matched_gt_boxes);
    var_matched_gt_boxes = NULL;
    Py_XDECREF(var_regression_targets);
    var_regression_targets = NULL;
    Py_XDECREF(var_loss_objectness);
    var_loss_objectness = NULL;
    Py_XDECREF(var_loss_rpn_box_reg);
    var_loss_rpn_box_reg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_features);
    par_features = NULL;
    Py_XDECREF(var_objectness);
    var_objectness = NULL;
    Py_XDECREF(var_pred_bbox_deltas);
    var_pred_bbox_deltas = NULL;
    Py_XDECREF(var_anchors);
    var_anchors = NULL;
    Py_XDECREF(var_num_images);
    var_num_images = NULL;
    Py_XDECREF(var_num_anchors_per_level_shape_tensors);
    var_num_anchors_per_level_shape_tensors = NULL;
    Py_XDECREF(var_num_anchors_per_level);
    var_num_anchors_per_level = NULL;
    Py_XDECREF(var_proposals);
    var_proposals = NULL;
    Py_XDECREF(var_boxes);
    var_boxes = NULL;
    Py_XDECREF(var_scores);
    var_scores = NULL;
    Py_XDECREF(var_losses);
    var_losses = NULL;
    Py_XDECREF(var_labels);
    var_labels = NULL;
    Py_XDECREF(var_matched_gt_boxes);
    var_matched_gt_boxes = NULL;
    Py_XDECREF(var_regression_targets);
    var_regression_targets = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_images);
    Py_DECREF(par_images);
    CHECK_OBJECT(par_targets);
    Py_DECREF(par_targets);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_images);
    Py_DECREF(par_images);
    CHECK_OBJECT(par_targets);
    Py_DECREF(par_targets);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__10__get_top_n_idx(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__10__get_top_n_idx,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_86a9c4753fd1cfacfbf4bd8698e84932,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__11_filter_proposals(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__11_filter_proposals,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_c34e3f92e6b3fe911518ab6872c397c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__12_compute_loss(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__12_compute_loss,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_ef4b3e59a61bd711bf7d5f01d4dc088c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__13_forward(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__13_forward,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_8d3723c2d7e56f9199146bce024bd2a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__1__onnx_get_num_anchors_and_pre_nms_top_n(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__1__onnx_get_num_anchors_and_pre_nms_top_n,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be6d4a6ba30d1eb1dd94c54b8edd7abd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__2___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__2___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_e06028e51ba9d3952db55e482ae88d0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__3_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__3_forward,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_e54793b3e28f480985e12fc50da1109c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__4_permute_and_flatten(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__4_permute_and_flatten,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be986489043cdb50518b1c544423b55c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__5_concat_box_prediction_layers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__5_concat_box_prediction_layers,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_722a0f2197bcf3fcb7c328b9181222b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__6___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__6___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_69d96fda90dfd3e3587bd08f86bc868c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__7_pre_nms_top_n(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__7_pre_nms_top_n,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_6ab1e668dd2f9c6db17b17b48799b8b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__8_post_nms_top_n(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__8_post_nms_top_n,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_31687d95369f004b1cf46baf0947286a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__9_assign_targets_to_anchors(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$rpn$$$function__9_assign_targets_to_anchors,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_d40cc5e58f715d49274d9e9553d45333,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$rpn,
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

function_impl_code functable_torchvision$models$detection$rpn[] = {
    impl_torchvision$models$detection$rpn$$$function__1__onnx_get_num_anchors_and_pre_nms_top_n,
    impl_torchvision$models$detection$rpn$$$function__2___init__,
    impl_torchvision$models$detection$rpn$$$function__3_forward,
    impl_torchvision$models$detection$rpn$$$function__4_permute_and_flatten,
    impl_torchvision$models$detection$rpn$$$function__5_concat_box_prediction_layers,
    impl_torchvision$models$detection$rpn$$$function__6___init__,
    impl_torchvision$models$detection$rpn$$$function__7_pre_nms_top_n,
    impl_torchvision$models$detection$rpn$$$function__8_post_nms_top_n,
    impl_torchvision$models$detection$rpn$$$function__9_assign_targets_to_anchors,
    impl_torchvision$models$detection$rpn$$$function__10__get_top_n_idx,
    impl_torchvision$models$detection$rpn$$$function__11_filter_proposals,
    impl_torchvision$models$detection$rpn$$$function__12_compute_loss,
    impl_torchvision$models$detection$rpn$$$function__13_forward,
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

    function_impl_code *current = functable_torchvision$models$detection$rpn;
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

    if (offset > sizeof(functable_torchvision$models$detection$rpn) || offset < 0) {
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
        functable_torchvision$models$detection$rpn[offset],
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
        module_torchvision$models$detection$rpn,
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
PyObject *modulecode_torchvision$models$detection$rpn(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.models.detection.rpn");

    // Store the module for future use.
    module_torchvision$models$detection$rpn = module;

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
        PRINT_STRING("torchvision.models.detection.rpn: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.detection.rpn: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.detection.rpn: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$models$detection$rpn\n");

    moduledict_torchvision$models$detection$rpn = MODULE_DICT(module_torchvision$models$detection$rpn);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$models$detection$rpn,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$detection$rpn,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[153]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$detection$rpn,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$detection$rpn,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$detection$rpn,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$models$detection$rpn);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$models$detection$rpn);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_84e0f48ee891004810d06393f68cd3e5;
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
    PyObject *locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8230c3d3828c3609820ae559899b9fc2_2;
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
    PyObject *locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88 = NULL;
    struct Nuitka_FrameObject *frame_11b16a9365d702a47f274cc1827fc5d6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_2);
    }
    frame_84e0f48ee891004810d06393f68cd3e5 = MAKE_MODULE_FRAME(codeobj_84e0f48ee891004810d06393f68cd3e5, module_torchvision$models$detection$rpn);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84e0f48ee891004810d06393f68cd3e5);
    assert(Py_REFCNT(frame_84e0f48ee891004810d06393f68cd3e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[139], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[140], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[142],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[142]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[143],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[143]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[144],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[144]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[145],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[145]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[14]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
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
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 3;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[93];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 4;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[8];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[146];
        tmp_level_value_3 = mod_consts[2];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 5;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[17],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[17]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[147],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[147]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[148];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[149];
        tmp_level_value_4 = mod_consts[2];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 6;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[150],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[151];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[152];
        tmp_level_value_5 = mod_consts[2];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 7;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[76],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[153];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[154];
        tmp_level_value_6 = mod_consts[5];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 9;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[155],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[156];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[157];
        tmp_level_value_7 = mod_consts[5];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[158],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[159];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torchvision$models$detection$rpn;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[160];
        tmp_level_value_8 = mod_consts[5];
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 13;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torchvision$models$detection$rpn,
                mod_consts[161],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[161]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[162]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[163]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[97];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[164];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[165];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[166];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_args_element_value_1 = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__1__onnx_get_num_anchors_and_pre_nms_top_n(tmp_annotations_1);

        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 16;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[167]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

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
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[168]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[168]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[169];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 27;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[170]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

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
        tmp_mod_expr_left_1 = mod_consts[171];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[172];
        tmp_getattr_default_1 = mod_consts[173];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[172]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 27;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[176];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[136], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[177], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_5;
        }
        frame_8230c3d3828c3609820ae559899b9fc2_2 = MAKE_CLASS_FRAME(codeobj_8230c3d3828c3609820ae559899b9fc2, module_torchvision$models$detection$rpn, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8230c3d3828c3609820ae559899b9fc2_2);
        assert(Py_REFCNT(frame_8230c3d3828c3609820ae559899b9fc2_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_2 = mod_consts[178];
            tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[179]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[180];
            tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[179]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[165];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__2___init__(tmp_annotations_2, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_3;
            tmp_dict_key_3 = mod_consts[182];
            tmp_expression_value_10 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[142]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_3 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[147]);

            if (tmp_subscript_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                    if (unlikely(tmp_subscript_value_3 == NULL)) {
                        tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                    }

                    if (tmp_subscript_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_10);

                        exception_lineno = 46;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_5;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[165];
                tmp_expression_value_11 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[145]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 46;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_12 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[142]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_11);

                            exception_lineno = 46;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[147]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_subscript_value_5 == NULL)) {
                            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_subscript_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_11);
                            Py_DECREF(tmp_expression_value_12);

                            exception_lineno = 46;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_11);

                    exception_lineno = 46;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_13;
                    PyObject *tmp_subscript_value_6;
                    PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_4);
                    tmp_expression_value_13 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[142]);

                    if (tmp_expression_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                            if (unlikely(tmp_expression_value_13 == NULL)) {
                                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                            }

                            if (tmp_expression_value_13 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 46;
                                type_description_2 = "c";
                                goto tuple_build_exception_2;
                            }
                            Py_INCREF(tmp_expression_value_13);
                        } else {
                            goto tuple_build_exception_2;
                        }
                    }

                    tmp_subscript_value_6 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[147]);

                    if (tmp_subscript_value_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                            if (unlikely(tmp_subscript_value_6 == NULL)) {
                                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                            }

                            if (tmp_subscript_value_6 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_13);

                                exception_lineno = 46;
                                type_description_2 = "c";
                                goto tuple_build_exception_2;
                            }
                            Py_INCREF(tmp_subscript_value_6);
                        } else {
                            goto tuple_build_exception_2;
                        }
                    }

                    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
                    Py_DECREF(tmp_expression_value_13);
                    Py_DECREF(tmp_subscript_value_6);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "c";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_4);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__3_forward(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8230c3d3828c3609820ae559899b9fc2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8230c3d3828c3609820ae559899b9fc2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8230c3d3828c3609820ae559899b9fc2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8230c3d3828c3609820ae559899b9fc2_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8230c3d3828c3609820ae559899b9fc2_2);

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


                exception_lineno = 27;

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
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27, mod_consts[185], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[169];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 27;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_28);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_27 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27);
        locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27);
        locals_torchvision$models$detection$rpn$$$class__1_RPNHead_27 = NULL;
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
        exception_lineno = 27;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_27);
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
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[186];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[187];
        tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[188];
        tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[189];
        tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[190];
        tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[191];
        tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[165];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_29 = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__4_permute_and_flatten(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        tmp_dict_key_5 = mod_consts[192];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_subscript_value_7 == NULL)) {
            tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_subscript_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_tuple_element_6;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[193];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_4;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[165];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_9);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_9);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_30 = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__5_concat_box_prediction_layers(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_30);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[17]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[167]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_31, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_32 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_19 = tmp_class_creation_2__bases;
        tmp_subscript_value_10 = mod_consts[2];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_10, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_20 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[168]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_21 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[168]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_tuple_element_8 = mod_consts[194];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 88;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_22 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[170]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[171];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[172];
        tmp_getattr_default_2 = mod_consts[173];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[172]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 88;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[136], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[177], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        frame_11b16a9365d702a47f274cc1827fc5d6_3 = MAKE_CLASS_FRAME(codeobj_11b16a9365d702a47f274cc1827fc5d6, module_torchvision$models$detection$rpn, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_11b16a9365d702a47f274cc1827fc5d6_3);
        assert(Py_REFCNT(frame_11b16a9365d702a47f274cc1827fc5d6_3) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_24;
            tmp_dict_key_6 = mod_consts[59];
            tmp_expression_value_24 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[55]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[56]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_expression_value_26;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[65];
                tmp_expression_value_25 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[55]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[63]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[67];
                tmp_expression_value_26 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[55]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[55]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[66]);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_1 = mod_consts[197];
            tmp_dict_key_7 = mod_consts[53];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[158]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[158]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 11 );
            {
                PyObject *tmp_expression_value_27;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_tuple_element_11;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[54];
                tmp_expression_value_27 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[17]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[167]);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[198];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[199]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[200];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[199]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[201];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[202];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[199]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[96];
                tmp_expression_value_28 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[144]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_10 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[203]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_10);
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[116];
                tmp_expression_value_29 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[144]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_11 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[203]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_11);
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[70];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[199]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[71];
                tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[199]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[165];
                tmp_dict_value_7 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_1);

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__6___init__(tmp_defaults_1, tmp_annotations_6, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[165];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__7_pre_nms_top_n(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[165];
            tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__8_post_nms_top_n(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_13;
            tmp_dict_key_10 = mod_consts[207];
            tmp_expression_value_30 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 168;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                    if (unlikely(tmp_subscript_value_13 == NULL)) {
                        tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                    }

                    if (tmp_subscript_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_30);

                        exception_lineno = 168;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_17;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[208];
                tmp_expression_value_31 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_32 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[144]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[203]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_15);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_subscript_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_31);

                    exception_lineno = 168;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[165];
                tmp_expression_value_33 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[145]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_34 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_33);

                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_subscript_value_17 == NULL)) {
                            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_subscript_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_33);
                            Py_DECREF(tmp_expression_value_34);

                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_33);

                    exception_lineno = 169;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_35;
                    PyObject *tmp_subscript_value_18;
                    PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_13);
                    tmp_expression_value_35 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                    if (tmp_expression_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                            if (unlikely(tmp_expression_value_35 == NULL)) {
                                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                            }

                            if (tmp_expression_value_35 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 169;
                                type_description_2 = "c";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_expression_value_35);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_subscript_value_18 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                    if (tmp_subscript_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                            if (unlikely(tmp_subscript_value_18 == NULL)) {
                                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                            }

                            if (tmp_subscript_value_18 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_35);

                                exception_lineno = 169;
                                type_description_2 = "c";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_subscript_value_18);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_18);
                    Py_DECREF(tmp_expression_value_35);
                    Py_DECREF(tmp_subscript_value_18);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "c";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_16);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__9_assign_targets_to_anchors(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[210];
            tmp_dict_value_11 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_19;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[211];
                tmp_expression_value_36 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[165];
                tmp_dict_value_11 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_dict_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_dict_value_11 == NULL)) {
                            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_dict_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_dict_value_11);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__10__get_top_n_idx(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[213];
            tmp_dict_value_12 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_24;
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[210];
                tmp_dict_value_12 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_dict_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_dict_value_12 == NULL)) {
                            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_dict_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 222;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_dict_value_12);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[214];
                tmp_expression_value_37 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 223;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_38 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[145]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 223;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_14 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_21, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_14);
                tmp_subscript_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_subscript_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_37);

                    exception_lineno = 223;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[211];
                tmp_expression_value_39 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 224;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_22 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[179]);

                if (tmp_subscript_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_22 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_22);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[165];
                tmp_expression_value_40 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[145]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 225;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_41 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_40);

                            exception_lineno = 225;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_subscript_value_24 == NULL)) {
                            tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_subscript_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_40);
                            Py_DECREF(tmp_expression_value_41);

                            exception_lineno = 225;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_40);

                    exception_lineno = 225;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_42;
                    PyObject *tmp_subscript_value_25;
                    PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_15);
                    tmp_expression_value_42 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                    if (tmp_expression_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                            if (unlikely(tmp_expression_value_42 == NULL)) {
                                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                            }

                            if (tmp_expression_value_42 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 225;
                                type_description_2 = "c";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_expression_value_42);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_subscript_value_25 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                    if (tmp_subscript_value_25 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                            if (unlikely(tmp_subscript_value_25 == NULL)) {
                                tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                            }

                            if (tmp_subscript_value_25 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_42);

                                exception_lineno = 225;
                                type_description_2 = "c";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_subscript_value_25);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_25);
                    Py_DECREF(tmp_expression_value_42);
                    Py_DECREF(tmp_subscript_value_25);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 225;
                        type_description_2 = "c";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_23);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 225;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__11_filter_proposals(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_dict_key_13 = mod_consts[210];
            tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_tuple_element_16;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[216];
                tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_dict_value_13 == NULL)) {
                            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_dict_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[89];
                tmp_expression_value_43 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_subscript_value_26 == NULL)) {
                            tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_subscript_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_43);

                            exception_lineno = 277;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[217];
                tmp_expression_value_44 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_27 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_subscript_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_subscript_value_27 == NULL)) {
                            tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_subscript_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);

                            exception_lineno = 277;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_subscript_value_27);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[165];
                tmp_expression_value_45 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[145]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 278;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_tuple_element_16 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_45);

                            exception_lineno = 278;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_28, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 278;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_16);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_28);
                goto dict_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 278;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__12_compute_loss(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_defaults_2 = mod_consts[219];
            tmp_dict_key_14 = mod_consts[220];
            tmp_dict_value_14 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[161]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[161]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 318;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_34;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[221];
                tmp_expression_value_46 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[144]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 319;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_tuple_element_17 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[203]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_29, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 319;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_17);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_46);
                Py_DECREF(tmp_subscript_value_29);
                goto dict_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_46);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[208];
                tmp_expression_value_47 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[143]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 320;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_expression_value_48 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_47);

                            exception_lineno = 320;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_expression_value_49 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[144]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_47);
                            Py_DECREF(tmp_expression_value_48);

                            exception_lineno = 320;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_tuple_element_18 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[203]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 320;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_18);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_32);
                goto dict_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_subscript_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_47);
                    Py_DECREF(tmp_expression_value_48);

                    exception_lineno = 320;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_subscript_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_47);

                    exception_lineno = 320;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 320;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[165];
                tmp_expression_value_50 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[145]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 321;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_expression_value_51 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[142]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_50);

                            exception_lineno = 321;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_34 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                if (tmp_subscript_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_subscript_value_34 == NULL)) {
                            tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_subscript_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_50);
                            Py_DECREF(tmp_expression_value_51);

                            exception_lineno = 321;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_subscript_value_34);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_50);

                    exception_lineno = 321;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_52;
                    PyObject *tmp_subscript_value_35;
                    PyObject *tmp_tuple_element_20;
                    PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_19);
                    tmp_expression_value_52 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[144]);

                    if (tmp_expression_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[144]);

                            if (unlikely(tmp_expression_value_52 == NULL)) {
                                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                            }

                            if (tmp_expression_value_52 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 321;
                                type_description_2 = "c";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_expression_value_52);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_tuple_element_20 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[203]);

                    if (tmp_tuple_element_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_20);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_35, 0, tmp_tuple_element_20);
                    tmp_tuple_element_20 = PyObject_GetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[147]);

                    if (tmp_tuple_element_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[147]);

                            if (unlikely(tmp_tuple_element_20 == NULL)) {
                                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                            }

                            if (tmp_tuple_element_20 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 321;
                                type_description_2 = "c";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_tuple_element_20);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_35, 1, tmp_tuple_element_20);
                    goto tuple_build_noexception_11;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_12:;
                    Py_DECREF(tmp_expression_value_52);
                    Py_DECREF(tmp_subscript_value_35);
                    goto tuple_build_exception_11;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_11:;
                    tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_35);
                    Py_DECREF(tmp_expression_value_52);
                    Py_DECREF(tmp_subscript_value_35);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 321;
                        type_description_2 = "c";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_33);
                goto dict_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$rpn$$$function__13_forward(tmp_defaults_2, tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_11b16a9365d702a47f274cc1827fc5d6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_11b16a9365d702a47f274cc1827fc5d6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_11b16a9365d702a47f274cc1827fc5d6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_11b16a9365d702a47f274cc1827fc5d6_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_11b16a9365d702a47f274cc1827fc5d6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88, mod_consts[185], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_21 = mod_consts[194];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_21 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_84e0f48ee891004810d06393f68cd3e5->m_frame.f_lineno = 88;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_38);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_37 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88);
        locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF(locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88);
        locals_torchvision$models$detection$rpn$$$class__2_RegionProposalNetwork_88 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 88;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_37);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84e0f48ee891004810d06393f68cd3e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84e0f48ee891004810d06393f68cd3e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84e0f48ee891004810d06393f68cd3e5, exception_lineno);
    }



    assertFrameObject(frame_84e0f48ee891004810d06393f68cd3e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.models.detection.rpn", false);

    Py_INCREF(module_torchvision$models$detection$rpn);
    return module_torchvision$models$detection$rpn;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$rpn, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$models$detection$rpn", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
