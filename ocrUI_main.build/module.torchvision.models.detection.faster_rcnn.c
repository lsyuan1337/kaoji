/* Generated code for Python module 'torchvision.models.detection.faster_rcnn'
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

/* The "module_torchvision$models$detection$faster_rcnn" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$models$detection$faster_rcnn;
PyDictObject *moduledict_torchvision$models$detection$faster_rcnn;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[160];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[160];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.models.detection.faster_rcnn"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 160; i++) {
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
void checkModuleConstants_torchvision$models$detection$faster_rcnn(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 160; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1f2045d452ac0c65182b023c22c04dff;
static PyCodeObject *codeobj_3a34b1d745ec78ff82311d957f1eb260;
static PyCodeObject *codeobj_0399f4b1ce653fd7716a89714550f677;
static PyCodeObject *codeobj_0a5962d8f828daac8ffb87510c6491f2;
static PyCodeObject *codeobj_4eb5a83d96b806d9360e403e736447a1;
static PyCodeObject *codeobj_63cb0a1703d9f64507cf350bf0d85dd6;
static PyCodeObject *codeobj_a5885a16c2dd2f02a676a9c9e2473d1c;
static PyCodeObject *codeobj_91b5aec053755ce14bf68daa776db529;
static PyCodeObject *codeobj_b7482a75c40f6b2c06a834ff3e49d0cc;
static PyCodeObject *codeobj_e7c8406619e9fcbbd60bbb7107079376;
static PyCodeObject *codeobj_8369ef0f791e2a8ef996fd751bf6a7b2;
static PyCodeObject *codeobj_03fde890c1494693c79e39de991da5cd;
static PyCodeObject *codeobj_e1c652340a3e2b4c585d9030ddba481e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[149]); CHECK_OBJECT(module_filename_obj);
    codeobj_1f2045d452ac0c65182b023c22c04dff = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_3a34b1d745ec78ff82311d957f1eb260 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[151], NULL, 0, 0, 0);
    codeobj_0399f4b1ce653fd7716a89714550f677 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[151], NULL, 0, 0, 0);
    codeobj_0a5962d8f828daac8ffb87510c6491f2 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[151], NULL, 0, 0, 0);
    codeobj_4eb5a83d96b806d9360e403e736447a1 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[152], mod_consts[151], 30, 0, 0);
    codeobj_63cb0a1703d9f64507cf350bf0d85dd6 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[153], mod_consts[151], 3, 0, 0);
    codeobj_a5885a16c2dd2f02a676a9c9e2473d1c = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[154], mod_consts[151], 3, 0, 0);
    codeobj_91b5aec053755ce14bf68daa776db529 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[155], NULL, 6, 0, 0);
    codeobj_b7482a75c40f6b2c06a834ff3e49d0cc = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[156], NULL, 5, 0, 0);
    codeobj_e7c8406619e9fcbbd60bbb7107079376 = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[156], NULL, 5, 0, 0);
    codeobj_8369ef0f791e2a8ef996fd751bf6a7b2 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[157], NULL, 5, 0, 0);
    codeobj_03fde890c1494693c79e39de991da5cd = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[158], NULL, 2, 0, 0);
    codeobj_e1c652340a3e2b4c585d9030ddba481e = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[159], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__14__unpack_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__1___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__2___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__3_forward();


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__4___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__5_forward();


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__6_fasterrcnn_resnet50_fpn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__7__fasterrcnn_mobilenet_v3_large_fpn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__8_fasterrcnn_mobilenet_v3_large_320_fpn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__9_fasterrcnn_mobilenet_v3_large_fpn(PyObject *defaults);


// The module function definitions.
static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_backbone = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    PyObject *par_min_size = python_pars[3];
    PyObject *par_max_size = python_pars[4];
    PyObject *par_image_mean = python_pars[5];
    PyObject *par_image_std = python_pars[6];
    PyObject *par_rpn_anchor_generator = python_pars[7];
    PyObject *par_rpn_head = python_pars[8];
    PyObject *par_rpn_pre_nms_top_n_train = python_pars[9];
    PyObject *par_rpn_pre_nms_top_n_test = python_pars[10];
    PyObject *par_rpn_post_nms_top_n_train = python_pars[11];
    PyObject *par_rpn_post_nms_top_n_test = python_pars[12];
    PyObject *par_rpn_nms_thresh = python_pars[13];
    PyObject *par_rpn_fg_iou_thresh = python_pars[14];
    PyObject *par_rpn_bg_iou_thresh = python_pars[15];
    PyObject *par_rpn_batch_size_per_image = python_pars[16];
    PyObject *par_rpn_positive_fraction = python_pars[17];
    PyObject *par_rpn_score_thresh = python_pars[18];
    PyObject *par_box_roi_pool = python_pars[19];
    PyObject *par_box_head = python_pars[20];
    PyObject *par_box_predictor = python_pars[21];
    PyObject *par_box_score_thresh = python_pars[22];
    PyObject *par_box_nms_thresh = python_pars[23];
    PyObject *par_box_detections_per_img = python_pars[24];
    PyObject *par_box_fg_iou_thresh = python_pars[25];
    PyObject *par_box_bg_iou_thresh = python_pars[26];
    PyObject *par_box_batch_size_per_image = python_pars[27];
    PyObject *par_box_positive_fraction = python_pars[28];
    PyObject *par_bbox_reg_weights = python_pars[29];
    PyObject *var_out_channels = NULL;
    PyObject *var_rpn_pre_nms_top_n = NULL;
    PyObject *var_rpn_post_nms_top_n = NULL;
    PyObject *var_rpn = NULL;
    PyObject *var_resolution = NULL;
    PyObject *var_roi_heads = NULL;
    PyObject *var_transform = NULL;
    struct Nuitka_FrameObject *frame_4eb5a83d96b806d9360e403e736447a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4eb5a83d96b806d9360e403e736447a1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4eb5a83d96b806d9360e403e736447a1)) {
        Py_XDECREF(cache_frame_4eb5a83d96b806d9360e403e736447a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4eb5a83d96b806d9360e403e736447a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4eb5a83d96b806d9360e403e736447a1 = MAKE_FUNCTION_FRAME(codeobj_4eb5a83d96b806d9360e403e736447a1, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4eb5a83d96b806d9360e403e736447a1->m_type_description == NULL);
    frame_4eb5a83d96b806d9360e403e736447a1 = cache_frame_4eb5a83d96b806d9360e403e736447a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4eb5a83d96b806d9360e403e736447a1);
    assert(Py_REFCNT(frame_4eb5a83d96b806d9360e403e736447a1) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_backbone);
        tmp_expression_value_1 = par_backbone;
        tmp_attribute_value_1 = mod_consts[0];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
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
        tmp_make_exception_arg_1 = mod_consts[1];
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 184;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 184;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_rpn_anchor_generator);
        tmp_isinstance_inst_1 = par_rpn_anchor_generator;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)Py_TYPE(Py_None);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 190;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_box_roi_pool);
        tmp_isinstance_inst_2 = par_box_roi_pool;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = (PyObject *)Py_TYPE(Py_None);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 1, tmp_tuple_element_2);
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
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
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 191;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_num_classes);
        tmp_cmp_expr_left_1 = par_num_classes;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_box_predictor);
        tmp_cmp_expr_left_2 = par_box_predictor;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[4];
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 195;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 195;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_box_predictor);
        tmp_cmp_expr_left_3 = par_box_predictor;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[5];
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 198;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 198;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_end_4:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_backbone);
        tmp_expression_value_2 = par_backbone;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        assert(var_out_channels == NULL);
        var_out_channels = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_rpn_anchor_generator);
        tmp_cmp_expr_left_4 = par_rpn_anchor_generator;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 205;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[6]);

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_rpn_anchor_generator;
            assert(old != NULL);
            par_rpn_anchor_generator = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_rpn_head);
        tmp_cmp_expr_left_5 = par_rpn_head;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out_channels);
        tmp_args_element_value_1 = var_out_channels;
        CHECK_OBJECT(par_rpn_anchor_generator);
        tmp_called_instance_1 = par_rpn_anchor_generator;
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 207;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[9];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_rpn_head;
            assert(old != NULL);
            par_rpn_head = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_rpn_pre_nms_top_n_train);
        tmp_dict_value_1 = par_rpn_pre_nms_top_n_train;
        tmp_assign_source_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_rpn_pre_nms_top_n_test);
        tmp_dict_value_1 = par_rpn_pre_nms_top_n_test;
        tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_rpn_pre_nms_top_n == NULL);
        var_rpn_pre_nms_top_n = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[10];
        CHECK_OBJECT(par_rpn_post_nms_top_n_train);
        tmp_dict_value_2 = par_rpn_post_nms_top_n_train;
        tmp_assign_source_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[11];
        CHECK_OBJECT(par_rpn_post_nms_top_n_test);
        tmp_dict_value_2 = par_rpn_post_nms_top_n_test;
        tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        assert(var_rpn_post_nms_top_n == NULL);
        var_rpn_post_nms_top_n = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        if (par_rpn_anchor_generator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_rpn_anchor_generator;
        CHECK_OBJECT(par_rpn_head);
        tmp_kw_call_arg_value_1_1 = par_rpn_head;
        CHECK_OBJECT(par_rpn_fg_iou_thresh);
        tmp_kw_call_arg_value_2_1 = par_rpn_fg_iou_thresh;
        CHECK_OBJECT(par_rpn_bg_iou_thresh);
        tmp_kw_call_arg_value_3_1 = par_rpn_bg_iou_thresh;
        CHECK_OBJECT(par_rpn_batch_size_per_image);
        tmp_kw_call_arg_value_4_1 = par_rpn_batch_size_per_image;
        CHECK_OBJECT(par_rpn_positive_fraction);
        tmp_kw_call_arg_value_5_1 = par_rpn_positive_fraction;
        CHECK_OBJECT(var_rpn_pre_nms_top_n);
        tmp_kw_call_arg_value_6_1 = var_rpn_pre_nms_top_n;
        CHECK_OBJECT(var_rpn_post_nms_top_n);
        tmp_kw_call_arg_value_7_1 = var_rpn_post_nms_top_n;
        CHECK_OBJECT(par_rpn_nms_thresh);
        tmp_kw_call_arg_value_8_1 = par_rpn_nms_thresh;
        CHECK_OBJECT(par_rpn_score_thresh);
        tmp_kw_call_dict_value_0_1 = par_rpn_score_thresh;
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 212;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS9_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[14]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        assert(var_rpn == NULL);
        var_rpn = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_box_roi_pool);
        tmp_cmp_expr_left_6 = par_box_roi_pool;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_args_kwsplit_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[15], "lii");
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 226;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[16]);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_box_roi_pool;
            assert(old != NULL);
            par_box_roi_pool = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_box_head);
        tmp_cmp_expr_left_7 = par_box_head;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_box_roi_pool);
        tmp_expression_value_5 = par_box_roi_pool;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[9];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        assert(var_resolution == NULL);
        var_resolution = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        if (var_out_channels == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_1 = var_out_channels;
        CHECK_OBJECT(var_resolution);
        tmp_pow_expr_left_1 = var_resolution;
        tmp_pow_expr_right_1 = mod_consts[19];
        tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[20];
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_box_head;
            assert(old != NULL);
            par_box_head = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_10:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_box_predictor);
        tmp_cmp_expr_left_8 = par_box_predictor;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[20];
        CHECK_OBJECT(par_num_classes);
        tmp_args_element_value_6 = par_num_classes;
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_box_predictor;
            assert(old != NULL);
            par_box_predictor = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_7;
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
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        if (par_box_roi_pool == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_box_roi_pool;
        CHECK_OBJECT(par_box_head);
        tmp_args_element_value_8 = par_box_head;
        CHECK_OBJECT(par_box_predictor);
        tmp_args_element_value_9 = par_box_predictor;
        CHECK_OBJECT(par_box_fg_iou_thresh);
        tmp_args_element_value_10 = par_box_fg_iou_thresh;
        CHECK_OBJECT(par_box_bg_iou_thresh);
        tmp_args_element_value_11 = par_box_bg_iou_thresh;
        CHECK_OBJECT(par_box_batch_size_per_image);
        tmp_args_element_value_12 = par_box_batch_size_per_image;
        CHECK_OBJECT(par_box_positive_fraction);
        tmp_args_element_value_13 = par_box_positive_fraction;
        CHECK_OBJECT(par_bbox_reg_weights);
        tmp_args_element_value_14 = par_bbox_reg_weights;
        CHECK_OBJECT(par_box_score_thresh);
        tmp_args_element_value_15 = par_box_score_thresh;
        CHECK_OBJECT(par_box_nms_thresh);
        tmp_args_element_value_16 = par_box_nms_thresh;
        CHECK_OBJECT(par_box_detections_per_img);
        tmp_args_element_value_17 = par_box_detections_per_img;
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS11(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        assert(var_roi_heads == NULL);
        var_roi_heads = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_image_mean);
        tmp_cmp_expr_left_9 = par_image_mean;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST3(mod_consts[24],mod_consts[25],mod_consts[26]);
        {
            PyObject *old = par_image_mean;
            assert(old != NULL);
            par_image_mean = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_image_std);
        tmp_cmp_expr_left_10 = par_image_std;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_LIST3(mod_consts[27],mod_consts[28],mod_consts[29]);
        {
            PyObject *old = par_image_std;
            assert(old != NULL);
            par_image_std = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_min_size);
        tmp_args_element_value_18 = par_min_size;
        CHECK_OBJECT(par_max_size);
        tmp_args_element_value_19 = par_max_size;
        CHECK_OBJECT(par_image_mean);
        tmp_args_element_value_20 = par_image_mean;
        CHECK_OBJECT(par_image_std);
        tmp_args_element_value_21 = par_image_std;
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        assert(var_transform == NULL);
        var_transform = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$faster_rcnn, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backbone);
        tmp_args_element_value_22 = par_backbone;
        CHECK_OBJECT(var_rpn);
        tmp_args_element_value_23 = var_rpn;
        CHECK_OBJECT(var_roi_heads);
        tmp_args_element_value_24 = var_roi_heads;
        CHECK_OBJECT(var_transform);
        tmp_args_element_value_25 = var_transform;
        frame_4eb5a83d96b806d9360e403e736447a1->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_2,
                mod_consts[32],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooNNooooNooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4eb5a83d96b806d9360e403e736447a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4eb5a83d96b806d9360e403e736447a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eb5a83d96b806d9360e403e736447a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4eb5a83d96b806d9360e403e736447a1,
        type_description_1,
        par_self,
        par_backbone,
        par_num_classes,
        par_min_size,
        par_max_size,
        par_image_mean,
        par_image_std,
        par_rpn_anchor_generator,
        par_rpn_head,
        par_rpn_pre_nms_top_n_train,
        par_rpn_pre_nms_top_n_test,
        par_rpn_post_nms_top_n_train,
        par_rpn_post_nms_top_n_test,
        par_rpn_nms_thresh,
        par_rpn_fg_iou_thresh,
        par_rpn_bg_iou_thresh,
        par_rpn_batch_size_per_image,
        par_rpn_positive_fraction,
        par_rpn_score_thresh,
        par_box_roi_pool,
        par_box_head,
        par_box_predictor,
        par_box_score_thresh,
        par_box_nms_thresh,
        par_box_detections_per_img,
        par_box_fg_iou_thresh,
        par_box_bg_iou_thresh,
        par_box_batch_size_per_image,
        par_box_positive_fraction,
        par_bbox_reg_weights,
        var_out_channels,
        NULL,
        NULL,
        var_rpn_pre_nms_top_n,
        var_rpn_post_nms_top_n,
        var_rpn,
        var_resolution,
        NULL,
        var_roi_heads,
        var_transform,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4eb5a83d96b806d9360e403e736447a1 == cache_frame_4eb5a83d96b806d9360e403e736447a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4eb5a83d96b806d9360e403e736447a1);
        cache_frame_4eb5a83d96b806d9360e403e736447a1 = NULL;
    }

    assertFrameObject(frame_4eb5a83d96b806d9360e403e736447a1);

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
    CHECK_OBJECT(par_image_mean);
    Py_DECREF(par_image_mean);
    par_image_mean = NULL;
    CHECK_OBJECT(par_image_std);
    Py_DECREF(par_image_std);
    par_image_std = NULL;
    Py_XDECREF(par_rpn_anchor_generator);
    par_rpn_anchor_generator = NULL;
    CHECK_OBJECT(par_rpn_head);
    Py_DECREF(par_rpn_head);
    par_rpn_head = NULL;
    Py_XDECREF(par_box_roi_pool);
    par_box_roi_pool = NULL;
    CHECK_OBJECT(par_box_head);
    Py_DECREF(par_box_head);
    par_box_head = NULL;
    CHECK_OBJECT(par_box_predictor);
    Py_DECREF(par_box_predictor);
    par_box_predictor = NULL;
    Py_XDECREF(var_out_channels);
    var_out_channels = NULL;
    CHECK_OBJECT(var_rpn_pre_nms_top_n);
    Py_DECREF(var_rpn_pre_nms_top_n);
    var_rpn_pre_nms_top_n = NULL;
    CHECK_OBJECT(var_rpn_post_nms_top_n);
    Py_DECREF(var_rpn_post_nms_top_n);
    var_rpn_post_nms_top_n = NULL;
    CHECK_OBJECT(var_rpn);
    Py_DECREF(var_rpn);
    var_rpn = NULL;
    Py_XDECREF(var_resolution);
    var_resolution = NULL;
    CHECK_OBJECT(var_roi_heads);
    Py_DECREF(var_roi_heads);
    var_roi_heads = NULL;
    CHECK_OBJECT(var_transform);
    Py_DECREF(var_transform);
    var_transform = NULL;
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

    Py_XDECREF(par_image_mean);
    par_image_mean = NULL;
    Py_XDECREF(par_image_std);
    par_image_std = NULL;
    Py_XDECREF(par_rpn_anchor_generator);
    par_rpn_anchor_generator = NULL;
    Py_XDECREF(par_rpn_head);
    par_rpn_head = NULL;
    Py_XDECREF(par_box_roi_pool);
    par_box_roi_pool = NULL;
    Py_XDECREF(par_box_head);
    par_box_head = NULL;
    Py_XDECREF(par_box_predictor);
    par_box_predictor = NULL;
    Py_XDECREF(var_out_channels);
    var_out_channels = NULL;
    Py_XDECREF(var_rpn_pre_nms_top_n);
    var_rpn_pre_nms_top_n = NULL;
    Py_XDECREF(var_rpn_post_nms_top_n);
    var_rpn_post_nms_top_n = NULL;
    Py_XDECREF(var_rpn);
    var_rpn = NULL;
    Py_XDECREF(var_resolution);
    var_resolution = NULL;
    Py_XDECREF(var_roi_heads);
    var_roi_heads = NULL;
    Py_XDECREF(var_transform);
    var_transform = NULL;
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
    CHECK_OBJECT(par_backbone);
    Py_DECREF(par_backbone);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_min_size);
    Py_DECREF(par_min_size);
    CHECK_OBJECT(par_max_size);
    Py_DECREF(par_max_size);
    CHECK_OBJECT(par_rpn_pre_nms_top_n_train);
    Py_DECREF(par_rpn_pre_nms_top_n_train);
    CHECK_OBJECT(par_rpn_pre_nms_top_n_test);
    Py_DECREF(par_rpn_pre_nms_top_n_test);
    CHECK_OBJECT(par_rpn_post_nms_top_n_train);
    Py_DECREF(par_rpn_post_nms_top_n_train);
    CHECK_OBJECT(par_rpn_post_nms_top_n_test);
    Py_DECREF(par_rpn_post_nms_top_n_test);
    CHECK_OBJECT(par_rpn_nms_thresh);
    Py_DECREF(par_rpn_nms_thresh);
    CHECK_OBJECT(par_rpn_fg_iou_thresh);
    Py_DECREF(par_rpn_fg_iou_thresh);
    CHECK_OBJECT(par_rpn_bg_iou_thresh);
    Py_DECREF(par_rpn_bg_iou_thresh);
    CHECK_OBJECT(par_rpn_batch_size_per_image);
    Py_DECREF(par_rpn_batch_size_per_image);
    CHECK_OBJECT(par_rpn_positive_fraction);
    Py_DECREF(par_rpn_positive_fraction);
    CHECK_OBJECT(par_rpn_score_thresh);
    Py_DECREF(par_rpn_score_thresh);
    CHECK_OBJECT(par_box_score_thresh);
    Py_DECREF(par_box_score_thresh);
    CHECK_OBJECT(par_box_nms_thresh);
    Py_DECREF(par_box_nms_thresh);
    CHECK_OBJECT(par_box_detections_per_img);
    Py_DECREF(par_box_detections_per_img);
    CHECK_OBJECT(par_box_fg_iou_thresh);
    Py_DECREF(par_box_fg_iou_thresh);
    CHECK_OBJECT(par_box_bg_iou_thresh);
    Py_DECREF(par_box_bg_iou_thresh);
    CHECK_OBJECT(par_box_batch_size_per_image);
    Py_DECREF(par_box_batch_size_per_image);
    CHECK_OBJECT(par_box_positive_fraction);
    Py_DECREF(par_box_positive_fraction);
    CHECK_OBJECT(par_bbox_reg_weights);
    Py_DECREF(par_bbox_reg_weights);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_backbone);
    Py_DECREF(par_backbone);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_min_size);
    Py_DECREF(par_min_size);
    CHECK_OBJECT(par_max_size);
    Py_DECREF(par_max_size);
    CHECK_OBJECT(par_rpn_pre_nms_top_n_train);
    Py_DECREF(par_rpn_pre_nms_top_n_train);
    CHECK_OBJECT(par_rpn_pre_nms_top_n_test);
    Py_DECREF(par_rpn_pre_nms_top_n_test);
    CHECK_OBJECT(par_rpn_post_nms_top_n_train);
    Py_DECREF(par_rpn_post_nms_top_n_train);
    CHECK_OBJECT(par_rpn_post_nms_top_n_test);
    Py_DECREF(par_rpn_post_nms_top_n_test);
    CHECK_OBJECT(par_rpn_nms_thresh);
    Py_DECREF(par_rpn_nms_thresh);
    CHECK_OBJECT(par_rpn_fg_iou_thresh);
    Py_DECREF(par_rpn_fg_iou_thresh);
    CHECK_OBJECT(par_rpn_bg_iou_thresh);
    Py_DECREF(par_rpn_bg_iou_thresh);
    CHECK_OBJECT(par_rpn_batch_size_per_image);
    Py_DECREF(par_rpn_batch_size_per_image);
    CHECK_OBJECT(par_rpn_positive_fraction);
    Py_DECREF(par_rpn_positive_fraction);
    CHECK_OBJECT(par_rpn_score_thresh);
    Py_DECREF(par_rpn_score_thresh);
    CHECK_OBJECT(par_box_score_thresh);
    Py_DECREF(par_box_score_thresh);
    CHECK_OBJECT(par_box_nms_thresh);
    Py_DECREF(par_box_nms_thresh);
    CHECK_OBJECT(par_box_detections_per_img);
    Py_DECREF(par_box_detections_per_img);
    CHECK_OBJECT(par_box_fg_iou_thresh);
    Py_DECREF(par_box_fg_iou_thresh);
    CHECK_OBJECT(par_box_bg_iou_thresh);
    Py_DECREF(par_box_bg_iou_thresh);
    CHECK_OBJECT(par_box_batch_size_per_image);
    Py_DECREF(par_box_batch_size_per_image);
    CHECK_OBJECT(par_box_positive_fraction);
    Py_DECREF(par_box_positive_fraction);
    CHECK_OBJECT(par_bbox_reg_weights);
    Py_DECREF(par_bbox_reg_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_representation_size = python_pars[2];
    struct Nuitka_FrameObject *frame_a5885a16c2dd2f02a676a9c9e2473d1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c)) {
        Py_XDECREF(cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c = MAKE_FUNCTION_FRAME(codeobj_a5885a16c2dd2f02a676a9c9e2473d1c, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c->m_type_description == NULL);
    frame_a5885a16c2dd2f02a676a9c9e2473d1c = cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5885a16c2dd2f02a676a9c9e2473d1c);
    assert(Py_REFCNT(frame_a5885a16c2dd2f02a676a9c9e2473d1c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$faster_rcnn, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_a5885a16c2dd2f02a676a9c9e2473d1c->m_frame.f_lineno = 271;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_1 = par_in_channels;
        CHECK_OBJECT(par_representation_size);
        tmp_args_element_value_2 = par_representation_size;
        frame_a5885a16c2dd2f02a676a9c9e2473d1c->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_representation_size);
        tmp_args_element_value_3 = par_representation_size;
        CHECK_OBJECT(par_representation_size);
        tmp_args_element_value_4 = par_representation_size;
        frame_a5885a16c2dd2f02a676a9c9e2473d1c->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5885a16c2dd2f02a676a9c9e2473d1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5885a16c2dd2f02a676a9c9e2473d1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5885a16c2dd2f02a676a9c9e2473d1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5885a16c2dd2f02a676a9c9e2473d1c,
        type_description_1,
        par_self,
        par_in_channels,
        par_representation_size,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a5885a16c2dd2f02a676a9c9e2473d1c == cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c);
        cache_frame_a5885a16c2dd2f02a676a9c9e2473d1c = NULL;
    }

    assertFrameObject(frame_a5885a16c2dd2f02a676a9c9e2473d1c);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_representation_size);
    Py_DECREF(par_representation_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_representation_size);
    Py_DECREF(par_representation_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__3_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_03fde890c1494693c79e39de991da5cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03fde890c1494693c79e39de991da5cd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_03fde890c1494693c79e39de991da5cd)) {
        Py_XDECREF(cache_frame_03fde890c1494693c79e39de991da5cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03fde890c1494693c79e39de991da5cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03fde890c1494693c79e39de991da5cd = MAKE_FUNCTION_FRAME(codeobj_03fde890c1494693c79e39de991da5cd, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03fde890c1494693c79e39de991da5cd->m_type_description == NULL);
    frame_03fde890c1494693c79e39de991da5cd = cache_frame_03fde890c1494693c79e39de991da5cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_03fde890c1494693c79e39de991da5cd);
    assert(Py_REFCNT(frame_03fde890c1494693c79e39de991da5cd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_03fde890c1494693c79e39de991da5cd->m_frame.f_lineno = 277;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_03fde890c1494693c79e39de991da5cd->m_frame.f_lineno = 279;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[35], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_03fde890c1494693c79e39de991da5cd->m_frame.f_lineno = 279;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        frame_03fde890c1494693c79e39de991da5cd->m_frame.f_lineno = 280;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[36], tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_03fde890c1494693c79e39de991da5cd->m_frame.f_lineno = 280;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03fde890c1494693c79e39de991da5cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03fde890c1494693c79e39de991da5cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03fde890c1494693c79e39de991da5cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03fde890c1494693c79e39de991da5cd,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_03fde890c1494693c79e39de991da5cd == cache_frame_03fde890c1494693c79e39de991da5cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03fde890c1494693c79e39de991da5cd);
        cache_frame_03fde890c1494693c79e39de991da5cd = NULL;
    }

    assertFrameObject(frame_03fde890c1494693c79e39de991da5cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    struct Nuitka_FrameObject *frame_63cb0a1703d9f64507cf350bf0d85dd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_63cb0a1703d9f64507cf350bf0d85dd6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63cb0a1703d9f64507cf350bf0d85dd6)) {
        Py_XDECREF(cache_frame_63cb0a1703d9f64507cf350bf0d85dd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63cb0a1703d9f64507cf350bf0d85dd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63cb0a1703d9f64507cf350bf0d85dd6 = MAKE_FUNCTION_FRAME(codeobj_63cb0a1703d9f64507cf350bf0d85dd6, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63cb0a1703d9f64507cf350bf0d85dd6->m_type_description == NULL);
    frame_63cb0a1703d9f64507cf350bf0d85dd6 = cache_frame_63cb0a1703d9f64507cf350bf0d85dd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_63cb0a1703d9f64507cf350bf0d85dd6);
    assert(Py_REFCNT(frame_63cb0a1703d9f64507cf350bf0d85dd6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 296;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$faster_rcnn, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_63cb0a1703d9f64507cf350bf0d85dd6->m_frame.f_lineno = 296;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_1 = par_in_channels;
        CHECK_OBJECT(par_num_classes);
        tmp_args_element_value_2 = par_num_classes;
        frame_63cb0a1703d9f64507cf350bf0d85dd6->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_3 = par_in_channels;
        CHECK_OBJECT(par_num_classes);
        tmp_mult_expr_left_1 = par_num_classes;
        tmp_mult_expr_right_1 = mod_consts[43];
        tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_63cb0a1703d9f64507cf350bf0d85dd6->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63cb0a1703d9f64507cf350bf0d85dd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63cb0a1703d9f64507cf350bf0d85dd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63cb0a1703d9f64507cf350bf0d85dd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63cb0a1703d9f64507cf350bf0d85dd6,
        type_description_1,
        par_self,
        par_in_channels,
        par_num_classes,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_63cb0a1703d9f64507cf350bf0d85dd6 == cache_frame_63cb0a1703d9f64507cf350bf0d85dd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63cb0a1703d9f64507cf350bf0d85dd6);
        cache_frame_63cb0a1703d9f64507cf350bf0d85dd6 = NULL;
    }

    assertFrameObject(frame_63cb0a1703d9f64507cf350bf0d85dd6);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__5_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_scores = NULL;
    PyObject *var_bbox_deltas = NULL;
    struct Nuitka_FrameObject *frame_e1c652340a3e2b4c585d9030ddba481e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1c652340a3e2b4c585d9030ddba481e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e1c652340a3e2b4c585d9030ddba481e)) {
        Py_XDECREF(cache_frame_e1c652340a3e2b4c585d9030ddba481e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1c652340a3e2b4c585d9030ddba481e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1c652340a3e2b4c585d9030ddba481e = MAKE_FUNCTION_FRAME(codeobj_e1c652340a3e2b4c585d9030ddba481e, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1c652340a3e2b4c585d9030ddba481e->m_type_description == NULL);
    frame_e1c652340a3e2b4c585d9030ddba481e = cache_frame_e1c652340a3e2b4c585d9030ddba481e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e1c652340a3e2b4c585d9030ddba481e);
    assert(Py_REFCNT(frame_e1c652340a3e2b4c585d9030ddba481e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_e1c652340a3e2b4c585d9030ddba481e->m_frame.f_lineno = 301;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[45]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[43];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        nuitka_bool tmp_tmp_condition_result_2_nbool_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[47];
        tmp_list_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = MAKE_LIST_REPEATED(2, mod_consts[48]);
        tmp_tmp_condition_result_2_nbool_1 = RICH_COMPARE_NE_NBOOL_LIST_LIST(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_tmp_condition_result_2_nbool_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_tmp_condition_result_2_nbool_1 == NUITKA_BOOL_TRUE;
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
        exception_lineno = 302;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_x);
        tmp_expression_value_3 = par_x;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e1c652340a3e2b4c585d9030ddba481e->m_frame.f_lineno = 303;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_e1c652340a3e2b4c585d9030ddba481e->m_frame.f_lineno = 304;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[42], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_scores == NULL);
        var_scores = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_e1c652340a3e2b4c585d9030ddba481e->m_frame.f_lineno = 305;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[44], tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bbox_deltas == NULL);
        var_bbox_deltas = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1c652340a3e2b4c585d9030ddba481e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1c652340a3e2b4c585d9030ddba481e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1c652340a3e2b4c585d9030ddba481e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1c652340a3e2b4c585d9030ddba481e,
        type_description_1,
        par_self,
        par_x,
        var_scores,
        var_bbox_deltas
    );


    // Release cached frame if used for exception.
    if (frame_e1c652340a3e2b4c585d9030ddba481e == cache_frame_e1c652340a3e2b4c585d9030ddba481e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1c652340a3e2b4c585d9030ddba481e);
        cache_frame_e1c652340a3e2b4c585d9030ddba481e = NULL;
    }

    assertFrameObject(frame_e1c652340a3e2b4c585d9030ddba481e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_scores);
        tmp_tuple_element_1 = var_scores;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_bbox_deltas);
        tmp_tuple_element_1 = var_bbox_deltas;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(var_scores);
    Py_DECREF(var_scores);
    var_scores = NULL;
    CHECK_OBJECT(var_bbox_deltas);
    Py_DECREF(var_bbox_deltas);
    var_bbox_deltas = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_scores);
    var_scores = NULL;
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


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__6_fasterrcnn_resnet50_fpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    PyObject *par_pretrained_backbone = python_pars[3];
    PyObject *par_trainable_backbone_layers = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_backbone = NULL;
    PyObject *var_model = NULL;
    PyObject *var_state_dict = NULL;
    struct Nuitka_FrameObject *frame_8369ef0f791e2a8ef996fd751bf6a7b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2)) {
        Py_XDECREF(cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2 = MAKE_FUNCTION_FRAME(codeobj_8369ef0f791e2a8ef996fd751bf6a7b2, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_type_description == NULL);
    frame_8369ef0f791e2a8ef996fd751bf6a7b2 = cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8369ef0f791e2a8ef996fd751bf6a7b2);
    assert(Py_REFCNT(frame_8369ef0f791e2a8ef996fd751bf6a7b2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pretrained);
        tmp_or_left_value_1 = par_pretrained;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_pretrained_backbone);
        tmp_or_right_value_1 = par_pretrained_backbone;
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_trainable_backbone_layers);
        tmp_args_element_value_2 = par_trainable_backbone_layers;
        tmp_args_element_value_3 = mod_consts[50];
        tmp_args_element_value_4 = mod_consts[51];
        frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_trainable_backbone_layers;
            assert(old != NULL);
            par_trainable_backbone_layers = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        {
            PyObject *old = par_pretrained_backbone;
            assert(old != NULL);
            par_pretrained_backbone = tmp_assign_source_2;
            Py_INCREF(par_pretrained_backbone);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pretrained_backbone);
        tmp_kw_call_value_0_1 = par_pretrained_backbone;
        CHECK_OBJECT(par_progress);
        tmp_kw_call_value_1_1 = par_progress;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame.f_lineno = 394;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_backbone == NULL);
        var_backbone = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_backbone);
        tmp_args_element_value_5 = var_backbone;
        CHECK_OBJECT(par_trainable_backbone_layers);
        tmp_args_element_value_6 = par_trainable_backbone_layers;
        frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_backbone;
            assert(old != NULL);
            var_backbone = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_backbone);
        tmp_tuple_element_1 = var_backbone;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_num_classes);
        tmp_tuple_element_1 = par_num_classes;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_5 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_model == NULL);
        var_model = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[60];
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progress);
        tmp_kw_call_dict_value_0_1 = par_progress;
        frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame.f_lineno = 398;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state_dict == NULL);
        var_state_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_model);
        tmp_called_instance_1 = var_model;
        CHECK_OBJECT(var_state_dict);
        tmp_args_element_value_7 = var_state_dict;
        frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame.f_lineno = 399;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[62], tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model);
        tmp_args_element_value_8 = var_model;
        tmp_args_element_value_9 = mod_consts[64];
        frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    if (var_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 401;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_model;
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
        exception_tb = MAKE_TRACEBACK(frame_8369ef0f791e2a8ef996fd751bf6a7b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8369ef0f791e2a8ef996fd751bf6a7b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8369ef0f791e2a8ef996fd751bf6a7b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8369ef0f791e2a8ef996fd751bf6a7b2,
        type_description_1,
        par_pretrained,
        par_progress,
        par_num_classes,
        par_pretrained_backbone,
        par_trainable_backbone_layers,
        par_kwargs,
        var_backbone,
        var_model,
        var_state_dict
    );


    // Release cached frame if used for exception.
    if (frame_8369ef0f791e2a8ef996fd751bf6a7b2 == cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2);
        cache_frame_8369ef0f791e2a8ef996fd751bf6a7b2 = NULL;
    }

    assertFrameObject(frame_8369ef0f791e2a8ef996fd751bf6a7b2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_pretrained_backbone);
    Py_DECREF(par_pretrained_backbone);
    par_pretrained_backbone = NULL;
    CHECK_OBJECT(par_trainable_backbone_layers);
    Py_DECREF(par_trainable_backbone_layers);
    par_trainable_backbone_layers = NULL;
    CHECK_OBJECT(var_backbone);
    Py_DECREF(var_backbone);
    var_backbone = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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

    Py_XDECREF(par_pretrained_backbone);
    par_pretrained_backbone = NULL;
    Py_XDECREF(par_trainable_backbone_layers);
    par_trainable_backbone_layers = NULL;
    Py_XDECREF(var_backbone);
    var_backbone = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__7__fasterrcnn_mobilenet_v3_large_fpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_weights_name = python_pars[0];
    PyObject *par_pretrained = python_pars[1];
    PyObject *par_progress = python_pars[2];
    PyObject *par_num_classes = python_pars[3];
    PyObject *par_pretrained_backbone = python_pars[4];
    PyObject *par_trainable_backbone_layers = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    PyObject *var_backbone = NULL;
    PyObject *var_model = NULL;
    PyObject *var_state_dict = NULL;
    struct Nuitka_FrameObject *frame_91b5aec053755ce14bf68daa776db529;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_91b5aec053755ce14bf68daa776db529 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_91b5aec053755ce14bf68daa776db529)) {
        Py_XDECREF(cache_frame_91b5aec053755ce14bf68daa776db529);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91b5aec053755ce14bf68daa776db529 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91b5aec053755ce14bf68daa776db529 = MAKE_FUNCTION_FRAME(codeobj_91b5aec053755ce14bf68daa776db529, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91b5aec053755ce14bf68daa776db529->m_type_description == NULL);
    frame_91b5aec053755ce14bf68daa776db529 = cache_frame_91b5aec053755ce14bf68daa776db529;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91b5aec053755ce14bf68daa776db529);
    assert(Py_REFCNT(frame_91b5aec053755ce14bf68daa776db529) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pretrained);
        tmp_or_left_value_1 = par_pretrained;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_pretrained_backbone);
        tmp_or_right_value_1 = par_pretrained_backbone;
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_trainable_backbone_layers);
        tmp_args_element_value_2 = par_trainable_backbone_layers;
        tmp_args_element_value_3 = mod_consts[67];
        tmp_args_element_value_4 = mod_consts[51];
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_trainable_backbone_layers;
            assert(old != NULL);
            par_trainable_backbone_layers = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooNNoo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        {
            PyObject *old = par_pretrained_backbone;
            assert(old != NULL);
            par_pretrained_backbone = tmp_assign_source_2;
            Py_INCREF(par_pretrained_backbone);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pretrained_backbone);
        tmp_kw_call_value_0_1 = par_pretrained_backbone;
        CHECK_OBJECT(par_progress);
        tmp_kw_call_value_1_1 = par_progress;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 420;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        assert(var_backbone == NULL);
        var_backbone = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_backbone);
        tmp_args_element_value_5 = var_backbone;
        tmp_args_element_value_6 = Py_True;
        CHECK_OBJECT(par_trainable_backbone_layers);
        tmp_args_element_value_7 = par_trainable_backbone_layers;
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_backbone;
            assert(old != NULL);
            var_backbone = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_backbone);
        tmp_tuple_element_1 = var_backbone;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_num_classes);
        tmp_tuple_element_1 = par_num_classes;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[13];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 437;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 437;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[70]);

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 437;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_5 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        assert(var_model == NULL);
        var_model = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooNNoo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[71]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_weights_name);
        tmp_args_element_value_8 = par_weights_name;
        tmp_args_element_value_9 = Py_None;
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[72];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_weights_name);
            tmp_format_value_1 = par_weights_name;
            tmp_format_spec_1 = mod_consts[73];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;
                type_description_1 = "ooooooooNNoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[73], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 441;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 441;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooNNoo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_weights_name);
        tmp_subscript_value_1 = par_weights_name;
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progress);
        tmp_kw_call_dict_value_0_1 = par_progress;
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 442;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        assert(var_state_dict == NULL);
        var_state_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_model);
        tmp_called_instance_1 = var_model;
        CHECK_OBJECT(var_state_dict);
        tmp_args_element_value_10 = var_state_dict;
        frame_91b5aec053755ce14bf68daa776db529->m_frame.f_lineno = 443;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[62], tmp_args_element_value_10);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooNNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    if (var_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 444;
        type_description_1 = "ooooooooNNoo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_model;
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
        exception_tb = MAKE_TRACEBACK(frame_91b5aec053755ce14bf68daa776db529, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91b5aec053755ce14bf68daa776db529->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91b5aec053755ce14bf68daa776db529, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91b5aec053755ce14bf68daa776db529,
        type_description_1,
        par_weights_name,
        par_pretrained,
        par_progress,
        par_num_classes,
        par_pretrained_backbone,
        par_trainable_backbone_layers,
        par_kwargs,
        var_backbone,
        NULL,
        NULL,
        var_model,
        var_state_dict
    );


    // Release cached frame if used for exception.
    if (frame_91b5aec053755ce14bf68daa776db529 == cache_frame_91b5aec053755ce14bf68daa776db529) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91b5aec053755ce14bf68daa776db529);
        cache_frame_91b5aec053755ce14bf68daa776db529 = NULL;
    }

    assertFrameObject(frame_91b5aec053755ce14bf68daa776db529);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_pretrained_backbone);
    Py_DECREF(par_pretrained_backbone);
    par_pretrained_backbone = NULL;
    CHECK_OBJECT(par_trainable_backbone_layers);
    Py_DECREF(par_trainable_backbone_layers);
    par_trainable_backbone_layers = NULL;
    CHECK_OBJECT(var_backbone);
    Py_DECREF(var_backbone);
    var_backbone = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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

    Py_XDECREF(par_pretrained_backbone);
    par_pretrained_backbone = NULL;
    Py_XDECREF(par_trainable_backbone_layers);
    par_trainable_backbone_layers = NULL;
    Py_XDECREF(var_backbone);
    var_backbone = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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
    CHECK_OBJECT(par_weights_name);
    Py_DECREF(par_weights_name);
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_weights_name);
    Py_DECREF(par_weights_name);
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__8_fasterrcnn_mobilenet_v3_large_320_fpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    PyObject *par_pretrained_backbone = python_pars[3];
    PyObject *par_trainable_backbone_layers = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_defaults = NULL;
    struct Nuitka_FrameObject *frame_b7482a75c40f6b2c06a834ff3e49d0cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(mod_consts[74]);
        assert(var_defaults == NULL);
        var_defaults = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc)) {
        Py_XDECREF(cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc = MAKE_FUNCTION_FRAME(codeobj_b7482a75c40f6b2c06a834ff3e49d0cc, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc->m_type_description == NULL);
    frame_b7482a75c40f6b2c06a834ff3e49d0cc = cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7482a75c40f6b2c06a834ff3e49d0cc);
    assert(Py_REFCNT(frame_b7482a75c40f6b2c06a834ff3e49d0cc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_defaults);
        tmp_tuple_element_1 = var_defaults;
        tmp_dircall_arg1_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_tuple_element_1 = par_kwargs;
        PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 1, tmp_tuple_element_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_2 = impl___main__$$$function__14__unpack_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooooNo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kwargs;
            assert(old != NULL);
            par_kwargs = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[76];
        tmp_dict_key_1 = mod_consts[77];
        CHECK_OBJECT(par_pretrained);
        tmp_dict_value_1 = par_pretrained;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[78];
        CHECK_OBJECT(par_progress);
        tmp_dict_value_1 = par_progress;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[79];
        CHECK_OBJECT(par_num_classes);
        tmp_dict_value_1 = par_num_classes;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        CHECK_OBJECT(par_pretrained_backbone);
        tmp_dict_value_1 = par_pretrained_backbone;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[81];
        CHECK_OBJECT(par_trainable_backbone_layers);
        tmp_dict_value_1 = par_trainable_backbone_layers;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooNo";
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
        exception_tb = MAKE_TRACEBACK(frame_b7482a75c40f6b2c06a834ff3e49d0cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7482a75c40f6b2c06a834ff3e49d0cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7482a75c40f6b2c06a834ff3e49d0cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7482a75c40f6b2c06a834ff3e49d0cc,
        type_description_1,
        par_pretrained,
        par_progress,
        par_num_classes,
        par_pretrained_backbone,
        par_trainable_backbone_layers,
        par_kwargs,
        NULL,
        var_defaults
    );


    // Release cached frame if used for exception.
    if (frame_b7482a75c40f6b2c06a834ff3e49d0cc == cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc);
        cache_frame_b7482a75c40f6b2c06a834ff3e49d0cc = NULL;
    }

    assertFrameObject(frame_b7482a75c40f6b2c06a834ff3e49d0cc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
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

    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_defaults);
    Py_DECREF(var_defaults);
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_pretrained_backbone);
    Py_DECREF(par_pretrained_backbone);
    CHECK_OBJECT(par_trainable_backbone_layers);
    Py_DECREF(par_trainable_backbone_layers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_pretrained_backbone);
    Py_DECREF(par_pretrained_backbone);
    CHECK_OBJECT(par_trainable_backbone_layers);
    Py_DECREF(par_trainable_backbone_layers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$faster_rcnn$$$function__9_fasterrcnn_mobilenet_v3_large_fpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    PyObject *par_pretrained_backbone = python_pars[3];
    PyObject *par_trainable_backbone_layers = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_defaults = NULL;
    struct Nuitka_FrameObject *frame_e7c8406619e9fcbbd60bbb7107079376;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e7c8406619e9fcbbd60bbb7107079376 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(mod_consts[83]);
        assert(var_defaults == NULL);
        var_defaults = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e7c8406619e9fcbbd60bbb7107079376)) {
        Py_XDECREF(cache_frame_e7c8406619e9fcbbd60bbb7107079376);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7c8406619e9fcbbd60bbb7107079376 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7c8406619e9fcbbd60bbb7107079376 = MAKE_FUNCTION_FRAME(codeobj_e7c8406619e9fcbbd60bbb7107079376, module_torchvision$models$detection$faster_rcnn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7c8406619e9fcbbd60bbb7107079376->m_type_description == NULL);
    frame_e7c8406619e9fcbbd60bbb7107079376 = cache_frame_e7c8406619e9fcbbd60bbb7107079376;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e7c8406619e9fcbbd60bbb7107079376);
    assert(Py_REFCNT(frame_e7c8406619e9fcbbd60bbb7107079376) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_defaults);
        tmp_tuple_element_1 = var_defaults;
        tmp_dircall_arg1_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_tuple_element_1 = par_kwargs;
        PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 1, tmp_tuple_element_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_2 = impl___main__$$$function__14__unpack_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "ooooooNo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kwargs;
            assert(old != NULL);
            par_kwargs = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[84];
        tmp_dict_key_1 = mod_consts[77];
        CHECK_OBJECT(par_pretrained);
        tmp_dict_value_1 = par_pretrained;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[78];
        CHECK_OBJECT(par_progress);
        tmp_dict_value_1 = par_progress;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[79];
        CHECK_OBJECT(par_num_classes);
        tmp_dict_value_1 = par_num_classes;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        CHECK_OBJECT(par_pretrained_backbone);
        tmp_dict_value_1 = par_pretrained_backbone;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[81];
        CHECK_OBJECT(par_trainable_backbone_layers);
        tmp_dict_value_1 = par_trainable_backbone_layers;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooNo";
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
        exception_tb = MAKE_TRACEBACK(frame_e7c8406619e9fcbbd60bbb7107079376, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7c8406619e9fcbbd60bbb7107079376->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7c8406619e9fcbbd60bbb7107079376, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7c8406619e9fcbbd60bbb7107079376,
        type_description_1,
        par_pretrained,
        par_progress,
        par_num_classes,
        par_pretrained_backbone,
        par_trainable_backbone_layers,
        par_kwargs,
        NULL,
        var_defaults
    );


    // Release cached frame if used for exception.
    if (frame_e7c8406619e9fcbbd60bbb7107079376 == cache_frame_e7c8406619e9fcbbd60bbb7107079376) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7c8406619e9fcbbd60bbb7107079376);
        cache_frame_e7c8406619e9fcbbd60bbb7107079376 = NULL;
    }

    assertFrameObject(frame_e7c8406619e9fcbbd60bbb7107079376);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
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

    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_defaults);
    Py_DECREF(var_defaults);
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_pretrained_backbone);
    Py_DECREF(par_pretrained_backbone);
    CHECK_OBJECT(par_trainable_backbone_layers);
    Py_DECREF(par_trainable_backbone_layers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_pretrained_backbone);
    Py_DECREF(par_pretrained_backbone);
    CHECK_OBJECT(par_trainable_backbone_layers);
    Py_DECREF(par_trainable_backbone_layers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__1___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__1___init__,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_4eb5a83d96b806d9360e403e736447a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__2___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__2___init__,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_a5885a16c2dd2f02a676a9c9e2473d1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__3_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__3_forward,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_03fde890c1494693c79e39de991da5cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__4___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__4___init__,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_63cb0a1703d9f64507cf350bf0d85dd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__5_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__5_forward,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_e1c652340a3e2b4c585d9030ddba481e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__6_fasterrcnn_resnet50_fpn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__6_fasterrcnn_resnet50_fpn,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8369ef0f791e2a8ef996fd751bf6a7b2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__7__fasterrcnn_mobilenet_v3_large_fpn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__7__fasterrcnn_mobilenet_v3_large_fpn,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_91b5aec053755ce14bf68daa776db529,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__8_fasterrcnn_mobilenet_v3_large_320_fpn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__8_fasterrcnn_mobilenet_v3_large_320_fpn,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b7482a75c40f6b2c06a834ff3e49d0cc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__9_fasterrcnn_mobilenet_v3_large_fpn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$faster_rcnn$$$function__9_fasterrcnn_mobilenet_v3_large_fpn,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e7c8406619e9fcbbd60bbb7107079376,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$detection$faster_rcnn,
        mod_consts[85],
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

function_impl_code functable_torchvision$models$detection$faster_rcnn[] = {
    impl_torchvision$models$detection$faster_rcnn$$$function__1___init__,
    impl_torchvision$models$detection$faster_rcnn$$$function__2___init__,
    impl_torchvision$models$detection$faster_rcnn$$$function__3_forward,
    impl_torchvision$models$detection$faster_rcnn$$$function__4___init__,
    impl_torchvision$models$detection$faster_rcnn$$$function__5_forward,
    impl_torchvision$models$detection$faster_rcnn$$$function__6_fasterrcnn_resnet50_fpn,
    impl_torchvision$models$detection$faster_rcnn$$$function__7__fasterrcnn_mobilenet_v3_large_fpn,
    impl_torchvision$models$detection$faster_rcnn$$$function__8_fasterrcnn_mobilenet_v3_large_320_fpn,
    impl_torchvision$models$detection$faster_rcnn$$$function__9_fasterrcnn_mobilenet_v3_large_fpn,
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

    function_impl_code *current = functable_torchvision$models$detection$faster_rcnn;
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

    if (offset > sizeof(functable_torchvision$models$detection$faster_rcnn) || offset < 0) {
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
        functable_torchvision$models$detection$faster_rcnn[offset],
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
        module_torchvision$models$detection$faster_rcnn,
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
PyObject *modulecode_torchvision$models$detection$faster_rcnn(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.models.detection.faster_rcnn");

    // Store the module for future use.
    module_torchvision$models$detection$faster_rcnn = module;

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
        PRINT_STRING("torchvision.models.detection.faster_rcnn: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.detection.faster_rcnn: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.detection.faster_rcnn: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$models$detection$faster_rcnn\n");

    moduledict_torchvision$models$detection$faster_rcnn = MODULE_DICT(module_torchvision$models$detection$faster_rcnn);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$models$detection$faster_rcnn,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$detection$faster_rcnn,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[73]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$detection$faster_rcnn,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$detection$faster_rcnn,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$detection$faster_rcnn,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$models$detection$faster_rcnn);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$models$detection$faster_rcnn);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_1f2045d452ac0c65182b023c22c04dff;
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
    PyObject *locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0399f4b1ce653fd7716a89714550f677_2;
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
    PyObject *locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261 = NULL;
    struct Nuitka_FrameObject *frame_0a5962d8f828daac8ffb87510c6491f2_3;
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
    PyObject *locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285 = NULL;
    struct Nuitka_FrameObject *frame_3a34b1d745ec78ff82311d957f1eb260_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_2);
    }
    frame_1f2045d452ac0c65182b023c22c04dff = MAKE_MODULE_FRAME(codeobj_1f2045d452ac0c65182b023c22c04dff, module_torchvision$models$detection$faster_rcnn);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1f2045d452ac0c65182b023c22c04dff);
    assert(Py_REFCNT(frame_1f2045d452ac0c65182b023c22c04dff) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[89], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[90], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[92];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[9];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 1;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[33],
                mod_consts[9]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[93],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[94];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[95];
        tmp_level_value_2 = mod_consts[9];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 2;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[33],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[96];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[97];
        tmp_level_value_3 = mod_consts[9];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 3;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[3],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[98];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[99];
        tmp_level_value_4 = mod_consts[51];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[58],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[100];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[101];
        tmp_level_value_5 = mod_consts[51];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[102],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[103];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[104];
        tmp_level_value_6 = mod_consts[19];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[68],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[105];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[106];
        tmp_level_value_7 = mod_consts[19];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[52],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[107];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[108];
        tmp_level_value_8 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[63],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[109];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[110];
        tmp_level_value_9 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[2],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[111];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[112];
        tmp_level_value_10 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 11;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[56],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[56]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[49],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[49]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[69],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[69]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[113];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[114];
        tmp_level_value_11 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 12;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[115],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[116];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[117];
        tmp_level_value_12 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 13;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[22],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[118];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[119];
        tmp_level_value_13 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 14;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[7],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[7]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[12],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[12]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[120];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_torchvision$models$detection$faster_rcnn;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[121];
        tmp_level_value_14 = mod_consts[48];
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 15;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_torchvision$models$detection$faster_rcnn,
                mod_consts[30],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_LIST4(mod_consts[122]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_23);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
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


            exception_lineno = 26;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[124]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[124]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[57];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 26;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[125]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

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
        tmp_mod_expr_left_1 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[127];
        tmp_getattr_default_1 = mod_consts[128];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[127]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

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


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 26;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        frame_0399f4b1ce653fd7716a89714550f677_2 = MAKE_CLASS_FRAME(codeobj_0399f4b1ce653fd7716a89714550f677, module_torchvision$models$detection$faster_rcnn, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0399f4b1ce653fd7716a89714550f677_2);
        assert(Py_REFCNT(frame_0399f4b1ce653fd7716a89714550f677_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[133];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__1___init__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0399f4b1ce653fd7716a89714550f677_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0399f4b1ce653fd7716a89714550f677_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0399f4b1ce653fd7716a89714550f677_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0399f4b1ce653fd7716a89714550f677_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0399f4b1ce653fd7716a89714550f677_2);

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


                exception_lineno = 26;

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
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[57];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 26;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_31);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_30 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26);
        locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26);
        locals_torchvision$models$detection$faster_rcnn$$$class__1_FasterRCNN_26 = NULL;
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
        exception_lineno = 26;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_30);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[136]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_33 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

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
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[124]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[124]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[18];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 261;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[125]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[127];
        tmp_getattr_default_2 = mod_consts[128];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[127]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 261;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[18];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_8;
        }
        frame_0a5962d8f828daac8ffb87510c6491f2_3 = MAKE_CLASS_FRAME(codeobj_0a5962d8f828daac8ffb87510c6491f2, module_torchvision$models$detection$faster_rcnn, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0a5962d8f828daac8ffb87510c6491f2_3);
        assert(Py_REFCNT(frame_0a5962d8f828daac8ffb87510c6491f2_3) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_2[1];

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__2___init__(tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__3_forward();

        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0a5962d8f828daac8ffb87510c6491f2_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0a5962d8f828daac8ffb87510c6491f2_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0a5962d8f828daac8ffb87510c6491f2_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0a5962d8f828daac8ffb87510c6491f2_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_0a5962d8f828daac8ffb87510c6491f2_3);

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


                exception_lineno = 261;

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
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[18];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 261;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_39);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_38 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261);
        locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261);
        locals_torchvision$models$detection$faster_rcnn$$$class__2_TwoMLPHead_261 = NULL;
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
        exception_lineno = 261;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_38);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[136]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_assign_source_40 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_41 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[9];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[124]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[124]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_tuple_element_10 = mod_consts[21];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 285;
        tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[125]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[127];
        tmp_getattr_default_3 = mod_consts[128];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[127]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 285;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_11;
        }
        frame_3a34b1d745ec78ff82311d957f1eb260_4 = MAKE_CLASS_FRAME(codeobj_3a34b1d745ec78ff82311d957f1eb260, module_torchvision$models$detection$faster_rcnn, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3a34b1d745ec78ff82311d957f1eb260_4);
        assert(Py_REFCNT(frame_3a34b1d745ec78ff82311d957f1eb260_4) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__4___init__(tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__5_forward();

        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3a34b1d745ec78ff82311d957f1eb260_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3a34b1d745ec78ff82311d957f1eb260_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3a34b1d745ec78ff82311d957f1eb260_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3a34b1d745ec78ff82311d957f1eb260_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_3a34b1d745ec78ff82311d957f1eb260_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[21];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_1f2045d452ac0c65182b023c22c04dff->m_frame.f_lineno = 285;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_47);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_46 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285);
        locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285 = NULL;
        goto try_return_handler_10;
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

        Py_DECREF(locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285);
        locals_torchvision$models$detection$faster_rcnn$$$class__3_FastRCNNPredictor_285 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 285;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_46);
    }
    goto try_end_5;
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

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f2045d452ac0c65182b023c22c04dff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f2045d452ac0c65182b023c22c04dff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f2045d452ac0c65182b023c22c04dff, exception_lineno);
    }



    assertFrameObject(frame_1f2045d452ac0c65182b023c22c04dff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = DICT_COPY(mod_consts[144]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[145];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_49 = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__6_fasterrcnn_resnet50_fpn(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[145];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_50 = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__7__fasterrcnn_mobilenet_v3_large_fpn(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[145];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_51 = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__8_fasterrcnn_mobilenet_v3_large_320_fpn(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[145];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_52 = MAKE_FUNCTION_torchvision$models$detection$faster_rcnn$$$function__9_fasterrcnn_mobilenet_v3_large_fpn(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_52);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.models.detection.faster_rcnn", false);

    Py_INCREF(module_torchvision$models$detection$faster_rcnn);
    return module_torchvision$models$detection$faster_rcnn;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$faster_rcnn, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$models$detection$faster_rcnn", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
